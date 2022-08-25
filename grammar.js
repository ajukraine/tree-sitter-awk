const
  newline = '\n',
  separator = choice(newline, ';'),
  commaSeq = rule => seq(rule, repeat(seq(',', rule)));

module.exports = grammar({
  name: 'awk',
  extras: $ => [$.comment, /\s/],
  rules: {
    program: $ => repeat($._program_item),
    _program_item: $ => seq(
      $.pattern_action_statement,
      // $.function_definition,
    ),
    pattern_action_statement: $ => seq(optional($.pattern), '{', optional($.action), '}'),
    // function_definition: $ => 'function name(parameter-list) { statement }',

    pattern: $ => choice(
      'BEGIN',
      'END',
      $.regex,
    ),

    action: $ => repeat1(choice(
      $._statement,
      seq($._statement, separator),
    )),
    _statement: $ => choice(
      $._expression,
      $._input_output_statement,
      $.exit_statement,
      $.block_of_statements,
      $.if_cond,
    ),
    _empty_statement: $ => ';',
    block_of_statements: $ => seq('{', $.action, '}'),
    exit_statement: $ => prec.right(seq('exit', optional($._expression))),
    if_cond: $ => seq('if', '(', $._expression, ')', $.block_of_statements),
    _input_output_statement: $ => choice(
      $.print_statement,
    ),
    print_statement: $ => prec.right(seq(
      'print',
      commaSeq($._expression),
    )),
    _expression: $ => choice(
      $.binary_expression,
      $.function_call,
      $.string_literal,
      $.numeric_literal,
      $.field,
      $.identifier,
      $.string_concat,
    ),
    string_concat: $ => prec.left(5, seq($._expression, $._expression)),
    binary_expression: $ => choice(
      seq($.identifier, '=', $._expression),
      seq($.identifier, '>', $._expression),
    ),
    string_literal: $ => /"[^\"]+"/,
    numeric_literal: $ =>/[0-9]+/,
    function_call: $ => seq(
      $.identifier, '(', /.*/, ')',
    ),
    identifier: $ => /[a-zA-Z]+/,
    field: $ => seq('$', /[0-9]+/),


    // shamelessly copied from the tree-sitter-javascript
    regex: $ => seq(
      '/', $.regex_pattern, token.immediate('/'),
      // optional(field('flags', $.regex_flags))
    ),
    regex_pattern: $ => token.immediate(prec(-1,
      repeat1(choice(
        seq(
          '[',
            repeat(choice(
              seq('\\', /./),   // escaped character
              /[^\]\n\\]/       // any character besides ']' or '\n'
            )),
            ']'
        ),              // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/    // any character besides '[', '\', '/', '\n'
      ))
    )),
    comment: $ => seq(
      field('start', alias('#', 'comment_start')),
      field('content', alias(/[^\r\n]*/, 'comment_content'))
    )
  }
});
