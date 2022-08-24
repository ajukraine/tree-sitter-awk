const
  newline = '\n',
  separator = choice(newline, ';');

module.exports = grammar({
  name: 'awk',
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
      seq('/', '^Total Average', '/'),
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
    block_of_statements: $ => seq('{', $.action, '}'),
    exit_statement: $ => prec.left(seq('exit', optional($._expression))),
    if_cond: $ => seq('if', '(', $._expression, ')', $.block_of_statements),
    _input_output_statement: $ => choice(
      $.print_statement,
    ),
    print_statement: $ => prec.left(seq('print', repeat1($._expression))),
    _expression: $ => choice(
      $.binary_expression,
      $.function_call,
      $.string_literal,
      $.numeric_literal,
      $.field,
      $.identifier,
    ),
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
  }
});
