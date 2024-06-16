const html = require("tree-sitter-html/grammar");

module.exports = grammar(html, {
  name: "blade",

  rules: {
    document: ($) => repeat($._node),

    escaped_echo_statement: ($) => seq("{{", $.text, "}}"),

    attribute_value: ($) =>
      choice(prec(2, $.escaped_echo_statement), prec(1, /[^<>"'=]/)),

    quoted_attribute_value: ($) =>
      choice(
        seq(
          "'",
          optional(
            alias(
              repeat1(
                choice(
                  prec(2, $.escaped_echo_statement),
                  prec(1, choice(/[^'{}]+/, /[{}]/)),
                ),
              ),
              $.attribute_value,
            ),
          ),
          "'",
        ),
        seq(
          '"',
          optional(
            alias(
              repeat1(
                choice(
                  prec(2, $.escaped_echo_statement),
                  prec(1, choice(/[^"{}]+/, /[{}]/)),
                ),
              ),
              $.attribute_value,
            ),
          ),
          '"',
        ),
      ),

    text: ($) =>
      token(
        repeat1(
          choice(prec(2, /[^<>{}&\s]([^<>{}&]*[^<>{}&\s])?/), prec(1, /[{}]/)),
        ),
      ),
  },
});
