const html = require("tree-sitter-html/grammar");

module.exports = grammar(html, {
  name: "blade",

  rules: {
    document: ($) => repeat($._node),

    escaped_echo_statement: ($) => prec(3, seq("{{", $.text, "}}")),

    attribute: ($) =>
      choice(
        $.escaped_echo_statement,
        seq(
          $.attribute_name,
          optional(
            seq("=", choice($.attribute_value, $.quoted_attribute_value)),
          ),
        ),
      ),

    attribute_value: ($) => choice($.escaped_echo_statement, /[^<>"'=]/),

    quoted_attribute_value: ($) =>
      choice(
        seq(
          "'",
          optional(
            alias(
              repeat1(
                choice($.escaped_echo_statement, choice(/[^'{}]+/, /[{}]/)),
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
                choice($.escaped_echo_statement, choice(/[^"{}]+/, /[{}]/)),
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
