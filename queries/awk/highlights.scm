(pattern) @string.special
(string_literal) @string
(numeric_literal) @number
(field) @field
(identifier) @variable
(regex_pattern) @string.regex
(comment) @comment

[
  "if"
] @conditional

[
  "print"
] @function

[
  "exit"
] @keyword

[ "{" "}" "(" ")" ] @punctuation.bracket
[ "," ";" ] @punctuation.delimiter

[
  "="
  ">"
] @operator

((identifier) @variable.builtin
 (#any-of? @variable.builtin
  "FS"))
