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
    $._escaped_echo_statement_start,
    $._escaped_echo_statement_end,
    $._unescaped_echo_statement_start,
    $._unescaped_echo_statement_end,
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
    document: ($) => repeat($._node),

    doctype: ($) => seq("<!", alias($._doctype, "doctype"), /[^>]+/, ">"),

    _doctype: (_) => /[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/,

    echo_statement: ($) =>
      choice($.escaped_echo_statement, $.unescaped_echo_statement),

    escaped_echo_statement: ($) =>
      seq(
        $._escaped_echo_statement_start,
        $.raw_text,
        $._escaped_echo_statement_end,
      ),

    unescaped_echo_statement: ($) =>
      seq(
        $._unescaped_echo_statement_start,
        $.raw_text,
        $._unescaped_echo_statement_end,
      ),

    _node: ($) =>
      choice(
        $.doctype,
        $.entity,
        $.echo_statement,
        $.text,
        $.element,
        $.script_element,
        $.style_element,
        $.erroneous_end_tag,
      ),

    element: ($) =>
      choice(
        seq(
          $.start_tag,
          repeat($._node),
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
      seq("<", alias($._start_tag_name, $.tag_name), repeat($.attribute), ">"),

    script_start_tag: ($) =>
      seq(
        "<",
        alias($._script_start_tag_name, $.tag_name),
        repeat($.attribute),
        ">",
      ),

    style_start_tag: ($) =>
      seq(
        "<",
        alias($._style_start_tag_name, $.tag_name),
        repeat($.attribute),
        ">",
      ),

    self_closing_tag: ($) =>
      seq("<", alias($._start_tag_name, $.tag_name), repeat($.attribute), "/>"),

    end_tag: ($) => seq("</", alias($._end_tag_name, $.tag_name), ">"),

    erroneous_end_tag: ($) => seq("</", $.erroneous_end_tag_name, ">"),

    attribute: ($) =>
      choice(
        seq(
          $.attribute_name,
          optional(
            seq("=", choice($.attribute_value, $.quoted_attribute_value)),
          ),
        ),
      ),

    attribute_name: (_) => /[^<>"'/=\s]+/,

    attribute_value: (_) => /[^<>"'=\s]+/,

    // An entity can be named, numeric (decimal), or numeric (hexacecimal). The
    // longest entity name is 29 characters long, and the HTML spec says that
    // no more will ever be added.
    entity: (_) => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});?/,

    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
      ),

    text: (_) => /[^<>&\s]([^<>&]*[^<>&\s])?/,
  },
});
