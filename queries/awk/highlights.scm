(pattern) @string.regex
(string_literal) @string
(numeric_literal) @number
(field) @field
(identifier) @variable

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
