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
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
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
  anon_sym_LBRACE_LBRACE_DASH_DASH = 81,
  anon_sym_DASH_DASH_RBRACE_RBRACE = 82,
  anon_sym_LT = 83,
  anon_sym_SLASH_GT = 84,
  anon_sym_LT_SLASH = 85,
  anon_sym_EQ = 86,
  aux_sym_expression_attribute_token1 = 87,
  anon_sym_SQUOTE = 88,
  aux_sym__expression_attribute_value_token1 = 89,
  anon_sym_DQUOTE = 90,
  aux_sym__expression_attribute_value_token2 = 91,
  sym_attribute_name = 92,
  aux_sym_attribute_value_token1 = 93,
  sym_entity = 94,
  aux_sym_quoted_attribute_value_token1 = 95,
  aux_sym_quoted_attribute_value_token2 = 96,
  anon_sym_AT_LBRACE_LBRACE = 97,
  anon_sym_AT_AT = 98,
  aux_sym__text_token1 = 99,
  anon_sym_LBRACE = 100,
  sym_argument_php_text = 101,
  sym__start_tag_name = 102,
  sym__script_start_tag_name = 103,
  sym__style_start_tag_name = 104,
  sym__end_tag_name = 105,
  sym_erroneous_end_tag_name = 106,
  sym__implicit_end_tag = 107,
  sym_raw_text = 108,
  sym_comment = 109,
  sym_document = 110,
  sym_doctype = 111,
  sym__node = 112,
  sym_directive = 113,
  sym_directive_argument = 114,
  sym__directive_argument = 115,
  sym_directive_attribute = 116,
  sym_directive_attribute_value = 117,
  sym__directive = 118,
  sym__directive_attribute = 119,
  sym__directive_attribute_value = 120,
  sym_echo_statement = 121,
  sym_escaped_echo_statement = 122,
  sym_unescaped_echo_statement = 123,
  sym_blade_comment = 124,
  sym_element = 125,
  sym_script_element = 126,
  sym_style_element = 127,
  sym_start_tag = 128,
  sym_script_start_tag = 129,
  sym_style_start_tag = 130,
  sym_self_closing_tag = 131,
  sym_end_tag = 132,
  sym_erroneous_end_tag = 133,
  sym_attribute = 134,
  sym__attribute = 135,
  sym_expression_attribute = 136,
  sym__expression_attribute_value = 137,
  sym_attribute_value = 138,
  sym_quoted_attribute_value = 139,
  sym__quoted_attribute_value = 140,
  sym_text = 141,
  sym__text = 142,
  aux_sym_document_repeat1 = 143,
  aux_sym_escaped_echo_statement_repeat1 = 144,
  aux_sym_start_tag_repeat1 = 145,
  aux_sym_quoted_attribute_value_repeat1 = 146,
  aux_sym_quoted_attribute_value_repeat2 = 147,
  aux_sym_text_repeat1 = 148,
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
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = "{{--",
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = "--}}",
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
  [sym_blade_comment] = "blade_comment",
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
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = anon_sym_LBRACE_LBRACE_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = anon_sym_DASH_DASH_RBRACE_RBRACE,
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
  [sym_blade_comment] = sym_blade_comment,
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
  [anon_sym_LBRACE_LBRACE_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE_RBRACE] = {
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
  [sym_blade_comment] = {
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
  [18] = 16,
  [19] = 15,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 28,
  [51] = 51,
  [52] = 52,
  [53] = 38,
  [54] = 54,
  [55] = 49,
  [56] = 56,
  [57] = 30,
  [58] = 32,
  [59] = 56,
  [60] = 31,
  [61] = 54,
  [62] = 27,
  [63] = 48,
  [64] = 45,
  [65] = 34,
  [66] = 44,
  [67] = 29,
  [68] = 52,
  [69] = 69,
  [70] = 42,
  [71] = 37,
  [72] = 41,
  [73] = 40,
  [74] = 39,
  [75] = 43,
  [76] = 76,
  [77] = 77,
  [78] = 47,
  [79] = 35,
  [80] = 33,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 30,
  [87] = 87,
  [88] = 88,
  [89] = 49,
  [90] = 47,
  [91] = 34,
  [92] = 32,
  [93] = 93,
  [94] = 52,
  [95] = 39,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 28,
  [100] = 100,
  [101] = 88,
  [102] = 102,
  [103] = 103,
  [104] = 84,
  [105] = 105,
  [106] = 100,
  [107] = 96,
  [108] = 102,
  [109] = 87,
  [110] = 28,
  [111] = 52,
  [112] = 98,
  [113] = 97,
  [114] = 93,
  [115] = 105,
  [116] = 30,
  [117] = 103,
  [118] = 32,
  [119] = 34,
  [120] = 39,
  [121] = 47,
  [122] = 49,
  [123] = 39,
  [124] = 124,
  [125] = 125,
  [126] = 52,
  [127] = 39,
  [128] = 30,
  [129] = 52,
  [130] = 32,
  [131] = 34,
  [132] = 132,
  [133] = 47,
  [134] = 49,
  [135] = 30,
  [136] = 132,
  [137] = 32,
  [138] = 28,
  [139] = 34,
  [140] = 47,
  [141] = 49,
  [142] = 28,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 144,
  [150] = 150,
  [151] = 143,
  [152] = 152,
  [153] = 147,
  [154] = 145,
  [155] = 148,
  [156] = 144,
  [157] = 150,
  [158] = 145,
  [159] = 159,
  [160] = 160,
  [161] = 143,
  [162] = 152,
  [163] = 163,
  [164] = 147,
  [165] = 148,
  [166] = 144,
  [167] = 150,
  [168] = 143,
  [169] = 152,
  [170] = 170,
  [171] = 147,
  [172] = 152,
  [173] = 143,
  [174] = 150,
  [175] = 146,
  [176] = 159,
  [177] = 160,
  [178] = 144,
  [179] = 148,
  [180] = 147,
  [181] = 150,
  [182] = 148,
  [183] = 143,
  [184] = 144,
  [185] = 150,
  [186] = 152,
  [187] = 152,
  [188] = 170,
  [189] = 147,
  [190] = 163,
  [191] = 148,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 194,
  [196] = 194,
  [197] = 194,
  [198] = 194,
  [199] = 199,
  [200] = 199,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 203,
  [206] = 194,
  [207] = 207,
  [208] = 193,
  [209] = 209,
  [210] = 193,
  [211] = 211,
  [212] = 211,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 214,
  [225] = 225,
  [226] = 226,
  [227] = 214,
  [228] = 228,
  [229] = 221,
  [230] = 228,
  [231] = 222,
  [232] = 225,
  [233] = 217,
  [234] = 219,
  [235] = 218,
  [236] = 226,
  [237] = 214,
  [238] = 214,
  [239] = 215,
  [240] = 213,
  [241] = 216,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      ADVANCE_MAP(
        '!', 469,
        '"', 473,
        '&', 385,
        '\'', 473,
        '(', 312,
        ')', 473,
        '-', 470,
        '<', 398,
        '=', 473,
        '>', 308,
        '@', 310,
        '{', 474,
        '}', 471,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(390);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 407,
        '\'', 404,
        ')', 313,
        '=', 402,
        'D', 292,
        'a', 269,
        'b', 213,
        'c', 20,
        'd', 65,
        'e', 21,
        'f', 189,
        'g', 272,
        'h', 26,
        'i', 109,
        'm', 100,
        'o', 174,
        'p', 206,
        'r', 66,
        's', 67,
        'u', 165,
        'w', 130,
        'y', 135,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '{') ADVANCE(417);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(458);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(412);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(413);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(387);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(412);
      if (lookahead == '=') ADVANCE(402);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(413);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(184);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(145);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'P', 214,
        'a', 275,
        'e', 163,
        'f', 192,
        'g', 276,
        'i', 111,
        'o', 182,
        'p', 218,
        's', 105,
        'u', 187,
        'w', 132,
      );
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'h') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'q') ADVANCE(273);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'j') ADVANCE(87);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(317);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(343);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(330);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(345);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(274);
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
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(211);
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
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 279:
      if (lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 282:
      if (lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 283:
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 284:
      if (lookahead == '{') ADVANCE(467);
      END_STATE();
    case 285:
      if (lookahead == '}') ADVANCE(393);
      END_STATE();
    case 286:
      if (lookahead == '}') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(286);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 287:
      if (lookahead == '}') ADVANCE(397);
      END_STATE();
    case 288:
      if (lookahead == '}') ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == '}') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 292:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 293:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(291);
      END_STATE();
    case 294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 295:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 296:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 297:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 298:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(406);
      END_STATE();
    case 299:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(409);
      END_STATE();
    case 300:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(307);
      END_STATE();
    case 301:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == '@') ADVANCE(311);
      if (lookahead == '{') ADVANCE(475);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(302);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(473);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '<') ADVANCE(399);
      if (lookahead == '>') ADVANCE(308);
      if (lookahead == '@') ADVANCE(311);
      if (lookahead == '{') ADVANCE(475);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(303);
      if (lookahead != 0) ADVANCE(473);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(468);
      if (lookahead == '{') ADVANCE(284);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_inject);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_endfragment);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_csrf);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_props);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_endunless);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_isset);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_endisset);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_endempty);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_auth);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_endauth);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_guest);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_endguest);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_production);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_endproduction);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_endenv);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_hasSection);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_sectionMissing);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'U') ADVANCE(188);
      if (lookahead == 'W') ADVANCE(131);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_session);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_endsession);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_endswitch);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_endfor);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_endforeach);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_forelse);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_endforelse);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_includeIf);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_includeWhen);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_includeUnless);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_includeFirst);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_once);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(183);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_pushIf);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_endPushIf);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_endpush);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_endonce);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == 'O') ADVANCE(185);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_pushOnce);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_endPushOnce);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_prependOnce);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_endPrependOnce);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_enderror);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_selected);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_disabled);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(410);
      if (lookahead == '-') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '-') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      if (lookahead == '!') ADVANCE(288);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_escaped_echo_statement_token1);
      if (lookahead == '}') ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_BANG_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_BANG_BANG_RBRACE_RBRACE);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE_RBRACE);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '/') ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_expression_attribute_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__expression_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(403);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '{') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '!') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead == '{') ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_attribute_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(455);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(456);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_entity);
      if (lookahead == ';') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(457);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(') ADVANCE(459);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(462);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(459);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '{') ADVANCE(382);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '(') ADVANCE(312);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(463);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '@') ADVANCE(310);
      if (lookahead == '{') ADVANCE(466);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(463);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '{') ADVANCE(382);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE_LBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '!') ADVANCE(472);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(472);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(473);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '}') ADVANCE(471);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(382);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 303, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 303, .external_lex_state = 3},
  [5] = {.lex_state = 303, .external_lex_state = 3},
  [6] = {.lex_state = 303, .external_lex_state = 3},
  [7] = {.lex_state = 303, .external_lex_state = 3},
  [8] = {.lex_state = 303, .external_lex_state = 3},
  [9] = {.lex_state = 303, .external_lex_state = 2},
  [10] = {.lex_state = 303, .external_lex_state = 2},
  [11] = {.lex_state = 303, .external_lex_state = 3},
  [12] = {.lex_state = 303, .external_lex_state = 3},
  [13] = {.lex_state = 303, .external_lex_state = 2},
  [14] = {.lex_state = 303, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 4},
  [16] = {.lex_state = 13, .external_lex_state = 4},
  [17] = {.lex_state = 13, .external_lex_state = 4},
  [18] = {.lex_state = 13, .external_lex_state = 4},
  [19] = {.lex_state = 13, .external_lex_state = 4},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 302, .external_lex_state = 3},
  [26] = {.lex_state = 302, .external_lex_state = 2},
  [27] = {.lex_state = 303, .external_lex_state = 3},
  [28] = {.lex_state = 303, .external_lex_state = 3},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 303, .external_lex_state = 2},
  [31] = {.lex_state = 9, .external_lex_state = 2},
  [32] = {.lex_state = 303, .external_lex_state = 2},
  [33] = {.lex_state = 6, .external_lex_state = 2},
  [34] = {.lex_state = 303, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 303, .external_lex_state = 3},
  [37] = {.lex_state = 303, .external_lex_state = 2},
  [38] = {.lex_state = 303, .external_lex_state = 3},
  [39] = {.lex_state = 303, .external_lex_state = 3},
  [40] = {.lex_state = 303, .external_lex_state = 3},
  [41] = {.lex_state = 303, .external_lex_state = 2},
  [42] = {.lex_state = 303, .external_lex_state = 3},
  [43] = {.lex_state = 303, .external_lex_state = 2},
  [44] = {.lex_state = 303, .external_lex_state = 2},
  [45] = {.lex_state = 303, .external_lex_state = 3},
  [46] = {.lex_state = 303, .external_lex_state = 2},
  [47] = {.lex_state = 303, .external_lex_state = 2},
  [48] = {.lex_state = 303, .external_lex_state = 3},
  [49] = {.lex_state = 303, .external_lex_state = 2},
  [50] = {.lex_state = 303, .external_lex_state = 2},
  [51] = {.lex_state = 303, .external_lex_state = 3},
  [52] = {.lex_state = 303, .external_lex_state = 2},
  [53] = {.lex_state = 303, .external_lex_state = 2},
  [54] = {.lex_state = 303, .external_lex_state = 3},
  [55] = {.lex_state = 303, .external_lex_state = 3},
  [56] = {.lex_state = 303, .external_lex_state = 3},
  [57] = {.lex_state = 303, .external_lex_state = 3},
  [58] = {.lex_state = 303, .external_lex_state = 3},
  [59] = {.lex_state = 303, .external_lex_state = 2},
  [60] = {.lex_state = 9, .external_lex_state = 2},
  [61] = {.lex_state = 303, .external_lex_state = 2},
  [62] = {.lex_state = 303, .external_lex_state = 2},
  [63] = {.lex_state = 303, .external_lex_state = 2},
  [64] = {.lex_state = 303, .external_lex_state = 2},
  [65] = {.lex_state = 303, .external_lex_state = 3},
  [66] = {.lex_state = 303, .external_lex_state = 3},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 303, .external_lex_state = 3},
  [69] = {.lex_state = 303, .external_lex_state = 3},
  [70] = {.lex_state = 303, .external_lex_state = 2},
  [71] = {.lex_state = 303, .external_lex_state = 3},
  [72] = {.lex_state = 303, .external_lex_state = 3},
  [73] = {.lex_state = 303, .external_lex_state = 2},
  [74] = {.lex_state = 303, .external_lex_state = 2},
  [75] = {.lex_state = 303, .external_lex_state = 3},
  [76] = {.lex_state = 9, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 303, .external_lex_state = 3},
  [79] = {.lex_state = 9, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 4, .external_lex_state = 2},
  [82] = {.lex_state = 4, .external_lex_state = 2},
  [83] = {.lex_state = 10, .external_lex_state = 4},
  [84] = {.lex_state = 13, .external_lex_state = 4},
  [85] = {.lex_state = 10, .external_lex_state = 2},
  [86] = {.lex_state = 13, .external_lex_state = 4},
  [87] = {.lex_state = 13, .external_lex_state = 4},
  [88] = {.lex_state = 3, .external_lex_state = 2},
  [89] = {.lex_state = 13, .external_lex_state = 4},
  [90] = {.lex_state = 13, .external_lex_state = 4},
  [91] = {.lex_state = 13, .external_lex_state = 4},
  [92] = {.lex_state = 13, .external_lex_state = 4},
  [93] = {.lex_state = 13, .external_lex_state = 4},
  [94] = {.lex_state = 13, .external_lex_state = 4},
  [95] = {.lex_state = 13, .external_lex_state = 4},
  [96] = {.lex_state = 13, .external_lex_state = 4},
  [97] = {.lex_state = 13, .external_lex_state = 4},
  [98] = {.lex_state = 13, .external_lex_state = 4},
  [99] = {.lex_state = 13, .external_lex_state = 4},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 3, .external_lex_state = 2},
  [102] = {.lex_state = 13, .external_lex_state = 4},
  [103] = {.lex_state = 13, .external_lex_state = 4},
  [104] = {.lex_state = 13, .external_lex_state = 2},
  [105] = {.lex_state = 13, .external_lex_state = 4},
  [106] = {.lex_state = 8, .external_lex_state = 2},
  [107] = {.lex_state = 13, .external_lex_state = 2},
  [108] = {.lex_state = 13, .external_lex_state = 2},
  [109] = {.lex_state = 13, .external_lex_state = 2},
  [110] = {.lex_state = 13, .external_lex_state = 2},
  [111] = {.lex_state = 13, .external_lex_state = 2},
  [112] = {.lex_state = 13, .external_lex_state = 2},
  [113] = {.lex_state = 13, .external_lex_state = 2},
  [114] = {.lex_state = 13, .external_lex_state = 2},
  [115] = {.lex_state = 13, .external_lex_state = 2},
  [116] = {.lex_state = 13, .external_lex_state = 2},
  [117] = {.lex_state = 13, .external_lex_state = 2},
  [118] = {.lex_state = 13, .external_lex_state = 2},
  [119] = {.lex_state = 13, .external_lex_state = 2},
  [120] = {.lex_state = 13, .external_lex_state = 2},
  [121] = {.lex_state = 13, .external_lex_state = 2},
  [122] = {.lex_state = 13, .external_lex_state = 2},
  [123] = {.lex_state = 9, .external_lex_state = 2},
  [124] = {.lex_state = 9, .external_lex_state = 2},
  [125] = {.lex_state = 6, .external_lex_state = 2},
  [126] = {.lex_state = 9, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 2},
  [128] = {.lex_state = 9, .external_lex_state = 2},
  [129] = {.lex_state = 6, .external_lex_state = 2},
  [130] = {.lex_state = 9, .external_lex_state = 2},
  [131] = {.lex_state = 9, .external_lex_state = 2},
  [132] = {.lex_state = 9, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 9, .external_lex_state = 2},
  [135] = {.lex_state = 6, .external_lex_state = 2},
  [136] = {.lex_state = 6, .external_lex_state = 2},
  [137] = {.lex_state = 6, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 6, .external_lex_state = 2},
  [140] = {.lex_state = 6, .external_lex_state = 2},
  [141] = {.lex_state = 6, .external_lex_state = 2},
  [142] = {.lex_state = 6, .external_lex_state = 2},
  [143] = {.lex_state = 2, .external_lex_state = 2},
  [144] = {.lex_state = 286, .external_lex_state = 2},
  [145] = {.lex_state = 12, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 5},
  [147] = {.lex_state = 12, .external_lex_state = 2},
  [148] = {.lex_state = 2, .external_lex_state = 2},
  [149] = {.lex_state = 286, .external_lex_state = 2},
  [150] = {.lex_state = 12, .external_lex_state = 2},
  [151] = {.lex_state = 2, .external_lex_state = 2},
  [152] = {.lex_state = 286, .external_lex_state = 2},
  [153] = {.lex_state = 12, .external_lex_state = 2},
  [154] = {.lex_state = 286, .external_lex_state = 2},
  [155] = {.lex_state = 2, .external_lex_state = 2},
  [156] = {.lex_state = 286, .external_lex_state = 2},
  [157] = {.lex_state = 12, .external_lex_state = 2},
  [158] = {.lex_state = 2, .external_lex_state = 2},
  [159] = {.lex_state = 303, .external_lex_state = 6},
  [160] = {.lex_state = 303, .external_lex_state = 6},
  [161] = {.lex_state = 2, .external_lex_state = 2},
  [162] = {.lex_state = 286, .external_lex_state = 2},
  [163] = {.lex_state = 3, .external_lex_state = 2},
  [164] = {.lex_state = 12, .external_lex_state = 2},
  [165] = {.lex_state = 2, .external_lex_state = 2},
  [166] = {.lex_state = 286, .external_lex_state = 2},
  [167] = {.lex_state = 12, .external_lex_state = 2},
  [168] = {.lex_state = 2, .external_lex_state = 2},
  [169] = {.lex_state = 286, .external_lex_state = 2},
  [170] = {.lex_state = 3, .external_lex_state = 2},
  [171] = {.lex_state = 12, .external_lex_state = 2},
  [172] = {.lex_state = 286, .external_lex_state = 2},
  [173] = {.lex_state = 2, .external_lex_state = 2},
  [174] = {.lex_state = 12, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 5},
  [176] = {.lex_state = 303, .external_lex_state = 6},
  [177] = {.lex_state = 303, .external_lex_state = 6},
  [178] = {.lex_state = 286, .external_lex_state = 2},
  [179] = {.lex_state = 2, .external_lex_state = 2},
  [180] = {.lex_state = 12, .external_lex_state = 2},
  [181] = {.lex_state = 12, .external_lex_state = 2},
  [182] = {.lex_state = 2, .external_lex_state = 2},
  [183] = {.lex_state = 2, .external_lex_state = 2},
  [184] = {.lex_state = 286, .external_lex_state = 2},
  [185] = {.lex_state = 12, .external_lex_state = 2},
  [186] = {.lex_state = 286, .external_lex_state = 2},
  [187] = {.lex_state = 286, .external_lex_state = 2},
  [188] = {.lex_state = 3, .external_lex_state = 2},
  [189] = {.lex_state = 12, .external_lex_state = 2},
  [190] = {.lex_state = 3, .external_lex_state = 2},
  [191] = {.lex_state = 2, .external_lex_state = 2},
  [192] = {.lex_state = 303, .external_lex_state = 6},
  [193] = {.lex_state = 2, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 7},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 7},
  [197] = {.lex_state = 0, .external_lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 7},
  [199] = {.lex_state = 0, .external_lex_state = 8},
  [200] = {.lex_state = 0, .external_lex_state = 8},
  [201] = {.lex_state = 303, .external_lex_state = 6},
  [202] = {.lex_state = 303, .external_lex_state = 2},
  [203] = {.lex_state = 303, .external_lex_state = 2},
  [204] = {.lex_state = 303, .external_lex_state = 2},
  [205] = {.lex_state = 303, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 7},
  [207] = {.lex_state = 303, .external_lex_state = 6},
  [208] = {.lex_state = 12, .external_lex_state = 2},
  [209] = {.lex_state = 303, .external_lex_state = 6},
  [210] = {.lex_state = 286, .external_lex_state = 2},
  [211] = {.lex_state = 303, .external_lex_state = 2},
  [212] = {.lex_state = 303, .external_lex_state = 2},
  [213] = {.lex_state = 3, .external_lex_state = 2},
  [214] = {.lex_state = 3, .external_lex_state = 2},
  [215] = {.lex_state = 3, .external_lex_state = 2},
  [216] = {.lex_state = 3, .external_lex_state = 2},
  [217] = {.lex_state = 303, .external_lex_state = 2},
  [218] = {.lex_state = 298, .external_lex_state = 2},
  [219] = {.lex_state = 3, .external_lex_state = 2},
  [220] = {.lex_state = 3, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 9},
  [222] = {.lex_state = 303, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 3, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 299, .external_lex_state = 2},
  [227] = {.lex_state = 3, .external_lex_state = 2},
  [228] = {.lex_state = 300, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 9},
  [230] = {.lex_state = 300, .external_lex_state = 2},
  [231] = {.lex_state = 303, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 10},
  [233] = {.lex_state = 303, .external_lex_state = 2},
  [234] = {.lex_state = 3, .external_lex_state = 2},
  [235] = {.lex_state = 298, .external_lex_state = 2},
  [236] = {.lex_state = 299, .external_lex_state = 2},
  [237] = {.lex_state = 3, .external_lex_state = 2},
  [238] = {.lex_state = 3, .external_lex_state = 2},
  [239] = {.lex_state = 3, .external_lex_state = 2},
  [240] = {.lex_state = 3, .external_lex_state = 2},
  [241] = {.lex_state = 3, .external_lex_state = 2},
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
    [anon_sym_DASH_DASH_RBRACE_RBRACE] = ACTIONS(1),
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
    [sym_document] = STATE(223),
    [sym_doctype] = STATE(9),
    [sym__node] = STATE(9),
    [sym_directive] = STATE(9),
    [sym_echo_statement] = STATE(13),
    [sym_escaped_echo_statement] = STATE(52),
    [sym_unescaped_echo_statement] = STATE(52),
    [sym_blade_comment] = STATE(52),
    [sym_element] = STATE(9),
    [sym_script_element] = STATE(9),
    [sym_style_element] = STATE(9),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(159),
    [sym_style_start_tag] = STATE(160),
    [sym_self_closing_tag] = STATE(44),
    [sym_erroneous_end_tag] = STATE(9),
    [sym_text] = STATE(9),
    [sym__text] = STATE(13),
    [aux_sym_document_repeat1] = STATE(9),
    [aux_sym_text_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE_BANG_BANG] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(19),
    [sym_entity] = ACTIONS(21),
    [anon_sym_AT_LBRACE_LBRACE] = ACTIONS(23),
    [anon_sym_AT_AT] = ACTIONS(23),
    [aux_sym__text_token1] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym__directive,
    ACTIONS(29), 5,
      anon_sym_include,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_push,
      anon_sym_prepend,
    ACTIONS(27), 56,
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
    STATE(25), 1,
      sym__directive,
    ACTIONS(33), 5,
      anon_sym_include,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_push,
      anon_sym_prepend,
    ACTIONS(31), 56,
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
  [144] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_BANG,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    ACTIONS(49), 1,
      sym_entity,
    ACTIONS(55), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(37), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_self_closing_tag,
    STATE(176), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(51), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(53), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [219] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_BANG,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      sym_entity,
    ACTIONS(59), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(61), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_self_closing_tag,
    STATE(176), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(51), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(53), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [294] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_BANG,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      sym_entity,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(63), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(54), 1,
      sym_end_tag,
    STATE(66), 1,
      sym_self_closing_tag,
    STATE(176), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(51), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(53), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [369] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LT_BANG,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LT_SLASH,
    ACTIONS(65), 1,
      sym_entity,
    ACTIONS(67), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(66), 1,
      sym_self_closing_tag,
    STATE(71), 1,
      sym_end_tag,
    STATE(176), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(51), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(53), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [444] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LT_BANG,
    ACTIONS(72), 1,
      anon_sym_AT,
    ACTIONS(75), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(78), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_LT_SLASH,
    ACTIONS(90), 1,
      sym_entity,
    ACTIONS(99), 1,
      sym__implicit_end_tag,
    STATE(7), 1,
      sym_start_tag,
    STATE(66), 1,
      sym_self_closing_tag,
    STATE(176), 1,
      sym_script_start_tag,
    STATE(177), 1,
      sym_style_start_tag,
    ACTIONS(93), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(96), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(12), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [516] = 19,
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
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LT_SLASH,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_self_closing_tag,
    STATE(159), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(23), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(25), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(52), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [588] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LT_BANG,
    ACTIONS(108), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(117), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(120), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      anon_sym_LT_SLASH,
    ACTIONS(126), 1,
      sym_entity,
    STATE(4), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_self_closing_tag,
    STATE(159), 1,
      sym_script_start_tag,
    STATE(160), 1,
      sym_style_start_tag,
    ACTIONS(129), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(132), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(13), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(52), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
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
  [660] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(142), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(137), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(148), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(151), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(135), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [701] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(156), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(158), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(160), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(11), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(68), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(154), 4,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [742] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(15), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(156), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(162), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(164), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(52), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [783] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(169), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(172), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(137), 2,
      anon_sym_AT,
      anon_sym_LT,
    ACTIONS(175), 2,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
    ACTIONS(178), 2,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    STATE(14), 3,
      sym_echo_statement,
      sym__text,
      aux_sym_text_repeat1,
    STATE(52), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
  [824] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(191), 1,
      anon_sym_SLASH_GT,
    ACTIONS(193), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(195), 1,
      sym_attribute_name,
    STATE(103), 1,
      sym_expression_attribute,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(16), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [867] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(193), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(197), 1,
      anon_sym_GT,
    ACTIONS(199), 1,
      anon_sym_SLASH_GT,
    STATE(103), 1,
      sym_expression_attribute,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(17), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [910] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(206), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(209), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(212), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(215), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(218), 1,
      sym_attribute_name,
    STATE(103), 1,
      sym_expression_attribute,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(17), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [951] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(193), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(197), 1,
      anon_sym_GT,
    ACTIONS(221), 1,
      anon_sym_SLASH_GT,
    STATE(103), 1,
      sym_expression_attribute,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(17), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [994] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_GT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(193), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(195), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_SLASH_GT,
    STATE(103), 1,
      sym_expression_attribute,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(18), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1037] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_GT,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(228), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(234), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(237), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(240), 1,
      sym_attribute_name,
    STATE(117), 1,
      sym_expression_attribute,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1077] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(253), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(255), 1,
      sym_attribute_name,
    STATE(117), 1,
      sym_expression_attribute,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(24), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1117] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(253), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(257), 1,
      anon_sym_GT,
    STATE(117), 1,
      sym_expression_attribute,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(23), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(253), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(259), 1,
      anon_sym_GT,
    STATE(117), 1,
      sym_expression_attribute,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1197] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(253), 1,
      aux_sym_expression_attribute_token1,
    ACTIONS(255), 1,
      sym_attribute_name,
    ACTIONS(261), 1,
      anon_sym_GT,
    STATE(117), 1,
      sym_expression_attribute,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
    STATE(20), 5,
      sym_directive_attribute,
      sym_echo_statement,
      sym_attribute,
      sym__attribute,
      aux_sym_start_tag_repeat1,
  [1237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_directive_argument,
    ACTIONS(265), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(263), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_directive_argument,
    ACTIONS(265), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(271), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1333] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(289), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(77), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(125), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1389] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(76), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(126), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [1424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1445] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(289), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(125), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [1480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1501] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(126), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [1536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(315), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(327), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(331), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(339), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(347), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(351), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(355), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(359), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(363), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(367), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(371), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(375), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(363), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(379), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(291), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(305), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(379), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2040] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(126), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(375), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(359), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(311), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(347), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2201] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(289), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(125), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(371), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(385), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(319), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(335), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(343), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2404] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_AT,
    ACTIONS(392), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(395), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(398), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      aux_sym_quoted_attribute_value_token1,
    STATE(76), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(126), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2439] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_AT,
    ACTIONS(409), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(412), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      aux_sym_quoted_attribute_value_token2,
    STATE(77), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(125), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LT,
      aux_sym__text_token1,
      anon_sym_LBRACE,
    ACTIONS(355), 8,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_LT_SLASH,
      sym_entity,
      anon_sym_AT_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2495] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(301), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(303), 1,
      aux_sym_quoted_attribute_value_token1,
    ACTIONS(423), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_quoted_attribute_value_repeat1,
    STATE(124), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(126), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2530] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(289), 1,
      aux_sym_quoted_attribute_value_token2,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_quoted_attribute_value_repeat2,
    STATE(125), 3,
      sym_directive_attribute_value,
      sym_echo_statement,
      sym__quoted_attribute_value,
    STATE(129), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2565] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(189), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_attribute_value_token1,
    STATE(97), 1,
      sym_echo_statement,
    STATE(98), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(94), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2599] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      aux_sym_attribute_value_token1,
    STATE(113), 1,
      sym_echo_statement,
    STATE(112), 2,
      sym_attribute_value,
      sym_quoted_attribute_value,
    STATE(111), 3,
      sym_escaped_echo_statement,
      sym_unescaped_echo_statement,
      sym_blade_comment,
  [2633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_directive_argument,
    ACTIONS(437), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(441), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(443), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(445), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_directive_argument,
    ACTIONS(437), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(441), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(293), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(453), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(85), 1,
      sym__directive_attribute,
    ACTIONS(455), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(365), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(357), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(313), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(307), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(459), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(373), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(329), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(467), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(471), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(277), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_directive_argument,
    ACTIONS(473), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [2937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(83), 1,
      sym__directive_attribute,
    ACTIONS(477), 7,
      anon_sym_style,
      anon_sym_class,
      anon_sym_checked,
      anon_sym_selected,
      anon_sym_disabled,
      anon_sym_readonly,
      anon_sym_required,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(481), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(445), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [2985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(443), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(445), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 4,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_SLASH_GT,
      aux_sym_expression_attribute_token1,
    ACTIONS(487), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_directive_argument,
    ACTIONS(473), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(463), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(481), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(453), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(277), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(373), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(471), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(467), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(459), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(487), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(293), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(445), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(307), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(313), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(329), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(357), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_GT,
      anon_sym_AT,
      aux_sym_expression_attribute_token1,
    ACTIONS(365), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      sym_attribute_name,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_SQUOTE,
      aux_sym_quoted_attribute_value_token1,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_BANG_BANG,
      anon_sym_LBRACE_LBRACE_DASH_DASH,
      anon_sym_DQUOTE,
      aux_sym_quoted_attribute_value_token2,
  [3517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(499), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(182), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(503), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(508), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__start_tag_name,
    ACTIONS(512), 1,
      sym__script_start_tag_name,
    ACTIONS(514), 1,
      sym__style_start_tag_name,
  [3569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(518), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(520), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(522), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(524), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(147), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(526), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(148), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(149), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(530), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(532), 1,
      aux_sym_escaped_echo_statement_token1,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(535), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(537), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(539), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(153), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    ACTIONS(541), 1,
      aux_sym_escaped_echo_statement_token1,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LT_SLASH,
    ACTIONS(546), 1,
      sym_raw_text,
    STATE(41), 1,
      sym_end_tag,
  [3738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LT_SLASH,
    ACTIONS(548), 1,
      sym_raw_text,
    STATE(43), 1,
      sym_end_tag,
  [3751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(550), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(155), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(552), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(156), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(106), 1,
      sym__directive_attribute_value,
    ACTIONS(554), 2,
      anon_sym_error,
      anon_sym_enderror,
  [3788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(556), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(558), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(560), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(562), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(164), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(564), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(165), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(566), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym__expression_attribute_value,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(572), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(178), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(576), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(179), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(578), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(180), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym__script_start_tag_name,
    ACTIONS(514), 1,
      sym__style_start_tag_name,
    ACTIONS(580), 1,
      sym__start_tag_name,
  [3944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LT_SLASH,
    ACTIONS(584), 1,
      sym_raw_text,
    STATE(72), 1,
      sym_end_tag,
  [3957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LT_SLASH,
    ACTIONS(586), 1,
      sym_raw_text,
    STATE(75), 1,
      sym_end_tag,
  [3970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(588), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(590), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [3996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(592), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(594), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(189), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(596), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(598), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(191), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(600), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(602), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(171), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(604), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(184), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(606), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(144), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym__expression_attribute_value,
  [4113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(612), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
    STATE(145), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(100), 1,
      sym__directive_attribute_value,
    ACTIONS(614), 2,
      anon_sym_error,
      anon_sym_enderror,
  [4137] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(616), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
    STATE(158), 1,
      aux_sym_escaped_echo_statement_repeat1,
  [4150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(622), 1,
      anon_sym_BANG_BANG_RBRACE_RBRACE,
  [4168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_argument_php_text,
    STATE(227), 1,
      sym__directive_argument,
  [4178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym_argument_php_text,
    STATE(220), 1,
      sym__directive_argument,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      sym_argument_php_text,
    STATE(214), 1,
      sym__directive_argument,
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_argument_php_text,
    STATE(224), 1,
      sym__directive_argument,
  [4208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      sym_argument_php_text,
    STATE(238), 1,
      sym__directive_argument,
  [4218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__end_tag_name,
    ACTIONS(636), 1,
      sym_erroneous_end_tag_name,
  [4228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(638), 1,
      sym__end_tag_name,
  [4238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LT_SLASH,
    STATE(62), 1,
      sym_end_tag,
  [4256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LT_SLASH,
    STATE(48), 1,
      sym_end_tag,
  [4266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LT_SLASH,
    STATE(27), 1,
      sym_end_tag,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LT_SLASH,
    STATE(63), 1,
      sym_end_tag,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_argument_php_text,
    STATE(237), 1,
      sym__directive_argument,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(622), 1,
      anon_sym_DASH_DASH_RBRACE_RBRACE,
  [4314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      aux_sym_escaped_echo_statement_token1,
    ACTIONS(622), 1,
      anon_sym_RBRACE_RBRACE,
  [4332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_GT,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_GT,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__doctype,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_GT,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      aux_sym__expression_attribute_value_token1,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_EQ,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_erroneous_end_tag_name,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_GT,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__end_tag_name,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      aux_sym__expression_attribute_value_token2,
  [4444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      aux_sym_doctype_token1,
  [4458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_erroneous_end_tag_name,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      aux_sym_doctype_token1,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_GT,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__end_tag_name,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_GT,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_EQ,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      aux_sym__expression_attribute_value_token1,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      aux_sym__expression_attribute_value_token2,
  [4514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 294,
  [SMALL_STATE(7)] = 369,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 516,
  [SMALL_STATE(10)] = 588,
  [SMALL_STATE(11)] = 660,
  [SMALL_STATE(12)] = 701,
  [SMALL_STATE(13)] = 742,
  [SMALL_STATE(14)] = 783,
  [SMALL_STATE(15)] = 824,
  [SMALL_STATE(16)] = 867,
  [SMALL_STATE(17)] = 910,
  [SMALL_STATE(18)] = 951,
  [SMALL_STATE(19)] = 994,
  [SMALL_STATE(20)] = 1037,
  [SMALL_STATE(21)] = 1077,
  [SMALL_STATE(22)] = 1117,
  [SMALL_STATE(23)] = 1157,
  [SMALL_STATE(24)] = 1197,
  [SMALL_STATE(25)] = 1237,
  [SMALL_STATE(26)] = 1264,
  [SMALL_STATE(27)] = 1291,
  [SMALL_STATE(28)] = 1312,
  [SMALL_STATE(29)] = 1333,
  [SMALL_STATE(30)] = 1368,
  [SMALL_STATE(31)] = 1389,
  [SMALL_STATE(32)] = 1424,
  [SMALL_STATE(33)] = 1445,
  [SMALL_STATE(34)] = 1480,
  [SMALL_STATE(35)] = 1501,
  [SMALL_STATE(36)] = 1536,
  [SMALL_STATE(37)] = 1557,
  [SMALL_STATE(38)] = 1578,
  [SMALL_STATE(39)] = 1599,
  [SMALL_STATE(40)] = 1620,
  [SMALL_STATE(41)] = 1641,
  [SMALL_STATE(42)] = 1662,
  [SMALL_STATE(43)] = 1683,
  [SMALL_STATE(44)] = 1704,
  [SMALL_STATE(45)] = 1725,
  [SMALL_STATE(46)] = 1746,
  [SMALL_STATE(47)] = 1767,
  [SMALL_STATE(48)] = 1788,
  [SMALL_STATE(49)] = 1809,
  [SMALL_STATE(50)] = 1830,
  [SMALL_STATE(51)] = 1851,
  [SMALL_STATE(52)] = 1872,
  [SMALL_STATE(53)] = 1893,
  [SMALL_STATE(54)] = 1914,
  [SMALL_STATE(55)] = 1935,
  [SMALL_STATE(56)] = 1956,
  [SMALL_STATE(57)] = 1977,
  [SMALL_STATE(58)] = 1998,
  [SMALL_STATE(59)] = 2019,
  [SMALL_STATE(60)] = 2040,
  [SMALL_STATE(61)] = 2075,
  [SMALL_STATE(62)] = 2096,
  [SMALL_STATE(63)] = 2117,
  [SMALL_STATE(64)] = 2138,
  [SMALL_STATE(65)] = 2159,
  [SMALL_STATE(66)] = 2180,
  [SMALL_STATE(67)] = 2201,
  [SMALL_STATE(68)] = 2236,
  [SMALL_STATE(69)] = 2257,
  [SMALL_STATE(70)] = 2278,
  [SMALL_STATE(71)] = 2299,
  [SMALL_STATE(72)] = 2320,
  [SMALL_STATE(73)] = 2341,
  [SMALL_STATE(74)] = 2362,
  [SMALL_STATE(75)] = 2383,
  [SMALL_STATE(76)] = 2404,
  [SMALL_STATE(77)] = 2439,
  [SMALL_STATE(78)] = 2474,
  [SMALL_STATE(79)] = 2495,
  [SMALL_STATE(80)] = 2530,
  [SMALL_STATE(81)] = 2565,
  [SMALL_STATE(82)] = 2599,
  [SMALL_STATE(83)] = 2633,
  [SMALL_STATE(84)] = 2655,
  [SMALL_STATE(85)] = 2674,
  [SMALL_STATE(86)] = 2695,
  [SMALL_STATE(87)] = 2711,
  [SMALL_STATE(88)] = 2727,
  [SMALL_STATE(89)] = 2743,
  [SMALL_STATE(90)] = 2759,
  [SMALL_STATE(91)] = 2775,
  [SMALL_STATE(92)] = 2791,
  [SMALL_STATE(93)] = 2807,
  [SMALL_STATE(94)] = 2823,
  [SMALL_STATE(95)] = 2839,
  [SMALL_STATE(96)] = 2855,
  [SMALL_STATE(97)] = 2871,
  [SMALL_STATE(98)] = 2887,
  [SMALL_STATE(99)] = 2903,
  [SMALL_STATE(100)] = 2919,
  [SMALL_STATE(101)] = 2937,
  [SMALL_STATE(102)] = 2953,
  [SMALL_STATE(103)] = 2969,
  [SMALL_STATE(104)] = 2985,
  [SMALL_STATE(105)] = 3003,
  [SMALL_STATE(106)] = 3019,
  [SMALL_STATE(107)] = 3037,
  [SMALL_STATE(108)] = 3052,
  [SMALL_STATE(109)] = 3067,
  [SMALL_STATE(110)] = 3082,
  [SMALL_STATE(111)] = 3097,
  [SMALL_STATE(112)] = 3112,
  [SMALL_STATE(113)] = 3127,
  [SMALL_STATE(114)] = 3142,
  [SMALL_STATE(115)] = 3157,
  [SMALL_STATE(116)] = 3172,
  [SMALL_STATE(117)] = 3187,
  [SMALL_STATE(118)] = 3202,
  [SMALL_STATE(119)] = 3217,
  [SMALL_STATE(120)] = 3232,
  [SMALL_STATE(121)] = 3247,
  [SMALL_STATE(122)] = 3262,
  [SMALL_STATE(123)] = 3277,
  [SMALL_STATE(124)] = 3289,
  [SMALL_STATE(125)] = 3301,
  [SMALL_STATE(126)] = 3313,
  [SMALL_STATE(127)] = 3325,
  [SMALL_STATE(128)] = 3337,
  [SMALL_STATE(129)] = 3349,
  [SMALL_STATE(130)] = 3361,
  [SMALL_STATE(131)] = 3373,
  [SMALL_STATE(132)] = 3385,
  [SMALL_STATE(133)] = 3397,
  [SMALL_STATE(134)] = 3409,
  [SMALL_STATE(135)] = 3421,
  [SMALL_STATE(136)] = 3433,
  [SMALL_STATE(137)] = 3445,
  [SMALL_STATE(138)] = 3457,
  [SMALL_STATE(139)] = 3469,
  [SMALL_STATE(140)] = 3481,
  [SMALL_STATE(141)] = 3493,
  [SMALL_STATE(142)] = 3505,
  [SMALL_STATE(143)] = 3517,
  [SMALL_STATE(144)] = 3530,
  [SMALL_STATE(145)] = 3543,
  [SMALL_STATE(146)] = 3556,
  [SMALL_STATE(147)] = 3569,
  [SMALL_STATE(148)] = 3582,
  [SMALL_STATE(149)] = 3595,
  [SMALL_STATE(150)] = 3608,
  [SMALL_STATE(151)] = 3621,
  [SMALL_STATE(152)] = 3634,
  [SMALL_STATE(153)] = 3647,
  [SMALL_STATE(154)] = 3660,
  [SMALL_STATE(155)] = 3673,
  [SMALL_STATE(156)] = 3686,
  [SMALL_STATE(157)] = 3699,
  [SMALL_STATE(158)] = 3712,
  [SMALL_STATE(159)] = 3725,
  [SMALL_STATE(160)] = 3738,
  [SMALL_STATE(161)] = 3751,
  [SMALL_STATE(162)] = 3764,
  [SMALL_STATE(163)] = 3777,
  [SMALL_STATE(164)] = 3788,
  [SMALL_STATE(165)] = 3801,
  [SMALL_STATE(166)] = 3814,
  [SMALL_STATE(167)] = 3827,
  [SMALL_STATE(168)] = 3840,
  [SMALL_STATE(169)] = 3853,
  [SMALL_STATE(170)] = 3866,
  [SMALL_STATE(171)] = 3879,
  [SMALL_STATE(172)] = 3892,
  [SMALL_STATE(173)] = 3905,
  [SMALL_STATE(174)] = 3918,
  [SMALL_STATE(175)] = 3931,
  [SMALL_STATE(176)] = 3944,
  [SMALL_STATE(177)] = 3957,
  [SMALL_STATE(178)] = 3970,
  [SMALL_STATE(179)] = 3983,
  [SMALL_STATE(180)] = 3996,
  [SMALL_STATE(181)] = 4009,
  [SMALL_STATE(182)] = 4022,
  [SMALL_STATE(183)] = 4035,
  [SMALL_STATE(184)] = 4048,
  [SMALL_STATE(185)] = 4061,
  [SMALL_STATE(186)] = 4074,
  [SMALL_STATE(187)] = 4087,
  [SMALL_STATE(188)] = 4100,
  [SMALL_STATE(189)] = 4113,
  [SMALL_STATE(190)] = 4126,
  [SMALL_STATE(191)] = 4137,
  [SMALL_STATE(192)] = 4150,
  [SMALL_STATE(193)] = 4158,
  [SMALL_STATE(194)] = 4168,
  [SMALL_STATE(195)] = 4178,
  [SMALL_STATE(196)] = 4188,
  [SMALL_STATE(197)] = 4198,
  [SMALL_STATE(198)] = 4208,
  [SMALL_STATE(199)] = 4218,
  [SMALL_STATE(200)] = 4228,
  [SMALL_STATE(201)] = 4238,
  [SMALL_STATE(202)] = 4246,
  [SMALL_STATE(203)] = 4256,
  [SMALL_STATE(204)] = 4266,
  [SMALL_STATE(205)] = 4276,
  [SMALL_STATE(206)] = 4286,
  [SMALL_STATE(207)] = 4296,
  [SMALL_STATE(208)] = 4304,
  [SMALL_STATE(209)] = 4314,
  [SMALL_STATE(210)] = 4322,
  [SMALL_STATE(211)] = 4332,
  [SMALL_STATE(212)] = 4339,
  [SMALL_STATE(213)] = 4346,
  [SMALL_STATE(214)] = 4353,
  [SMALL_STATE(215)] = 4360,
  [SMALL_STATE(216)] = 4367,
  [SMALL_STATE(217)] = 4374,
  [SMALL_STATE(218)] = 4381,
  [SMALL_STATE(219)] = 4388,
  [SMALL_STATE(220)] = 4395,
  [SMALL_STATE(221)] = 4402,
  [SMALL_STATE(222)] = 4409,
  [SMALL_STATE(223)] = 4416,
  [SMALL_STATE(224)] = 4423,
  [SMALL_STATE(225)] = 4430,
  [SMALL_STATE(226)] = 4437,
  [SMALL_STATE(227)] = 4444,
  [SMALL_STATE(228)] = 4451,
  [SMALL_STATE(229)] = 4458,
  [SMALL_STATE(230)] = 4465,
  [SMALL_STATE(231)] = 4472,
  [SMALL_STATE(232)] = 4479,
  [SMALL_STATE(233)] = 4486,
  [SMALL_STATE(234)] = 4493,
  [SMALL_STATE(235)] = 4500,
  [SMALL_STATE(236)] = 4507,
  [SMALL_STATE(237)] = 4514,
  [SMALL_STATE(238)] = 4521,
  [SMALL_STATE(239)] = 4528,
  [SMALL_STATE(240)] = 4535,
  [SMALL_STATE(241)] = 4542,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(216),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blade_comment, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_echo_statement, 3, 0, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_echo_statement, 3, 0, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echo_statement, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(190),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(152),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(151),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(150),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 2, 0, 0), SHIFT_REPEAT(125),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, 0, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_attribute, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_attribute_value, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat1, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_attribute_value_repeat2, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute_value, 3, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 1, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_escaped_echo_statement_repeat1, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [670] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
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
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
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
