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
    document: ($) => repeat(choice($.directive, $._node)),

    doctype: ($) => seq("<!", alias($._doctype, "doctype"), /[^>]+/, ">"),

    _doctype: (_) => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    word: (_) => /[a-zA-Z]+/,

    // _blade_node: ($) => choice($.directive, $.echo_statement),

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

    // php_directive: ($) => seq(token(prec(2, "@")), "php", (/[^@]*/,

    // directive: ($) => choice($.if_directive),

    directive: ($) =>
      seq(token(prec(2, "@")), $._directive, optional($.directive_argument)),

    directive_argument: ($) =>
      seq(token(prec(2, "(")), $._directive_argument, ")"),

    _directive_argument: ($) => alias($.argument_php_text, $.raw_text),

    directive_attribute: ($) =>
      seq(
        token(prec(2, "@")),
        $._directive_attribute,
        optional($.directive_argument),
      ),

    directive_attribute_value: ($) =>
      seq(
        token(prec(2, "@")),
        $._directive_attribute_value,
        optional($.directive_argument),
      ),

    _directive: (_) =>
      choice(
        "inject",
        "fragment",
        "endfragment",
        "csrf",
        "method",
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
        "include",
        "includeIf",
        "includeWhen",
        "includeUnless",
        "includeFirst",
        "each",
        "once",
        "push",
        "pushIf",
        "endPushIf",
        "endpush",
        "endonce",
        "prepend",
        "pushOnce",
        "endPushOnce",
        "prependOnce",
        "endPrependOnce",
        "error",
        "enderror",
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

    _directive_attribute_value: (_) => choice("error", "enderror"),

    echo_statement: ($) =>
      choice($.escaped_echo_statement, $.unescaped_echo_statement),

    escaped_echo_statement: ($) =>
      seq("{{", alias(repeat(/[^\s\S]/), $.raw_text), "}}"),

    unescaped_echo_statement: ($) =>
      seq("{{!!", alias(repeat(/[^\s\S]/), $.raw_text), "!!}}"),

    element: ($) =>
      choice(
        seq(
          $.start_tag,
          repeat(choice($.directive, $._node)),
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
          alias(
            repeat(choice(/[^']/, $._quoted_attribute_value)),
            $.attribute_value,
          ),
          "'",
        ),
        seq(
          '"',
          alias(
            repeat(choice(/[^"]/, $._quoted_attribute_value)),
            $.attribute_value,
          ),
          '"',
        ),
      ),

    _quoted_attribute_value: ($) =>
      choice($.echo_statement, alias($.directive_attribute_value, $.directive)),

    text: ($) => prec.right(repeat1(choice($.echo_statement, $._text))),

    _text: (_) =>
      choice(
        token(prec(2, "@{{")),
        token(prec(2, "@@")),
        token(prec(1, /[^<>&{\s]([^<>&{]*[^<>&{\s])?/)),
        token(prec(0, "{")),
      ),
  },
});
