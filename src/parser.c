#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_AT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_props = 8,
  anon_sym_if = 9,
  anon_sym_else = 10,
  anon_sym_endif = 11,
  anon_sym_unless = 12,
  anon_sym_endunless = 13,
  anon_sym_isset = 14,
  anon_sym_endisset = 15,
  anon_sym_empty = 16,
  anon_sym_endempty = 17,
  anon_sym_auth = 18,
  anon_sym_endauth = 19,
  anon_sym_guest = 20,
  anon_sym_endguest = 21,
  anon_sym_production = 22,
  anon_sym_endproduction = 23,
  anon_sym_env = 24,
  anon_sym_endenv = 25,
  anon_sym_hasSection = 26,
  anon_sym_yield = 27,
  anon_sym_sectionMissing = 28,
  anon_sym_include = 29,
  anon_sym_session = 30,
  anon_sym_endsession = 31,
  anon_sym_switch = 32,
  anon_sym_case = 33,
  anon_sym_break = 34,
  anon_sym_default = 35,
  anon_sym_endswitch = 36,
  anon_sym_for = 37,
  anon_sym_endfor = 38,
  anon_sym_foreach = 39,
  anon_sym_endforeach = 40,
  anon_sym_forelse = 41,
  anon_sym_endforelse = 42,
  anon_sym_while = 43,
  anon_sym_endwhile = 44,
  anon_sym_continue = 45,
  anon_sym_class = 46,
  anon_sym_style = 47,
  anon_sym_checked = 48,
  anon_sym_selected = 49,
  anon_sym_disabled = 50,
  anon_sym_readonly = 51,
  anon_sym_required = 52,
  anon_sym_LBRACE_LBRACE = 53,
  anon_sym_RBRACE_RBRACE = 54,
  anon_sym_LBRACE_LBRACE_BANG_BANG = 55,
  anon_sym_BANG_BANG_RBRACE_RBRACE = 56,
  anon_sym_LT = 57,
  anon_sym_SLASH_GT = 58,
  anon_sym_LT_SLASH = 59,
  anon_sym_EQ = 60,
  aux_sym_expression_attribute_token1 = 61,
  anon_sym_SQUOTE = 62,
  aux_sym__expression_attribute_value_token1 = 63,
  anon_sym_DQUOTE = 64,
  aux_sym__expression_attribute_value_token2 = 65,
  sym_attribute_name = 66,
  aux_sym_attribute_value_token1 = 67,
  sym_entity = 68,
  aux_sym__single_quotes_attribute_value_token1 = 69,
  anon_sym_LBRACE = 70,
  aux_sym__double_quotes_attribute_value_token1 = 71,
  sym_text = 72,
  sym_escaped_php_text = 73,
  sym_unescaped_php_text = 74,
  sym_argument_php_text = 75,
  sym__start_tag_name = 76,
  sym__script_start_tag_name = 77,
  sym__style_start_tag_name = 78,
  sym__end_tag_name = 79,
  sym_erroneous_end_tag_name = 80,
  sym__implicit_end_tag = 81,
  sym_raw_text = 82,
  sym_comment = 83,
  sym_document = 84,
  sym_doctype = 85,
  sym__blade_node = 86,
  sym__node = 87,
  sym_directive = 88,
  sym_directive_attribute = 89,
  sym__directive = 90,
  sym__directive_attribute = 91,
  sym_directive_argument = 92,
  sym_echo_statement = 93,
  sym_escaped_echo_statement = 94,
  sym_unescaped_echo_statement = 95,
  sym_element = 96,
  sym_script_element = 97,
  sym_style_element = 98,
  sym_start_tag = 99,
  sym_script_start_tag = 100,
  sym_style_start_tag = 101,
  sym_self_closing_tag = 102,
  sym_end_tag = 103,
  sym_erroneous_end_tag = 104,
  sym_attribute = 105,
  sym__attribute = 106,
  sym_expression_attribute = 107,
  sym__expression_attribute_value = 108,
  sym_attribute_value = 109,
  sym_quoted_attribute_value = 110,
  aux_sym__single_quotes_attribute_value = 111,
  aux_sym__double_quotes_attribute_value = 112,
  aux_sym_document_repeat1 = 113,
  aux_sym_start_tag_repeat1 = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_props] = "props",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_unless] = "unless",
  [anon_sym_endunless] = "endunless",
  [anon_sym_isset] = "isset",
  [anon_sym_endisset] = "endisset",
  [anon_sym_empty] = "empty",
  [anon_sym_endempty] = "endempty",
  [anon_sym_auth] = "auth",
  [anon_sym_endauth] = "endauth",
  [anon_sym_guest] = "guest",
  [anon_sym_endguest] = "endguest",
  [anon_sym_production] = "production",
  [anon_sym_endproduction] = "endproduction",
  [anon_sym_env] = "env",
  [anon_sym_endenv] = "endenv",
  [anon_sym_hasSection] = "hasSection",
  [anon_sym_yield] = "yield",
  [anon_sym_sectionMissing] = "sectionMissing",
  [anon_sym_include] = "include",
  [anon_sym_session] = "session",
  [anon_sym_endsession] = "endsession",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_break] = "break",
  [anon_sym_default] = "default",
  [anon_sym_endswitch] = "endswitch",
  [anon_sym_for] = "for",
  [anon_sym_endfor] = "endfor",
  [anon_sym_foreach] = "foreach",
  [anon_sym_endforeach] = "endforeach",
  [anon_sym_forelse] = "forelse",
  [anon_sym_endforelse] = "endforelse",
  [anon_sym_while] = "while",
  [anon_sym_endwhile] = "endwhile",
  [anon_sym_continue] = "continue",
  [anon_sym_class] = "class",
  [anon_sym_style] = "style",
  [anon_sym_checked] = "checked",
  [anon_sym_selected] = "selected",
  [anon_sym_disabled] = "disabled",
  [anon_sym_readonly] = "readonly",
  [anon_sym_required] = "required",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = "{{!!",
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = "!!}}",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [aux_sym_expression_attribute_token1] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__expression_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__expression_attribute_value_token2] = "attribute_value",
  [sym_attribute_name] = "attribute_name",
  [aux_sym_attribute_value_token1] = "attribute_value_token1",
  [sym_entity] = "entity",
  [aux_sym__single_quotes_attribute_value_token1] = "_single_quotes_attribute_value_token1",
  [anon_sym_LBRACE] = "{",
  [aux_sym__double_quotes_attribute_value_token1] = "_double_quotes_attribute_value_token1",
  [sym_text] = "text",
  [sym_escaped_php_text] = "raw_text",
  [sym_unescaped_php_text] = "raw_text",
  [sym_argument_php_text] = "raw_text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_doctype] = "doctype",
  [sym__blade_node] = "_blade_node",
  [sym__node] = "_node",
  [sym_directive] = "directive",
  [sym_directive_attribute] = "directive",
  [sym__directive] = "_directive",
  [sym__directive_attribute] = "_directive_attribute",
  [sym_directive_argument] = "directive_argument",
  [sym_echo_statement] = "echo_statement",
  [sym_escaped_echo_statement] = "escaped_echo_statement",
  [sym_unescaped_echo_statement] = "unescaped_echo_statement",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym__attribute] = "_attribute",
  [sym_expression_attribute] = "expression_attribute",
  [sym__expression_attribute_value] = "quoted_attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__single_quotes_attribute_value] = "_single_quotes_attribute_value",
  [aux_sym__double_quotes_attribute_value] = "_double_quotes_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_props] = anon_sym_props,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_endunless] = anon_sym_endunless,
  [anon_sym_isset] = anon_sym_isset,
  [anon_sym_endisset] = anon_sym_endisset,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_endempty] = anon_sym_endempty,
  [anon_sym_auth] = anon_sym_auth,
  [anon_sym_endauth] = anon_sym_endauth,
  [anon_sym_guest] = anon_sym_guest,
  [anon_sym_endguest] = anon_sym_endguest,
  [anon_sym_production] = anon_sym_production,
  [anon_sym_endproduction] = anon_sym_endproduction,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_endenv] = anon_sym_endenv,
  [anon_sym_hasSection] = anon_sym_hasSection,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_sectionMissing] = anon_sym_sectionMissing,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_session] = anon_sym_session,
  [anon_sym_endsession] = anon_sym_endsession,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_endswitch] = anon_sym_endswitch,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_endforeach] = anon_sym_endforeach,
  [anon_sym_forelse] = anon_sym_forelse,
  [anon_sym_endforelse] = anon_sym_endforelse,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_endwhile] = anon_sym_endwhile,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_selected] = anon_sym_selected,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = anon_sym_LBRACE_LBRACE_BANG_BANG,
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = anon_sym_BANG_BANG_RBRACE_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_expression_attribute_token1] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__expression_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__expression_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_name] = sym_attribute_name,
  [aux_sym_attribute_value_token1] = aux_sym_attribute_value_token1,
  [sym_entity] = sym_entity,
  [aux_sym__single_quotes_attribute_value_token1] = aux_sym__single_quotes_attribute_value_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__double_quotes_attribute_value_token1] = aux_sym__double_quotes_attribute_value_token1,
  [sym_text] = sym_text,
  [sym_escaped_php_text] = sym_raw_text,
  [sym_unescaped_php_text] = sym_raw_text,
  [sym_argument_php_text] = sym_raw_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_doctype] = sym_doctype,
  [sym__blade_node] = sym__blade_node,
  [sym__node] = sym__node,
  [sym_directive] = sym_directive,
  [sym_directive_attribute] = sym_directive,
  [sym__directive] = sym__directive,
  [sym__directive_attribute] = sym__directive_attribute,
  [sym_directive_argument] = sym_directive_argument,
  [sym_echo_statement] = sym_echo_statement,
  [sym_escaped_echo_statement] = sym_escaped_echo_statement,
  [sym_unescaped_echo_statement] = sym_unescaped_echo_statement,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym__attribute] = sym__attribute,
  [sym_expression_attribute] = sym_expression_attribute,
  [sym__expression_attribute_value] = sym_quoted_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__single_quotes_attribute_value] = aux_sym__single_quotes_attribute_value,
  [aux_sym__double_quotes_attribute_value] = aux_sym__double_quotes_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_props] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endunless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endisset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endauth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_guest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endguest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_production] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endproduction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hasSection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sectionMissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_session] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endsession] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endswitch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_attribute_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__single_quotes_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quotes_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_php_text] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_php_text] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_php_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__blade_node] = {
    .visible = false,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_echo_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__single_quotes_attribute_value] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quotes_attribute_value] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__single_quotes_attribute_value, 2,
    aux_sym__single_quotes_attribute_value,
    sym_attribute_value,
  aux_sym__double_quotes_attribute_value, 2,
    aux_sym__double_quotes_attribute_value,
    sym_attribute_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 11,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 25,
  [37] = 28,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 30,
  [48] = 32,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 26,
  [55] = 55,
  [56] = 52,
  [57] = 55,
  [58] = 35,
  [59] = 44,
  [60] = 53,
  [61] = 61,
  [62] = 49,
  [63] = 51,
  [64] = 33,
  [65] = 46,
  [66] = 40,
  [67] = 45,
  [68] = 42,
  [69] = 41,
  [70] = 38,
  [71] = 27,
  [72] = 39,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 73,
  [83] = 83,
  [84] = 35,
  [85] = 28,
  [86] = 30,
  [87] = 41,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 42,
  [92] = 89,
  [93] = 83,
  [94] = 28,
  [95] = 35,
  [96] = 41,
  [97] = 42,
  [98] = 90,
  [99] = 88,
  [100] = 81,
  [101] = 78,
  [102] = 77,
  [103] = 79,
  [104] = 30,
  [105] = 35,
  [106] = 28,
  [107] = 41,
  [108] = 108,
  [109] = 30,
  [110] = 28,
  [111] = 111,
  [112] = 42,
  [113] = 113,
  [114] = 41,
  [115] = 30,
  [116] = 116,
  [117] = 117,
  [118] = 35,
  [119] = 119,
  [120] = 42,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 121,
  [125] = 122,
  [126] = 126,
  [127] = 126,
  [128] = 123,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 131,
  [137] = 137,
  [138] = 138,
  [139] = 134,
  [140] = 131,
  [141] = 134,
  [142] = 142,
  [143] = 131,
  [144] = 134,
  [145] = 145,
  [146] = 142,
  [147] = 134,
  [148] = 132,
  [149] = 133,
  [150] = 130,
  [151] = 131,
  [152] = 131,
  [153] = 134,
  [154] = 135,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 164,
  [169] = 167,
  [170] = 166,
  [171] = 165,
  [172] = 164,
  [173] = 157,
  [174] = 174,
  [175] = 175,
  [176] = 164,
  [177] = 157,
  [178] = 160,
  [179] = 179,
  [180] = 164,
  [181] = 157,
  [182] = 159,
  [183] = 183,
  [184] = 164,
  [185] = 157,
  [186] = 156,
  [187] = 163,
  [188] = 175,
  [189] = 189,
  [190] = 189,
  [191] = 161,
  [192] = 183,
  [193] = 157,
  [194] = 155,
  [195] = 174,
  [196] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(219);
      ADVANCE_MAP(
        '!', 2,
        '"', 291,
        '&', 5,
        '\'', 288,
        '(', 227,
        ')', 229,
        '/', 9,
        ':', 215,
        '<', 283,
        '=', 286,
        '>', 223,
        '@', 225,
        'D', 205,
        'a', 183,
        'b', 141,
        'c', 12,
        'd', 44,
        'e', 109,
        'f', 126,
        'g', 185,
        'h', 16,
        'i', 72,
        'p', 140,
        'r', 45,
        's', 46,
        'u', 113,
        'w', 82,
        'y', 87,
        '{', 343,
        '}', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(279);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '{') ADVANCE(299);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '{') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(340);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '{') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(227);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '{') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '{') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(284);
      END_STATE();
    case 10:
      if (lookahead == 'M') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(187);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'a', 189,
        'e', 112,
        'f', 127,
        'g', 190,
        'i', 73,
        'p', 142,
        's', 70,
        'u', 124,
        'w', 83,
      );
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(256);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 189:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 195:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 196:
      if (lookahead == 'y') ADVANCE(273);
      END_STATE();
    case 197:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 198:
      if (lookahead == '{') ADVANCE(277);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 199:
      if (lookahead == '{') ADVANCE(347);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 200:
      if (lookahead == '}') ADVANCE(278);
      END_STATE();
    case 201:
      if (lookahead == '}') ADVANCE(282);
      END_STATE();
    case 202:
      if (lookahead == '}') ADVANCE(201);
      END_STATE();
    case 203:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 209:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 210:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(346);
      END_STATE();
    case 211:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(290);
      END_STATE();
    case 212:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(293);
      END_STATE();
    case 213:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(222);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 215:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(287);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(347);
      END_STATE();
    case 217:
      if (eof) ADVANCE(219);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == '{') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(217);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(346);
      END_STATE();
    case 218:
      if (eof) ADVANCE(219);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '<') ADVANCE(283);
      if (lookahead == '@') ADVANCE(226);
      if (lookahead == '{') ADVANCE(198);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(218);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(346);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '{') ADVANCE(199);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '@') ADVANCE(348);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_endisset);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_endempty);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_auth);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_endauth);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_guest);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_endguest);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_production);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_endproduction);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_endenv);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_hasSection);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sectionMissing);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_endsession);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_endswitch);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_forelse);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_endforelse);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_selected);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BANG_BANG_RBRACE_RBRACE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(220);
      if (lookahead == '/') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_expression_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(287);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '!') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(302);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__single_quotes_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__single_quotes_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(277);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__double_quotes_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__double_quotes_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '{') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '{') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(346);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 218, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 218, .external_lex_state = 3},
  [5] = {.lex_state = 218, .external_lex_state = 3},
  [6] = {.lex_state = 218, .external_lex_state = 3},
  [7] = {.lex_state = 218, .external_lex_state = 3},
  [8] = {.lex_state = 218, .external_lex_state = 3},
  [9] = {.lex_state = 218, .external_lex_state = 2},
  [10] = {.lex_state = 218, .external_lex_state = 2},
  [11] = {.lex_state = 8, .external_lex_state = 4},
  [12] = {.lex_state = 8, .external_lex_state = 4},
  [13] = {.lex_state = 8, .external_lex_state = 4},
  [14] = {.lex_state = 8, .external_lex_state = 4},
  [15] = {.lex_state = 8, .external_lex_state = 4},
  [16] = {.lex_state = 8, .external_lex_state = 2},
  [17] = {.lex_state = 8, .external_lex_state = 2},
  [18] = {.lex_state = 8, .external_lex_state = 2},
  [19] = {.lex_state = 8, .external_lex_state = 2},
  [20] = {.lex_state = 8, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 2},
  [22] = {.lex_state = 217, .external_lex_state = 3},
  [23] = {.lex_state = 217, .external_lex_state = 2},
  [24] = {.lex_state = 3, .external_lex_state = 2},
  [25] = {.lex_state = 218, .external_lex_state = 3},
  [26] = {.lex_state = 218, .external_lex_state = 3},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 218, .external_lex_state = 2},
  [29] = {.lex_state = 4, .external_lex_state = 2},
  [30] = {.lex_state = 218, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 218, .external_lex_state = 2},
  [33] = {.lex_state = 4, .external_lex_state = 2},
  [34] = {.lex_state = 218, .external_lex_state = 3},
  [35] = {.lex_state = 218, .external_lex_state = 2},
  [36] = {.lex_state = 218, .external_lex_state = 2},
  [37] = {.lex_state = 218, .external_lex_state = 3},
  [38] = {.lex_state = 218, .external_lex_state = 2},
  [39] = {.lex_state = 4, .external_lex_state = 2},
  [40] = {.lex_state = 218, .external_lex_state = 3},
  [41] = {.lex_state = 218, .external_lex_state = 2},
  [42] = {.lex_state = 218, .external_lex_state = 2},
  [43] = {.lex_state = 218, .external_lex_state = 3},
  [44] = {.lex_state = 6, .external_lex_state = 2},
  [45] = {.lex_state = 218, .external_lex_state = 2},
  [46] = {.lex_state = 218, .external_lex_state = 3},
  [47] = {.lex_state = 218, .external_lex_state = 3},
  [48] = {.lex_state = 218, .external_lex_state = 3},
  [49] = {.lex_state = 218, .external_lex_state = 3},
  [50] = {.lex_state = 218, .external_lex_state = 2},
  [51] = {.lex_state = 218, .external_lex_state = 2},
  [52] = {.lex_state = 218, .external_lex_state = 3},
  [53] = {.lex_state = 218, .external_lex_state = 2},
  [54] = {.lex_state = 218, .external_lex_state = 2},
  [55] = {.lex_state = 218, .external_lex_state = 2},
  [56] = {.lex_state = 218, .external_lex_state = 2},
  [57] = {.lex_state = 218, .external_lex_state = 3},
  [58] = {.lex_state = 218, .external_lex_state = 3},
  [59] = {.lex_state = 6, .external_lex_state = 2},
  [60] = {.lex_state = 218, .external_lex_state = 3},
  [61] = {.lex_state = 218, .external_lex_state = 3},
  [62] = {.lex_state = 218, .external_lex_state = 2},
  [63] = {.lex_state = 218, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 2},
  [65] = {.lex_state = 218, .external_lex_state = 2},
  [66] = {.lex_state = 218, .external_lex_state = 2},
  [67] = {.lex_state = 218, .external_lex_state = 3},
  [68] = {.lex_state = 218, .external_lex_state = 3},
  [69] = {.lex_state = 218, .external_lex_state = 3},
  [70] = {.lex_state = 218, .external_lex_state = 3},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 2},
  [73] = {.lex_state = 7, .external_lex_state = 4},
  [74] = {.lex_state = 8, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 8, .external_lex_state = 4},
  [78] = {.lex_state = 8, .external_lex_state = 4},
  [79] = {.lex_state = 8, .external_lex_state = 4},
  [80] = {.lex_state = 8, .external_lex_state = 2},
  [81] = {.lex_state = 8, .external_lex_state = 4},
  [82] = {.lex_state = 7, .external_lex_state = 2},
  [83] = {.lex_state = 8, .external_lex_state = 4},
  [84] = {.lex_state = 8, .external_lex_state = 4},
  [85] = {.lex_state = 8, .external_lex_state = 4},
  [86] = {.lex_state = 8, .external_lex_state = 4},
  [87] = {.lex_state = 8, .external_lex_state = 4},
  [88] = {.lex_state = 8, .external_lex_state = 4},
  [89] = {.lex_state = 8, .external_lex_state = 4},
  [90] = {.lex_state = 8, .external_lex_state = 4},
  [91] = {.lex_state = 8, .external_lex_state = 4},
  [92] = {.lex_state = 8, .external_lex_state = 2},
  [93] = {.lex_state = 8, .external_lex_state = 2},
  [94] = {.lex_state = 8, .external_lex_state = 2},
  [95] = {.lex_state = 8, .external_lex_state = 2},
  [96] = {.lex_state = 8, .external_lex_state = 2},
  [97] = {.lex_state = 8, .external_lex_state = 2},
  [98] = {.lex_state = 8, .external_lex_state = 2},
  [99] = {.lex_state = 8, .external_lex_state = 2},
  [100] = {.lex_state = 8, .external_lex_state = 2},
  [101] = {.lex_state = 8, .external_lex_state = 2},
  [102] = {.lex_state = 8, .external_lex_state = 2},
  [103] = {.lex_state = 8, .external_lex_state = 2},
  [104] = {.lex_state = 8, .external_lex_state = 2},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 6, .external_lex_state = 2},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 4, .external_lex_state = 2},
  [109] = {.lex_state = 4, .external_lex_state = 2},
  [110] = {.lex_state = 4, .external_lex_state = 2},
  [111] = {.lex_state = 4, .external_lex_state = 2},
  [112] = {.lex_state = 6, .external_lex_state = 2},
  [113] = {.lex_state = 4, .external_lex_state = 2},
  [114] = {.lex_state = 6, .external_lex_state = 2},
  [115] = {.lex_state = 6, .external_lex_state = 2},
  [116] = {.lex_state = 6, .external_lex_state = 2},
  [117] = {.lex_state = 6, .external_lex_state = 2},
  [118] = {.lex_state = 6, .external_lex_state = 2},
  [119] = {.lex_state = 6, .external_lex_state = 2},
  [120] = {.lex_state = 4, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 5},
  [122] = {.lex_state = 0, .external_lex_state = 6},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 0, .external_lex_state = 6},
  [126] = {.lex_state = 0, .external_lex_state = 5},
  [127] = {.lex_state = 0, .external_lex_state = 5},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 0, .external_lex_state = 7},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 9},
  [135] = {.lex_state = 0, .external_lex_state = 10},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 0, .external_lex_state = 5},
  [139] = {.lex_state = 0, .external_lex_state = 9},
  [140] = {.lex_state = 0, .external_lex_state = 8},
  [141] = {.lex_state = 0, .external_lex_state = 9},
  [142] = {.lex_state = 0, .external_lex_state = 10},
  [143] = {.lex_state = 0, .external_lex_state = 8},
  [144] = {.lex_state = 0, .external_lex_state = 9},
  [145] = {.lex_state = 0, .external_lex_state = 5},
  [146] = {.lex_state = 0, .external_lex_state = 10},
  [147] = {.lex_state = 0, .external_lex_state = 9},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 7},
  [151] = {.lex_state = 0, .external_lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 8},
  [153] = {.lex_state = 0, .external_lex_state = 9},
  [154] = {.lex_state = 0, .external_lex_state = 10},
  [155] = {.lex_state = 211, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 11},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 212, .external_lex_state = 2},
  [175] = {.lex_state = 213, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 11},
  [188] = {.lex_state = 213, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 12},
  [190] = {.lex_state = 0, .external_lex_state = 12},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 211, .external_lex_state = 2},
  [195] = {.lex_state = 212, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_props] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_endunless] = ACTIONS(1),
    [anon_sym_isset] = ACTIONS(1),
    [anon_sym_endisset] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_endempty] = ACTIONS(1),
    [anon_sym_auth] = ACTIONS(1),
    [anon_sym_endauth] = ACTIONS(1),
    [anon_sym_guest] = ACTIONS(1),
    [anon_sym_endguest] = ACTIONS(1),
    [anon_sym_production] = ACTIONS(1),
    [anon_sym_endproduction] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_endenv] = ACTIONS(1),
    [anon_sym_hasSection] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_sectionMissing] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_session] = ACTIONS(1),
    [anon_sym_endsession] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_endswitch] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_endforeach] = ACTIONS(1),
    [anon_sym_forelse] = ACTIONS(1),
    [anon_sym_endforelse] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_endwhile] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [anon_sym_checked] = ACTIONS(1),
    [anon_sym_selected] = ACTIONS(1),
    [anon_sym_disabled] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(1),
    [anon_sym_BANG_BANG_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_expression_attribute_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_escaped_php_text] = ACTIONS(1),
    [sym_unescaped_php_text] = ACTIONS(1),
    [sym_argument_php_text] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(162),
    [sym_doctype] = STATE(10),
    [sym__blade_node] = STATE(10),
    [sym__node] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_echo_statement] = STATE(10),
    [sym_escaped_echo_statement] = STATE(35),
    [sym_unescaped_echo_statement] = STATE(35),
    [sym_element] = STATE(10),
    [sym_script_element] = STATE(10),
    [sym_style_element] = STATE(10),
    [sym_start_tag] = STATE(7),
    [sym_script_start_tag] = STATE(127),
    [sym_style_start_tag] = STATE(121),
    [sym_self_closing_tag] = STATE(50),
    [sym_erroneous_end_tag] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_SLASH] = ACTIONS(17),
    [sym_entity] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym__directive,
    ACTIONS(25), 2,
      anon_sym_for,
      anon_sym_endfor,
    ACTIONS(23), 38,
      anon_sym_props,
      anon_sym_if,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_unless,
      anon_sym_endunless,
      anon_sym_isset,
      anon_sym_endisset,
      anon_sym_empty,
      anon_sym_endempty,
      anon_sym_auth,
      anon_sym_endauth,
      anon_sym_guest,
      anon_sym_endguest,
      anon_sym_production,
      anon_sym_endproduction,
      anon_sym_env,
      anon_sym_endenv,
      anon_sym_hasSection,
      anon_sym_yield,
      anon_sym_sectionMissing,
      anon_sym_include,
      anon_sym_session,
      anon_sym_endsession,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_break,
      anon_sym_default,
      anon_sym_endswitch,
      anon_sym_foreach,
      anon_sym_endforeach,
      anon_sym_forelse,
      anon_sym_endforelse,
      anon_sym_while,
      anon_sym_endwhile,
      anon_sym_continue,
      anon_sym_class,
      anon_sym_style,
  [51] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym__directive,
    ACTIONS(29), 2,
      anon_sym_for,
      anon_sym_endfor,
    ACTIONS(27), 38,
      anon_sym_props,
      anon_sym_if,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_unless,
      anon_sym_endunless,
      anon_sym_isset,
      anon_sym_endisset,
      anon_sym_empty,
      anon_sym_endempty,
      anon_sym_auth,
      anon_sym_endauth,
      anon_sym_guest,
      anon_sym_endguest,
      anon_sym_production,
      anon_sym_endproduction,
      anon_sym_env,
      anon_sym_endenv,
      anon_sym_hasSection,
      anon_sym_yield,
      anon_sym_sectionMissing,
      anon_sym_include,
      anon_sym_session,
      anon_sym_endsession,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_break,
      anon_sym_default,
      anon_sym_endswitch,
      anon_sym_foreach,
      anon_sym_endforeach,
      anon_sym_forelse,
      anon_sym_endforelse,
      anon_sym_while,
      anon_sym_endwhile,
      anon_sym_continue,
      anon_sym_class,
      anon_sym_style,
  [102] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_entity,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(47), 1,
      sym__implicit_end_tag,
    STATE(6), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_end_tag,
    STATE(124), 1,
      sym_style_start_tag,
    STATE(126), 1,
      sym_script_start_tag,
    STATE(58), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(8), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [164] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      sym_entity,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(51), 1,
      sym__implicit_end_tag,
    STATE(6), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(60), 1,
      sym_end_tag,
    STATE(124), 1,
      sym_style_start_tag,
    STATE(126), 1,
      sym_script_start_tag,
    STATE(58), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(8), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [226] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(49), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_entity,
    ACTIONS(55), 1,
      sym_text,
    ACTIONS(57), 1,
      sym__implicit_end_tag,
    STATE(6), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(48), 1,
      sym_end_tag,
    STATE(124), 1,
      sym_style_start_tag,
    STATE(126), 1,
      sym_script_start_tag,
    STATE(58), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(5), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [288] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(33), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      sym_entity,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(6), 1,
      sym_start_tag,
    STATE(32), 1,
      sym_end_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(124), 1,
      sym_style_start_tag,
    STATE(126), 1,
      sym_script_start_tag,
    STATE(58), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(4), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [350] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(68), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(80), 1,
      anon_sym_LT_SLASH,
    ACTIONS(83), 1,
      sym_entity,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(89), 1,
      sym__implicit_end_tag,
    STATE(6), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(124), 1,
      sym_style_start_tag,
    STATE(126), 1,
      sym_script_start_tag,
    STATE(58), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(8), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [409] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LT_BANG,
    ACTIONS(94), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_LT_SLASH,
    ACTIONS(109), 1,
      sym_entity,
    ACTIONS(112), 1,
      sym_text,
    STATE(7), 1,
      sym_start_tag,
    STATE(50), 1,
      sym_self_closing_tag,
    STATE(121), 1,
      sym_style_start_tag,
    STATE(127), 1,
      sym_script_start_tag,
    STATE(35), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(9), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [468] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym_entity,
    ACTIONS(119), 1,
      sym_text,
    STATE(7), 1,
      sym_start_tag,
    STATE(50), 1,
      sym_self_closing_tag,
    STATE(121), 1,
      sym_style_start_tag,
    STATE(127), 1,
      sym_script_start_tag,
    STATE(35), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(9), 10,
      sym_doctype,
      sym__blade_node,
      sym__node,
      sym_directive,
      sym_echo_statement,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_document_repeat1,
  [527] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    ACTIONS(131), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(133), 1,
      sym_attribute_name,
    STATE(83), 1,
      sym_expression_attribute,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(12), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [566] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(131), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_SLASH_GT,
    STATE(83), 1,
      sym_expression_attribute,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(15), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(131), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(139), 1,
      anon_sym_SLASH_GT,
    STATE(83), 1,
      sym_expression_attribute,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(15), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(131), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(141), 1,
      anon_sym_SLASH_GT,
    STATE(83), 1,
      sym_expression_attribute,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [683] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(148), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(154), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(157), 1,
      sym_attribute_name,
    STATE(83), 1,
      sym_expression_attribute,
    ACTIONS(143), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(15), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [720] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_GT,
    ACTIONS(160), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(169), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(172), 1,
      sym_attribute_name,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [756] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_GT,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(183), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(185), 1,
      sym_attribute_name,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [792] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(183), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(185), 1,
      sym_attribute_name,
    ACTIONS(187), 1,
      anon_sym_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [828] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(183), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(185), 1,
      sym_attribute_name,
    ACTIONS(189), 1,
      anon_sym_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [864] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(183), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(185), 1,
      sym_attribute_name,
    ACTIONS(191), 1,
      anon_sym_GT,
    STATE(93), 1,
      sym_expression_attribute,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(17), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [900] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_attribute_value_token1,
    STATE(102), 1,
      sym_echo_statement,
    STATE(95), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(101), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(199), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [970] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_attribute_value_token1,
    STATE(77), 1,
      sym_echo_statement,
    STATE(78), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(84), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(213), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(217), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1034] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
    ACTIONS(227), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(116), 1,
      sym_echo_statement,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1080] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(238), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      aux_sym__double_quotes_attribute_value_token1,
    STATE(29), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(111), 1,
      sym_echo_statement,
    STATE(105), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1126] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(256), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(116), 1,
      sym_echo_statement,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(267), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1172] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      aux_sym__double_quotes_attribute_value_token1,
    STATE(29), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(111), 1,
      sym_echo_statement,
    STATE(105), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(281), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(231), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1286] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      aux_sym__double_quotes_attribute_value_token1,
    STATE(64), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(111), 1,
      sym_echo_statement,
    STATE(105), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(293), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(305), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(227), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(116), 1,
      sym_echo_statement,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(313), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(249), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(267), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(317), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(325), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(333), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(285), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1650] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(227), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(116), 1,
      sym_echo_statement,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(329), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(339), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(321), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1747] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(111), 1,
      sym_echo_statement,
    STATE(105), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(309), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(301), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(297), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      sym_text,
    ACTIONS(289), 5,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [1878] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(227), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      aux_sym__single_quotes_attribute_value,
    STATE(116), 1,
      sym_echo_statement,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1907] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym__double_quotes_attribute_value,
    STATE(111), 1,
      sym_echo_statement,
    STATE(105), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [1936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(345), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [1954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_EQ,
    ACTIONS(353), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(351), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [1972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym__directive_attribute,
    ACTIONS(357), 7,
      anon_sym_class,
      anon_sym_style,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [1988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym__directive_attribute,
    ACTIONS(359), 7,
      anon_sym_class,
      anon_sym_style,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(361), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(365), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(369), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(351), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(353), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(375), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(349), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(351), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(285), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(231), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(249), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(297), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(381), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(385), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(389), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(301), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(387), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(353), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(233), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(287), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(299), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(303), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(391), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(383), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(377), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(367), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(363), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(371), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(251), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(287), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(233), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(299), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(393), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(251), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(233), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(393), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(303), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(393), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(299), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(251), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(397), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(397), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(287), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__single_quotes_attribute_value_token1,
    ACTIONS(397), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [2610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym__double_quotes_attribute_value_token1,
    ACTIONS(303), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [2623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT_SLASH,
    ACTIONS(403), 1,
      sym_raw_text,
    STATE(38), 1,
      sym_end_tag,
  [2636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym__start_tag_name,
    ACTIONS(407), 1,
      sym__script_start_tag_name,
    ACTIONS(409), 1,
      sym__style_start_tag_name,
  [2649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym__expression_attribute_value,
  [2662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT_SLASH,
    ACTIONS(417), 1,
      sym_raw_text,
    STATE(70), 1,
      sym_end_tag,
  [2675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym__script_start_tag_name,
    ACTIONS(409), 1,
      sym__style_start_tag_name,
    ACTIONS(419), 1,
      sym__start_tag_name,
  [2688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT_SLASH,
    ACTIONS(421), 1,
      sym_raw_text,
    STATE(25), 1,
      sym_end_tag,
  [2701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT_SLASH,
    ACTIONS(423), 1,
      sym_raw_text,
    STATE(36), 1,
      sym_end_tag,
  [2714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym__expression_attribute_value,
  [2727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym__end_tag_name,
    ACTIONS(433), 1,
      sym_erroneous_end_tag_name,
  [2745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(437), 1,
      sym_escaped_php_text,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT_SLASH,
    STATE(54), 1,
      sym_end_tag,
  [2765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LT_SLASH,
    STATE(55), 1,
      sym_end_tag,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(441), 1,
      sym_unescaped_php_text,
  [2785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_argument_php_text,
    STATE(178), 1,
      sym_directive_argument,
  [2795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(447), 1,
      sym_escaped_php_text,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(455), 1,
      sym_unescaped_php_text,
  [2831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(459), 1,
      sym_escaped_php_text,
  [2841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(463), 1,
      sym_unescaped_php_text,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_argument_php_text,
    STATE(165), 1,
      sym_directive_argument,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(467), 1,
      sym_escaped_php_text,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(471), 1,
      sym_unescaped_php_text,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_argument_php_text,
    STATE(171), 1,
      sym_directive_argument,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(477), 1,
      sym_unescaped_php_text,
  [2909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT_SLASH,
    STATE(26), 1,
      sym_end_tag,
  [2919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LT_SLASH,
    STATE(57), 1,
      sym_end_tag,
  [2929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(479), 1,
      sym__end_tag_name,
  [2939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(483), 1,
      sym_escaped_php_text,
  [2949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(487), 1,
      sym_escaped_php_text,
  [2959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(491), 1,
      sym_unescaped_php_text,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_argument_php_text,
    STATE(160), 1,
      sym_directive_argument,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      aux_sym__expression_attribute_value_token1,
  [2986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_GT,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__doctype,
  [3007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_GT,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_GT,
  [3028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      ts_builtin_sym_end,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_erroneous_end_tag_name,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_RBRACE_RBRACE,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE_RBRACE,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
  [3084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [3098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE_RBRACE,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym__expression_attribute_value_token2,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym_doctype_token1,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RBRACE_RBRACE,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACE_RBRACE,
  [3161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_GT,
  [3175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_EQ,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RBRACE_RBRACE,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_GT,
  [3203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_erroneous_end_tag_name,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym_doctype_token1,
  [3217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym__end_tag_name,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym__end_tag_name,
  [3231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_GT,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_EQ,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym__expression_attribute_value_token1,
  [3259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym__expression_attribute_value_token2,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 288,
  [SMALL_STATE(8)] = 350,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 527,
  [SMALL_STATE(12)] = 566,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 644,
  [SMALL_STATE(15)] = 683,
  [SMALL_STATE(16)] = 720,
  [SMALL_STATE(17)] = 756,
  [SMALL_STATE(18)] = 792,
  [SMALL_STATE(19)] = 828,
  [SMALL_STATE(20)] = 864,
  [SMALL_STATE(21)] = 900,
  [SMALL_STATE(22)] = 930,
  [SMALL_STATE(23)] = 950,
  [SMALL_STATE(24)] = 970,
  [SMALL_STATE(25)] = 1000,
  [SMALL_STATE(26)] = 1017,
  [SMALL_STATE(27)] = 1034,
  [SMALL_STATE(28)] = 1063,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1109,
  [SMALL_STATE(31)] = 1126,
  [SMALL_STATE(32)] = 1155,
  [SMALL_STATE(33)] = 1172,
  [SMALL_STATE(34)] = 1201,
  [SMALL_STATE(35)] = 1218,
  [SMALL_STATE(36)] = 1235,
  [SMALL_STATE(37)] = 1252,
  [SMALL_STATE(38)] = 1269,
  [SMALL_STATE(39)] = 1286,
  [SMALL_STATE(40)] = 1315,
  [SMALL_STATE(41)] = 1332,
  [SMALL_STATE(42)] = 1349,
  [SMALL_STATE(43)] = 1366,
  [SMALL_STATE(44)] = 1383,
  [SMALL_STATE(45)] = 1412,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1446,
  [SMALL_STATE(48)] = 1463,
  [SMALL_STATE(49)] = 1480,
  [SMALL_STATE(50)] = 1497,
  [SMALL_STATE(51)] = 1514,
  [SMALL_STATE(52)] = 1531,
  [SMALL_STATE(53)] = 1548,
  [SMALL_STATE(54)] = 1565,
  [SMALL_STATE(55)] = 1582,
  [SMALL_STATE(56)] = 1599,
  [SMALL_STATE(57)] = 1616,
  [SMALL_STATE(58)] = 1633,
  [SMALL_STATE(59)] = 1650,
  [SMALL_STATE(60)] = 1679,
  [SMALL_STATE(61)] = 1696,
  [SMALL_STATE(62)] = 1713,
  [SMALL_STATE(63)] = 1730,
  [SMALL_STATE(64)] = 1747,
  [SMALL_STATE(65)] = 1776,
  [SMALL_STATE(66)] = 1793,
  [SMALL_STATE(67)] = 1810,
  [SMALL_STATE(68)] = 1827,
  [SMALL_STATE(69)] = 1844,
  [SMALL_STATE(70)] = 1861,
  [SMALL_STATE(71)] = 1878,
  [SMALL_STATE(72)] = 1907,
  [SMALL_STATE(73)] = 1936,
  [SMALL_STATE(74)] = 1954,
  [SMALL_STATE(75)] = 1972,
  [SMALL_STATE(76)] = 1988,
  [SMALL_STATE(77)] = 2004,
  [SMALL_STATE(78)] = 2019,
  [SMALL_STATE(79)] = 2034,
  [SMALL_STATE(80)] = 2049,
  [SMALL_STATE(81)] = 2066,
  [SMALL_STATE(82)] = 2081,
  [SMALL_STATE(83)] = 2098,
  [SMALL_STATE(84)] = 2113,
  [SMALL_STATE(85)] = 2128,
  [SMALL_STATE(86)] = 2143,
  [SMALL_STATE(87)] = 2158,
  [SMALL_STATE(88)] = 2173,
  [SMALL_STATE(89)] = 2188,
  [SMALL_STATE(90)] = 2203,
  [SMALL_STATE(91)] = 2218,
  [SMALL_STATE(92)] = 2233,
  [SMALL_STATE(93)] = 2247,
  [SMALL_STATE(94)] = 2261,
  [SMALL_STATE(95)] = 2275,
  [SMALL_STATE(96)] = 2289,
  [SMALL_STATE(97)] = 2303,
  [SMALL_STATE(98)] = 2317,
  [SMALL_STATE(99)] = 2331,
  [SMALL_STATE(100)] = 2345,
  [SMALL_STATE(101)] = 2359,
  [SMALL_STATE(102)] = 2373,
  [SMALL_STATE(103)] = 2387,
  [SMALL_STATE(104)] = 2401,
  [SMALL_STATE(105)] = 2415,
  [SMALL_STATE(106)] = 2428,
  [SMALL_STATE(107)] = 2441,
  [SMALL_STATE(108)] = 2454,
  [SMALL_STATE(109)] = 2467,
  [SMALL_STATE(110)] = 2480,
  [SMALL_STATE(111)] = 2493,
  [SMALL_STATE(112)] = 2506,
  [SMALL_STATE(113)] = 2519,
  [SMALL_STATE(114)] = 2532,
  [SMALL_STATE(115)] = 2545,
  [SMALL_STATE(116)] = 2558,
  [SMALL_STATE(117)] = 2571,
  [SMALL_STATE(118)] = 2584,
  [SMALL_STATE(119)] = 2597,
  [SMALL_STATE(120)] = 2610,
  [SMALL_STATE(121)] = 2623,
  [SMALL_STATE(122)] = 2636,
  [SMALL_STATE(123)] = 2649,
  [SMALL_STATE(124)] = 2662,
  [SMALL_STATE(125)] = 2675,
  [SMALL_STATE(126)] = 2688,
  [SMALL_STATE(127)] = 2701,
  [SMALL_STATE(128)] = 2714,
  [SMALL_STATE(129)] = 2727,
  [SMALL_STATE(130)] = 2735,
  [SMALL_STATE(131)] = 2745,
  [SMALL_STATE(132)] = 2755,
  [SMALL_STATE(133)] = 2765,
  [SMALL_STATE(134)] = 2775,
  [SMALL_STATE(135)] = 2785,
  [SMALL_STATE(136)] = 2795,
  [SMALL_STATE(137)] = 2805,
  [SMALL_STATE(138)] = 2813,
  [SMALL_STATE(139)] = 2821,
  [SMALL_STATE(140)] = 2831,
  [SMALL_STATE(141)] = 2841,
  [SMALL_STATE(142)] = 2851,
  [SMALL_STATE(143)] = 2861,
  [SMALL_STATE(144)] = 2871,
  [SMALL_STATE(145)] = 2881,
  [SMALL_STATE(146)] = 2889,
  [SMALL_STATE(147)] = 2899,
  [SMALL_STATE(148)] = 2909,
  [SMALL_STATE(149)] = 2919,
  [SMALL_STATE(150)] = 2929,
  [SMALL_STATE(151)] = 2939,
  [SMALL_STATE(152)] = 2949,
  [SMALL_STATE(153)] = 2959,
  [SMALL_STATE(154)] = 2969,
  [SMALL_STATE(155)] = 2979,
  [SMALL_STATE(156)] = 2986,
  [SMALL_STATE(157)] = 2993,
  [SMALL_STATE(158)] = 3000,
  [SMALL_STATE(159)] = 3007,
  [SMALL_STATE(160)] = 3014,
  [SMALL_STATE(161)] = 3021,
  [SMALL_STATE(162)] = 3028,
  [SMALL_STATE(163)] = 3035,
  [SMALL_STATE(164)] = 3042,
  [SMALL_STATE(165)] = 3049,
  [SMALL_STATE(166)] = 3056,
  [SMALL_STATE(167)] = 3063,
  [SMALL_STATE(168)] = 3070,
  [SMALL_STATE(169)] = 3077,
  [SMALL_STATE(170)] = 3084,
  [SMALL_STATE(171)] = 3091,
  [SMALL_STATE(172)] = 3098,
  [SMALL_STATE(173)] = 3105,
  [SMALL_STATE(174)] = 3112,
  [SMALL_STATE(175)] = 3119,
  [SMALL_STATE(176)] = 3126,
  [SMALL_STATE(177)] = 3133,
  [SMALL_STATE(178)] = 3140,
  [SMALL_STATE(179)] = 3147,
  [SMALL_STATE(180)] = 3154,
  [SMALL_STATE(181)] = 3161,
  [SMALL_STATE(182)] = 3168,
  [SMALL_STATE(183)] = 3175,
  [SMALL_STATE(184)] = 3182,
  [SMALL_STATE(185)] = 3189,
  [SMALL_STATE(186)] = 3196,
  [SMALL_STATE(187)] = 3203,
  [SMALL_STATE(188)] = 3210,
  [SMALL_STATE(189)] = 3217,
  [SMALL_STATE(190)] = 3224,
  [SMALL_STATE(191)] = 3231,
  [SMALL_STATE(192)] = 3238,
  [SMALL_STATE(193)] = 3245,
  [SMALL_STATE(194)] = 3252,
  [SMALL_STATE(195)] = 3259,
  [SMALL_STATE(196)] = 3266,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(136),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(134),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(113),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(108),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(140),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(139),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(119),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_quotes_attribute_value, 2, 0, 0), SHIFT_REPEAT(117),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 5, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quotes_attribute_value, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quotes_attribute_value, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_quotes_attribute_value, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_quotes_attribute_value, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [507] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_escaped_php_text = 0,
  ts_external_token_unescaped_php_text = 1,
  ts_external_token_argument_php_text = 2,
  ts_external_token__start_tag_name = 3,
  ts_external_token__script_start_tag_name = 4,
  ts_external_token__style_start_tag_name = 5,
  ts_external_token__end_tag_name = 6,
  ts_external_token_erroneous_end_tag_name = 7,
  ts_external_token_SLASH_GT = 8,
  ts_external_token__implicit_end_tag = 9,
  ts_external_token_raw_text = 10,
  ts_external_token_comment = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_escaped_php_text] = sym_escaped_php_text,
  [ts_external_token_unescaped_php_text] = sym_unescaped_php_text,
  [ts_external_token_argument_php_text] = sym_argument_php_text,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_escaped_php_text] = true,
    [ts_external_token_unescaped_php_text] = true,
    [ts_external_token_argument_php_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_escaped_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_unescaped_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [11] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [12] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_blade_external_scanner_create(void);
void tree_sitter_blade_external_scanner_destroy(void *);
bool tree_sitter_blade_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_blade_external_scanner_serialize(void *, char *);
void tree_sitter_blade_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_blade(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_blade_external_scanner_create,
      tree_sitter_blade_external_scanner_destroy,
      tree_sitter_blade_external_scanner_scan,
      tree_sitter_blade_external_scanner_serialize,
      tree_sitter_blade_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
