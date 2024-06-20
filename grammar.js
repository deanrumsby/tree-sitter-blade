/**
 * @file Laravel blade grammar for tree-sitter
 *
 * Original authors (for HTML grammar)
 * @author Max Brunsfeld <maxbrunsfeld@gmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 *
 * Extended by (for blade grammar)
 * @author Dean Rumsby <dean@deanrumsby.com>
 *
 * @license MIT
 */

module.exports = grammar({
  name: "blade",

  extras: ($) => [$.comment, /\s+/],

  externals: ($) => [
    $.escaped_php_text,
    $.unescaped_php_text,
    $.argument_php_text,
    $._start_tag_name,
    $._script_start_tag_name,
    $._style_start_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    "/>",
    $._implicit_end_tag,
    $.raw_text,
    $.comment,
  ],

  rules: {
    document: ($) => repeat(choice($._blade_node, $._node)),

    doctype: ($) => seq("<!", alias($._doctype, "doctype"), /[^>]+/, ">"),

    _doctype: (_) => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    word: (_) => /[a-zA-Z]+/,

    _blade_node: ($) => choice($.echo_statement, $.directive),

    _node: ($) =>
      choice(
        $.doctype,
        $.entity,
        $.text,
        $.element,
        $.script_element,
        $.style_element,
        $.erroneous_end_tag,
      ),

    directive: ($) =>
      seq(
        token(prec(2, "@")),
        $._directive,
        optional(seq(token(prec(2, "(")), $.directive_argument, ")")),
      ),

    directive_attribute: ($) =>
      seq(
        token(prec(2, "@")),
        $._directive_attribute,
        optional(seq(token(prec(2, "(")), $.directive_argument, ")")),
      ),

    _directive: (_) =>
      choice(
        "props",
        "if",
        "else",
        "endif",
        "unless",
        "endunless",
        "isset",
        "endisset",
        "empty",
        "endempty",
        "auth",
        "endauth",
        "guest",
        "endguest",
        "production",
        "endproduction",
        "env",
        "endenv",
        "hasSection",
        "yield",
        "sectionMissing",
        "include",
        "session",
        "endsession",
        "switch",
        "case",
        "break",
        "default",
        "endswitch",
        "for",
        "endfor",
        "foreach",
        "endforeach",
        "forelse",
        "empty",
        "endforelse",
        "while",
        "endwhile",
        "continue",
        "class",
        "style",
      ),

    _directive_attribute: (_) =>
      choice(
        "style",
        "class",
        "checked",
        "selected",
        "disabled",
        "readonly",
        "required",
      ),

    directive_argument: ($) => alias($.argument_php_text, $.raw_text),

    echo_statement: ($) =>
      choice($.escaped_echo_statement, $.unescaped_echo_statement),

    escaped_echo_statement: ($) =>
      seq("{{", alias(optional($.escaped_php_text), $.raw_text), "}}"),

    unescaped_echo_statement: ($) =>
      seq("{{!!", alias(optional($.unescaped_php_text), $.raw_text), "!!}}"),

    element: ($) =>
      choice(
        seq(
          $.start_tag,
          repeat(choice($._blade_node, $._node)),
          choice($.end_tag, $._implicit_end_tag),
        ),
        $.self_closing_tag,
      ),

    script_element: ($) =>
      seq(
        alias($.script_start_tag, $.start_tag),
        optional($.raw_text),
        $.end_tag,
      ),

    style_element: ($) =>
      seq(
        alias($.style_start_tag, $.start_tag),
        optional($.raw_text),
        $.end_tag,
      ),

    start_tag: ($) =>
      seq("<", alias($._start_tag_name, $.tag_name), repeat($._attribute), ">"),

    script_start_tag: ($) =>
      seq(
        "<",
        alias($._script_start_tag_name, $.tag_name),
        repeat($._attribute),
        ">",
      ),

    style_start_tag: ($) =>
      seq(
        "<",
        alias($._style_start_tag_name, $.tag_name),
        repeat($._attribute),
        ">",
      ),

    self_closing_tag: ($) =>
      seq(
        "<",
        alias($._start_tag_name, $.tag_name),
        repeat($._attribute),
        "/>",
      ),

    end_tag: ($) => seq("</", alias($._end_tag_name, $.tag_name), ">"),

    erroneous_end_tag: ($) => seq("</", $.erroneous_end_tag_name, ">"),

    attribute: ($) =>
      choice(
        $.expression_attribute,
        seq(
          $.attribute_name,
          optional(
            seq("=", choice($.attribute_value, $.quoted_attribute_value)),
          ),
        ),
      ),

    _attribute: ($) =>
      choice(
        $.attribute,
        $.echo_statement,
        alias($.directive_attribute, $.directive),
      ),

    expression_attribute: ($) =>
      seq(
        alias(token(seq(":", /[^:<>"'/=\s][^<>"'/=\s]*/)), $.attribute_name),
        "=",
        alias($._expression_attribute_value, $.quoted_attribute_value),
      ),

    _expression_attribute_value: ($) =>
      choice(
        seq("'", alias(/[^']+/, $.attribute_value), "'"),
        seq('"', alias(/[^"]+/, $.attribute_value), '"'),
      ),

    attribute_name: (_) => /[^<>"'/=\s]+/,

    attribute_value: ($) => choice(/[^<>"'=\s]+/, $.echo_statement),

    // An entity can be named, numeric (decimal), or numeric (hexacecimal). The
    // longest entity name is 29 characters long, and the HTML spec says that
    // no more will ever be added.
    entity: (_) => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

    quoted_attribute_value: ($) =>
      choice(
        seq(
          "'",
          optional(alias($._single_quotes_attribute_value, $.attribute_value)),
          "'",
        ),
        seq(
          '"',
          optional(alias($._double_quotes_attribute_value, $.attribute_value)),
          '"',
        ),
      ),

    // these exist so that aliasing as $.attribute_value will still include
    // any child echo statement in the AST
    _single_quotes_attribute_value: ($) =>
      repeat1(
        choice(prec(2, /[^'{]+/), prec(1, $.echo_statement), prec(0, "{")),
      ),

    _double_quotes_attribute_value: ($) =>
      repeat1(
        choice(prec(2, /[^"{]+/), prec(1, $.echo_statement), prec(0, "{")),
      ),

    text: () =>
      token(
        repeat1(
          choice(
            token(prec(2, "@@")),
            /[^<>&{\s]([^<>&{]*[^<>&{\s])?/,
            /[{][^{]/,
          ),
        ),
      ),
  },
});
