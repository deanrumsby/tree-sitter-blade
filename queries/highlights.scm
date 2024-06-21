; inherits: html

(escaped_echo_statement) @punctuation.special

(unescaped_echo_statement) @punctuation.special

(directive) @keyword.directive

(expression_attribute
  (attribute_name) @tag.attribute
  (quoted_attribute_value)) @string

(blade_comment) @comment
