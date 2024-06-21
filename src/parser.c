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
#define STATE_COUNT 216
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_AT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_inject = 8,
  anon_sym_fragment = 9,
  anon_sym_endfragment = 10,
  anon_sym_csrf = 11,
  anon_sym_method = 12,
  anon_sym_props = 13,
  anon_sym_if = 14,
  anon_sym_else = 15,
  anon_sym_endif = 16,
  anon_sym_unless = 17,
  anon_sym_endunless = 18,
  anon_sym_isset = 19,
  anon_sym_endisset = 20,
  anon_sym_empty = 21,
  anon_sym_endempty = 22,
  anon_sym_auth = 23,
  anon_sym_endauth = 24,
  anon_sym_guest = 25,
  anon_sym_endguest = 26,
  anon_sym_production = 27,
  anon_sym_endproduction = 28,
  anon_sym_env = 29,
  anon_sym_endenv = 30,
  anon_sym_hasSection = 31,
  anon_sym_yield = 32,
  anon_sym_sectionMissing = 33,
  anon_sym_include = 34,
  anon_sym_session = 35,
  anon_sym_endsession = 36,
  anon_sym_switch = 37,
  anon_sym_case = 38,
  anon_sym_break = 39,
  anon_sym_default = 40,
  anon_sym_endswitch = 41,
  anon_sym_for = 42,
  anon_sym_endfor = 43,
  anon_sym_foreach = 44,
  anon_sym_endforeach = 45,
  anon_sym_forelse = 46,
  anon_sym_endforelse = 47,
  anon_sym_while = 48,
  anon_sym_endwhile = 49,
  anon_sym_continue = 50,
  anon_sym_includeIf = 51,
  anon_sym_includeWhen = 52,
  anon_sym_includeUnless = 53,
  anon_sym_includeFirst = 54,
  anon_sym_each = 55,
  anon_sym_once = 56,
  anon_sym_push = 57,
  anon_sym_pushIf = 58,
  anon_sym_endPushIf = 59,
  anon_sym_endpush = 60,
  anon_sym_endonce = 61,
  anon_sym_prepend = 62,
  anon_sym_pushOnce = 63,
  anon_sym_endPushOnce = 64,
  anon_sym_prependOnce = 65,
  anon_sym_endPrependOnce = 66,
  anon_sym_error = 67,
  anon_sym_enderror = 68,
  anon_sym_style = 69,
  anon_sym_class = 70,
  anon_sym_checked = 71,
  anon_sym_selected = 72,
  anon_sym_disabled = 73,
  anon_sym_readonly = 74,
  anon_sym_required = 75,
  anon_sym_LBRACE_LBRACE = 76,
  aux_sym_escaped_echo_statement_token1 = 77,
  anon_sym_RBRACE_RBRACE = 78,
  anon_sym_LBRACE_LBRACE_BANG_BANG = 79,
  anon_sym_BANG_BANG_RBRACE_RBRACE = 80,
  anon_sym_LT = 81,
  anon_sym_SLASH_GT = 82,
  anon_sym_LT_SLASH = 83,
  anon_sym_EQ = 84,
  aux_sym_expression_attribute_token1 = 85,
  anon_sym_SQUOTE = 86,
  aux_sym__expression_attribute_value_token1 = 87,
  anon_sym_DQUOTE = 88,
  aux_sym__expression_attribute_value_token2 = 89,
  sym_attribute_name = 90,
  aux_sym_attribute_value_token1 = 91,
  sym_entity = 92,
  aux_sym_quoted_attribute_value_token1 = 93,
  aux_sym_quoted_attribute_value_token2 = 94,
  anon_sym_AT_LBRACE_LBRACE = 95,
  anon_sym_AT_AT = 96,
  aux_sym__text_token1 = 97,
  anon_sym_LBRACE = 98,
  sym_argument_php_text = 99,
  sym__start_tag_name = 100,
  sym__script_start_tag_name = 101,
  sym__style_start_tag_name = 102,
  sym__end_tag_name = 103,
  sym_erroneous_end_tag_name = 104,
  sym__implicit_end_tag = 105,
  sym_raw_text = 106,
  sym_comment = 107,
  sym_document = 108,
  sym_doctype = 109,
  sym__node = 110,
  sym_directive = 111,
  sym_directive_argument = 112,
  sym__directive_argument = 113,
  sym_directive_attribute = 114,
  sym_directive_attribute_value = 115,
  sym__directive = 116,
  sym__directive_attribute = 117,
  sym__directive_attribute_value = 118,
  sym_echo_statement = 119,
  sym_escaped_echo_statement = 120,
  sym_unescaped_echo_statement = 121,
  sym_element = 122,
  sym_script_element = 123,
  sym_style_element = 124,
  sym_start_tag = 125,
  sym_script_start_tag = 126,
  sym_style_start_tag = 127,
  sym_self_closing_tag = 128,
  sym_end_tag = 129,
  sym_erroneous_end_tag = 130,
  sym_attribute = 131,
  sym__attribute = 132,
  sym_expression_attribute = 133,
  sym__expression_attribute_value = 134,
  sym_attribute_value = 135,
  sym_quoted_attribute_value = 136,
  sym__quoted_attribute_value = 137,
  sym_text = 138,
  sym__text = 139,
  aux_sym_document_repeat1 = 140,
  aux_sym_escaped_echo_statement_repeat1 = 141,
  aux_sym_start_tag_repeat1 = 142,
  aux_sym_quoted_attribute_value_repeat1 = 143,
  aux_sym_quoted_attribute_value_repeat2 = 144,
  aux_sym_text_repeat1 = 145,
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
  [anon_sym_inject] = "inject",
  [anon_sym_fragment] = "fragment",
  [anon_sym_endfragment] = "endfragment",
  [anon_sym_csrf] = "csrf",
  [anon_sym_method] = "method",
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
  [anon_sym_includeIf] = "includeIf",
  [anon_sym_includeWhen] = "includeWhen",
  [anon_sym_includeUnless] = "includeUnless",
  [anon_sym_includeFirst] = "includeFirst",
  [anon_sym_each] = "each",
  [anon_sym_once] = "once",
  [anon_sym_push] = "push",
  [anon_sym_pushIf] = "pushIf",
  [anon_sym_endPushIf] = "endPushIf",
  [anon_sym_endpush] = "endpush",
  [anon_sym_endonce] = "endonce",
  [anon_sym_prepend] = "prepend",
  [anon_sym_pushOnce] = "pushOnce",
  [anon_sym_endPushOnce] = "endPushOnce",
  [anon_sym_prependOnce] = "prependOnce",
  [anon_sym_endPrependOnce] = "endPrependOnce",
  [anon_sym_error] = "error",
  [anon_sym_enderror] = "enderror",
  [anon_sym_style] = "style",
  [anon_sym_class] = "class",
  [anon_sym_checked] = "checked",
  [anon_sym_selected] = "selected",
  [anon_sym_disabled] = "disabled",
  [anon_sym_readonly] = "readonly",
  [anon_sym_required] = "required",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_escaped_echo_statement_token1] = "escaped_echo_statement_token1",
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
  [aux_sym_quoted_attribute_value_token1] = "quoted_attribute_value_token1",
  [aux_sym_quoted_attribute_value_token2] = "quoted_attribute_value_token2",
  [anon_sym_AT_LBRACE_LBRACE] = "@{{",
  [anon_sym_AT_AT] = "@@",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_LBRACE] = "{",
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
  [sym__node] = "_node",
  [sym_directive] = "directive",
  [sym_directive_argument] = "directive_argument",
  [sym__directive_argument] = "_directive_argument",
  [sym_directive_attribute] = "directive",
  [sym_directive_attribute_value] = "directive",
  [sym__directive] = "_directive",
  [sym__directive_attribute] = "_directive_attribute",
  [sym__directive_attribute_value] = "_directive_attribute_value",
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
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [sym_text] = "text",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_escaped_echo_statement_repeat1] = "escaped_echo_statement_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_quoted_attribute_value_repeat1] = "quoted_attribute_value_repeat1",
  [aux_sym_quoted_attribute_value_repeat2] = "quoted_attribute_value_repeat2",
  [aux_sym_text_repeat1] = "text_repeat1",
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
  [anon_sym_inject] = anon_sym_inject,
  [anon_sym_fragment] = anon_sym_fragment,
  [anon_sym_endfragment] = anon_sym_endfragment,
  [anon_sym_csrf] = anon_sym_csrf,
  [anon_sym_method] = anon_sym_method,
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
  [anon_sym_includeIf] = anon_sym_includeIf,
  [anon_sym_includeWhen] = anon_sym_includeWhen,
  [anon_sym_includeUnless] = anon_sym_includeUnless,
  [anon_sym_includeFirst] = anon_sym_includeFirst,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_once] = anon_sym_once,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pushIf] = anon_sym_pushIf,
  [anon_sym_endPushIf] = anon_sym_endPushIf,
  [anon_sym_endpush] = anon_sym_endpush,
  [anon_sym_endonce] = anon_sym_endonce,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_pushOnce] = anon_sym_pushOnce,
  [anon_sym_endPushOnce] = anon_sym_endPushOnce,
  [anon_sym_prependOnce] = anon_sym_prependOnce,
  [anon_sym_endPrependOnce] = anon_sym_endPrependOnce,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_enderror] = anon_sym_enderror,
  [anon_sym_style] = anon_sym_style,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_selected] = anon_sym_selected,
  [anon_sym_disabled] = anon_sym_disabled,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_escaped_echo_statement_token1] = aux_sym_escaped_echo_statement_token1,
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
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token2,
  [anon_sym_AT_LBRACE_LBRACE] = anon_sym_AT_LBRACE_LBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
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
  [sym__node] = sym__node,
  [sym_directive] = sym_directive,
  [sym_directive_argument] = sym_directive_argument,
  [sym__directive_argument] = sym__directive_argument,
  [sym_directive_attribute] = sym_directive,
  [sym_directive_attribute_value] = sym_directive,
  [sym__directive] = sym__directive,
  [sym__directive_attribute] = sym__directive_attribute,
  [sym__directive_attribute_value] = sym__directive_attribute_value,
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
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [sym_text] = sym_text,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_escaped_echo_statement_repeat1] = aux_sym_escaped_echo_statement_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_quoted_attribute_value_repeat1] = aux_sym_quoted_attribute_value_repeat1,
  [aux_sym_quoted_attribute_value_repeat2] = aux_sym_quoted_attribute_value_repeat2,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
  [anon_sym_inject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_csrf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
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
  [anon_sym_includeIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeWhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeUnless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeFirst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_once] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endpush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPushOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endPrependOnce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enderror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [aux_sym_escaped_echo_statement_token1] = {
    .visible = false,
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
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
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
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_value] = {
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
  [sym__directive_attribute_value] = {
    .visible = false,
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
  [sym__quoted_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escaped_echo_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_raw_text,
  },
  [2] = {
    [1] = sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_escaped_echo_statement_repeat1, 2,
    aux_sym_escaped_echo_statement_repeat1,
    sym_raw_text,
  aux_sym_quoted_attribute_value_repeat1, 2,
    aux_sym_quoted_attribute_value_repeat1,
    sym_attribute_value,
  aux_sym_quoted_attribute_value_repeat2, 2,
    aux_sym_quoted_attribute_value_repeat2,
    sym_attribute_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 15,
  [20] = 16,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 29,
  [34] = 30,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 35,
  [44] = 42,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 48,
  [56] = 54,
  [57] = 50,
  [58] = 51,
  [59] = 52,
  [60] = 53,
  [61] = 61,
  [62] = 61,
  [63] = 41,
  [64] = 64,
  [65] = 38,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 69,
  [75] = 72,
  [76] = 71,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 79,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 31,
  [90] = 41,
  [91] = 91,
  [92] = 92,
  [93] = 42,
  [94] = 45,
  [95] = 54,
  [96] = 96,
  [97] = 29,
  [98] = 98,
  [99] = 99,
  [100] = 91,
  [101] = 99,
  [102] = 54,
  [103] = 98,
  [104] = 29,
  [105] = 88,
  [106] = 84,
  [107] = 92,
  [108] = 86,
  [109] = 41,
  [110] = 87,
  [111] = 96,
  [112] = 31,
  [113] = 42,
  [114] = 45,
  [115] = 41,
  [116] = 31,
  [117] = 29,
  [118] = 41,
  [119] = 54,
  [120] = 42,
  [121] = 45,
  [122] = 54,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 29,
  [127] = 31,
  [128] = 42,
  [129] = 45,
  [130] = 125,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 132,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 137,
  [141] = 138,
  [142] = 142,
  [143] = 132,
  [144] = 136,
  [145] = 137,
  [146] = 138,
  [147] = 132,
  [148] = 136,
  [149] = 149,
  [150] = 131,
  [151] = 134,
  [152] = 136,
  [153] = 153,
  [154] = 137,
  [155] = 138,
  [156] = 138,
  [157] = 137,
  [158] = 132,
  [159] = 149,
  [160] = 153,
  [161] = 136,
  [162] = 132,
  [163] = 133,
  [164] = 142,
  [165] = 137,
  [166] = 138,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 168,
  [172] = 168,
  [173] = 168,
  [174] = 168,
  [175] = 170,
  [176] = 176,
  [177] = 176,
  [178] = 168,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 169,
  [183] = 181,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 185,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 185,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 185,
  [197] = 197,
  [198] = 198,
  [199] = 191,
  [200] = 200,
  [201] = 185,
  [202] = 202,
  [203] = 195,
  [204] = 197,
  [205] = 200,
  [206] = 206,
  [207] = 187,
  [208] = 202,
  [209] = 190,
  [210] = 189,
  [211] = 206,
  [212] = 198,
  [213] = 185,
  [214] = 194,
  [215] = 186,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(300);
      ADVANCE_MAP(
        '!', 458,
        '"', 461,
        '&', 381,
        '\'', 461,
        '(', 308,
        ')', 461,
        '<', 389,
        '=', 461,
        '>', 304,
        '@', 306,
        '{', 462,
        '}', 459,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(385);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(382);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 398,
        '\'', 395,
        ')', 309,
        '=', 393,
        'D', 288,
        'a', 267,
        'b', 211,
        'c', 18,
        'd', 63,
        'e', 19,
        'f', 187,
        'g', 270,
        'h', 24,
        'i', 107,
        'm', 98,
        'o', 172,
        'p', 204,
        'r', 64,
        's', 65,
        'u', 163,
        'w', 128,
        'y', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '{') ADVANCE(406);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(403);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead == '=') ADVANCE(393);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(403);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(391);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(182);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'P', 212,
        'a', 273,
        'e', 161,
        'f', 190,
        'g', 274,
        'i', 109,
        'o', 180,
        'p', 216,
        's', 103,
        'u', 185,
        'w', 130,
      );
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'q') ADVANCE(271);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'j') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(276);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 't') ADVANCE(281);
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(313);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(360);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(343);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(341);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(88);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 267:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 277:
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 279:
      if (lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(376);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 282:
      if (lookahead == '{') ADVANCE(456);
      END_STATE();
    case 283:
      if (lookahead == '}') ADVANCE(388);
      END_STATE();
    case 284:
      if (lookahead == '}') ADVANCE(383);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(284);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 285:
      if (lookahead == '}') ADVANCE(283);
      END_STATE();
    case 286:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 289:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 291:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      END_STATE();
    case 292:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 293:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 294:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(400);
      END_STATE();
    case 295:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 296:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(303);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 298:
      if (eof) ADVANCE(300);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '@') ADVANCE(307);
      if (lookahead == '{') ADVANCE(463);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(298);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(461);
      END_STATE();
    case 299:
      if (eof) ADVANCE(300);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '>') ADVANCE(304);
      if (lookahead == '@') ADVANCE(307);
      if (lookahead == '{') ADVANCE(463);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(299);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(457);
      if (lookahead == '{') ADVANCE(282);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_inject);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_endfragment);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_csrf);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_endisset);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_endempty);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_auth);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_endauth);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_guest);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_endguest);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_production);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_endproduction);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_endenv);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_hasSection);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_sectionMissing);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'U') ADVANCE(186);
      if (lookahead == 'W') ADVANCE(129);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_endsession);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_endswitch);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_forelse);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_endforelse);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_includeIf);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_includeWhen);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_includeUnless);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_includeFirst);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(181);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_pushIf);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_endPushIf);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_endpush);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_endonce);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == 'O') ADVANCE(183);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_pushOnce);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_endPushOnce);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_prependOnce);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_endPrependOnce);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_enderror);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_selected);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(1);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      if (lookahead == '!') ADVANCE(285);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      if (lookahead == '}') ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_BANG_BANG_RBRACE_RBRACE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(301);
      if (lookahead == '/') ADVANCE(392);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_expression_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(394);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '{') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '!') ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '{') ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(451);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(448);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '{') ADVANCE(378);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '(') ADVANCE(308);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '{') ADVANCE(455);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(452);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '{') ADVANCE(378);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE_LBRACE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(460);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(461);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(459);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(378);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 299, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 299, .external_lex_state = 3},
  [5] = {.lex_state = 299, .external_lex_state = 3},
  [6] = {.lex_state = 299, .external_lex_state = 3},
  [7] = {.lex_state = 299, .external_lex_state = 3},
  [8] = {.lex_state = 299, .external_lex_state = 3},
  [9] = {.lex_state = 299, .external_lex_state = 2},
  [10] = {.lex_state = 299, .external_lex_state = 2},
  [11] = {.lex_state = 299, .external_lex_state = 3},
  [12] = {.lex_state = 299, .external_lex_state = 2},
  [13] = {.lex_state = 299, .external_lex_state = 3},
  [14] = {.lex_state = 299, .external_lex_state = 2},
  [15] = {.lex_state = 11, .external_lex_state = 4},
  [16] = {.lex_state = 11, .external_lex_state = 4},
  [17] = {.lex_state = 11, .external_lex_state = 4},
  [18] = {.lex_state = 11, .external_lex_state = 4},
  [19] = {.lex_state = 11, .external_lex_state = 4},
  [20] = {.lex_state = 11, .external_lex_state = 2},
  [21] = {.lex_state = 298, .external_lex_state = 3},
  [22] = {.lex_state = 298, .external_lex_state = 2},
  [23] = {.lex_state = 11, .external_lex_state = 2},
  [24] = {.lex_state = 11, .external_lex_state = 2},
  [25] = {.lex_state = 11, .external_lex_state = 2},
  [26] = {.lex_state = 11, .external_lex_state = 2},
  [27] = {.lex_state = 299, .external_lex_state = 3},
  [28] = {.lex_state = 299, .external_lex_state = 3},
  [29] = {.lex_state = 299, .external_lex_state = 2},
  [30] = {.lex_state = 299, .external_lex_state = 3},
  [31] = {.lex_state = 299, .external_lex_state = 2},
  [32] = {.lex_state = 299, .external_lex_state = 3},
  [33] = {.lex_state = 299, .external_lex_state = 3},
  [34] = {.lex_state = 299, .external_lex_state = 2},
  [35] = {.lex_state = 299, .external_lex_state = 3},
  [36] = {.lex_state = 299, .external_lex_state = 2},
  [37] = {.lex_state = 299, .external_lex_state = 3},
  [38] = {.lex_state = 299, .external_lex_state = 2},
  [39] = {.lex_state = 299, .external_lex_state = 3},
  [40] = {.lex_state = 299, .external_lex_state = 2},
  [41] = {.lex_state = 299, .external_lex_state = 3},
  [42] = {.lex_state = 299, .external_lex_state = 3},
  [43] = {.lex_state = 299, .external_lex_state = 2},
  [44] = {.lex_state = 299, .external_lex_state = 2},
  [45] = {.lex_state = 299, .external_lex_state = 3},
  [46] = {.lex_state = 299, .external_lex_state = 2},
  [47] = {.lex_state = 299, .external_lex_state = 3},
  [48] = {.lex_state = 299, .external_lex_state = 3},
  [49] = {.lex_state = 299, .external_lex_state = 2},
  [50] = {.lex_state = 299, .external_lex_state = 3},
  [51] = {.lex_state = 299, .external_lex_state = 3},
  [52] = {.lex_state = 299, .external_lex_state = 3},
  [53] = {.lex_state = 299, .external_lex_state = 3},
  [54] = {.lex_state = 299, .external_lex_state = 2},
  [55] = {.lex_state = 299, .external_lex_state = 2},
  [56] = {.lex_state = 299, .external_lex_state = 3},
  [57] = {.lex_state = 299, .external_lex_state = 2},
  [58] = {.lex_state = 299, .external_lex_state = 2},
  [59] = {.lex_state = 299, .external_lex_state = 2},
  [60] = {.lex_state = 299, .external_lex_state = 2},
  [61] = {.lex_state = 299, .external_lex_state = 3},
  [62] = {.lex_state = 299, .external_lex_state = 2},
  [63] = {.lex_state = 299, .external_lex_state = 2},
  [64] = {.lex_state = 299, .external_lex_state = 3},
  [65] = {.lex_state = 299, .external_lex_state = 3},
  [66] = {.lex_state = 299, .external_lex_state = 2},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 9, .external_lex_state = 2},
  [69] = {.lex_state = 6, .external_lex_state = 2},
  [70] = {.lex_state = 9, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 9, .external_lex_state = 2},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 4, .external_lex_state = 2},
  [78] = {.lex_state = 4, .external_lex_state = 2},
  [79] = {.lex_state = 10, .external_lex_state = 4},
  [80] = {.lex_state = 3, .external_lex_state = 2},
  [81] = {.lex_state = 3, .external_lex_state = 2},
  [82] = {.lex_state = 10, .external_lex_state = 2},
  [83] = {.lex_state = 11, .external_lex_state = 4},
  [84] = {.lex_state = 11, .external_lex_state = 4},
  [85] = {.lex_state = 11, .external_lex_state = 2},
  [86] = {.lex_state = 11, .external_lex_state = 4},
  [87] = {.lex_state = 11, .external_lex_state = 4},
  [88] = {.lex_state = 11, .external_lex_state = 4},
  [89] = {.lex_state = 11, .external_lex_state = 4},
  [90] = {.lex_state = 11, .external_lex_state = 4},
  [91] = {.lex_state = 8, .external_lex_state = 2},
  [92] = {.lex_state = 11, .external_lex_state = 4},
  [93] = {.lex_state = 11, .external_lex_state = 4},
  [94] = {.lex_state = 11, .external_lex_state = 4},
  [95] = {.lex_state = 11, .external_lex_state = 4},
  [96] = {.lex_state = 11, .external_lex_state = 4},
  [97] = {.lex_state = 11, .external_lex_state = 4},
  [98] = {.lex_state = 11, .external_lex_state = 4},
  [99] = {.lex_state = 11, .external_lex_state = 4},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 11, .external_lex_state = 2},
  [102] = {.lex_state = 11, .external_lex_state = 2},
  [103] = {.lex_state = 11, .external_lex_state = 2},
  [104] = {.lex_state = 11, .external_lex_state = 2},
  [105] = {.lex_state = 11, .external_lex_state = 2},
  [106] = {.lex_state = 11, .external_lex_state = 2},
  [107] = {.lex_state = 11, .external_lex_state = 2},
  [108] = {.lex_state = 11, .external_lex_state = 2},
  [109] = {.lex_state = 11, .external_lex_state = 2},
  [110] = {.lex_state = 11, .external_lex_state = 2},
  [111] = {.lex_state = 11, .external_lex_state = 2},
  [112] = {.lex_state = 11, .external_lex_state = 2},
  [113] = {.lex_state = 11, .external_lex_state = 2},
  [114] = {.lex_state = 11, .external_lex_state = 2},
  [115] = {.lex_state = 6, .external_lex_state = 2},
  [116] = {.lex_state = 9, .external_lex_state = 2},
  [117] = {.lex_state = 9, .external_lex_state = 2},
  [118] = {.lex_state = 9, .external_lex_state = 2},
  [119] = {.lex_state = 6, .external_lex_state = 2},
  [120] = {.lex_state = 9, .external_lex_state = 2},
  [121] = {.lex_state = 9, .external_lex_state = 2},
  [122] = {.lex_state = 9, .external_lex_state = 2},
  [123] = {.lex_state = 9, .external_lex_state = 2},
  [124] = {.lex_state = 6, .external_lex_state = 2},
  [125] = {.lex_state = 9, .external_lex_state = 2},
  [126] = {.lex_state = 6, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 2},
  [128] = {.lex_state = 6, .external_lex_state = 2},
  [129] = {.lex_state = 6, .external_lex_state = 2},
  [130] = {.lex_state = 6, .external_lex_state = 2},
  [131] = {.lex_state = 299, .external_lex_state = 5},
  [132] = {.lex_state = 2, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 6},
  [134] = {.lex_state = 284, .external_lex_state = 2},
  [135] = {.lex_state = 2, .external_lex_state = 2},
  [136] = {.lex_state = 284, .external_lex_state = 2},
  [137] = {.lex_state = 2, .external_lex_state = 2},
  [138] = {.lex_state = 284, .external_lex_state = 2},
  [139] = {.lex_state = 284, .external_lex_state = 2},
  [140] = {.lex_state = 2, .external_lex_state = 2},
  [141] = {.lex_state = 284, .external_lex_state = 2},
  [142] = {.lex_state = 3, .external_lex_state = 2},
  [143] = {.lex_state = 2, .external_lex_state = 2},
  [144] = {.lex_state = 284, .external_lex_state = 2},
  [145] = {.lex_state = 2, .external_lex_state = 2},
  [146] = {.lex_state = 284, .external_lex_state = 2},
  [147] = {.lex_state = 2, .external_lex_state = 2},
  [148] = {.lex_state = 284, .external_lex_state = 2},
  [149] = {.lex_state = 3, .external_lex_state = 2},
  [150] = {.lex_state = 299, .external_lex_state = 5},
  [151] = {.lex_state = 2, .external_lex_state = 2},
  [152] = {.lex_state = 284, .external_lex_state = 2},
  [153] = {.lex_state = 299, .external_lex_state = 5},
  [154] = {.lex_state = 2, .external_lex_state = 2},
  [155] = {.lex_state = 284, .external_lex_state = 2},
  [156] = {.lex_state = 284, .external_lex_state = 2},
  [157] = {.lex_state = 2, .external_lex_state = 2},
  [158] = {.lex_state = 2, .external_lex_state = 2},
  [159] = {.lex_state = 3, .external_lex_state = 2},
  [160] = {.lex_state = 299, .external_lex_state = 5},
  [161] = {.lex_state = 284, .external_lex_state = 2},
  [162] = {.lex_state = 2, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 6},
  [164] = {.lex_state = 3, .external_lex_state = 2},
  [165] = {.lex_state = 2, .external_lex_state = 2},
  [166] = {.lex_state = 284, .external_lex_state = 2},
  [167] = {.lex_state = 299, .external_lex_state = 5},
  [168] = {.lex_state = 0, .external_lex_state = 7},
  [169] = {.lex_state = 299, .external_lex_state = 2},
  [170] = {.lex_state = 299, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 7},
  [175] = {.lex_state = 299, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 8},
  [177] = {.lex_state = 0, .external_lex_state = 8},
  [178] = {.lex_state = 0, .external_lex_state = 7},
  [179] = {.lex_state = 299, .external_lex_state = 5},
  [180] = {.lex_state = 299, .external_lex_state = 5},
  [181] = {.lex_state = 284, .external_lex_state = 2},
  [182] = {.lex_state = 299, .external_lex_state = 2},
  [183] = {.lex_state = 2, .external_lex_state = 2},
  [184] = {.lex_state = 299, .external_lex_state = 5},
  [185] = {.lex_state = 3, .external_lex_state = 2},
  [186] = {.lex_state = 3, .external_lex_state = 2},
  [187] = {.lex_state = 3, .external_lex_state = 2},
  [188] = {.lex_state = 3, .external_lex_state = 2},
  [189] = {.lex_state = 294, .external_lex_state = 2},
  [190] = {.lex_state = 295, .external_lex_state = 2},
  [191] = {.lex_state = 299, .external_lex_state = 2},
  [192] = {.lex_state = 3, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 299, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 9},
  [196] = {.lex_state = 3, .external_lex_state = 2},
  [197] = {.lex_state = 296, .external_lex_state = 2},
  [198] = {.lex_state = 299, .external_lex_state = 2},
  [199] = {.lex_state = 299, .external_lex_state = 2},
  [200] = {.lex_state = 3, .external_lex_state = 2},
  [201] = {.lex_state = 3, .external_lex_state = 2},
  [202] = {.lex_state = 3, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 296, .external_lex_state = 2},
  [205] = {.lex_state = 3, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 10},
  [207] = {.lex_state = 3, .external_lex_state = 2},
  [208] = {.lex_state = 3, .external_lex_state = 2},
  [209] = {.lex_state = 295, .external_lex_state = 2},
  [210] = {.lex_state = 294, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 10},
  [212] = {.lex_state = 299, .external_lex_state = 2},
  [213] = {.lex_state = 3, .external_lex_state = 2},
  [214] = {.lex_state = 299, .external_lex_state = 2},
  [215] = {.lex_state = 3, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_escaped_echo_statement_token1] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_BANG_BANG_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
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
    [sym_document] = STATE(193),
    [sym_doctype] = STATE(9),
    [sym__node] = STATE(9),
    [sym_directive] = STATE(9),
    [sym_echo_statement] = STATE(12),
    [sym_escaped_echo_statement] = STATE(63),
    [sym_unescaped_echo_statement] = STATE(63),
    [sym_element] = STATE(9),
    [sym_script_element] = STATE(9),
    [sym_style_element] = STATE(9),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(150),
    [sym_style_start_tag] = STATE(153),
    [sym_self_closing_tag] = STATE(36),
    [sym_erroneous_end_tag] = STATE(9),
    [sym_text] = STATE(9),
    [sym__text] = STATE(12),
    [aux_sym_document_repeat1] = STATE(9),
    [aux_sym_text_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_LT_SLASH] = ACTIONS(17),
    [sym_entity] = ACTIONS(19),
    [anon_sym_AT_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_AT_AT] = ACTIONS(21),
    [aux_sym__text_token1] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym__directive,
    ACTIONS(27), 5,
      anon_sym_include,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_push,
      anon_sym_prepend,
    ACTIONS(25), 56,
      anon_sym_inject,
      anon_sym_fragment,
      anon_sym_endfragment,
      anon_sym_csrf,
      anon_sym_method,
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
      anon_sym_includeIf,
      anon_sym_includeWhen,
      anon_sym_includeUnless,
      anon_sym_includeFirst,
      anon_sym_each,
      anon_sym_once,
      anon_sym_pushIf,
      anon_sym_endPushIf,
      anon_sym_endpush,
      anon_sym_endonce,
      anon_sym_pushOnce,
      anon_sym_endPushOnce,
      anon_sym_prependOnce,
      anon_sym_endPrependOnce,
      anon_sym_error,
      anon_sym_enderror,
  [72] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 1,
      sym__directive,
    ACTIONS(31), 5,
      anon_sym_include,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_push,
      anon_sym_prepend,
    ACTIONS(29), 56,
      anon_sym_inject,
      anon_sym_fragment,
      anon_sym_endfragment,
      anon_sym_csrf,
      anon_sym_method,
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
      anon_sym_includeIf,
      anon_sym_includeWhen,
      anon_sym_includeUnless,
      anon_sym_includeFirst,
      anon_sym_each,
      anon_sym_once,
      anon_sym_pushIf,
      anon_sym_endPushIf,
      anon_sym_endpush,
      anon_sym_endonce,
      anon_sym_pushOnce,
      anon_sym_endPushOnce,
      anon_sym_prependOnce,
      anon_sym_endPrependOnce,
      anon_sym_error,
      anon_sym_enderror,
  [144] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT_BANG,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_entity,
    ACTIONS(51), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(34), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(131), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(47), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(49), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(5), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [215] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT_BANG,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_entity,
    ACTIONS(55), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(57), 1,
      sym_end_tag,
    STATE(131), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(47), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(49), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [286] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT_BANG,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      sym_entity,
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(59), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(50), 1,
      sym_end_tag,
    STATE(131), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(47), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(49), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [357] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LT_BANG,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(41), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_LT_SLASH,
    ACTIONS(61), 1,
      sym_entity,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(30), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(131), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(47), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(49), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(6), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [428] = 18,
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
    ACTIONS(92), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(131), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(86), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(89), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(8), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [496] = 18,
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
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(150), 1,
      sym_script_start_tag,
    STATE(153), 1,
      sym_style_start_tag,
    ACTIONS(21), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(23), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(63), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(10), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [564] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_LT_BANG,
    ACTIONS(101), 1,
      anon_sym_AT,
    ACTIONS(104), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(107), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(113), 1,
      anon_sym_LT_SLASH,
    ACTIONS(116), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(150), 1,
      sym_script_start_tag,
    STATE(153), 1,
      sym_style_start_tag,
    ACTIONS(119), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(122), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(63), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(10), 9,
      sym_doctype,
      sym__node,
      sym_directive,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      aux_sym_document_repeat1,
  [632] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(127), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(135), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(138), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(125), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [669] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(143), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(145), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(147), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(63), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [706] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(143), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(149), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(151), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(41), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(141), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [743] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(156), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(127), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(159), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(162), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(63), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [780] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_GT,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(173), 1,
      anon_sym_SLASH_GT,
    ACTIONS(175), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(177), 1,
      sym_attribute_name,
    STATE(96), 1,
      sym_expression_attribute,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(17), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [819] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_AT,
    ACTIONS(184), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(190), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(193), 1,
      sym_attribute_name,
    STATE(96), 1,
      sym_expression_attribute,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [856] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(175), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(196), 1,
      anon_sym_GT,
    ACTIONS(198), 1,
      anon_sym_SLASH_GT,
    STATE(96), 1,
      sym_expression_attribute,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(175), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(196), 1,
      anon_sym_GT,
    ACTIONS(200), 1,
      anon_sym_SLASH_GT,
    STATE(96), 1,
      sym_expression_attribute,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [934] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_GT,
    ACTIONS(167), 1,
      anon_sym_AT,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(175), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(177), 1,
      sym_attribute_name,
    ACTIONS(202), 1,
      anon_sym_SLASH_GT,
    STATE(96), 1,
      sym_expression_attribute,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [973] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(204), 1,
      anon_sym_AT,
    ACTIONS(207), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(210), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(213), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(216), 1,
      sym_attribute_name,
    STATE(111), 1,
      sym_expression_attribute,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_directive_argument,
    ACTIONS(221), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(219), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_directive_argument,
    ACTIONS(221), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1061] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(235), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(237), 1,
      sym_attribute_name,
    STATE(111), 1,
      sym_expression_attribute,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1097] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(235), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(237), 1,
      sym_attribute_name,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(111), 1,
      sym_expression_attribute,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(26), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1133] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(235), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(237), 1,
      sym_attribute_name,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(111), 1,
      sym_expression_attribute,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(23), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1169] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(235), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(237), 1,
      sym_attribute_name,
    ACTIONS(243), 1,
      anon_sym_GT,
    STATE(111), 1,
      sym_expression_attribute,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(245), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(249), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(257), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(261), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(253), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(265), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(273), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(277), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(269), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(281), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(285), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(289), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(289), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(293), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(297), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(301), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(305), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(309), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(313), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(317), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(301), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(321), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(325), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(277), 7,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(325), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2005] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(67), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(115), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2036] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(73), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(123), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2067] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(67), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(115), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2098] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(351), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(123), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2129] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(361), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(115), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2160] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(351), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(363), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(123), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2191] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_AT,
    ACTIONS(368), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(371), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(73), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(123), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2222] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(361), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(67), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(115), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2253] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(351), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(118), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(123), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2284] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(361), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(115), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
  [2315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(381), 1,
      anon_sym_SQUOTE,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      aux_sym_attribute_value_token1,
    STATE(86), 1,
      sym_echo_statement,
    STATE(90), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
    STATE(92), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
  [2345] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_attribute_value_token1,
    STATE(108), 1,
      sym_echo_statement,
    STATE(107), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(109), 2,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
  [2375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_directive_argument,
    ACTIONS(397), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(393), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym__directive_attribute,
    ACTIONS(399), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 1,
      sym__directive_attribute,
    ACTIONS(401), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2428] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_directive_argument,
    ACTIONS(393), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(397), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_EQ,
    ACTIONS(407), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(405), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(411), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_EQ,
    ACTIONS(405), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(407), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(417), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(421), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(425), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(261), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(281), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_directive_argument,
    ACTIONS(429), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(433), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2605] = 3,
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
  [2620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(289), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(317), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(405), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(253), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(437), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
    ACTIONS(441), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
  [2710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_directive_argument,
    ACTIONS(429), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(443), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(319), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(439), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(255), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(427), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(413), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(435), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(419), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(283), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(423), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(407), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(263), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2895] = 3,
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
  [2909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(291), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      sym_attribute_name,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [2989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT_SLASH,
    ACTIONS(455), 1,
      sym_raw_text,
    STATE(65), 1,
      sym_end_tag,
  [3112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(459), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym__start_tag_name,
    ACTIONS(463), 1,
      sym__script_start_tag_name,
    ACTIONS(465), 1,
      sym__style_start_tag_name,
  [3138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(470), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(472), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(476), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(478), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(135), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(480), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(136), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(482), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(484), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(132), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(486), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym__expression_attribute_value,
  [3255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(492), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(494), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(496), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(143), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(498), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(144), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(500), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(502), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(91), 1,
      sym__directive_attribute_value,
    ACTIONS(504), 2,
      anon_sym_error,
      anon_sym_enderror,
  [3344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    ACTIONS(508), 1,
      sym_raw_text,
    STATE(38), 1,
      sym_end_tag,
  [3357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(510), 1,
      aux_sym_escaped_echo_statement_token1,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(513), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    ACTIONS(515), 1,
      sym_raw_text,
    STATE(40), 1,
      sym_end_tag,
  [3396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(517), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(147), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(519), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(148), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(521), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(161), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(523), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(162), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(525), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym__directive_attribute_value,
    ACTIONS(527), 2,
      anon_sym_error,
      anon_sym_enderror,
  [3472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT_SLASH,
    ACTIONS(529), 1,
      sym_raw_text,
    STATE(37), 1,
      sym_end_tag,
  [3485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(531), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(533), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(151), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym__script_start_tag_name,
    ACTIONS(465), 1,
      sym__style_start_tag_name,
    ACTIONS(535), 1,
      sym__start_tag_name,
  [3524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      sym__expression_attribute_value,
  [3537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(541), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(543), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(152), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_argument_php_text,
    STATE(201), 1,
      sym__directive_argument,
  [3581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    STATE(59), 1,
      sym_end_tag,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT_SLASH,
    STATE(51), 1,
      sym_end_tag,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_argument_php_text,
    STATE(196), 1,
      sym__directive_argument,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_argument_php_text,
    STATE(185), 1,
      sym__directive_argument,
  [3621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_argument_php_text,
    STATE(188), 1,
      sym__directive_argument,
  [3631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_argument_php_text,
    STATE(213), 1,
      sym__directive_argument,
  [3641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT_SLASH,
    STATE(58), 1,
      sym_end_tag,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__end_tag_name,
    ACTIONS(559), 1,
      sym_erroneous_end_tag_name,
  [3661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(561), 1,
      sym__end_tag_name,
  [3671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_argument_php_text,
    STATE(192), 1,
      sym__directive_argument,
  [3681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACE_RBRACE,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LT_SLASH,
    STATE(52), 1,
      sym_end_tag,
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(571), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [3727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__doctype,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      aux_sym__expression_attribute_value_token2,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      aux_sym__expression_attribute_value_token1,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_GT,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_GT,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_erroneous_end_tag_name,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      aux_sym_doctype_token1,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_GT,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_GT,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_DQUOTE,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [3861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_erroneous_end_tag_name,
  [3868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      aux_sym_doctype_token1,
  [3875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_DQUOTE,
  [3882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      sym__end_tag_name,
  [3889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_SQUOTE,
  [3896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_EQ,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      aux_sym__expression_attribute_value_token1,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      aux_sym__expression_attribute_value_token2,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__end_tag_name,
  [3924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_GT,
  [3931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [3938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_GT,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 215,
  [SMALL_STATE(6)] = 286,
  [SMALL_STATE(7)] = 357,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 496,
  [SMALL_STATE(10)] = 564,
  [SMALL_STATE(11)] = 632,
  [SMALL_STATE(12)] = 669,
  [SMALL_STATE(13)] = 706,
  [SMALL_STATE(14)] = 743,
  [SMALL_STATE(15)] = 780,
  [SMALL_STATE(16)] = 819,
  [SMALL_STATE(17)] = 856,
  [SMALL_STATE(18)] = 895,
  [SMALL_STATE(19)] = 934,
  [SMALL_STATE(20)] = 973,
  [SMALL_STATE(21)] = 1009,
  [SMALL_STATE(22)] = 1035,
  [SMALL_STATE(23)] = 1061,
  [SMALL_STATE(24)] = 1097,
  [SMALL_STATE(25)] = 1133,
  [SMALL_STATE(26)] = 1169,
  [SMALL_STATE(27)] = 1205,
  [SMALL_STATE(28)] = 1225,
  [SMALL_STATE(29)] = 1245,
  [SMALL_STATE(30)] = 1265,
  [SMALL_STATE(31)] = 1285,
  [SMALL_STATE(32)] = 1305,
  [SMALL_STATE(33)] = 1325,
  [SMALL_STATE(34)] = 1345,
  [SMALL_STATE(35)] = 1365,
  [SMALL_STATE(36)] = 1385,
  [SMALL_STATE(37)] = 1405,
  [SMALL_STATE(38)] = 1425,
  [SMALL_STATE(39)] = 1445,
  [SMALL_STATE(40)] = 1465,
  [SMALL_STATE(41)] = 1485,
  [SMALL_STATE(42)] = 1505,
  [SMALL_STATE(43)] = 1525,
  [SMALL_STATE(44)] = 1545,
  [SMALL_STATE(45)] = 1565,
  [SMALL_STATE(46)] = 1585,
  [SMALL_STATE(47)] = 1605,
  [SMALL_STATE(48)] = 1625,
  [SMALL_STATE(49)] = 1645,
  [SMALL_STATE(50)] = 1665,
  [SMALL_STATE(51)] = 1685,
  [SMALL_STATE(52)] = 1705,
  [SMALL_STATE(53)] = 1725,
  [SMALL_STATE(54)] = 1745,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1805,
  [SMALL_STATE(58)] = 1825,
  [SMALL_STATE(59)] = 1845,
  [SMALL_STATE(60)] = 1865,
  [SMALL_STATE(61)] = 1885,
  [SMALL_STATE(62)] = 1905,
  [SMALL_STATE(63)] = 1925,
  [SMALL_STATE(64)] = 1945,
  [SMALL_STATE(65)] = 1965,
  [SMALL_STATE(66)] = 1985,
  [SMALL_STATE(67)] = 2005,
  [SMALL_STATE(68)] = 2036,
  [SMALL_STATE(69)] = 2067,
  [SMALL_STATE(70)] = 2098,
  [SMALL_STATE(71)] = 2129,
  [SMALL_STATE(72)] = 2160,
  [SMALL_STATE(73)] = 2191,
  [SMALL_STATE(74)] = 2222,
  [SMALL_STATE(75)] = 2253,
  [SMALL_STATE(76)] = 2284,
  [SMALL_STATE(77)] = 2315,
  [SMALL_STATE(78)] = 2345,
  [SMALL_STATE(79)] = 2375,
  [SMALL_STATE(80)] = 2396,
  [SMALL_STATE(81)] = 2412,
  [SMALL_STATE(82)] = 2428,
  [SMALL_STATE(83)] = 2448,
  [SMALL_STATE(84)] = 2466,
  [SMALL_STATE(85)] = 2481,
  [SMALL_STATE(86)] = 2498,
  [SMALL_STATE(87)] = 2513,
  [SMALL_STATE(88)] = 2528,
  [SMALL_STATE(89)] = 2543,
  [SMALL_STATE(90)] = 2558,
  [SMALL_STATE(91)] = 2573,
  [SMALL_STATE(92)] = 2590,
  [SMALL_STATE(93)] = 2605,
  [SMALL_STATE(94)] = 2620,
  [SMALL_STATE(95)] = 2635,
  [SMALL_STATE(96)] = 2650,
  [SMALL_STATE(97)] = 2665,
  [SMALL_STATE(98)] = 2680,
  [SMALL_STATE(99)] = 2695,
  [SMALL_STATE(100)] = 2710,
  [SMALL_STATE(101)] = 2727,
  [SMALL_STATE(102)] = 2741,
  [SMALL_STATE(103)] = 2755,
  [SMALL_STATE(104)] = 2769,
  [SMALL_STATE(105)] = 2783,
  [SMALL_STATE(106)] = 2797,
  [SMALL_STATE(107)] = 2811,
  [SMALL_STATE(108)] = 2825,
  [SMALL_STATE(109)] = 2839,
  [SMALL_STATE(110)] = 2853,
  [SMALL_STATE(111)] = 2867,
  [SMALL_STATE(112)] = 2881,
  [SMALL_STATE(113)] = 2895,
  [SMALL_STATE(114)] = 2909,
  [SMALL_STATE(115)] = 2923,
  [SMALL_STATE(116)] = 2934,
  [SMALL_STATE(117)] = 2945,
  [SMALL_STATE(118)] = 2956,
  [SMALL_STATE(119)] = 2967,
  [SMALL_STATE(120)] = 2978,
  [SMALL_STATE(121)] = 2989,
  [SMALL_STATE(122)] = 3000,
  [SMALL_STATE(123)] = 3011,
  [SMALL_STATE(124)] = 3022,
  [SMALL_STATE(125)] = 3033,
  [SMALL_STATE(126)] = 3044,
  [SMALL_STATE(127)] = 3055,
  [SMALL_STATE(128)] = 3066,
  [SMALL_STATE(129)] = 3077,
  [SMALL_STATE(130)] = 3088,
  [SMALL_STATE(131)] = 3099,
  [SMALL_STATE(132)] = 3112,
  [SMALL_STATE(133)] = 3125,
  [SMALL_STATE(134)] = 3138,
  [SMALL_STATE(135)] = 3151,
  [SMALL_STATE(136)] = 3164,
  [SMALL_STATE(137)] = 3177,
  [SMALL_STATE(138)] = 3190,
  [SMALL_STATE(139)] = 3203,
  [SMALL_STATE(140)] = 3216,
  [SMALL_STATE(141)] = 3229,
  [SMALL_STATE(142)] = 3242,
  [SMALL_STATE(143)] = 3255,
  [SMALL_STATE(144)] = 3268,
  [SMALL_STATE(145)] = 3281,
  [SMALL_STATE(146)] = 3294,
  [SMALL_STATE(147)] = 3307,
  [SMALL_STATE(148)] = 3320,
  [SMALL_STATE(149)] = 3333,
  [SMALL_STATE(150)] = 3344,
  [SMALL_STATE(151)] = 3357,
  [SMALL_STATE(152)] = 3370,
  [SMALL_STATE(153)] = 3383,
  [SMALL_STATE(154)] = 3396,
  [SMALL_STATE(155)] = 3409,
  [SMALL_STATE(156)] = 3422,
  [SMALL_STATE(157)] = 3435,
  [SMALL_STATE(158)] = 3448,
  [SMALL_STATE(159)] = 3461,
  [SMALL_STATE(160)] = 3472,
  [SMALL_STATE(161)] = 3485,
  [SMALL_STATE(162)] = 3498,
  [SMALL_STATE(163)] = 3511,
  [SMALL_STATE(164)] = 3524,
  [SMALL_STATE(165)] = 3537,
  [SMALL_STATE(166)] = 3550,
  [SMALL_STATE(167)] = 3563,
  [SMALL_STATE(168)] = 3571,
  [SMALL_STATE(169)] = 3581,
  [SMALL_STATE(170)] = 3591,
  [SMALL_STATE(171)] = 3601,
  [SMALL_STATE(172)] = 3611,
  [SMALL_STATE(173)] = 3621,
  [SMALL_STATE(174)] = 3631,
  [SMALL_STATE(175)] = 3641,
  [SMALL_STATE(176)] = 3651,
  [SMALL_STATE(177)] = 3661,
  [SMALL_STATE(178)] = 3671,
  [SMALL_STATE(179)] = 3681,
  [SMALL_STATE(180)] = 3689,
  [SMALL_STATE(181)] = 3697,
  [SMALL_STATE(182)] = 3707,
  [SMALL_STATE(183)] = 3717,
  [SMALL_STATE(184)] = 3727,
  [SMALL_STATE(185)] = 3735,
  [SMALL_STATE(186)] = 3742,
  [SMALL_STATE(187)] = 3749,
  [SMALL_STATE(188)] = 3756,
  [SMALL_STATE(189)] = 3763,
  [SMALL_STATE(190)] = 3770,
  [SMALL_STATE(191)] = 3777,
  [SMALL_STATE(192)] = 3784,
  [SMALL_STATE(193)] = 3791,
  [SMALL_STATE(194)] = 3798,
  [SMALL_STATE(195)] = 3805,
  [SMALL_STATE(196)] = 3812,
  [SMALL_STATE(197)] = 3819,
  [SMALL_STATE(198)] = 3826,
  [SMALL_STATE(199)] = 3833,
  [SMALL_STATE(200)] = 3840,
  [SMALL_STATE(201)] = 3847,
  [SMALL_STATE(202)] = 3854,
  [SMALL_STATE(203)] = 3861,
  [SMALL_STATE(204)] = 3868,
  [SMALL_STATE(205)] = 3875,
  [SMALL_STATE(206)] = 3882,
  [SMALL_STATE(207)] = 3889,
  [SMALL_STATE(208)] = 3896,
  [SMALL_STATE(209)] = 3903,
  [SMALL_STATE(210)] = 3910,
  [SMALL_STATE(211)] = 3917,
  [SMALL_STATE(212)] = 3924,
  [SMALL_STATE(213)] = 3931,
  [SMALL_STATE(214)] = 3938,
  [SMALL_STATE(215)] = 3945,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(195),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(159),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(138),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(137),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 1, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_argument_php_text = 0,
  ts_external_token__start_tag_name = 1,
  ts_external_token__script_start_tag_name = 2,
  ts_external_token__style_start_tag_name = 3,
  ts_external_token__end_tag_name = 4,
  ts_external_token_erroneous_end_tag_name = 5,
  ts_external_token_SLASH_GT = 6,
  ts_external_token__implicit_end_tag = 7,
  ts_external_token_raw_text = 8,
  ts_external_token_comment = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
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

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_argument_php_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
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
    [ts_external_token_argument_php_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
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
