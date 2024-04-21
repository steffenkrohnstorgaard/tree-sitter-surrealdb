#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 52
#define SYMBOL_COUNT 262
#define ALIAS_COUNT 0
#define TOKEN_COUNT 234
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_function_LPAREN_RPAREN_LBRACE = 1,
  anon_sym_RBRACE_SEMI = 2,
  anon_sym_RBRACE_COMMA = 3,
  aux_sym_future_token1 = 4,
  aux_sym_casting_token1 = 5,
  aux_sym_property_token1 = 6,
  aux_sym_identifier_token1 = 7,
  aux_sym_duration_token1 = 8,
  aux_sym_constant_token1 = 9,
  aux_sym_number_token1 = 10,
  aux_sym_record_token1 = 11,
  aux_sym_record_token2 = 12,
  anon_sym_USE = 13,
  anon_sym_NS = 14,
  anon_sym_DB = 15,
  anon_sym_LET = 16,
  anon_sym_BEGIN = 17,
  anon_sym_TRANSACTION = 18,
  anon_sym_CANCEL = 19,
  anon_sym_COMMIT = 20,
  anon_sym_IF = 21,
  anon_sym_ELSE = 22,
  anon_sym_THEN = 23,
  anon_sym_END = 24,
  anon_sym_SELECT = 25,
  anon_sym_FROM = 26,
  anon_sym_WHERE = 27,
  anon_sym_SPLIT = 28,
  anon_sym_AT = 29,
  anon_sym_GROUP = 30,
  anon_sym_BY = 31,
  anon_sym_ORDER = 32,
  anon_sym_COLLATE = 33,
  anon_sym_NUMERIC = 34,
  anon_sym_ASC = 35,
  anon_sym_DESC = 36,
  anon_sym_LIMIT = 37,
  anon_sym_START = 38,
  anon_sym_FETCH = 39,
  anon_sym_TIMEOUT = 40,
  anon_sym_PARALLEL = 41,
  anon_sym_INSERT = 42,
  anon_sym_IGNORE = 43,
  anon_sym_INTO = 44,
  anon_sym_VALUES = 45,
  anon_sym_ON = 46,
  anon_sym_DUPLICATE = 47,
  anon_sym_KEY = 48,
  anon_sym_UPDATE = 49,
  anon_sym_CREATE = 50,
  anon_sym_CONTENT = 51,
  anon_sym_SET = 52,
  anon_sym_RETURN = 53,
  anon_sym_BEFORE = 54,
  anon_sym_AFTER = 55,
  anon_sym_DIFF = 56,
  anon_sym_MERGE = 57,
  anon_sym_PATCH = 58,
  anon_sym_RELATE = 59,
  anon_sym_DELETE = 60,
  anon_sym_DEFINE = 61,
  anon_sym_NAMESPACE = 62,
  anon_sym_DATABASE = 63,
  anon_sym_USER = 64,
  anon_sym_PASSWORD = 65,
  anon_sym_PASSHASH = 66,
  anon_sym_TOKEN = 67,
  anon_sym_SCOPE = 68,
  anon_sym_TYPE = 69,
  anon_sym_VALUE = 70,
  anon_sym_SESSION = 71,
  anon_sym_SIGNUP = 72,
  anon_sym_SIGNIN = 73,
  anon_sym_TABLE = 74,
  anon_sym_DROP = 75,
  anon_sym_SCHEMAFULL = 76,
  anon_sym_SCHEMALESS = 77,
  anon_sym_AS = 78,
  anon_sym_PERMISSIONS = 79,
  anon_sym_FULL = 80,
  anon_sym_FOR = 81,
  anon_sym_select = 82,
  anon_sym_update = 83,
  anon_sym_create = 84,
  anon_sym_delete = 85,
  anon_sym_EVENT = 86,
  anon_sym_WHEN = 87,
  anon_sym_ASSERT = 88,
  anon_sym_INDEX = 89,
  anon_sym_FIELD = 90,
  anon_sym_FIELDS = 91,
  anon_sym_COLUMNS = 92,
  anon_sym_UNIQUE = 93,
  anon_sym_DEFAULT = 94,
  anon_sym_READONLY = 95,
  anon_sym_REMOVE = 96,
  anon_sym_SLEEP = 97,
  anon_sym_INFO = 98,
  anon_sym_KV = 99,
  anon_sym_TO = 100,
  anon_sym_OUT = 101,
  anon_sym_IFNOT = 102,
  anon_sym_EXISTS = 103,
  anon_sym_FUNCTION = 104,
  anon_sym_PARAM = 105,
  anon_sym_LIVE = 106,
  anon_sym_ONLY = 107,
  anon_sym_OMIT = 108,
  anon_sym_OPTION = 109,
  anon_sym_AMP_AMP = 110,
  anon_sym_AND = 111,
  anon_sym_PIPE_PIPE = 112,
  anon_sym_OR = 113,
  anon_sym_QMARK_QMARK = 114,
  anon_sym_QMARK_COLON = 115,
  anon_sym_EQ = 116,
  anon_sym_IS = 117,
  anon_sym_BANG_EQ = 118,
  anon_sym_ISNOT = 119,
  anon_sym_EQ_EQ = 120,
  anon_sym_QMARK_EQ = 121,
  anon_sym_STAR_EQ = 122,
  anon_sym_TILDE = 123,
  anon_sym_BANG_TILDE = 124,
  anon_sym_QMARK_TILDE = 125,
  anon_sym_STAR_TILDE = 126,
  anon_sym_LT = 127,
  anon_sym_LT_EQ = 128,
  anon_sym_GT = 129,
  anon_sym_GT_EQ = 130,
  anon_sym_PLUS = 131,
  anon_sym_DASH = 132,
  anon_sym_STAR = 133,
  anon_sym_x = 134,
  anon_sym_SLASH = 135,
  anon_sym_ = 136,
  anon_sym_STAR_STAR = 137,
  anon_sym_IN = 138,
  anon_sym_CONTAINS = 139,
  anon_sym_2 = 140,
  anon_sym_CONTAINSNOT = 141,
  anon_sym_3 = 142,
  anon_sym_CONTAINSALL = 143,
  anon_sym_4 = 144,
  anon_sym_CONTAINSANY = 145,
  anon_sym_5 = 146,
  anon_sym_CONTAINSNONE = 147,
  anon_sym_6 = 148,
  anon_sym_INSIDE = 149,
  anon_sym_7 = 150,
  anon_sym_NOTINSIDE = 151,
  anon_sym_NOTIN = 152,
  anon_sym_8 = 153,
  anon_sym_ALLINSIDE = 154,
  anon_sym_9 = 155,
  anon_sym_ANYINSIDE = 156,
  anon_sym_10 = 157,
  anon_sym_NONEINSIDE = 158,
  anon_sym_11 = 159,
  anon_sym_OUTSIDE = 160,
  anon_sym_INTERSECTS = 161,
  anon_sym_LPAREN = 162,
  anon_sym_RPAREN = 163,
  anon_sym_LBRACK = 164,
  anon_sym_RBRACK = 165,
  anon_sym_LBRACE = 166,
  anon_sym_RBRACE = 167,
  anon_sym_DASH_GT = 168,
  anon_sym_LT_DASH = 169,
  anon_sym_COMMA = 170,
  anon_sym_SEMI = 171,
  anon_sym_COLON = 172,
  aux_sym_function_token1 = 173,
  aux_sym_function_token2 = 174,
  aux_sym_function_token3 = 175,
  anon_sym_count = 176,
  aux_sym_function_token4 = 177,
  aux_sym_function_token5 = 178,
  aux_sym_function_token6 = 179,
  aux_sym_function_token7 = 180,
  aux_sym_function_token8 = 181,
  aux_sym_function_token9 = 182,
  aux_sym_function_token10 = 183,
  aux_sym_function_token11 = 184,
  aux_sym_function_token12 = 185,
  aux_sym_function_token13 = 186,
  aux_sym_function_token14 = 187,
  aux_sym_function_token15 = 188,
  aux_sym_function_token16 = 189,
  aux_sym_function_token17 = 190,
  anon_sym_any = 191,
  anon_sym_array = 192,
  anon_sym_bool = 193,
  anon_sym_datetime = 194,
  anon_sym_decimal = 195,
  anon_sym_duration = 196,
  anon_sym_float = 197,
  anon_sym_int = 198,
  anon_sym_number = 199,
  anon_sym_object = 200,
  anon_sym_string = 201,
  anon_sym_record = 202,
  anon_sym_option = 203,
  anon_sym_geometry = 204,
  anon_sym_EDDSA = 205,
  anon_sym_ES256 = 206,
  anon_sym_ES384 = 207,
  anon_sym_ES512 = 208,
  anon_sym_HS256 = 209,
  anon_sym_HS384 = 210,
  anon_sym_HS512 = 211,
  anon_sym_PS256 = 212,
  anon_sym_PS384 = 213,
  anon_sym_PS512 = 214,
  anon_sym_RS256 = 215,
  anon_sym_RS384 = 216,
  anon_sym_RS512 = 217,
  anon_sym_true = 218,
  anon_sym_false = 219,
  anon_sym_TRUE = 220,
  anon_sym_FALSE = 221,
  anon_sym_null = 222,
  anon_sym_NULL = 223,
  anon_sym_none = 224,
  anon_sym_NONE = 225,
  sym_variable = 226,
  sym_comment = 227,
  anon_sym_SQUOTE = 228,
  aux_sym_string_token1 = 229,
  anon_sym_BSLASH = 230,
  aux_sym_string_token2 = 231,
  anon_sym_DQUOTE = 232,
  aux_sym_string_token3 = 233,
  sym_source_file = 234,
  sym_token = 235,
  sym_scripting_function = 236,
  sym_scripting_content = 237,
  sym__scripting_statement = 238,
  sym_future = 239,
  sym_casting = 240,
  sym_property = 241,
  sym_identifier = 242,
  sym_duration = 243,
  sym_constant = 244,
  sym_number = 245,
  sym_record = 246,
  sym_keyword = 247,
  sym_operator = 248,
  sym_punctuation = 249,
  sym_delimiter = 250,
  sym_function = 251,
  sym_type = 252,
  sym_datatype = 253,
  sym_algotype = 254,
  sym_bool = 255,
  sym_nothing = 256,
  sym_string = 257,
  aux_sym_source_file_repeat1 = 258,
  aux_sym_scripting_content_repeat1 = 259,
  aux_sym_string_repeat1 = 260,
  aux_sym_string_repeat2 = 261,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = "function(){",
  [anon_sym_RBRACE_SEMI] = "};",
  [anon_sym_RBRACE_COMMA] = "},",
  [aux_sym_future_token1] = "future_token1",
  [aux_sym_casting_token1] = "casting_token1",
  [aux_sym_property_token1] = "property_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_duration_token1] = "duration_token1",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_record_token1] = "record_token1",
  [aux_sym_record_token2] = "record_token2",
  [anon_sym_USE] = "USE",
  [anon_sym_NS] = "NS",
  [anon_sym_DB] = "DB",
  [anon_sym_LET] = "LET",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_TRANSACTION] = "TRANSACTION",
  [anon_sym_CANCEL] = "CANCEL",
  [anon_sym_COMMIT] = "COMMIT",
  [anon_sym_IF] = "IF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END] = "END",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_FROM] = "FROM",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_SPLIT] = "SPLIT",
  [anon_sym_AT] = "AT",
  [anon_sym_GROUP] = "GROUP",
  [anon_sym_BY] = "BY",
  [anon_sym_ORDER] = "ORDER",
  [anon_sym_COLLATE] = "COLLATE",
  [anon_sym_NUMERIC] = "NUMERIC",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_LIMIT] = "LIMIT",
  [anon_sym_START] = "START",
  [anon_sym_FETCH] = "FETCH",
  [anon_sym_TIMEOUT] = "TIMEOUT",
  [anon_sym_PARALLEL] = "PARALLEL",
  [anon_sym_INSERT] = "INSERT",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_INTO] = "INTO",
  [anon_sym_VALUES] = "VALUES",
  [anon_sym_ON] = "ON",
  [anon_sym_DUPLICATE] = "DUPLICATE",
  [anon_sym_KEY] = "KEY",
  [anon_sym_UPDATE] = "UPDATE",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_CONTENT] = "CONTENT",
  [anon_sym_SET] = "SET",
  [anon_sym_RETURN] = "RETURN",
  [anon_sym_BEFORE] = "BEFORE",
  [anon_sym_AFTER] = "AFTER",
  [anon_sym_DIFF] = "DIFF",
  [anon_sym_MERGE] = "MERGE",
  [anon_sym_PATCH] = "PATCH",
  [anon_sym_RELATE] = "RELATE",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_NAMESPACE] = "NAMESPACE",
  [anon_sym_DATABASE] = "DATABASE",
  [anon_sym_USER] = "USER",
  [anon_sym_PASSWORD] = "PASSWORD",
  [anon_sym_PASSHASH] = "PASSHASH",
  [anon_sym_TOKEN] = "TOKEN",
  [anon_sym_SCOPE] = "SCOPE",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_VALUE] = "VALUE",
  [anon_sym_SESSION] = "SESSION",
  [anon_sym_SIGNUP] = "SIGNUP",
  [anon_sym_SIGNIN] = "SIGNIN",
  [anon_sym_TABLE] = "TABLE",
  [anon_sym_DROP] = "DROP",
  [anon_sym_SCHEMAFULL] = "SCHEMAFULL",
  [anon_sym_SCHEMALESS] = "SCHEMALESS",
  [anon_sym_AS] = "AS",
  [anon_sym_PERMISSIONS] = "PERMISSIONS",
  [anon_sym_FULL] = "FULL",
  [anon_sym_FOR] = "FOR",
  [anon_sym_select] = "select",
  [anon_sym_update] = "update",
  [anon_sym_create] = "create",
  [anon_sym_delete] = "delete",
  [anon_sym_EVENT] = "EVENT",
  [anon_sym_WHEN] = "WHEN",
  [anon_sym_ASSERT] = "ASSERT",
  [anon_sym_INDEX] = "INDEX",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_FIELDS] = "FIELDS",
  [anon_sym_COLUMNS] = "COLUMNS",
  [anon_sym_UNIQUE] = "UNIQUE",
  [anon_sym_DEFAULT] = "DEFAULT",
  [anon_sym_READONLY] = "READONLY",
  [anon_sym_REMOVE] = "REMOVE",
  [anon_sym_SLEEP] = "SLEEP",
  [anon_sym_INFO] = "INFO",
  [anon_sym_KV] = "KV",
  [anon_sym_TO] = "TO",
  [anon_sym_OUT] = "OUT",
  [anon_sym_IFNOT] = "IF NOT",
  [anon_sym_EXISTS] = "EXISTS",
  [anon_sym_FUNCTION] = "FUNCTION",
  [anon_sym_PARAM] = "PARAM",
  [anon_sym_LIVE] = "LIVE",
  [anon_sym_ONLY] = "ONLY",
  [anon_sym_OMIT] = "OMIT",
  [anon_sym_OPTION] = "OPTION",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_AND] = "AND",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_OR] = "OR",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_EQ] = "=",
  [anon_sym_IS] = "IS",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_ISNOT] = "IS NOT",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_QMARK_TILDE] = "\?~",
  [anon_sym_STAR_TILDE] = "*~",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_x] = "x",
  [anon_sym_SLASH] = "/",
  [anon_sym_] = "÷",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_IN] = "IN",
  [anon_sym_CONTAINS] = "CONTAINS",
  [anon_sym_2] = "∋",
  [anon_sym_CONTAINSNOT] = "CONTAINSNOT",
  [anon_sym_3] = "∌",
  [anon_sym_CONTAINSALL] = "CONTAINSALL",
  [anon_sym_4] = "⊇",
  [anon_sym_CONTAINSANY] = "CONTAINSANY",
  [anon_sym_5] = "⊃",
  [anon_sym_CONTAINSNONE] = "CONTAINSNONE",
  [anon_sym_6] = "⊅",
  [anon_sym_INSIDE] = "INSIDE",
  [anon_sym_7] = "∈",
  [anon_sym_NOTINSIDE] = "NOTINSIDE",
  [anon_sym_NOTIN] = "NOT IN",
  [anon_sym_8] = "∉",
  [anon_sym_ALLINSIDE] = "ALLINSIDE",
  [anon_sym_9] = "⊆",
  [anon_sym_ANYINSIDE] = "ANYINSIDE",
  [anon_sym_10] = "⊂",
  [anon_sym_NONEINSIDE] = "NONEINSIDE",
  [anon_sym_11] = "⊄",
  [anon_sym_OUTSIDE] = "OUTSIDE",
  [anon_sym_INTERSECTS] = "INTERSECTS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [aux_sym_function_token1] = "function_token1",
  [aux_sym_function_token2] = "function_token2",
  [aux_sym_function_token3] = "function_token3",
  [anon_sym_count] = "count",
  [aux_sym_function_token4] = "function_token4",
  [aux_sym_function_token5] = "function_token5",
  [aux_sym_function_token6] = "function_token6",
  [aux_sym_function_token7] = "function_token7",
  [aux_sym_function_token8] = "function_token8",
  [aux_sym_function_token9] = "function_token9",
  [aux_sym_function_token10] = "function_token10",
  [aux_sym_function_token11] = "function_token11",
  [aux_sym_function_token12] = "function_token12",
  [aux_sym_function_token13] = "function_token13",
  [aux_sym_function_token14] = "function_token14",
  [aux_sym_function_token15] = "function_token15",
  [aux_sym_function_token16] = "function_token16",
  [aux_sym_function_token17] = "function_token17",
  [anon_sym_any] = "any",
  [anon_sym_array] = "array",
  [anon_sym_bool] = "bool",
  [anon_sym_datetime] = "datetime",
  [anon_sym_decimal] = "decimal",
  [anon_sym_duration] = "duration",
  [anon_sym_float] = "float",
  [anon_sym_int] = "int",
  [anon_sym_number] = "number",
  [anon_sym_object] = "object",
  [anon_sym_string] = "string",
  [anon_sym_record] = "record",
  [anon_sym_option] = "option",
  [anon_sym_geometry] = "geometry",
  [anon_sym_EDDSA] = "EDDSA",
  [anon_sym_ES256] = "ES256",
  [anon_sym_ES384] = "ES384",
  [anon_sym_ES512] = "ES512",
  [anon_sym_HS256] = "HS256",
  [anon_sym_HS384] = "HS384",
  [anon_sym_HS512] = "HS512",
  [anon_sym_PS256] = "PS256",
  [anon_sym_PS384] = "PS384",
  [anon_sym_PS512] = "PS512",
  [anon_sym_RS256] = "RS256",
  [anon_sym_RS384] = "RS384",
  [anon_sym_RS512] = "RS512",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_null] = "null",
  [anon_sym_NULL] = "NULL",
  [anon_sym_none] = "none",
  [anon_sym_NONE] = "NONE",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token3] = "string_token3",
  [sym_source_file] = "source_file",
  [sym_token] = "token",
  [sym_scripting_function] = "scripting_function",
  [sym_scripting_content] = "scripting_content",
  [sym__scripting_statement] = "_scripting_statement",
  [sym_future] = "future",
  [sym_casting] = "casting",
  [sym_property] = "property",
  [sym_identifier] = "identifier",
  [sym_duration] = "duration",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_record] = "record",
  [sym_keyword] = "keyword",
  [sym_operator] = "operator",
  [sym_punctuation] = "punctuation",
  [sym_delimiter] = "delimiter",
  [sym_function] = "function",
  [sym_type] = "type",
  [sym_datatype] = "datatype",
  [sym_algotype] = "algotype",
  [sym_bool] = "bool",
  [sym_nothing] = "nothing",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_scripting_content_repeat1] = "scripting_content_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = anon_sym_function_LPAREN_RPAREN_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [anon_sym_RBRACE_COMMA] = anon_sym_RBRACE_COMMA,
  [aux_sym_future_token1] = aux_sym_future_token1,
  [aux_sym_casting_token1] = aux_sym_casting_token1,
  [aux_sym_property_token1] = aux_sym_property_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_duration_token1] = aux_sym_duration_token1,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_record_token1] = aux_sym_record_token1,
  [aux_sym_record_token2] = aux_sym_record_token2,
  [anon_sym_USE] = anon_sym_USE,
  [anon_sym_NS] = anon_sym_NS,
  [anon_sym_DB] = anon_sym_DB,
  [anon_sym_LET] = anon_sym_LET,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_TRANSACTION] = anon_sym_TRANSACTION,
  [anon_sym_CANCEL] = anon_sym_CANCEL,
  [anon_sym_COMMIT] = anon_sym_COMMIT,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_SPLIT] = anon_sym_SPLIT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [anon_sym_BY] = anon_sym_BY,
  [anon_sym_ORDER] = anon_sym_ORDER,
  [anon_sym_COLLATE] = anon_sym_COLLATE,
  [anon_sym_NUMERIC] = anon_sym_NUMERIC,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_LIMIT] = anon_sym_LIMIT,
  [anon_sym_START] = anon_sym_START,
  [anon_sym_FETCH] = anon_sym_FETCH,
  [anon_sym_TIMEOUT] = anon_sym_TIMEOUT,
  [anon_sym_PARALLEL] = anon_sym_PARALLEL,
  [anon_sym_INSERT] = anon_sym_INSERT,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_INTO] = anon_sym_INTO,
  [anon_sym_VALUES] = anon_sym_VALUES,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_DUPLICATE] = anon_sym_DUPLICATE,
  [anon_sym_KEY] = anon_sym_KEY,
  [anon_sym_UPDATE] = anon_sym_UPDATE,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_CONTENT] = anon_sym_CONTENT,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [anon_sym_BEFORE] = anon_sym_BEFORE,
  [anon_sym_AFTER] = anon_sym_AFTER,
  [anon_sym_DIFF] = anon_sym_DIFF,
  [anon_sym_MERGE] = anon_sym_MERGE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [anon_sym_RELATE] = anon_sym_RELATE,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_NAMESPACE] = anon_sym_NAMESPACE,
  [anon_sym_DATABASE] = anon_sym_DATABASE,
  [anon_sym_USER] = anon_sym_USER,
  [anon_sym_PASSWORD] = anon_sym_PASSWORD,
  [anon_sym_PASSHASH] = anon_sym_PASSHASH,
  [anon_sym_TOKEN] = anon_sym_TOKEN,
  [anon_sym_SCOPE] = anon_sym_SCOPE,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_VALUE] = anon_sym_VALUE,
  [anon_sym_SESSION] = anon_sym_SESSION,
  [anon_sym_SIGNUP] = anon_sym_SIGNUP,
  [anon_sym_SIGNIN] = anon_sym_SIGNIN,
  [anon_sym_TABLE] = anon_sym_TABLE,
  [anon_sym_DROP] = anon_sym_DROP,
  [anon_sym_SCHEMAFULL] = anon_sym_SCHEMAFULL,
  [anon_sym_SCHEMALESS] = anon_sym_SCHEMALESS,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_PERMISSIONS] = anon_sym_PERMISSIONS,
  [anon_sym_FULL] = anon_sym_FULL,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_EVENT] = anon_sym_EVENT,
  [anon_sym_WHEN] = anon_sym_WHEN,
  [anon_sym_ASSERT] = anon_sym_ASSERT,
  [anon_sym_INDEX] = anon_sym_INDEX,
  [anon_sym_FIELD] = anon_sym_FIELD,
  [anon_sym_FIELDS] = anon_sym_FIELDS,
  [anon_sym_COLUMNS] = anon_sym_COLUMNS,
  [anon_sym_UNIQUE] = anon_sym_UNIQUE,
  [anon_sym_DEFAULT] = anon_sym_DEFAULT,
  [anon_sym_READONLY] = anon_sym_READONLY,
  [anon_sym_REMOVE] = anon_sym_REMOVE,
  [anon_sym_SLEEP] = anon_sym_SLEEP,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_KV] = anon_sym_KV,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_OUT] = anon_sym_OUT,
  [anon_sym_IFNOT] = anon_sym_IFNOT,
  [anon_sym_EXISTS] = anon_sym_EXISTS,
  [anon_sym_FUNCTION] = anon_sym_FUNCTION,
  [anon_sym_PARAM] = anon_sym_PARAM,
  [anon_sym_LIVE] = anon_sym_LIVE,
  [anon_sym_ONLY] = anon_sym_ONLY,
  [anon_sym_OMIT] = anon_sym_OMIT,
  [anon_sym_OPTION] = anon_sym_OPTION,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_ISNOT] = anon_sym_ISNOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_QMARK_TILDE] = anon_sym_QMARK_TILDE,
  [anon_sym_STAR_TILDE] = anon_sym_STAR_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_CONTAINS] = anon_sym_CONTAINS,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_CONTAINSNOT] = anon_sym_CONTAINSNOT,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_CONTAINSALL] = anon_sym_CONTAINSALL,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_CONTAINSANY] = anon_sym_CONTAINSANY,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_CONTAINSNONE] = anon_sym_CONTAINSNONE,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_INSIDE] = anon_sym_INSIDE,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_NOTINSIDE] = anon_sym_NOTINSIDE,
  [anon_sym_NOTIN] = anon_sym_NOTIN,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_ALLINSIDE] = anon_sym_ALLINSIDE,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_ANYINSIDE] = anon_sym_ANYINSIDE,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_NONEINSIDE] = anon_sym_NONEINSIDE,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_OUTSIDE] = anon_sym_OUTSIDE,
  [anon_sym_INTERSECTS] = anon_sym_INTERSECTS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_function_token1] = aux_sym_function_token1,
  [aux_sym_function_token2] = aux_sym_function_token2,
  [aux_sym_function_token3] = aux_sym_function_token3,
  [anon_sym_count] = anon_sym_count,
  [aux_sym_function_token4] = aux_sym_function_token4,
  [aux_sym_function_token5] = aux_sym_function_token5,
  [aux_sym_function_token6] = aux_sym_function_token6,
  [aux_sym_function_token7] = aux_sym_function_token7,
  [aux_sym_function_token8] = aux_sym_function_token8,
  [aux_sym_function_token9] = aux_sym_function_token9,
  [aux_sym_function_token10] = aux_sym_function_token10,
  [aux_sym_function_token11] = aux_sym_function_token11,
  [aux_sym_function_token12] = aux_sym_function_token12,
  [aux_sym_function_token13] = aux_sym_function_token13,
  [aux_sym_function_token14] = aux_sym_function_token14,
  [aux_sym_function_token15] = aux_sym_function_token15,
  [aux_sym_function_token16] = aux_sym_function_token16,
  [aux_sym_function_token17] = aux_sym_function_token17,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_geometry] = anon_sym_geometry,
  [anon_sym_EDDSA] = anon_sym_EDDSA,
  [anon_sym_ES256] = anon_sym_ES256,
  [anon_sym_ES384] = anon_sym_ES384,
  [anon_sym_ES512] = anon_sym_ES512,
  [anon_sym_HS256] = anon_sym_HS256,
  [anon_sym_HS384] = anon_sym_HS384,
  [anon_sym_HS512] = anon_sym_HS512,
  [anon_sym_PS256] = anon_sym_PS256,
  [anon_sym_PS384] = anon_sym_PS384,
  [anon_sym_PS512] = anon_sym_PS512,
  [anon_sym_RS256] = anon_sym_RS256,
  [anon_sym_RS384] = anon_sym_RS384,
  [anon_sym_RS512] = anon_sym_RS512,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_NONE] = anon_sym_NONE,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_source_file] = sym_source_file,
  [sym_token] = sym_token,
  [sym_scripting_function] = sym_scripting_function,
  [sym_scripting_content] = sym_scripting_content,
  [sym__scripting_statement] = sym__scripting_statement,
  [sym_future] = sym_future,
  [sym_casting] = sym_casting,
  [sym_property] = sym_property,
  [sym_identifier] = sym_identifier,
  [sym_duration] = sym_duration,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_record] = sym_record,
  [sym_keyword] = sym_keyword,
  [sym_operator] = sym_operator,
  [sym_punctuation] = sym_punctuation,
  [sym_delimiter] = sym_delimiter,
  [sym_function] = sym_function,
  [sym_type] = sym_type,
  [sym_datatype] = sym_datatype,
  [sym_algotype] = sym_algotype,
  [sym_bool] = sym_bool,
  [sym_nothing] = sym_nothing,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_scripting_content_repeat1] = aux_sym_scripting_content_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function_LPAREN_RPAREN_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_future_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_casting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_duration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRANSACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CANCEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPLIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORDER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NUMERIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_START] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FETCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIMEOUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARALLEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUPLICATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KEY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UPDATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEFORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AFTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MERGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RELATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAMESPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATABASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PASSWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PASSHASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TOKEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCOPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SESSION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGNUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SIGNIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TABLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMAFULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMALESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERMISSIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EVENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INDEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLUMNS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNIQUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFAULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_READONLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REMOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLEEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IFNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ONLY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSNOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINSNONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALLINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANYINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONEINSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OUTSIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERSECTS] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_token17] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_geometry] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EDDSA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ES512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS384] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS512] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_function] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting_content] = {
    .visible = true,
    .named = true,
  },
  [sym__scripting_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_future] = {
    .visible = true,
    .named = true,
  },
  [sym_casting] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_punctuation] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_algotype] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scripting_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 24,
  [33] = 23,
  [34] = 22,
  [35] = 27,
  [36] = 8,
  [37] = 26,
  [38] = 38,
  [39] = 20,
  [40] = 19,
  [41] = 25,
  [42] = 38,
  [43] = 10,
  [44] = 11,
  [45] = 12,
  [46] = 13,
  [47] = 14,
  [48] = 15,
  [49] = 16,
  [50] = 17,
  [51] = 18,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 55,
  [60] = 54,
  [61] = 57,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(851);
      if (lookahead == '#') ADVANCE(844);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(774);
      if (lookahead == ')') ADVANCE(775);
      if (lookahead == '*') ADVANCE(744);
      if (lookahead == '+') ADVANCE(741);
      if (lookahead == ',') ADVANCE(783);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead == '/') ADVANCE(747);
      if (lookahead == ':') ADVANCE(785);
      if (lookahead == ';') ADVANCE(784);
      if (lookahead == '<') ADVANCE(737);
      if (lookahead == '=') ADVANCE(726);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(160);
      if (lookahead == 'G') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(352);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '\\') ADVANCE(848);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'b') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == 'h') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(745);
      if (lookahead == '{') ADVANCE(778);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(780);
      if (lookahead == '~') ADVANCE(733);
      if (lookahead == 247) ADVANCE(748);
      if (lookahead == 8712) ADVANCE(762);
      if (lookahead == 8713) ADVANCE(765);
      if (lookahead == 8715) ADVANCE(752);
      if (lookahead == 8716) ADVANCE(754);
      if (lookahead == 8834) ADVANCE(769);
      if (lookahead == 8835) ADVANCE(758);
      if (lookahead == 8836) ADVANCE(771);
      if (lookahead == 8837) ADVANCE(760);
      if (lookahead == 8838) ADVANCE(767);
      if (lookahead == 8839) ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(843);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(850);
      if (lookahead != 0) ADVANCE(849);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(851);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(774);
      if (lookahead == ')') ADVANCE(775);
      if (lookahead == '*') ADVANCE(744);
      if (lookahead == '+') ADVANCE(741);
      if (lookahead == ',') ADVANCE(783);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(785);
      if (lookahead == ';') ADVANCE(784);
      if (lookahead == '<') ADVANCE(737);
      if (lookahead == '=') ADVANCE(726);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(160);
      if (lookahead == 'G') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(352);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'b') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == 'h') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(745);
      if (lookahead == '{') ADVANCE(778);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(780);
      if (lookahead == '~') ADVANCE(733);
      if (lookahead == 247) ADVANCE(748);
      if (lookahead == 8712) ADVANCE(762);
      if (lookahead == 8713) ADVANCE(765);
      if (lookahead == 8715) ADVANCE(752);
      if (lookahead == 8716) ADVANCE(754);
      if (lookahead == 8834) ADVANCE(769);
      if (lookahead == 8835) ADVANCE(758);
      if (lookahead == 8836) ADVANCE(771);
      if (lookahead == 8837) ADVANCE(760);
      if (lookahead == 8838) ADVANCE(767);
      if (lookahead == 8839) ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(851);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(774);
      if (lookahead == ')') ADVANCE(775);
      if (lookahead == '*') ADVANCE(744);
      if (lookahead == '+') ADVANCE(741);
      if (lookahead == ',') ADVANCE(783);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(785);
      if (lookahead == ';') ADVANCE(784);
      if (lookahead == '<') ADVANCE(737);
      if (lookahead == '=') ADVANCE(726);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(160);
      if (lookahead == 'G') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(352);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'b') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == 'h') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(745);
      if (lookahead == '{') ADVANCE(778);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(779);
      if (lookahead == '~') ADVANCE(733);
      if (lookahead == 247) ADVANCE(748);
      if (lookahead == 8712) ADVANCE(762);
      if (lookahead == 8713) ADVANCE(765);
      if (lookahead == 8715) ADVANCE(752);
      if (lookahead == 8716) ADVANCE(754);
      if (lookahead == 8834) ADVANCE(769);
      if (lookahead == 8835) ADVANCE(758);
      if (lookahead == 8836) ADVANCE(771);
      if (lookahead == 8837) ADVANCE(760);
      if (lookahead == 8838) ADVANCE(767);
      if (lookahead == 8839) ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(853);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(720);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '\\') ADVANCE(848);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0) ADVANCE(846);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(725);
      if (lookahead == '=') ADVANCE(731);
      if (lookahead == '?') ADVANCE(724);
      if (lookahead == '~') ADVANCE(735);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(728);
      if (lookahead == '~') ADVANCE(734);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(764);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(712);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(729);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == '|') ADVANCE(722);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 74:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(796);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(795);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(797);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(798);
      END_STATE();
    case 79:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(800);
      END_STATE();
    case 80:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 81:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 82:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 83:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 84:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 85:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      END_STATE();
    case 86:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 87:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 88:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(618);
      END_STATE();
    case 93:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 94:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead == '`' ||
          lookahead == 10217) ADVANCE(622);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(851);
      if (lookahead == '#') ADVANCE(844);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(845);
      if (lookahead == '(') ADVANCE(774);
      if (lookahead == ')') ADVANCE(775);
      if (lookahead == '*') ADVANCE(744);
      if (lookahead == '+') ADVANCE(741);
      if (lookahead == ',') ADVANCE(783);
      if (lookahead == '-') ADVANCE(742);
      if (lookahead == '/') ADVANCE(747);
      if (lookahead == ':') ADVANCE(785);
      if (lookahead == ';') ADVANCE(784);
      if (lookahead == '<') ADVANCE(737);
      if (lookahead == '=') ADVANCE(726);
      if (lookahead == '>') ADVANCE(739);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(160);
      if (lookahead == 'G') ADVANCE(397);
      if (lookahead == 'H') ADVANCE(427);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead == 'K') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'M') ADVANCE(167);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == 'U') ADVANCE(352);
      if (lookahead == 'V') ADVANCE(163);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead == 'b') ADVANCE(552);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(477);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == 'h') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(547);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == 'x') ADVANCE(745);
      if (lookahead == '{') ADVANCE(778);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '}') ADVANCE(779);
      if (lookahead == '~') ADVANCE(733);
      if (lookahead == 247) ADVANCE(748);
      if (lookahead == 8712) ADVANCE(762);
      if (lookahead == 8713) ADVANCE(765);
      if (lookahead == 8715) ADVANCE(752);
      if (lookahead == 8716) ADVANCE(754);
      if (lookahead == 8834) ADVANCE(769);
      if (lookahead == 8835) ADVANCE(758);
      if (lookahead == 8836) ADVANCE(771);
      if (lookahead == 8837) ADVANCE(760);
      if (lookahead == 8838) ADVANCE(767);
      if (lookahead == 8839) ADVANCE(756);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('J' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_function_LPAREN_RPAREN_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_future_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_casting_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_property_token1);
      if (lookahead == '`' ||
          lookahead == 10216) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(130);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(132);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '3') ADVANCE(149);
      if (lookahead == '5') ADVANCE(125);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(823);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(826);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(829);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(832);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '3') ADVANCE(150);
      if (lookahead == '5') ADVANCE(126);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(143);
      if (lookahead == '3') ADVANCE(151);
      if (lookahead == '5') ADVANCE(127);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '3') ADVANCE(152);
      if (lookahead == '5') ADVANCE(128);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(822);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(825);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(828);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '4') ADVANCE(831);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(145);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(146);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(147);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '5') ADVANCE(148);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(821);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(824);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(827);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '6') ADVANCE(830);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(137);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(138);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(139);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'O') ADVANCE(307);
      if (lookahead == 'R') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead == 'S') ADVANCE(624);
      if (lookahead == 'U') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(399);
      if (lookahead == 'E') ADVANCE(398);
      if (lookahead == 'S') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(180);
      if (lookahead == 'H') ADVANCE(248);
      if (lookahead == 'I') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(710);
      if (lookahead == 'R') ADVANCE(168);
      if (lookahead == 'Y') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(451);
      if (lookahead == 'B') ADVANCE(625);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'I') ADVANCE(271);
      if (lookahead == 'R') ADVANCE(372);
      if (lookahead == 'U') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(327);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(393);
      if (lookahead == 'R') ADVANCE(373);
      if (lookahead == 'U') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(205);
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(370);
      if (lookahead == 'T') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead == 'I') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'E') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(363);
      if (lookahead == 'U') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'E') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'B') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(282);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(261);
      if (lookahead == 'P') ADVANCE(328);
      if (lookahead == 'T') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(198);
      if (lookahead == 'L') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == 'V') ADVANCE(245);
      if (lookahead == 'X') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(721);
      if (lookahead == 'Y') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(272);
      if (lookahead == 'Y') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(473);
      if (lookahead == 'V') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(434);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(408);
      if (lookahead == 'O') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'E') ADVANCE(404);
      if (lookahead == 'I') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(453);
      if (lookahead == 'L') ADVANCE(316);
      if (lookahead == 'N') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(688);
      if (lookahead == 'T') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(364);
      if (lookahead == 'N') ADVANCE(750);
      if (lookahead == 'S') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(165);
      if (lookahead == 'L') ADVANCE(264);
      if (lookahead == 'S') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(375);
      if (lookahead == 'G') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'F') ADVANCE(467);
      if (lookahead == 'L') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'G') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'G') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(169);
      if (lookahead == 'W') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'H') ADVANCE(251);
      if (lookahead == 'O') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(348);
      if (lookahead == 'U') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(330);
      if (lookahead == 'M') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(308);
      if (lookahead == 'N') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(309);
      if (lookahead == 'M') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(329);
      if (lookahead == 'M') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(313);
      if (lookahead == 'N') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(262);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(290);
      if (lookahead == 'N') ADVANCE(656);
      if (lookahead == 'P') ADVANCE(452);
      if (lookahead == 'R') ADVANCE(723);
      if (lookahead == 'U') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'V') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'M') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(283);
      if (lookahead == 'P') ADVANCE(206);
      if (lookahead == 'S') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'T') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(243);
      if (lookahead == 'T') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'N') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'P') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'Q') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'V') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'X') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'Y') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'Y') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'Y') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'Y') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == 'u') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'u') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(530);
      if (lookahead == 'p') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'l') ADVANCE(511);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'y') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'h') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'r') ADVANCE(598);
      if (lookahead == 'y') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'j') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 's') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead == 's') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(597);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead == 'u') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'p') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 's') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 's') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'y') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_duration_token1);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'd' ||
          lookahead == 'h' ||
          lookahead == 'm' ||
          lookahead == 's' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_record_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_record_token2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_USE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_NS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DB);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_LET);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_TRANSACTION);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_CANCEL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_COMMIT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_THEN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_END);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_SPLIT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_GROUP);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_BY);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_ORDER);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_COLLATE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_NUMERIC);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_ASC);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DESC);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_FETCH);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_TIMEOUT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_PARALLEL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_INSERT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_INTO);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_VALUES);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'L') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_DUPLICATE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_KEY);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_UPDATE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_CREATE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_CONTENT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_BEFORE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_AFTER);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DIFF);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_MERGE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_RELATE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_NAMESPACE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DATABASE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_USER);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_PASSWORD);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_PASSHASH);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_TOKEN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_SCOPE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_VALUE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_SESSION);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_SIGNUP);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_SIGNIN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_TABLE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_SCHEMAFULL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_SCHEMALESS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_AS);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'S') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_PERMISSIONS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_FULL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_select);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_update);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_EVENT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_ASSERT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_INDEX);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_FIELD);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_FIELDS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_COLUMNS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_UNIQUE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_DEFAULT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_READONLY);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_REMOVE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_SLEEP);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_KV);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_TO);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'K') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_OUT);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'S') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_IFNOT);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_EXISTS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_FUNCTION);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_PARAM);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_LIVE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_ONLY);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_OMIT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_OPTION);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_AND);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_OR);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(730);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ISNOT);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_QMARK_TILDE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_STAR_TILDE);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '=') ADVANCE(738);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(69);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(844);
      if (lookahead == '>') ADVANCE(781);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(781);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(749);
      if (lookahead == '=') ADVANCE(732);
      if (lookahead == '~') ADVANCE(736);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(844);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(369);
      if (lookahead == 'S') ADVANCE(266);
      if (lookahead == 'T') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(323);
      if (lookahead == 'N') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_CONTAINSNOT);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_CONTAINSALL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_CONTAINSANY);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_CONTAINSNONE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_INSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_NOTINSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_ALLINSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_ANYINSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_NONEINSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_OUTSIDE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_INTERSECTS);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == ';') ADVANCE(102);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_function_token1);
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (lookahead == ':') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_function_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_function_token3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_count);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_function_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (lookahead == ':') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(793);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_function_token5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_function_token6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_function_token7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_function_token8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_function_token9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_function_token10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (lookahead == ':') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_function_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_function_token12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_function_token14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_function_token15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_function_token16);
      if (lookahead == ':') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == ':') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_decimal);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_number);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == ':') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_geometry);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_EDDSA);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_ES256);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_ES384);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_ES512);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_HS256);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_HS384);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_HS512);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_PS256);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_PS384);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_PS512);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_RS256);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_RS384);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_RS512);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(602);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(842);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(841);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(842);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '*') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(844);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(846);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(849);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(852);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 99},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 99},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 99},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 99},
  [23] = {.lex_state = 99},
  [24] = {.lex_state = 99},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 99},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 99},
  [38] = {.lex_state = 99},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [anon_sym_RBRACE_COMMA] = ACTIONS(1),
    [aux_sym_future_token1] = ACTIONS(1),
    [aux_sym_casting_token1] = ACTIONS(1),
    [aux_sym_property_token1] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_duration_token1] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_record_token1] = ACTIONS(1),
    [aux_sym_record_token2] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [anon_sym_NS] = ACTIONS(1),
    [anon_sym_DB] = ACTIONS(1),
    [anon_sym_LET] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_TRANSACTION] = ACTIONS(1),
    [anon_sym_CANCEL] = ACTIONS(1),
    [anon_sym_COMMIT] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_SPLIT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_GROUP] = ACTIONS(1),
    [anon_sym_BY] = ACTIONS(1),
    [anon_sym_ORDER] = ACTIONS(1),
    [anon_sym_COLLATE] = ACTIONS(1),
    [anon_sym_NUMERIC] = ACTIONS(1),
    [anon_sym_ASC] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_LIMIT] = ACTIONS(1),
    [anon_sym_START] = ACTIONS(1),
    [anon_sym_FETCH] = ACTIONS(1),
    [anon_sym_TIMEOUT] = ACTIONS(1),
    [anon_sym_PARALLEL] = ACTIONS(1),
    [anon_sym_INSERT] = ACTIONS(1),
    [anon_sym_IGNORE] = ACTIONS(1),
    [anon_sym_INTO] = ACTIONS(1),
    [anon_sym_VALUES] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_DUPLICATE] = ACTIONS(1),
    [anon_sym_KEY] = ACTIONS(1),
    [anon_sym_UPDATE] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_CONTENT] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_RETURN] = ACTIONS(1),
    [anon_sym_BEFORE] = ACTIONS(1),
    [anon_sym_AFTER] = ACTIONS(1),
    [anon_sym_DIFF] = ACTIONS(1),
    [anon_sym_MERGE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_RELATE] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_NAMESPACE] = ACTIONS(1),
    [anon_sym_DATABASE] = ACTIONS(1),
    [anon_sym_USER] = ACTIONS(1),
    [anon_sym_PASSWORD] = ACTIONS(1),
    [anon_sym_PASSHASH] = ACTIONS(1),
    [anon_sym_TOKEN] = ACTIONS(1),
    [anon_sym_SCOPE] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_VALUE] = ACTIONS(1),
    [anon_sym_SESSION] = ACTIONS(1),
    [anon_sym_SIGNUP] = ACTIONS(1),
    [anon_sym_SIGNIN] = ACTIONS(1),
    [anon_sym_TABLE] = ACTIONS(1),
    [anon_sym_DROP] = ACTIONS(1),
    [anon_sym_SCHEMAFULL] = ACTIONS(1),
    [anon_sym_SCHEMALESS] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_PERMISSIONS] = ACTIONS(1),
    [anon_sym_FULL] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_EVENT] = ACTIONS(1),
    [anon_sym_WHEN] = ACTIONS(1),
    [anon_sym_ASSERT] = ACTIONS(1),
    [anon_sym_INDEX] = ACTIONS(1),
    [anon_sym_FIELD] = ACTIONS(1),
    [anon_sym_FIELDS] = ACTIONS(1),
    [anon_sym_COLUMNS] = ACTIONS(1),
    [anon_sym_UNIQUE] = ACTIONS(1),
    [anon_sym_DEFAULT] = ACTIONS(1),
    [anon_sym_READONLY] = ACTIONS(1),
    [anon_sym_REMOVE] = ACTIONS(1),
    [anon_sym_SLEEP] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_KV] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_OUT] = ACTIONS(1),
    [anon_sym_IFNOT] = ACTIONS(1),
    [anon_sym_EXISTS] = ACTIONS(1),
    [anon_sym_FUNCTION] = ACTIONS(1),
    [anon_sym_PARAM] = ACTIONS(1),
    [anon_sym_LIVE] = ACTIONS(1),
    [anon_sym_ONLY] = ACTIONS(1),
    [anon_sym_OMIT] = ACTIONS(1),
    [anon_sym_OPTION] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_ISNOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_QMARK_TILDE] = ACTIONS(1),
    [anon_sym_STAR_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_CONTAINS] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_CONTAINSNOT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_CONTAINSALL] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_CONTAINSANY] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_CONTAINSNONE] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_INSIDE] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_NOTINSIDE] = ACTIONS(1),
    [anon_sym_NOTIN] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_ALLINSIDE] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_ANYINSIDE] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_NONEINSIDE] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_OUTSIDE] = ACTIONS(1),
    [anon_sym_INTERSECTS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_function_token1] = ACTIONS(1),
    [aux_sym_function_token2] = ACTIONS(1),
    [aux_sym_function_token3] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [aux_sym_function_token4] = ACTIONS(1),
    [aux_sym_function_token5] = ACTIONS(1),
    [aux_sym_function_token6] = ACTIONS(1),
    [aux_sym_function_token7] = ACTIONS(1),
    [aux_sym_function_token8] = ACTIONS(1),
    [aux_sym_function_token9] = ACTIONS(1),
    [aux_sym_function_token10] = ACTIONS(1),
    [aux_sym_function_token11] = ACTIONS(1),
    [aux_sym_function_token12] = ACTIONS(1),
    [aux_sym_function_token13] = ACTIONS(1),
    [aux_sym_function_token14] = ACTIONS(1),
    [aux_sym_function_token15] = ACTIONS(1),
    [aux_sym_function_token16] = ACTIONS(1),
    [aux_sym_function_token17] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_geometry] = ACTIONS(1),
    [anon_sym_EDDSA] = ACTIONS(1),
    [anon_sym_ES256] = ACTIONS(1),
    [anon_sym_ES384] = ACTIONS(1),
    [anon_sym_ES512] = ACTIONS(1),
    [anon_sym_HS256] = ACTIONS(1),
    [anon_sym_HS384] = ACTIONS(1),
    [anon_sym_HS512] = ACTIONS(1),
    [anon_sym_PS256] = ACTIONS(1),
    [anon_sym_PS384] = ACTIONS(1),
    [anon_sym_PS512] = ACTIONS(1),
    [anon_sym_RS256] = ACTIONS(1),
    [anon_sym_RS384] = ACTIONS(1),
    [anon_sym_RS512] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(68),
    [sym_token] = STATE(7),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_function] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [aux_sym_duration_token1] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_record_token1] = ACTIONS(21),
    [aux_sym_record_token2] = ACTIONS(21),
    [anon_sym_USE] = ACTIONS(23),
    [anon_sym_NS] = ACTIONS(23),
    [anon_sym_DB] = ACTIONS(23),
    [anon_sym_LET] = ACTIONS(23),
    [anon_sym_BEGIN] = ACTIONS(23),
    [anon_sym_TRANSACTION] = ACTIONS(23),
    [anon_sym_CANCEL] = ACTIONS(23),
    [anon_sym_COMMIT] = ACTIONS(23),
    [anon_sym_IF] = ACTIONS(23),
    [anon_sym_ELSE] = ACTIONS(23),
    [anon_sym_THEN] = ACTIONS(23),
    [anon_sym_END] = ACTIONS(23),
    [anon_sym_SELECT] = ACTIONS(23),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_WHERE] = ACTIONS(23),
    [anon_sym_SPLIT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_GROUP] = ACTIONS(23),
    [anon_sym_BY] = ACTIONS(23),
    [anon_sym_ORDER] = ACTIONS(23),
    [anon_sym_COLLATE] = ACTIONS(23),
    [anon_sym_NUMERIC] = ACTIONS(23),
    [anon_sym_ASC] = ACTIONS(23),
    [anon_sym_DESC] = ACTIONS(23),
    [anon_sym_LIMIT] = ACTIONS(23),
    [anon_sym_START] = ACTIONS(23),
    [anon_sym_FETCH] = ACTIONS(23),
    [anon_sym_TIMEOUT] = ACTIONS(23),
    [anon_sym_PARALLEL] = ACTIONS(23),
    [anon_sym_INSERT] = ACTIONS(23),
    [anon_sym_IGNORE] = ACTIONS(23),
    [anon_sym_INTO] = ACTIONS(23),
    [anon_sym_VALUES] = ACTIONS(23),
    [anon_sym_ON] = ACTIONS(23),
    [anon_sym_DUPLICATE] = ACTIONS(23),
    [anon_sym_KEY] = ACTIONS(23),
    [anon_sym_UPDATE] = ACTIONS(23),
    [anon_sym_CREATE] = ACTIONS(23),
    [anon_sym_CONTENT] = ACTIONS(23),
    [anon_sym_SET] = ACTIONS(23),
    [anon_sym_RETURN] = ACTIONS(23),
    [anon_sym_BEFORE] = ACTIONS(23),
    [anon_sym_AFTER] = ACTIONS(23),
    [anon_sym_DIFF] = ACTIONS(23),
    [anon_sym_MERGE] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_RELATE] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_DEFINE] = ACTIONS(23),
    [anon_sym_NAMESPACE] = ACTIONS(23),
    [anon_sym_DATABASE] = ACTIONS(23),
    [anon_sym_USER] = ACTIONS(23),
    [anon_sym_PASSWORD] = ACTIONS(23),
    [anon_sym_PASSHASH] = ACTIONS(23),
    [anon_sym_TOKEN] = ACTIONS(23),
    [anon_sym_SCOPE] = ACTIONS(23),
    [anon_sym_TYPE] = ACTIONS(23),
    [anon_sym_VALUE] = ACTIONS(23),
    [anon_sym_SESSION] = ACTIONS(23),
    [anon_sym_SIGNUP] = ACTIONS(23),
    [anon_sym_SIGNIN] = ACTIONS(23),
    [anon_sym_TABLE] = ACTIONS(23),
    [anon_sym_DROP] = ACTIONS(23),
    [anon_sym_SCHEMAFULL] = ACTIONS(23),
    [anon_sym_SCHEMALESS] = ACTIONS(23),
    [anon_sym_AS] = ACTIONS(23),
    [anon_sym_PERMISSIONS] = ACTIONS(23),
    [anon_sym_FULL] = ACTIONS(23),
    [anon_sym_FOR] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_update] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_EVENT] = ACTIONS(23),
    [anon_sym_WHEN] = ACTIONS(23),
    [anon_sym_ASSERT] = ACTIONS(23),
    [anon_sym_INDEX] = ACTIONS(23),
    [anon_sym_FIELD] = ACTIONS(23),
    [anon_sym_FIELDS] = ACTIONS(23),
    [anon_sym_COLUMNS] = ACTIONS(23),
    [anon_sym_UNIQUE] = ACTIONS(23),
    [anon_sym_DEFAULT] = ACTIONS(23),
    [anon_sym_READONLY] = ACTIONS(23),
    [anon_sym_REMOVE] = ACTIONS(23),
    [anon_sym_SLEEP] = ACTIONS(23),
    [anon_sym_INFO] = ACTIONS(23),
    [anon_sym_KV] = ACTIONS(23),
    [anon_sym_TO] = ACTIONS(23),
    [anon_sym_OUT] = ACTIONS(23),
    [anon_sym_IFNOT] = ACTIONS(25),
    [anon_sym_EXISTS] = ACTIONS(23),
    [anon_sym_FUNCTION] = ACTIONS(23),
    [anon_sym_PARAM] = ACTIONS(23),
    [anon_sym_LIVE] = ACTIONS(23),
    [anon_sym_ONLY] = ACTIONS(23),
    [anon_sym_OMIT] = ACTIONS(23),
    [anon_sym_OPTION] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_QMARK_QMARK] = ACTIONS(27),
    [anon_sym_QMARK_COLON] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_IS] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_ISNOT] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_QMARK_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG_TILDE] = ACTIONS(27),
    [anon_sym_QMARK_TILDE] = ACTIONS(27),
    [anon_sym_STAR_TILDE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_IN] = ACTIONS(29),
    [anon_sym_CONTAINS] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_CONTAINSNOT] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_CONTAINSALL] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_CONTAINSANY] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_CONTAINSNONE] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_INSIDE] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_NOTINSIDE] = ACTIONS(29),
    [anon_sym_NOTIN] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_ALLINSIDE] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_ANYINSIDE] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_NONEINSIDE] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_OUTSIDE] = ACTIONS(29),
    [anon_sym_INTERSECTS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_LT_DASH] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_function_token1] = ACTIONS(35),
    [aux_sym_function_token2] = ACTIONS(35),
    [aux_sym_function_token3] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(35),
    [aux_sym_function_token5] = ACTIONS(35),
    [aux_sym_function_token6] = ACTIONS(35),
    [aux_sym_function_token7] = ACTIONS(35),
    [aux_sym_function_token8] = ACTIONS(35),
    [aux_sym_function_token9] = ACTIONS(35),
    [aux_sym_function_token10] = ACTIONS(35),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(35),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(35),
    [aux_sym_function_token15] = ACTIONS(35),
    [aux_sym_function_token16] = ACTIONS(35),
    [aux_sym_function_token17] = ACTIONS(37),
    [anon_sym_any] = ACTIONS(39),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_bool] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(39),
    [anon_sym_decimal] = ACTIONS(39),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_int] = ACTIONS(39),
    [anon_sym_number] = ACTIONS(39),
    [anon_sym_object] = ACTIONS(39),
    [anon_sym_string] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(39),
    [anon_sym_option] = ACTIONS(39),
    [anon_sym_geometry] = ACTIONS(39),
    [anon_sym_EDDSA] = ACTIONS(41),
    [anon_sym_ES256] = ACTIONS(41),
    [anon_sym_ES384] = ACTIONS(41),
    [anon_sym_ES512] = ACTIONS(41),
    [anon_sym_HS256] = ACTIONS(41),
    [anon_sym_HS384] = ACTIONS(41),
    [anon_sym_HS512] = ACTIONS(41),
    [anon_sym_PS256] = ACTIONS(41),
    [anon_sym_PS384] = ACTIONS(41),
    [anon_sym_PS512] = ACTIONS(41),
    [anon_sym_RS256] = ACTIONS(41),
    [anon_sym_RS384] = ACTIONS(41),
    [anon_sym_RS512] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_TRUE] = ACTIONS(43),
    [anon_sym_FALSE] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(45),
    [anon_sym_NULL] = ACTIONS(45),
    [anon_sym_none] = ACTIONS(45),
    [anon_sym_NONE] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [2] = {
    [sym_token] = STATE(3),
    [sym_scripting_function] = STATE(32),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_function] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE_SEMI] = ACTIONS(57),
    [anon_sym_RBRACE_COMMA] = ACTIONS(57),
    [aux_sym_future_token1] = ACTIONS(59),
    [aux_sym_casting_token1] = ACTIONS(61),
    [aux_sym_property_token1] = ACTIONS(63),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [aux_sym_duration_token1] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(69),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_record_token1] = ACTIONS(73),
    [aux_sym_record_token2] = ACTIONS(73),
    [anon_sym_USE] = ACTIONS(75),
    [anon_sym_NS] = ACTIONS(75),
    [anon_sym_DB] = ACTIONS(75),
    [anon_sym_LET] = ACTIONS(75),
    [anon_sym_BEGIN] = ACTIONS(75),
    [anon_sym_TRANSACTION] = ACTIONS(75),
    [anon_sym_CANCEL] = ACTIONS(75),
    [anon_sym_COMMIT] = ACTIONS(75),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_ELSE] = ACTIONS(75),
    [anon_sym_THEN] = ACTIONS(75),
    [anon_sym_END] = ACTIONS(75),
    [anon_sym_SELECT] = ACTIONS(75),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_WHERE] = ACTIONS(75),
    [anon_sym_SPLIT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_GROUP] = ACTIONS(75),
    [anon_sym_BY] = ACTIONS(75),
    [anon_sym_ORDER] = ACTIONS(75),
    [anon_sym_COLLATE] = ACTIONS(75),
    [anon_sym_NUMERIC] = ACTIONS(75),
    [anon_sym_ASC] = ACTIONS(75),
    [anon_sym_DESC] = ACTIONS(75),
    [anon_sym_LIMIT] = ACTIONS(75),
    [anon_sym_START] = ACTIONS(75),
    [anon_sym_FETCH] = ACTIONS(75),
    [anon_sym_TIMEOUT] = ACTIONS(75),
    [anon_sym_PARALLEL] = ACTIONS(75),
    [anon_sym_INSERT] = ACTIONS(75),
    [anon_sym_IGNORE] = ACTIONS(75),
    [anon_sym_INTO] = ACTIONS(75),
    [anon_sym_VALUES] = ACTIONS(75),
    [anon_sym_ON] = ACTIONS(75),
    [anon_sym_DUPLICATE] = ACTIONS(75),
    [anon_sym_KEY] = ACTIONS(75),
    [anon_sym_UPDATE] = ACTIONS(75),
    [anon_sym_CREATE] = ACTIONS(75),
    [anon_sym_CONTENT] = ACTIONS(75),
    [anon_sym_SET] = ACTIONS(75),
    [anon_sym_RETURN] = ACTIONS(75),
    [anon_sym_BEFORE] = ACTIONS(75),
    [anon_sym_AFTER] = ACTIONS(75),
    [anon_sym_DIFF] = ACTIONS(75),
    [anon_sym_MERGE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_RELATE] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_DEFINE] = ACTIONS(75),
    [anon_sym_NAMESPACE] = ACTIONS(75),
    [anon_sym_DATABASE] = ACTIONS(75),
    [anon_sym_USER] = ACTIONS(75),
    [anon_sym_PASSWORD] = ACTIONS(75),
    [anon_sym_PASSHASH] = ACTIONS(75),
    [anon_sym_TOKEN] = ACTIONS(75),
    [anon_sym_SCOPE] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(75),
    [anon_sym_VALUE] = ACTIONS(75),
    [anon_sym_SESSION] = ACTIONS(75),
    [anon_sym_SIGNUP] = ACTIONS(75),
    [anon_sym_SIGNIN] = ACTIONS(75),
    [anon_sym_TABLE] = ACTIONS(75),
    [anon_sym_DROP] = ACTIONS(75),
    [anon_sym_SCHEMAFULL] = ACTIONS(75),
    [anon_sym_SCHEMALESS] = ACTIONS(75),
    [anon_sym_AS] = ACTIONS(75),
    [anon_sym_PERMISSIONS] = ACTIONS(75),
    [anon_sym_FULL] = ACTIONS(75),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_select] = ACTIONS(75),
    [anon_sym_update] = ACTIONS(75),
    [anon_sym_create] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_EVENT] = ACTIONS(75),
    [anon_sym_WHEN] = ACTIONS(75),
    [anon_sym_ASSERT] = ACTIONS(75),
    [anon_sym_INDEX] = ACTIONS(75),
    [anon_sym_FIELD] = ACTIONS(75),
    [anon_sym_FIELDS] = ACTIONS(75),
    [anon_sym_COLUMNS] = ACTIONS(75),
    [anon_sym_UNIQUE] = ACTIONS(75),
    [anon_sym_DEFAULT] = ACTIONS(75),
    [anon_sym_READONLY] = ACTIONS(75),
    [anon_sym_REMOVE] = ACTIONS(75),
    [anon_sym_SLEEP] = ACTIONS(75),
    [anon_sym_INFO] = ACTIONS(75),
    [anon_sym_KV] = ACTIONS(75),
    [anon_sym_TO] = ACTIONS(75),
    [anon_sym_OUT] = ACTIONS(75),
    [anon_sym_IFNOT] = ACTIONS(77),
    [anon_sym_EXISTS] = ACTIONS(75),
    [anon_sym_FUNCTION] = ACTIONS(75),
    [anon_sym_PARAM] = ACTIONS(75),
    [anon_sym_LIVE] = ACTIONS(75),
    [anon_sym_ONLY] = ACTIONS(75),
    [anon_sym_OMIT] = ACTIONS(75),
    [anon_sym_OPTION] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [aux_sym_function_token3] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(89),
    [aux_sym_function_token11] = ACTIONS(91),
    [aux_sym_function_token12] = ACTIONS(89),
    [aux_sym_function_token13] = ACTIONS(91),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(89),
    [aux_sym_function_token17] = ACTIONS(91),
    [anon_sym_any] = ACTIONS(93),
    [anon_sym_array] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_datetime] = ACTIONS(93),
    [anon_sym_decimal] = ACTIONS(93),
    [anon_sym_duration] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_number] = ACTIONS(93),
    [anon_sym_object] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_option] = ACTIONS(93),
    [anon_sym_geometry] = ACTIONS(93),
    [anon_sym_EDDSA] = ACTIONS(95),
    [anon_sym_ES256] = ACTIONS(95),
    [anon_sym_ES384] = ACTIONS(95),
    [anon_sym_ES512] = ACTIONS(95),
    [anon_sym_HS256] = ACTIONS(95),
    [anon_sym_HS384] = ACTIONS(95),
    [anon_sym_HS512] = ACTIONS(95),
    [anon_sym_PS256] = ACTIONS(95),
    [anon_sym_PS384] = ACTIONS(95),
    [anon_sym_PS512] = ACTIONS(95),
    [anon_sym_RS256] = ACTIONS(95),
    [anon_sym_RS384] = ACTIONS(95),
    [anon_sym_RS512] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_TRUE] = ACTIONS(97),
    [anon_sym_FALSE] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_NULL] = ACTIONS(99),
    [anon_sym_none] = ACTIONS(99),
    [anon_sym_NONE] = ACTIONS(99),
    [sym_variable] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
  },
  [3] = {
    [sym_token] = STATE(3),
    [sym_scripting_function] = STATE(32),
    [sym__scripting_statement] = STATE(3),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_function] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(3),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE_SEMI] = ACTIONS(110),
    [anon_sym_RBRACE_COMMA] = ACTIONS(110),
    [aux_sym_future_token1] = ACTIONS(112),
    [aux_sym_casting_token1] = ACTIONS(115),
    [aux_sym_property_token1] = ACTIONS(118),
    [aux_sym_identifier_token1] = ACTIONS(121),
    [aux_sym_duration_token1] = ACTIONS(124),
    [aux_sym_constant_token1] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(130),
    [aux_sym_record_token1] = ACTIONS(133),
    [aux_sym_record_token2] = ACTIONS(133),
    [anon_sym_USE] = ACTIONS(136),
    [anon_sym_NS] = ACTIONS(136),
    [anon_sym_DB] = ACTIONS(136),
    [anon_sym_LET] = ACTIONS(136),
    [anon_sym_BEGIN] = ACTIONS(136),
    [anon_sym_TRANSACTION] = ACTIONS(136),
    [anon_sym_CANCEL] = ACTIONS(136),
    [anon_sym_COMMIT] = ACTIONS(136),
    [anon_sym_IF] = ACTIONS(136),
    [anon_sym_ELSE] = ACTIONS(136),
    [anon_sym_THEN] = ACTIONS(136),
    [anon_sym_END] = ACTIONS(136),
    [anon_sym_SELECT] = ACTIONS(136),
    [anon_sym_FROM] = ACTIONS(136),
    [anon_sym_WHERE] = ACTIONS(136),
    [anon_sym_SPLIT] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_GROUP] = ACTIONS(136),
    [anon_sym_BY] = ACTIONS(136),
    [anon_sym_ORDER] = ACTIONS(136),
    [anon_sym_COLLATE] = ACTIONS(136),
    [anon_sym_NUMERIC] = ACTIONS(136),
    [anon_sym_ASC] = ACTIONS(136),
    [anon_sym_DESC] = ACTIONS(136),
    [anon_sym_LIMIT] = ACTIONS(136),
    [anon_sym_START] = ACTIONS(136),
    [anon_sym_FETCH] = ACTIONS(136),
    [anon_sym_TIMEOUT] = ACTIONS(136),
    [anon_sym_PARALLEL] = ACTIONS(136),
    [anon_sym_INSERT] = ACTIONS(136),
    [anon_sym_IGNORE] = ACTIONS(136),
    [anon_sym_INTO] = ACTIONS(136),
    [anon_sym_VALUES] = ACTIONS(136),
    [anon_sym_ON] = ACTIONS(136),
    [anon_sym_DUPLICATE] = ACTIONS(136),
    [anon_sym_KEY] = ACTIONS(136),
    [anon_sym_UPDATE] = ACTIONS(136),
    [anon_sym_CREATE] = ACTIONS(136),
    [anon_sym_CONTENT] = ACTIONS(136),
    [anon_sym_SET] = ACTIONS(136),
    [anon_sym_RETURN] = ACTIONS(136),
    [anon_sym_BEFORE] = ACTIONS(136),
    [anon_sym_AFTER] = ACTIONS(136),
    [anon_sym_DIFF] = ACTIONS(136),
    [anon_sym_MERGE] = ACTIONS(136),
    [anon_sym_PATCH] = ACTIONS(136),
    [anon_sym_RELATE] = ACTIONS(136),
    [anon_sym_DELETE] = ACTIONS(136),
    [anon_sym_DEFINE] = ACTIONS(136),
    [anon_sym_NAMESPACE] = ACTIONS(136),
    [anon_sym_DATABASE] = ACTIONS(136),
    [anon_sym_USER] = ACTIONS(136),
    [anon_sym_PASSWORD] = ACTIONS(136),
    [anon_sym_PASSHASH] = ACTIONS(136),
    [anon_sym_TOKEN] = ACTIONS(136),
    [anon_sym_SCOPE] = ACTIONS(136),
    [anon_sym_TYPE] = ACTIONS(136),
    [anon_sym_VALUE] = ACTIONS(136),
    [anon_sym_SESSION] = ACTIONS(136),
    [anon_sym_SIGNUP] = ACTIONS(136),
    [anon_sym_SIGNIN] = ACTIONS(136),
    [anon_sym_TABLE] = ACTIONS(136),
    [anon_sym_DROP] = ACTIONS(136),
    [anon_sym_SCHEMAFULL] = ACTIONS(136),
    [anon_sym_SCHEMALESS] = ACTIONS(136),
    [anon_sym_AS] = ACTIONS(136),
    [anon_sym_PERMISSIONS] = ACTIONS(136),
    [anon_sym_FULL] = ACTIONS(136),
    [anon_sym_FOR] = ACTIONS(136),
    [anon_sym_select] = ACTIONS(136),
    [anon_sym_update] = ACTIONS(136),
    [anon_sym_create] = ACTIONS(136),
    [anon_sym_delete] = ACTIONS(136),
    [anon_sym_EVENT] = ACTIONS(136),
    [anon_sym_WHEN] = ACTIONS(136),
    [anon_sym_ASSERT] = ACTIONS(136),
    [anon_sym_INDEX] = ACTIONS(136),
    [anon_sym_FIELD] = ACTIONS(136),
    [anon_sym_FIELDS] = ACTIONS(136),
    [anon_sym_COLUMNS] = ACTIONS(136),
    [anon_sym_UNIQUE] = ACTIONS(136),
    [anon_sym_DEFAULT] = ACTIONS(136),
    [anon_sym_READONLY] = ACTIONS(136),
    [anon_sym_REMOVE] = ACTIONS(136),
    [anon_sym_SLEEP] = ACTIONS(136),
    [anon_sym_INFO] = ACTIONS(136),
    [anon_sym_KV] = ACTIONS(136),
    [anon_sym_TO] = ACTIONS(136),
    [anon_sym_OUT] = ACTIONS(136),
    [anon_sym_IFNOT] = ACTIONS(139),
    [anon_sym_EXISTS] = ACTIONS(136),
    [anon_sym_FUNCTION] = ACTIONS(136),
    [anon_sym_PARAM] = ACTIONS(136),
    [anon_sym_LIVE] = ACTIONS(136),
    [anon_sym_ONLY] = ACTIONS(136),
    [anon_sym_OMIT] = ACTIONS(136),
    [anon_sym_OPTION] = ACTIONS(136),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_AND] = ACTIONS(145),
    [anon_sym_PIPE_PIPE] = ACTIONS(142),
    [anon_sym_OR] = ACTIONS(145),
    [anon_sym_QMARK_QMARK] = ACTIONS(142),
    [anon_sym_QMARK_COLON] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_IS] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(142),
    [anon_sym_ISNOT] = ACTIONS(142),
    [anon_sym_EQ_EQ] = ACTIONS(142),
    [anon_sym_QMARK_EQ] = ACTIONS(142),
    [anon_sym_STAR_EQ] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(142),
    [anon_sym_BANG_TILDE] = ACTIONS(142),
    [anon_sym_QMARK_TILDE] = ACTIONS(142),
    [anon_sym_STAR_TILDE] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_x] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_] = ACTIONS(142),
    [anon_sym_STAR_STAR] = ACTIONS(142),
    [anon_sym_IN] = ACTIONS(145),
    [anon_sym_CONTAINS] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(142),
    [anon_sym_CONTAINSNOT] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(142),
    [anon_sym_CONTAINSALL] = ACTIONS(145),
    [anon_sym_4] = ACTIONS(142),
    [anon_sym_CONTAINSANY] = ACTIONS(145),
    [anon_sym_5] = ACTIONS(142),
    [anon_sym_CONTAINSNONE] = ACTIONS(145),
    [anon_sym_6] = ACTIONS(142),
    [anon_sym_INSIDE] = ACTIONS(145),
    [anon_sym_7] = ACTIONS(142),
    [anon_sym_NOTINSIDE] = ACTIONS(145),
    [anon_sym_NOTIN] = ACTIONS(142),
    [anon_sym_8] = ACTIONS(142),
    [anon_sym_ALLINSIDE] = ACTIONS(145),
    [anon_sym_9] = ACTIONS(142),
    [anon_sym_ANYINSIDE] = ACTIONS(145),
    [anon_sym_10] = ACTIONS(142),
    [anon_sym_NONEINSIDE] = ACTIONS(145),
    [anon_sym_11] = ACTIONS(142),
    [anon_sym_OUTSIDE] = ACTIONS(145),
    [anon_sym_INTERSECTS] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(148),
    [anon_sym_LT_DASH] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [aux_sym_function_token1] = ACTIONS(157),
    [aux_sym_function_token2] = ACTIONS(157),
    [aux_sym_function_token3] = ACTIONS(157),
    [anon_sym_count] = ACTIONS(160),
    [aux_sym_function_token4] = ACTIONS(157),
    [aux_sym_function_token5] = ACTIONS(157),
    [aux_sym_function_token6] = ACTIONS(157),
    [aux_sym_function_token7] = ACTIONS(157),
    [aux_sym_function_token8] = ACTIONS(157),
    [aux_sym_function_token9] = ACTIONS(157),
    [aux_sym_function_token10] = ACTIONS(157),
    [aux_sym_function_token11] = ACTIONS(160),
    [aux_sym_function_token12] = ACTIONS(157),
    [aux_sym_function_token13] = ACTIONS(160),
    [aux_sym_function_token14] = ACTIONS(157),
    [aux_sym_function_token15] = ACTIONS(157),
    [aux_sym_function_token16] = ACTIONS(157),
    [aux_sym_function_token17] = ACTIONS(160),
    [anon_sym_any] = ACTIONS(163),
    [anon_sym_array] = ACTIONS(163),
    [anon_sym_bool] = ACTIONS(163),
    [anon_sym_datetime] = ACTIONS(163),
    [anon_sym_decimal] = ACTIONS(163),
    [anon_sym_duration] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(163),
    [anon_sym_number] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(163),
    [anon_sym_string] = ACTIONS(163),
    [anon_sym_record] = ACTIONS(163),
    [anon_sym_option] = ACTIONS(163),
    [anon_sym_geometry] = ACTIONS(163),
    [anon_sym_EDDSA] = ACTIONS(166),
    [anon_sym_ES256] = ACTIONS(166),
    [anon_sym_ES384] = ACTIONS(166),
    [anon_sym_ES512] = ACTIONS(166),
    [anon_sym_HS256] = ACTIONS(166),
    [anon_sym_HS384] = ACTIONS(166),
    [anon_sym_HS512] = ACTIONS(166),
    [anon_sym_PS256] = ACTIONS(166),
    [anon_sym_PS384] = ACTIONS(166),
    [anon_sym_PS512] = ACTIONS(166),
    [anon_sym_RS256] = ACTIONS(166),
    [anon_sym_RS384] = ACTIONS(166),
    [anon_sym_RS512] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_TRUE] = ACTIONS(169),
    [anon_sym_FALSE] = ACTIONS(169),
    [anon_sym_null] = ACTIONS(172),
    [anon_sym_NULL] = ACTIONS(172),
    [anon_sym_none] = ACTIONS(172),
    [anon_sym_NONE] = ACTIONS(172),
    [sym_variable] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(181),
  },
  [4] = {
    [sym_token] = STATE(4),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_function] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(186),
    [aux_sym_future_token1] = ACTIONS(189),
    [aux_sym_casting_token1] = ACTIONS(192),
    [aux_sym_property_token1] = ACTIONS(195),
    [aux_sym_identifier_token1] = ACTIONS(198),
    [aux_sym_duration_token1] = ACTIONS(201),
    [aux_sym_constant_token1] = ACTIONS(204),
    [aux_sym_number_token1] = ACTIONS(207),
    [aux_sym_record_token1] = ACTIONS(210),
    [aux_sym_record_token2] = ACTIONS(210),
    [anon_sym_USE] = ACTIONS(213),
    [anon_sym_NS] = ACTIONS(213),
    [anon_sym_DB] = ACTIONS(213),
    [anon_sym_LET] = ACTIONS(213),
    [anon_sym_BEGIN] = ACTIONS(213),
    [anon_sym_TRANSACTION] = ACTIONS(213),
    [anon_sym_CANCEL] = ACTIONS(213),
    [anon_sym_COMMIT] = ACTIONS(213),
    [anon_sym_IF] = ACTIONS(213),
    [anon_sym_ELSE] = ACTIONS(213),
    [anon_sym_THEN] = ACTIONS(213),
    [anon_sym_END] = ACTIONS(213),
    [anon_sym_SELECT] = ACTIONS(213),
    [anon_sym_FROM] = ACTIONS(213),
    [anon_sym_WHERE] = ACTIONS(213),
    [anon_sym_SPLIT] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_GROUP] = ACTIONS(213),
    [anon_sym_BY] = ACTIONS(213),
    [anon_sym_ORDER] = ACTIONS(213),
    [anon_sym_COLLATE] = ACTIONS(213),
    [anon_sym_NUMERIC] = ACTIONS(213),
    [anon_sym_ASC] = ACTIONS(213),
    [anon_sym_DESC] = ACTIONS(213),
    [anon_sym_LIMIT] = ACTIONS(213),
    [anon_sym_START] = ACTIONS(213),
    [anon_sym_FETCH] = ACTIONS(213),
    [anon_sym_TIMEOUT] = ACTIONS(213),
    [anon_sym_PARALLEL] = ACTIONS(213),
    [anon_sym_INSERT] = ACTIONS(213),
    [anon_sym_IGNORE] = ACTIONS(213),
    [anon_sym_INTO] = ACTIONS(213),
    [anon_sym_VALUES] = ACTIONS(213),
    [anon_sym_ON] = ACTIONS(213),
    [anon_sym_DUPLICATE] = ACTIONS(213),
    [anon_sym_KEY] = ACTIONS(213),
    [anon_sym_UPDATE] = ACTIONS(213),
    [anon_sym_CREATE] = ACTIONS(213),
    [anon_sym_CONTENT] = ACTIONS(213),
    [anon_sym_SET] = ACTIONS(213),
    [anon_sym_RETURN] = ACTIONS(213),
    [anon_sym_BEFORE] = ACTIONS(213),
    [anon_sym_AFTER] = ACTIONS(213),
    [anon_sym_DIFF] = ACTIONS(213),
    [anon_sym_MERGE] = ACTIONS(213),
    [anon_sym_PATCH] = ACTIONS(213),
    [anon_sym_RELATE] = ACTIONS(213),
    [anon_sym_DELETE] = ACTIONS(213),
    [anon_sym_DEFINE] = ACTIONS(213),
    [anon_sym_NAMESPACE] = ACTIONS(213),
    [anon_sym_DATABASE] = ACTIONS(213),
    [anon_sym_USER] = ACTIONS(213),
    [anon_sym_PASSWORD] = ACTIONS(213),
    [anon_sym_PASSHASH] = ACTIONS(213),
    [anon_sym_TOKEN] = ACTIONS(213),
    [anon_sym_SCOPE] = ACTIONS(213),
    [anon_sym_TYPE] = ACTIONS(213),
    [anon_sym_VALUE] = ACTIONS(213),
    [anon_sym_SESSION] = ACTIONS(213),
    [anon_sym_SIGNUP] = ACTIONS(213),
    [anon_sym_SIGNIN] = ACTIONS(213),
    [anon_sym_TABLE] = ACTIONS(213),
    [anon_sym_DROP] = ACTIONS(213),
    [anon_sym_SCHEMAFULL] = ACTIONS(213),
    [anon_sym_SCHEMALESS] = ACTIONS(213),
    [anon_sym_AS] = ACTIONS(213),
    [anon_sym_PERMISSIONS] = ACTIONS(213),
    [anon_sym_FULL] = ACTIONS(213),
    [anon_sym_FOR] = ACTIONS(213),
    [anon_sym_select] = ACTIONS(213),
    [anon_sym_update] = ACTIONS(213),
    [anon_sym_create] = ACTIONS(213),
    [anon_sym_delete] = ACTIONS(213),
    [anon_sym_EVENT] = ACTIONS(213),
    [anon_sym_WHEN] = ACTIONS(213),
    [anon_sym_ASSERT] = ACTIONS(213),
    [anon_sym_INDEX] = ACTIONS(213),
    [anon_sym_FIELD] = ACTIONS(213),
    [anon_sym_FIELDS] = ACTIONS(213),
    [anon_sym_COLUMNS] = ACTIONS(213),
    [anon_sym_UNIQUE] = ACTIONS(213),
    [anon_sym_DEFAULT] = ACTIONS(213),
    [anon_sym_READONLY] = ACTIONS(213),
    [anon_sym_REMOVE] = ACTIONS(213),
    [anon_sym_SLEEP] = ACTIONS(213),
    [anon_sym_INFO] = ACTIONS(213),
    [anon_sym_KV] = ACTIONS(213),
    [anon_sym_TO] = ACTIONS(213),
    [anon_sym_OUT] = ACTIONS(213),
    [anon_sym_IFNOT] = ACTIONS(216),
    [anon_sym_EXISTS] = ACTIONS(213),
    [anon_sym_FUNCTION] = ACTIONS(213),
    [anon_sym_PARAM] = ACTIONS(213),
    [anon_sym_LIVE] = ACTIONS(213),
    [anon_sym_ONLY] = ACTIONS(213),
    [anon_sym_OMIT] = ACTIONS(213),
    [anon_sym_OPTION] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(219),
    [anon_sym_AND] = ACTIONS(222),
    [anon_sym_PIPE_PIPE] = ACTIONS(219),
    [anon_sym_OR] = ACTIONS(222),
    [anon_sym_QMARK_QMARK] = ACTIONS(219),
    [anon_sym_QMARK_COLON] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_IS] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(219),
    [anon_sym_ISNOT] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(219),
    [anon_sym_QMARK_EQ] = ACTIONS(219),
    [anon_sym_STAR_EQ] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_BANG_TILDE] = ACTIONS(219),
    [anon_sym_QMARK_TILDE] = ACTIONS(219),
    [anon_sym_STAR_TILDE] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_x] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_] = ACTIONS(219),
    [anon_sym_STAR_STAR] = ACTIONS(219),
    [anon_sym_IN] = ACTIONS(222),
    [anon_sym_CONTAINS] = ACTIONS(222),
    [anon_sym_2] = ACTIONS(219),
    [anon_sym_CONTAINSNOT] = ACTIONS(222),
    [anon_sym_3] = ACTIONS(219),
    [anon_sym_CONTAINSALL] = ACTIONS(222),
    [anon_sym_4] = ACTIONS(219),
    [anon_sym_CONTAINSANY] = ACTIONS(222),
    [anon_sym_5] = ACTIONS(219),
    [anon_sym_CONTAINSNONE] = ACTIONS(222),
    [anon_sym_6] = ACTIONS(219),
    [anon_sym_INSIDE] = ACTIONS(222),
    [anon_sym_7] = ACTIONS(219),
    [anon_sym_NOTINSIDE] = ACTIONS(222),
    [anon_sym_NOTIN] = ACTIONS(219),
    [anon_sym_8] = ACTIONS(219),
    [anon_sym_ALLINSIDE] = ACTIONS(222),
    [anon_sym_9] = ACTIONS(219),
    [anon_sym_ANYINSIDE] = ACTIONS(222),
    [anon_sym_10] = ACTIONS(219),
    [anon_sym_NONEINSIDE] = ACTIONS(222),
    [anon_sym_11] = ACTIONS(219),
    [anon_sym_OUTSIDE] = ACTIONS(222),
    [anon_sym_INTERSECTS] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(225),
    [anon_sym_LT_DASH] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [aux_sym_function_token1] = ACTIONS(231),
    [aux_sym_function_token2] = ACTIONS(231),
    [aux_sym_function_token3] = ACTIONS(231),
    [anon_sym_count] = ACTIONS(234),
    [aux_sym_function_token4] = ACTIONS(231),
    [aux_sym_function_token5] = ACTIONS(231),
    [aux_sym_function_token6] = ACTIONS(231),
    [aux_sym_function_token7] = ACTIONS(231),
    [aux_sym_function_token8] = ACTIONS(231),
    [aux_sym_function_token9] = ACTIONS(231),
    [aux_sym_function_token10] = ACTIONS(231),
    [aux_sym_function_token11] = ACTIONS(234),
    [aux_sym_function_token12] = ACTIONS(231),
    [aux_sym_function_token13] = ACTIONS(234),
    [aux_sym_function_token14] = ACTIONS(231),
    [aux_sym_function_token15] = ACTIONS(231),
    [aux_sym_function_token16] = ACTIONS(231),
    [aux_sym_function_token17] = ACTIONS(234),
    [anon_sym_any] = ACTIONS(237),
    [anon_sym_array] = ACTIONS(237),
    [anon_sym_bool] = ACTIONS(237),
    [anon_sym_datetime] = ACTIONS(237),
    [anon_sym_decimal] = ACTIONS(237),
    [anon_sym_duration] = ACTIONS(237),
    [anon_sym_float] = ACTIONS(237),
    [anon_sym_int] = ACTIONS(237),
    [anon_sym_number] = ACTIONS(237),
    [anon_sym_object] = ACTIONS(237),
    [anon_sym_string] = ACTIONS(237),
    [anon_sym_record] = ACTIONS(237),
    [anon_sym_option] = ACTIONS(237),
    [anon_sym_geometry] = ACTIONS(237),
    [anon_sym_EDDSA] = ACTIONS(240),
    [anon_sym_ES256] = ACTIONS(240),
    [anon_sym_ES384] = ACTIONS(240),
    [anon_sym_ES512] = ACTIONS(240),
    [anon_sym_HS256] = ACTIONS(240),
    [anon_sym_HS384] = ACTIONS(240),
    [anon_sym_HS512] = ACTIONS(240),
    [anon_sym_PS256] = ACTIONS(240),
    [anon_sym_PS384] = ACTIONS(240),
    [anon_sym_PS512] = ACTIONS(240),
    [anon_sym_RS256] = ACTIONS(240),
    [anon_sym_RS384] = ACTIONS(240),
    [anon_sym_RS512] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(243),
    [anon_sym_TRUE] = ACTIONS(243),
    [anon_sym_FALSE] = ACTIONS(243),
    [anon_sym_null] = ACTIONS(246),
    [anon_sym_NULL] = ACTIONS(246),
    [anon_sym_none] = ACTIONS(246),
    [anon_sym_NONE] = ACTIONS(246),
    [sym_variable] = ACTIONS(249),
    [sym_comment] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(258),
  },
  [5] = {
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(32),
    [sym_scripting_content] = STATE(64),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_function] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(55),
    [aux_sym_future_token1] = ACTIONS(59),
    [aux_sym_casting_token1] = ACTIONS(61),
    [aux_sym_property_token1] = ACTIONS(63),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [aux_sym_duration_token1] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(69),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_record_token1] = ACTIONS(73),
    [aux_sym_record_token2] = ACTIONS(73),
    [anon_sym_USE] = ACTIONS(75),
    [anon_sym_NS] = ACTIONS(75),
    [anon_sym_DB] = ACTIONS(75),
    [anon_sym_LET] = ACTIONS(75),
    [anon_sym_BEGIN] = ACTIONS(75),
    [anon_sym_TRANSACTION] = ACTIONS(75),
    [anon_sym_CANCEL] = ACTIONS(75),
    [anon_sym_COMMIT] = ACTIONS(75),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_ELSE] = ACTIONS(75),
    [anon_sym_THEN] = ACTIONS(75),
    [anon_sym_END] = ACTIONS(75),
    [anon_sym_SELECT] = ACTIONS(75),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_WHERE] = ACTIONS(75),
    [anon_sym_SPLIT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_GROUP] = ACTIONS(75),
    [anon_sym_BY] = ACTIONS(75),
    [anon_sym_ORDER] = ACTIONS(75),
    [anon_sym_COLLATE] = ACTIONS(75),
    [anon_sym_NUMERIC] = ACTIONS(75),
    [anon_sym_ASC] = ACTIONS(75),
    [anon_sym_DESC] = ACTIONS(75),
    [anon_sym_LIMIT] = ACTIONS(75),
    [anon_sym_START] = ACTIONS(75),
    [anon_sym_FETCH] = ACTIONS(75),
    [anon_sym_TIMEOUT] = ACTIONS(75),
    [anon_sym_PARALLEL] = ACTIONS(75),
    [anon_sym_INSERT] = ACTIONS(75),
    [anon_sym_IGNORE] = ACTIONS(75),
    [anon_sym_INTO] = ACTIONS(75),
    [anon_sym_VALUES] = ACTIONS(75),
    [anon_sym_ON] = ACTIONS(75),
    [anon_sym_DUPLICATE] = ACTIONS(75),
    [anon_sym_KEY] = ACTIONS(75),
    [anon_sym_UPDATE] = ACTIONS(75),
    [anon_sym_CREATE] = ACTIONS(75),
    [anon_sym_CONTENT] = ACTIONS(75),
    [anon_sym_SET] = ACTIONS(75),
    [anon_sym_RETURN] = ACTIONS(75),
    [anon_sym_BEFORE] = ACTIONS(75),
    [anon_sym_AFTER] = ACTIONS(75),
    [anon_sym_DIFF] = ACTIONS(75),
    [anon_sym_MERGE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_RELATE] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_DEFINE] = ACTIONS(75),
    [anon_sym_NAMESPACE] = ACTIONS(75),
    [anon_sym_DATABASE] = ACTIONS(75),
    [anon_sym_USER] = ACTIONS(75),
    [anon_sym_PASSWORD] = ACTIONS(75),
    [anon_sym_PASSHASH] = ACTIONS(75),
    [anon_sym_TOKEN] = ACTIONS(75),
    [anon_sym_SCOPE] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(75),
    [anon_sym_VALUE] = ACTIONS(75),
    [anon_sym_SESSION] = ACTIONS(75),
    [anon_sym_SIGNUP] = ACTIONS(75),
    [anon_sym_SIGNIN] = ACTIONS(75),
    [anon_sym_TABLE] = ACTIONS(75),
    [anon_sym_DROP] = ACTIONS(75),
    [anon_sym_SCHEMAFULL] = ACTIONS(75),
    [anon_sym_SCHEMALESS] = ACTIONS(75),
    [anon_sym_AS] = ACTIONS(75),
    [anon_sym_PERMISSIONS] = ACTIONS(75),
    [anon_sym_FULL] = ACTIONS(75),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_select] = ACTIONS(75),
    [anon_sym_update] = ACTIONS(75),
    [anon_sym_create] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_EVENT] = ACTIONS(75),
    [anon_sym_WHEN] = ACTIONS(75),
    [anon_sym_ASSERT] = ACTIONS(75),
    [anon_sym_INDEX] = ACTIONS(75),
    [anon_sym_FIELD] = ACTIONS(75),
    [anon_sym_FIELDS] = ACTIONS(75),
    [anon_sym_COLUMNS] = ACTIONS(75),
    [anon_sym_UNIQUE] = ACTIONS(75),
    [anon_sym_DEFAULT] = ACTIONS(75),
    [anon_sym_READONLY] = ACTIONS(75),
    [anon_sym_REMOVE] = ACTIONS(75),
    [anon_sym_SLEEP] = ACTIONS(75),
    [anon_sym_INFO] = ACTIONS(75),
    [anon_sym_KV] = ACTIONS(75),
    [anon_sym_TO] = ACTIONS(75),
    [anon_sym_OUT] = ACTIONS(75),
    [anon_sym_IFNOT] = ACTIONS(77),
    [anon_sym_EXISTS] = ACTIONS(75),
    [anon_sym_FUNCTION] = ACTIONS(75),
    [anon_sym_PARAM] = ACTIONS(75),
    [anon_sym_LIVE] = ACTIONS(75),
    [anon_sym_ONLY] = ACTIONS(75),
    [anon_sym_OMIT] = ACTIONS(75),
    [anon_sym_OPTION] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [aux_sym_function_token3] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(89),
    [aux_sym_function_token11] = ACTIONS(91),
    [aux_sym_function_token12] = ACTIONS(89),
    [aux_sym_function_token13] = ACTIONS(91),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(89),
    [aux_sym_function_token17] = ACTIONS(91),
    [anon_sym_any] = ACTIONS(93),
    [anon_sym_array] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_datetime] = ACTIONS(93),
    [anon_sym_decimal] = ACTIONS(93),
    [anon_sym_duration] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_number] = ACTIONS(93),
    [anon_sym_object] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_option] = ACTIONS(93),
    [anon_sym_geometry] = ACTIONS(93),
    [anon_sym_EDDSA] = ACTIONS(95),
    [anon_sym_ES256] = ACTIONS(95),
    [anon_sym_ES384] = ACTIONS(95),
    [anon_sym_ES512] = ACTIONS(95),
    [anon_sym_HS256] = ACTIONS(95),
    [anon_sym_HS384] = ACTIONS(95),
    [anon_sym_HS512] = ACTIONS(95),
    [anon_sym_PS256] = ACTIONS(95),
    [anon_sym_PS384] = ACTIONS(95),
    [anon_sym_PS512] = ACTIONS(95),
    [anon_sym_RS256] = ACTIONS(95),
    [anon_sym_RS384] = ACTIONS(95),
    [anon_sym_RS512] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_TRUE] = ACTIONS(97),
    [anon_sym_FALSE] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_NULL] = ACTIONS(99),
    [anon_sym_none] = ACTIONS(99),
    [anon_sym_NONE] = ACTIONS(99),
    [sym_variable] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
  },
  [6] = {
    [sym_token] = STATE(2),
    [sym_scripting_function] = STATE(32),
    [sym_scripting_content] = STATE(65),
    [sym__scripting_statement] = STATE(2),
    [sym_future] = STATE(32),
    [sym_casting] = STATE(32),
    [sym_property] = STATE(32),
    [sym_identifier] = STATE(32),
    [sym_duration] = STATE(32),
    [sym_constant] = STATE(32),
    [sym_number] = STATE(32),
    [sym_record] = STATE(32),
    [sym_keyword] = STATE(32),
    [sym_operator] = STATE(32),
    [sym_punctuation] = STATE(32),
    [sym_delimiter] = STATE(32),
    [sym_function] = STATE(32),
    [sym_type] = STATE(32),
    [sym_datatype] = STATE(31),
    [sym_algotype] = STATE(31),
    [sym_bool] = STATE(32),
    [sym_nothing] = STATE(32),
    [sym_string] = STATE(32),
    [aux_sym_scripting_content_repeat1] = STATE(2),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(55),
    [aux_sym_future_token1] = ACTIONS(59),
    [aux_sym_casting_token1] = ACTIONS(61),
    [aux_sym_property_token1] = ACTIONS(63),
    [aux_sym_identifier_token1] = ACTIONS(65),
    [aux_sym_duration_token1] = ACTIONS(67),
    [aux_sym_constant_token1] = ACTIONS(69),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_record_token1] = ACTIONS(73),
    [aux_sym_record_token2] = ACTIONS(73),
    [anon_sym_USE] = ACTIONS(75),
    [anon_sym_NS] = ACTIONS(75),
    [anon_sym_DB] = ACTIONS(75),
    [anon_sym_LET] = ACTIONS(75),
    [anon_sym_BEGIN] = ACTIONS(75),
    [anon_sym_TRANSACTION] = ACTIONS(75),
    [anon_sym_CANCEL] = ACTIONS(75),
    [anon_sym_COMMIT] = ACTIONS(75),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_ELSE] = ACTIONS(75),
    [anon_sym_THEN] = ACTIONS(75),
    [anon_sym_END] = ACTIONS(75),
    [anon_sym_SELECT] = ACTIONS(75),
    [anon_sym_FROM] = ACTIONS(75),
    [anon_sym_WHERE] = ACTIONS(75),
    [anon_sym_SPLIT] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_GROUP] = ACTIONS(75),
    [anon_sym_BY] = ACTIONS(75),
    [anon_sym_ORDER] = ACTIONS(75),
    [anon_sym_COLLATE] = ACTIONS(75),
    [anon_sym_NUMERIC] = ACTIONS(75),
    [anon_sym_ASC] = ACTIONS(75),
    [anon_sym_DESC] = ACTIONS(75),
    [anon_sym_LIMIT] = ACTIONS(75),
    [anon_sym_START] = ACTIONS(75),
    [anon_sym_FETCH] = ACTIONS(75),
    [anon_sym_TIMEOUT] = ACTIONS(75),
    [anon_sym_PARALLEL] = ACTIONS(75),
    [anon_sym_INSERT] = ACTIONS(75),
    [anon_sym_IGNORE] = ACTIONS(75),
    [anon_sym_INTO] = ACTIONS(75),
    [anon_sym_VALUES] = ACTIONS(75),
    [anon_sym_ON] = ACTIONS(75),
    [anon_sym_DUPLICATE] = ACTIONS(75),
    [anon_sym_KEY] = ACTIONS(75),
    [anon_sym_UPDATE] = ACTIONS(75),
    [anon_sym_CREATE] = ACTIONS(75),
    [anon_sym_CONTENT] = ACTIONS(75),
    [anon_sym_SET] = ACTIONS(75),
    [anon_sym_RETURN] = ACTIONS(75),
    [anon_sym_BEFORE] = ACTIONS(75),
    [anon_sym_AFTER] = ACTIONS(75),
    [anon_sym_DIFF] = ACTIONS(75),
    [anon_sym_MERGE] = ACTIONS(75),
    [anon_sym_PATCH] = ACTIONS(75),
    [anon_sym_RELATE] = ACTIONS(75),
    [anon_sym_DELETE] = ACTIONS(75),
    [anon_sym_DEFINE] = ACTIONS(75),
    [anon_sym_NAMESPACE] = ACTIONS(75),
    [anon_sym_DATABASE] = ACTIONS(75),
    [anon_sym_USER] = ACTIONS(75),
    [anon_sym_PASSWORD] = ACTIONS(75),
    [anon_sym_PASSHASH] = ACTIONS(75),
    [anon_sym_TOKEN] = ACTIONS(75),
    [anon_sym_SCOPE] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(75),
    [anon_sym_VALUE] = ACTIONS(75),
    [anon_sym_SESSION] = ACTIONS(75),
    [anon_sym_SIGNUP] = ACTIONS(75),
    [anon_sym_SIGNIN] = ACTIONS(75),
    [anon_sym_TABLE] = ACTIONS(75),
    [anon_sym_DROP] = ACTIONS(75),
    [anon_sym_SCHEMAFULL] = ACTIONS(75),
    [anon_sym_SCHEMALESS] = ACTIONS(75),
    [anon_sym_AS] = ACTIONS(75),
    [anon_sym_PERMISSIONS] = ACTIONS(75),
    [anon_sym_FULL] = ACTIONS(75),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_select] = ACTIONS(75),
    [anon_sym_update] = ACTIONS(75),
    [anon_sym_create] = ACTIONS(75),
    [anon_sym_delete] = ACTIONS(75),
    [anon_sym_EVENT] = ACTIONS(75),
    [anon_sym_WHEN] = ACTIONS(75),
    [anon_sym_ASSERT] = ACTIONS(75),
    [anon_sym_INDEX] = ACTIONS(75),
    [anon_sym_FIELD] = ACTIONS(75),
    [anon_sym_FIELDS] = ACTIONS(75),
    [anon_sym_COLUMNS] = ACTIONS(75),
    [anon_sym_UNIQUE] = ACTIONS(75),
    [anon_sym_DEFAULT] = ACTIONS(75),
    [anon_sym_READONLY] = ACTIONS(75),
    [anon_sym_REMOVE] = ACTIONS(75),
    [anon_sym_SLEEP] = ACTIONS(75),
    [anon_sym_INFO] = ACTIONS(75),
    [anon_sym_KV] = ACTIONS(75),
    [anon_sym_TO] = ACTIONS(75),
    [anon_sym_OUT] = ACTIONS(75),
    [anon_sym_IFNOT] = ACTIONS(77),
    [anon_sym_EXISTS] = ACTIONS(75),
    [anon_sym_FUNCTION] = ACTIONS(75),
    [anon_sym_PARAM] = ACTIONS(75),
    [anon_sym_LIVE] = ACTIONS(75),
    [anon_sym_ONLY] = ACTIONS(75),
    [anon_sym_OMIT] = ACTIONS(75),
    [anon_sym_OPTION] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_QMARK_QMARK] = ACTIONS(79),
    [anon_sym_QMARK_COLON] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_IS] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_ISNOT] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_QMARK_EQ] = ACTIONS(79),
    [anon_sym_STAR_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_BANG_TILDE] = ACTIONS(79),
    [anon_sym_QMARK_TILDE] = ACTIONS(79),
    [anon_sym_STAR_TILDE] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(81),
    [anon_sym_x] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_] = ACTIONS(79),
    [anon_sym_STAR_STAR] = ACTIONS(79),
    [anon_sym_IN] = ACTIONS(81),
    [anon_sym_CONTAINS] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(79),
    [anon_sym_CONTAINSNOT] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(79),
    [anon_sym_CONTAINSALL] = ACTIONS(81),
    [anon_sym_4] = ACTIONS(79),
    [anon_sym_CONTAINSANY] = ACTIONS(81),
    [anon_sym_5] = ACTIONS(79),
    [anon_sym_CONTAINSNONE] = ACTIONS(81),
    [anon_sym_6] = ACTIONS(79),
    [anon_sym_INSIDE] = ACTIONS(81),
    [anon_sym_7] = ACTIONS(79),
    [anon_sym_NOTINSIDE] = ACTIONS(81),
    [anon_sym_NOTIN] = ACTIONS(79),
    [anon_sym_8] = ACTIONS(79),
    [anon_sym_ALLINSIDE] = ACTIONS(81),
    [anon_sym_9] = ACTIONS(79),
    [anon_sym_ANYINSIDE] = ACTIONS(81),
    [anon_sym_10] = ACTIONS(79),
    [anon_sym_NONEINSIDE] = ACTIONS(81),
    [anon_sym_11] = ACTIONS(79),
    [anon_sym_OUTSIDE] = ACTIONS(81),
    [anon_sym_INTERSECTS] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [aux_sym_function_token1] = ACTIONS(89),
    [aux_sym_function_token2] = ACTIONS(89),
    [aux_sym_function_token3] = ACTIONS(89),
    [anon_sym_count] = ACTIONS(91),
    [aux_sym_function_token4] = ACTIONS(89),
    [aux_sym_function_token5] = ACTIONS(89),
    [aux_sym_function_token6] = ACTIONS(89),
    [aux_sym_function_token7] = ACTIONS(89),
    [aux_sym_function_token8] = ACTIONS(89),
    [aux_sym_function_token9] = ACTIONS(89),
    [aux_sym_function_token10] = ACTIONS(89),
    [aux_sym_function_token11] = ACTIONS(91),
    [aux_sym_function_token12] = ACTIONS(89),
    [aux_sym_function_token13] = ACTIONS(91),
    [aux_sym_function_token14] = ACTIONS(89),
    [aux_sym_function_token15] = ACTIONS(89),
    [aux_sym_function_token16] = ACTIONS(89),
    [aux_sym_function_token17] = ACTIONS(91),
    [anon_sym_any] = ACTIONS(93),
    [anon_sym_array] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_datetime] = ACTIONS(93),
    [anon_sym_decimal] = ACTIONS(93),
    [anon_sym_duration] = ACTIONS(93),
    [anon_sym_float] = ACTIONS(93),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_number] = ACTIONS(93),
    [anon_sym_object] = ACTIONS(93),
    [anon_sym_string] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_option] = ACTIONS(93),
    [anon_sym_geometry] = ACTIONS(93),
    [anon_sym_EDDSA] = ACTIONS(95),
    [anon_sym_ES256] = ACTIONS(95),
    [anon_sym_ES384] = ACTIONS(95),
    [anon_sym_ES512] = ACTIONS(95),
    [anon_sym_HS256] = ACTIONS(95),
    [anon_sym_HS384] = ACTIONS(95),
    [anon_sym_HS512] = ACTIONS(95),
    [anon_sym_PS256] = ACTIONS(95),
    [anon_sym_PS384] = ACTIONS(95),
    [anon_sym_PS512] = ACTIONS(95),
    [anon_sym_RS256] = ACTIONS(95),
    [anon_sym_RS384] = ACTIONS(95),
    [anon_sym_RS512] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_TRUE] = ACTIONS(97),
    [anon_sym_FALSE] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(99),
    [anon_sym_NULL] = ACTIONS(99),
    [anon_sym_none] = ACTIONS(99),
    [anon_sym_NONE] = ACTIONS(99),
    [sym_variable] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
  },
  [7] = {
    [sym_token] = STATE(4),
    [sym_scripting_function] = STATE(24),
    [sym_future] = STATE(24),
    [sym_casting] = STATE(24),
    [sym_property] = STATE(24),
    [sym_identifier] = STATE(24),
    [sym_duration] = STATE(24),
    [sym_constant] = STATE(24),
    [sym_number] = STATE(24),
    [sym_record] = STATE(24),
    [sym_keyword] = STATE(24),
    [sym_operator] = STATE(24),
    [sym_punctuation] = STATE(24),
    [sym_delimiter] = STATE(24),
    [sym_function] = STATE(24),
    [sym_type] = STATE(24),
    [sym_datatype] = STATE(28),
    [sym_algotype] = STATE(28),
    [sym_bool] = STATE(24),
    [sym_nothing] = STATE(24),
    [sym_string] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(5),
    [aux_sym_future_token1] = ACTIONS(7),
    [aux_sym_casting_token1] = ACTIONS(9),
    [aux_sym_property_token1] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [aux_sym_duration_token1] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_record_token1] = ACTIONS(21),
    [aux_sym_record_token2] = ACTIONS(21),
    [anon_sym_USE] = ACTIONS(23),
    [anon_sym_NS] = ACTIONS(23),
    [anon_sym_DB] = ACTIONS(23),
    [anon_sym_LET] = ACTIONS(23),
    [anon_sym_BEGIN] = ACTIONS(23),
    [anon_sym_TRANSACTION] = ACTIONS(23),
    [anon_sym_CANCEL] = ACTIONS(23),
    [anon_sym_COMMIT] = ACTIONS(23),
    [anon_sym_IF] = ACTIONS(23),
    [anon_sym_ELSE] = ACTIONS(23),
    [anon_sym_THEN] = ACTIONS(23),
    [anon_sym_END] = ACTIONS(23),
    [anon_sym_SELECT] = ACTIONS(23),
    [anon_sym_FROM] = ACTIONS(23),
    [anon_sym_WHERE] = ACTIONS(23),
    [anon_sym_SPLIT] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_GROUP] = ACTIONS(23),
    [anon_sym_BY] = ACTIONS(23),
    [anon_sym_ORDER] = ACTIONS(23),
    [anon_sym_COLLATE] = ACTIONS(23),
    [anon_sym_NUMERIC] = ACTIONS(23),
    [anon_sym_ASC] = ACTIONS(23),
    [anon_sym_DESC] = ACTIONS(23),
    [anon_sym_LIMIT] = ACTIONS(23),
    [anon_sym_START] = ACTIONS(23),
    [anon_sym_FETCH] = ACTIONS(23),
    [anon_sym_TIMEOUT] = ACTIONS(23),
    [anon_sym_PARALLEL] = ACTIONS(23),
    [anon_sym_INSERT] = ACTIONS(23),
    [anon_sym_IGNORE] = ACTIONS(23),
    [anon_sym_INTO] = ACTIONS(23),
    [anon_sym_VALUES] = ACTIONS(23),
    [anon_sym_ON] = ACTIONS(23),
    [anon_sym_DUPLICATE] = ACTIONS(23),
    [anon_sym_KEY] = ACTIONS(23),
    [anon_sym_UPDATE] = ACTIONS(23),
    [anon_sym_CREATE] = ACTIONS(23),
    [anon_sym_CONTENT] = ACTIONS(23),
    [anon_sym_SET] = ACTIONS(23),
    [anon_sym_RETURN] = ACTIONS(23),
    [anon_sym_BEFORE] = ACTIONS(23),
    [anon_sym_AFTER] = ACTIONS(23),
    [anon_sym_DIFF] = ACTIONS(23),
    [anon_sym_MERGE] = ACTIONS(23),
    [anon_sym_PATCH] = ACTIONS(23),
    [anon_sym_RELATE] = ACTIONS(23),
    [anon_sym_DELETE] = ACTIONS(23),
    [anon_sym_DEFINE] = ACTIONS(23),
    [anon_sym_NAMESPACE] = ACTIONS(23),
    [anon_sym_DATABASE] = ACTIONS(23),
    [anon_sym_USER] = ACTIONS(23),
    [anon_sym_PASSWORD] = ACTIONS(23),
    [anon_sym_PASSHASH] = ACTIONS(23),
    [anon_sym_TOKEN] = ACTIONS(23),
    [anon_sym_SCOPE] = ACTIONS(23),
    [anon_sym_TYPE] = ACTIONS(23),
    [anon_sym_VALUE] = ACTIONS(23),
    [anon_sym_SESSION] = ACTIONS(23),
    [anon_sym_SIGNUP] = ACTIONS(23),
    [anon_sym_SIGNIN] = ACTIONS(23),
    [anon_sym_TABLE] = ACTIONS(23),
    [anon_sym_DROP] = ACTIONS(23),
    [anon_sym_SCHEMAFULL] = ACTIONS(23),
    [anon_sym_SCHEMALESS] = ACTIONS(23),
    [anon_sym_AS] = ACTIONS(23),
    [anon_sym_PERMISSIONS] = ACTIONS(23),
    [anon_sym_FULL] = ACTIONS(23),
    [anon_sym_FOR] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_update] = ACTIONS(23),
    [anon_sym_create] = ACTIONS(23),
    [anon_sym_delete] = ACTIONS(23),
    [anon_sym_EVENT] = ACTIONS(23),
    [anon_sym_WHEN] = ACTIONS(23),
    [anon_sym_ASSERT] = ACTIONS(23),
    [anon_sym_INDEX] = ACTIONS(23),
    [anon_sym_FIELD] = ACTIONS(23),
    [anon_sym_FIELDS] = ACTIONS(23),
    [anon_sym_COLUMNS] = ACTIONS(23),
    [anon_sym_UNIQUE] = ACTIONS(23),
    [anon_sym_DEFAULT] = ACTIONS(23),
    [anon_sym_READONLY] = ACTIONS(23),
    [anon_sym_REMOVE] = ACTIONS(23),
    [anon_sym_SLEEP] = ACTIONS(23),
    [anon_sym_INFO] = ACTIONS(23),
    [anon_sym_KV] = ACTIONS(23),
    [anon_sym_TO] = ACTIONS(23),
    [anon_sym_OUT] = ACTIONS(23),
    [anon_sym_IFNOT] = ACTIONS(25),
    [anon_sym_EXISTS] = ACTIONS(23),
    [anon_sym_FUNCTION] = ACTIONS(23),
    [anon_sym_PARAM] = ACTIONS(23),
    [anon_sym_LIVE] = ACTIONS(23),
    [anon_sym_ONLY] = ACTIONS(23),
    [anon_sym_OMIT] = ACTIONS(23),
    [anon_sym_OPTION] = ACTIONS(23),
    [anon_sym_AMP_AMP] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(27),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_QMARK_QMARK] = ACTIONS(27),
    [anon_sym_QMARK_COLON] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_IS] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_ISNOT] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(27),
    [anon_sym_QMARK_EQ] = ACTIONS(27),
    [anon_sym_STAR_EQ] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_BANG_TILDE] = ACTIONS(27),
    [anon_sym_QMARK_TILDE] = ACTIONS(27),
    [anon_sym_STAR_TILDE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_x] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_] = ACTIONS(27),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_IN] = ACTIONS(29),
    [anon_sym_CONTAINS] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(27),
    [anon_sym_CONTAINSNOT] = ACTIONS(29),
    [anon_sym_3] = ACTIONS(27),
    [anon_sym_CONTAINSALL] = ACTIONS(29),
    [anon_sym_4] = ACTIONS(27),
    [anon_sym_CONTAINSANY] = ACTIONS(29),
    [anon_sym_5] = ACTIONS(27),
    [anon_sym_CONTAINSNONE] = ACTIONS(29),
    [anon_sym_6] = ACTIONS(27),
    [anon_sym_INSIDE] = ACTIONS(29),
    [anon_sym_7] = ACTIONS(27),
    [anon_sym_NOTINSIDE] = ACTIONS(29),
    [anon_sym_NOTIN] = ACTIONS(27),
    [anon_sym_8] = ACTIONS(27),
    [anon_sym_ALLINSIDE] = ACTIONS(29),
    [anon_sym_9] = ACTIONS(27),
    [anon_sym_ANYINSIDE] = ACTIONS(29),
    [anon_sym_10] = ACTIONS(27),
    [anon_sym_NONEINSIDE] = ACTIONS(29),
    [anon_sym_11] = ACTIONS(27),
    [anon_sym_OUTSIDE] = ACTIONS(29),
    [anon_sym_INTERSECTS] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(31),
    [anon_sym_LT_DASH] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [aux_sym_function_token1] = ACTIONS(35),
    [aux_sym_function_token2] = ACTIONS(35),
    [aux_sym_function_token3] = ACTIONS(35),
    [anon_sym_count] = ACTIONS(37),
    [aux_sym_function_token4] = ACTIONS(35),
    [aux_sym_function_token5] = ACTIONS(35),
    [aux_sym_function_token6] = ACTIONS(35),
    [aux_sym_function_token7] = ACTIONS(35),
    [aux_sym_function_token8] = ACTIONS(35),
    [aux_sym_function_token9] = ACTIONS(35),
    [aux_sym_function_token10] = ACTIONS(35),
    [aux_sym_function_token11] = ACTIONS(37),
    [aux_sym_function_token12] = ACTIONS(35),
    [aux_sym_function_token13] = ACTIONS(37),
    [aux_sym_function_token14] = ACTIONS(35),
    [aux_sym_function_token15] = ACTIONS(35),
    [aux_sym_function_token16] = ACTIONS(35),
    [aux_sym_function_token17] = ACTIONS(37),
    [anon_sym_any] = ACTIONS(39),
    [anon_sym_array] = ACTIONS(39),
    [anon_sym_bool] = ACTIONS(39),
    [anon_sym_datetime] = ACTIONS(39),
    [anon_sym_decimal] = ACTIONS(39),
    [anon_sym_duration] = ACTIONS(39),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_int] = ACTIONS(39),
    [anon_sym_number] = ACTIONS(39),
    [anon_sym_object] = ACTIONS(39),
    [anon_sym_string] = ACTIONS(39),
    [anon_sym_record] = ACTIONS(39),
    [anon_sym_option] = ACTIONS(39),
    [anon_sym_geometry] = ACTIONS(39),
    [anon_sym_EDDSA] = ACTIONS(41),
    [anon_sym_ES256] = ACTIONS(41),
    [anon_sym_ES384] = ACTIONS(41),
    [anon_sym_ES512] = ACTIONS(41),
    [anon_sym_HS256] = ACTIONS(41),
    [anon_sym_HS384] = ACTIONS(41),
    [anon_sym_HS512] = ACTIONS(41),
    [anon_sym_PS256] = ACTIONS(41),
    [anon_sym_PS384] = ACTIONS(41),
    [anon_sym_PS512] = ACTIONS(41),
    [anon_sym_RS256] = ACTIONS(41),
    [anon_sym_RS384] = ACTIONS(41),
    [anon_sym_RS512] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_TRUE] = ACTIONS(43),
    [anon_sym_FALSE] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(45),
    [anon_sym_NULL] = ACTIONS(45),
    [anon_sym_none] = ACTIONS(45),
    [anon_sym_NONE] = ACTIONS(45),
    [sym_variable] = ACTIONS(47),
    [sym_comment] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(265),
    [aux_sym_future_token1] = ACTIONS(265),
    [aux_sym_casting_token1] = ACTIONS(265),
    [aux_sym_property_token1] = ACTIONS(267),
    [aux_sym_identifier_token1] = ACTIONS(267),
    [aux_sym_duration_token1] = ACTIONS(267),
    [aux_sym_constant_token1] = ACTIONS(265),
    [aux_sym_number_token1] = ACTIONS(267),
    [aux_sym_record_token1] = ACTIONS(265),
    [aux_sym_record_token2] = ACTIONS(265),
    [anon_sym_USE] = ACTIONS(267),
    [anon_sym_NS] = ACTIONS(267),
    [anon_sym_DB] = ACTIONS(267),
    [anon_sym_LET] = ACTIONS(267),
    [anon_sym_BEGIN] = ACTIONS(267),
    [anon_sym_TRANSACTION] = ACTIONS(267),
    [anon_sym_CANCEL] = ACTIONS(267),
    [anon_sym_COMMIT] = ACTIONS(267),
    [anon_sym_IF] = ACTIONS(267),
    [anon_sym_ELSE] = ACTIONS(267),
    [anon_sym_THEN] = ACTIONS(267),
    [anon_sym_END] = ACTIONS(267),
    [anon_sym_SELECT] = ACTIONS(267),
    [anon_sym_FROM] = ACTIONS(267),
    [anon_sym_WHERE] = ACTIONS(267),
    [anon_sym_SPLIT] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(267),
    [anon_sym_GROUP] = ACTIONS(267),
    [anon_sym_BY] = ACTIONS(267),
    [anon_sym_ORDER] = ACTIONS(267),
    [anon_sym_COLLATE] = ACTIONS(267),
    [anon_sym_NUMERIC] = ACTIONS(267),
    [anon_sym_ASC] = ACTIONS(267),
    [anon_sym_DESC] = ACTIONS(267),
    [anon_sym_LIMIT] = ACTIONS(267),
    [anon_sym_START] = ACTIONS(267),
    [anon_sym_FETCH] = ACTIONS(267),
    [anon_sym_TIMEOUT] = ACTIONS(267),
    [anon_sym_PARALLEL] = ACTIONS(267),
    [anon_sym_INSERT] = ACTIONS(267),
    [anon_sym_IGNORE] = ACTIONS(267),
    [anon_sym_INTO] = ACTIONS(267),
    [anon_sym_VALUES] = ACTIONS(267),
    [anon_sym_ON] = ACTIONS(267),
    [anon_sym_DUPLICATE] = ACTIONS(267),
    [anon_sym_KEY] = ACTIONS(267),
    [anon_sym_UPDATE] = ACTIONS(267),
    [anon_sym_CREATE] = ACTIONS(267),
    [anon_sym_CONTENT] = ACTIONS(267),
    [anon_sym_SET] = ACTIONS(267),
    [anon_sym_RETURN] = ACTIONS(267),
    [anon_sym_BEFORE] = ACTIONS(267),
    [anon_sym_AFTER] = ACTIONS(267),
    [anon_sym_DIFF] = ACTIONS(267),
    [anon_sym_MERGE] = ACTIONS(267),
    [anon_sym_PATCH] = ACTIONS(267),
    [anon_sym_RELATE] = ACTIONS(267),
    [anon_sym_DELETE] = ACTIONS(267),
    [anon_sym_DEFINE] = ACTIONS(267),
    [anon_sym_NAMESPACE] = ACTIONS(267),
    [anon_sym_DATABASE] = ACTIONS(267),
    [anon_sym_USER] = ACTIONS(267),
    [anon_sym_PASSWORD] = ACTIONS(267),
    [anon_sym_PASSHASH] = ACTIONS(267),
    [anon_sym_TOKEN] = ACTIONS(267),
    [anon_sym_SCOPE] = ACTIONS(267),
    [anon_sym_TYPE] = ACTIONS(267),
    [anon_sym_VALUE] = ACTIONS(267),
    [anon_sym_SESSION] = ACTIONS(267),
    [anon_sym_SIGNUP] = ACTIONS(267),
    [anon_sym_SIGNIN] = ACTIONS(267),
    [anon_sym_TABLE] = ACTIONS(267),
    [anon_sym_DROP] = ACTIONS(267),
    [anon_sym_SCHEMAFULL] = ACTIONS(267),
    [anon_sym_SCHEMALESS] = ACTIONS(267),
    [anon_sym_AS] = ACTIONS(267),
    [anon_sym_PERMISSIONS] = ACTIONS(267),
    [anon_sym_FULL] = ACTIONS(267),
    [anon_sym_FOR] = ACTIONS(267),
    [anon_sym_select] = ACTIONS(267),
    [anon_sym_update] = ACTIONS(267),
    [anon_sym_create] = ACTIONS(267),
    [anon_sym_delete] = ACTIONS(267),
    [anon_sym_EVENT] = ACTIONS(267),
    [anon_sym_WHEN] = ACTIONS(267),
    [anon_sym_ASSERT] = ACTIONS(267),
    [anon_sym_INDEX] = ACTIONS(267),
    [anon_sym_FIELD] = ACTIONS(267),
    [anon_sym_FIELDS] = ACTIONS(267),
    [anon_sym_COLUMNS] = ACTIONS(267),
    [anon_sym_UNIQUE] = ACTIONS(267),
    [anon_sym_DEFAULT] = ACTIONS(267),
    [anon_sym_READONLY] = ACTIONS(267),
    [anon_sym_REMOVE] = ACTIONS(267),
    [anon_sym_SLEEP] = ACTIONS(267),
    [anon_sym_INFO] = ACTIONS(267),
    [anon_sym_KV] = ACTIONS(267),
    [anon_sym_TO] = ACTIONS(267),
    [anon_sym_OUT] = ACTIONS(267),
    [anon_sym_IFNOT] = ACTIONS(265),
    [anon_sym_EXISTS] = ACTIONS(267),
    [anon_sym_FUNCTION] = ACTIONS(267),
    [anon_sym_PARAM] = ACTIONS(267),
    [anon_sym_LIVE] = ACTIONS(267),
    [anon_sym_ONLY] = ACTIONS(267),
    [anon_sym_OMIT] = ACTIONS(267),
    [anon_sym_OPTION] = ACTIONS(267),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_AND] = ACTIONS(267),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_OR] = ACTIONS(267),
    [anon_sym_QMARK_QMARK] = ACTIONS(265),
    [anon_sym_QMARK_COLON] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_IS] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(265),
    [anon_sym_ISNOT] = ACTIONS(265),
    [anon_sym_EQ_EQ] = ACTIONS(265),
    [anon_sym_QMARK_EQ] = ACTIONS(265),
    [anon_sym_STAR_EQ] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(265),
    [anon_sym_BANG_TILDE] = ACTIONS(265),
    [anon_sym_QMARK_TILDE] = ACTIONS(265),
    [anon_sym_STAR_TILDE] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_x] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(267),
    [anon_sym_] = ACTIONS(265),
    [anon_sym_STAR_STAR] = ACTIONS(265),
    [anon_sym_IN] = ACTIONS(267),
    [anon_sym_CONTAINS] = ACTIONS(267),
    [anon_sym_2] = ACTIONS(265),
    [anon_sym_CONTAINSNOT] = ACTIONS(267),
    [anon_sym_3] = ACTIONS(265),
    [anon_sym_CONTAINSALL] = ACTIONS(267),
    [anon_sym_4] = ACTIONS(265),
    [anon_sym_CONTAINSANY] = ACTIONS(267),
    [anon_sym_5] = ACTIONS(265),
    [anon_sym_CONTAINSNONE] = ACTIONS(267),
    [anon_sym_6] = ACTIONS(265),
    [anon_sym_INSIDE] = ACTIONS(267),
    [anon_sym_7] = ACTIONS(265),
    [anon_sym_NOTINSIDE] = ACTIONS(267),
    [anon_sym_NOTIN] = ACTIONS(265),
    [anon_sym_8] = ACTIONS(265),
    [anon_sym_ALLINSIDE] = ACTIONS(267),
    [anon_sym_9] = ACTIONS(265),
    [anon_sym_ANYINSIDE] = ACTIONS(267),
    [anon_sym_10] = ACTIONS(265),
    [anon_sym_NONEINSIDE] = ACTIONS(267),
    [anon_sym_11] = ACTIONS(265),
    [anon_sym_OUTSIDE] = ACTIONS(267),
    [anon_sym_INTERSECTS] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(265),
    [aux_sym_function_token2] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(265),
    [anon_sym_count] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(265),
    [aux_sym_function_token5] = ACTIONS(265),
    [aux_sym_function_token6] = ACTIONS(265),
    [aux_sym_function_token7] = ACTIONS(265),
    [aux_sym_function_token8] = ACTIONS(265),
    [aux_sym_function_token9] = ACTIONS(265),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(265),
    [aux_sym_function_token15] = ACTIONS(265),
    [aux_sym_function_token16] = ACTIONS(265),
    [aux_sym_function_token17] = ACTIONS(267),
    [anon_sym_any] = ACTIONS(267),
    [anon_sym_array] = ACTIONS(267),
    [anon_sym_bool] = ACTIONS(267),
    [anon_sym_datetime] = ACTIONS(267),
    [anon_sym_decimal] = ACTIONS(267),
    [anon_sym_duration] = ACTIONS(267),
    [anon_sym_float] = ACTIONS(267),
    [anon_sym_int] = ACTIONS(267),
    [anon_sym_number] = ACTIONS(267),
    [anon_sym_object] = ACTIONS(267),
    [anon_sym_string] = ACTIONS(267),
    [anon_sym_record] = ACTIONS(267),
    [anon_sym_option] = ACTIONS(267),
    [anon_sym_geometry] = ACTIONS(267),
    [anon_sym_EDDSA] = ACTIONS(267),
    [anon_sym_ES256] = ACTIONS(267),
    [anon_sym_ES384] = ACTIONS(267),
    [anon_sym_ES512] = ACTIONS(267),
    [anon_sym_HS256] = ACTIONS(267),
    [anon_sym_HS384] = ACTIONS(267),
    [anon_sym_HS512] = ACTIONS(267),
    [anon_sym_PS256] = ACTIONS(267),
    [anon_sym_PS384] = ACTIONS(267),
    [anon_sym_PS512] = ACTIONS(267),
    [anon_sym_RS256] = ACTIONS(267),
    [anon_sym_RS384] = ACTIONS(267),
    [anon_sym_RS512] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_TRUE] = ACTIONS(267),
    [anon_sym_FALSE] = ACTIONS(267),
    [anon_sym_null] = ACTIONS(267),
    [anon_sym_NULL] = ACTIONS(267),
    [anon_sym_none] = ACTIONS(267),
    [anon_sym_NONE] = ACTIONS(267),
    [sym_variable] = ACTIONS(265),
    [sym_comment] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
  },
  [9] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE_SEMI] = ACTIONS(269),
    [anon_sym_RBRACE_COMMA] = ACTIONS(269),
    [aux_sym_future_token1] = ACTIONS(269),
    [aux_sym_casting_token1] = ACTIONS(269),
    [aux_sym_property_token1] = ACTIONS(271),
    [aux_sym_identifier_token1] = ACTIONS(271),
    [aux_sym_duration_token1] = ACTIONS(271),
    [aux_sym_constant_token1] = ACTIONS(269),
    [aux_sym_number_token1] = ACTIONS(271),
    [aux_sym_record_token1] = ACTIONS(269),
    [aux_sym_record_token2] = ACTIONS(269),
    [anon_sym_USE] = ACTIONS(271),
    [anon_sym_NS] = ACTIONS(271),
    [anon_sym_DB] = ACTIONS(271),
    [anon_sym_LET] = ACTIONS(271),
    [anon_sym_BEGIN] = ACTIONS(271),
    [anon_sym_TRANSACTION] = ACTIONS(271),
    [anon_sym_CANCEL] = ACTIONS(271),
    [anon_sym_COMMIT] = ACTIONS(271),
    [anon_sym_IF] = ACTIONS(271),
    [anon_sym_ELSE] = ACTIONS(271),
    [anon_sym_THEN] = ACTIONS(271),
    [anon_sym_END] = ACTIONS(271),
    [anon_sym_SELECT] = ACTIONS(271),
    [anon_sym_FROM] = ACTIONS(271),
    [anon_sym_WHERE] = ACTIONS(271),
    [anon_sym_SPLIT] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(271),
    [anon_sym_GROUP] = ACTIONS(271),
    [anon_sym_BY] = ACTIONS(271),
    [anon_sym_ORDER] = ACTIONS(271),
    [anon_sym_COLLATE] = ACTIONS(271),
    [anon_sym_NUMERIC] = ACTIONS(271),
    [anon_sym_ASC] = ACTIONS(271),
    [anon_sym_DESC] = ACTIONS(271),
    [anon_sym_LIMIT] = ACTIONS(271),
    [anon_sym_START] = ACTIONS(271),
    [anon_sym_FETCH] = ACTIONS(271),
    [anon_sym_TIMEOUT] = ACTIONS(271),
    [anon_sym_PARALLEL] = ACTIONS(271),
    [anon_sym_INSERT] = ACTIONS(271),
    [anon_sym_IGNORE] = ACTIONS(271),
    [anon_sym_INTO] = ACTIONS(271),
    [anon_sym_VALUES] = ACTIONS(271),
    [anon_sym_ON] = ACTIONS(271),
    [anon_sym_DUPLICATE] = ACTIONS(271),
    [anon_sym_KEY] = ACTIONS(271),
    [anon_sym_UPDATE] = ACTIONS(271),
    [anon_sym_CREATE] = ACTIONS(271),
    [anon_sym_CONTENT] = ACTIONS(271),
    [anon_sym_SET] = ACTIONS(271),
    [anon_sym_RETURN] = ACTIONS(271),
    [anon_sym_BEFORE] = ACTIONS(271),
    [anon_sym_AFTER] = ACTIONS(271),
    [anon_sym_DIFF] = ACTIONS(271),
    [anon_sym_MERGE] = ACTIONS(271),
    [anon_sym_PATCH] = ACTIONS(271),
    [anon_sym_RELATE] = ACTIONS(271),
    [anon_sym_DELETE] = ACTIONS(271),
    [anon_sym_DEFINE] = ACTIONS(271),
    [anon_sym_NAMESPACE] = ACTIONS(271),
    [anon_sym_DATABASE] = ACTIONS(271),
    [anon_sym_USER] = ACTIONS(271),
    [anon_sym_PASSWORD] = ACTIONS(271),
    [anon_sym_PASSHASH] = ACTIONS(271),
    [anon_sym_TOKEN] = ACTIONS(271),
    [anon_sym_SCOPE] = ACTIONS(271),
    [anon_sym_TYPE] = ACTIONS(271),
    [anon_sym_VALUE] = ACTIONS(271),
    [anon_sym_SESSION] = ACTIONS(271),
    [anon_sym_SIGNUP] = ACTIONS(271),
    [anon_sym_SIGNIN] = ACTIONS(271),
    [anon_sym_TABLE] = ACTIONS(271),
    [anon_sym_DROP] = ACTIONS(271),
    [anon_sym_SCHEMAFULL] = ACTIONS(271),
    [anon_sym_SCHEMALESS] = ACTIONS(271),
    [anon_sym_AS] = ACTIONS(271),
    [anon_sym_PERMISSIONS] = ACTIONS(271),
    [anon_sym_FULL] = ACTIONS(271),
    [anon_sym_FOR] = ACTIONS(271),
    [anon_sym_select] = ACTIONS(271),
    [anon_sym_update] = ACTIONS(271),
    [anon_sym_create] = ACTIONS(271),
    [anon_sym_delete] = ACTIONS(271),
    [anon_sym_EVENT] = ACTIONS(271),
    [anon_sym_WHEN] = ACTIONS(271),
    [anon_sym_ASSERT] = ACTIONS(271),
    [anon_sym_INDEX] = ACTIONS(271),
    [anon_sym_FIELD] = ACTIONS(271),
    [anon_sym_FIELDS] = ACTIONS(271),
    [anon_sym_COLUMNS] = ACTIONS(271),
    [anon_sym_UNIQUE] = ACTIONS(271),
    [anon_sym_DEFAULT] = ACTIONS(271),
    [anon_sym_READONLY] = ACTIONS(271),
    [anon_sym_REMOVE] = ACTIONS(271),
    [anon_sym_SLEEP] = ACTIONS(271),
    [anon_sym_INFO] = ACTIONS(271),
    [anon_sym_KV] = ACTIONS(271),
    [anon_sym_TO] = ACTIONS(271),
    [anon_sym_OUT] = ACTIONS(271),
    [anon_sym_IFNOT] = ACTIONS(269),
    [anon_sym_EXISTS] = ACTIONS(271),
    [anon_sym_FUNCTION] = ACTIONS(271),
    [anon_sym_PARAM] = ACTIONS(271),
    [anon_sym_LIVE] = ACTIONS(271),
    [anon_sym_ONLY] = ACTIONS(271),
    [anon_sym_OMIT] = ACTIONS(271),
    [anon_sym_OPTION] = ACTIONS(271),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_AND] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_OR] = ACTIONS(271),
    [anon_sym_QMARK_QMARK] = ACTIONS(269),
    [anon_sym_QMARK_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_IS] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_ISNOT] = ACTIONS(269),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_QMARK_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(269),
    [anon_sym_BANG_TILDE] = ACTIONS(269),
    [anon_sym_QMARK_TILDE] = ACTIONS(269),
    [anon_sym_STAR_TILDE] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(271),
    [anon_sym_x] = ACTIONS(271),
    [anon_sym_SLASH] = ACTIONS(269),
    [anon_sym_] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(269),
    [anon_sym_IN] = ACTIONS(271),
    [anon_sym_CONTAINS] = ACTIONS(271),
    [anon_sym_2] = ACTIONS(269),
    [anon_sym_CONTAINSNOT] = ACTIONS(271),
    [anon_sym_3] = ACTIONS(269),
    [anon_sym_CONTAINSALL] = ACTIONS(271),
    [anon_sym_4] = ACTIONS(269),
    [anon_sym_CONTAINSANY] = ACTIONS(271),
    [anon_sym_5] = ACTIONS(269),
    [anon_sym_CONTAINSNONE] = ACTIONS(271),
    [anon_sym_6] = ACTIONS(269),
    [anon_sym_INSIDE] = ACTIONS(271),
    [anon_sym_7] = ACTIONS(269),
    [anon_sym_NOTINSIDE] = ACTIONS(271),
    [anon_sym_NOTIN] = ACTIONS(269),
    [anon_sym_8] = ACTIONS(269),
    [anon_sym_ALLINSIDE] = ACTIONS(271),
    [anon_sym_9] = ACTIONS(269),
    [anon_sym_ANYINSIDE] = ACTIONS(271),
    [anon_sym_10] = ACTIONS(269),
    [anon_sym_NONEINSIDE] = ACTIONS(271),
    [anon_sym_11] = ACTIONS(269),
    [anon_sym_OUTSIDE] = ACTIONS(271),
    [anon_sym_INTERSECTS] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(269),
    [aux_sym_function_token2] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(269),
    [anon_sym_count] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(269),
    [aux_sym_function_token5] = ACTIONS(269),
    [aux_sym_function_token6] = ACTIONS(269),
    [aux_sym_function_token7] = ACTIONS(269),
    [aux_sym_function_token8] = ACTIONS(269),
    [aux_sym_function_token9] = ACTIONS(269),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(269),
    [aux_sym_function_token15] = ACTIONS(269),
    [aux_sym_function_token16] = ACTIONS(269),
    [aux_sym_function_token17] = ACTIONS(271),
    [anon_sym_any] = ACTIONS(271),
    [anon_sym_array] = ACTIONS(271),
    [anon_sym_bool] = ACTIONS(271),
    [anon_sym_datetime] = ACTIONS(271),
    [anon_sym_decimal] = ACTIONS(271),
    [anon_sym_duration] = ACTIONS(271),
    [anon_sym_float] = ACTIONS(271),
    [anon_sym_int] = ACTIONS(271),
    [anon_sym_number] = ACTIONS(271),
    [anon_sym_object] = ACTIONS(271),
    [anon_sym_string] = ACTIONS(271),
    [anon_sym_record] = ACTIONS(271),
    [anon_sym_option] = ACTIONS(271),
    [anon_sym_geometry] = ACTIONS(271),
    [anon_sym_EDDSA] = ACTIONS(271),
    [anon_sym_ES256] = ACTIONS(271),
    [anon_sym_ES384] = ACTIONS(271),
    [anon_sym_ES512] = ACTIONS(271),
    [anon_sym_HS256] = ACTIONS(271),
    [anon_sym_HS384] = ACTIONS(271),
    [anon_sym_HS512] = ACTIONS(271),
    [anon_sym_PS256] = ACTIONS(271),
    [anon_sym_PS384] = ACTIONS(271),
    [anon_sym_PS512] = ACTIONS(271),
    [anon_sym_RS256] = ACTIONS(271),
    [anon_sym_RS384] = ACTIONS(271),
    [anon_sym_RS512] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_TRUE] = ACTIONS(271),
    [anon_sym_FALSE] = ACTIONS(271),
    [anon_sym_null] = ACTIONS(271),
    [anon_sym_NULL] = ACTIONS(271),
    [anon_sym_none] = ACTIONS(271),
    [anon_sym_NONE] = ACTIONS(271),
    [sym_variable] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(273),
    [aux_sym_future_token1] = ACTIONS(273),
    [aux_sym_casting_token1] = ACTIONS(273),
    [aux_sym_property_token1] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [aux_sym_duration_token1] = ACTIONS(275),
    [aux_sym_constant_token1] = ACTIONS(273),
    [aux_sym_number_token1] = ACTIONS(275),
    [aux_sym_record_token1] = ACTIONS(273),
    [aux_sym_record_token2] = ACTIONS(273),
    [anon_sym_USE] = ACTIONS(275),
    [anon_sym_NS] = ACTIONS(275),
    [anon_sym_DB] = ACTIONS(275),
    [anon_sym_LET] = ACTIONS(275),
    [anon_sym_BEGIN] = ACTIONS(275),
    [anon_sym_TRANSACTION] = ACTIONS(275),
    [anon_sym_CANCEL] = ACTIONS(275),
    [anon_sym_COMMIT] = ACTIONS(275),
    [anon_sym_IF] = ACTIONS(275),
    [anon_sym_ELSE] = ACTIONS(275),
    [anon_sym_THEN] = ACTIONS(275),
    [anon_sym_END] = ACTIONS(275),
    [anon_sym_SELECT] = ACTIONS(275),
    [anon_sym_FROM] = ACTIONS(275),
    [anon_sym_WHERE] = ACTIONS(275),
    [anon_sym_SPLIT] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_GROUP] = ACTIONS(275),
    [anon_sym_BY] = ACTIONS(275),
    [anon_sym_ORDER] = ACTIONS(275),
    [anon_sym_COLLATE] = ACTIONS(275),
    [anon_sym_NUMERIC] = ACTIONS(275),
    [anon_sym_ASC] = ACTIONS(275),
    [anon_sym_DESC] = ACTIONS(275),
    [anon_sym_LIMIT] = ACTIONS(275),
    [anon_sym_START] = ACTIONS(275),
    [anon_sym_FETCH] = ACTIONS(275),
    [anon_sym_TIMEOUT] = ACTIONS(275),
    [anon_sym_PARALLEL] = ACTIONS(275),
    [anon_sym_INSERT] = ACTIONS(275),
    [anon_sym_IGNORE] = ACTIONS(275),
    [anon_sym_INTO] = ACTIONS(275),
    [anon_sym_VALUES] = ACTIONS(275),
    [anon_sym_ON] = ACTIONS(275),
    [anon_sym_DUPLICATE] = ACTIONS(275),
    [anon_sym_KEY] = ACTIONS(275),
    [anon_sym_UPDATE] = ACTIONS(275),
    [anon_sym_CREATE] = ACTIONS(275),
    [anon_sym_CONTENT] = ACTIONS(275),
    [anon_sym_SET] = ACTIONS(275),
    [anon_sym_RETURN] = ACTIONS(275),
    [anon_sym_BEFORE] = ACTIONS(275),
    [anon_sym_AFTER] = ACTIONS(275),
    [anon_sym_DIFF] = ACTIONS(275),
    [anon_sym_MERGE] = ACTIONS(275),
    [anon_sym_PATCH] = ACTIONS(275),
    [anon_sym_RELATE] = ACTIONS(275),
    [anon_sym_DELETE] = ACTIONS(275),
    [anon_sym_DEFINE] = ACTIONS(275),
    [anon_sym_NAMESPACE] = ACTIONS(275),
    [anon_sym_DATABASE] = ACTIONS(275),
    [anon_sym_USER] = ACTIONS(275),
    [anon_sym_PASSWORD] = ACTIONS(275),
    [anon_sym_PASSHASH] = ACTIONS(275),
    [anon_sym_TOKEN] = ACTIONS(275),
    [anon_sym_SCOPE] = ACTIONS(275),
    [anon_sym_TYPE] = ACTIONS(275),
    [anon_sym_VALUE] = ACTIONS(275),
    [anon_sym_SESSION] = ACTIONS(275),
    [anon_sym_SIGNUP] = ACTIONS(275),
    [anon_sym_SIGNIN] = ACTIONS(275),
    [anon_sym_TABLE] = ACTIONS(275),
    [anon_sym_DROP] = ACTIONS(275),
    [anon_sym_SCHEMAFULL] = ACTIONS(275),
    [anon_sym_SCHEMALESS] = ACTIONS(275),
    [anon_sym_AS] = ACTIONS(275),
    [anon_sym_PERMISSIONS] = ACTIONS(275),
    [anon_sym_FULL] = ACTIONS(275),
    [anon_sym_FOR] = ACTIONS(275),
    [anon_sym_select] = ACTIONS(275),
    [anon_sym_update] = ACTIONS(275),
    [anon_sym_create] = ACTIONS(275),
    [anon_sym_delete] = ACTIONS(275),
    [anon_sym_EVENT] = ACTIONS(275),
    [anon_sym_WHEN] = ACTIONS(275),
    [anon_sym_ASSERT] = ACTIONS(275),
    [anon_sym_INDEX] = ACTIONS(275),
    [anon_sym_FIELD] = ACTIONS(275),
    [anon_sym_FIELDS] = ACTIONS(275),
    [anon_sym_COLUMNS] = ACTIONS(275),
    [anon_sym_UNIQUE] = ACTIONS(275),
    [anon_sym_DEFAULT] = ACTIONS(275),
    [anon_sym_READONLY] = ACTIONS(275),
    [anon_sym_REMOVE] = ACTIONS(275),
    [anon_sym_SLEEP] = ACTIONS(275),
    [anon_sym_INFO] = ACTIONS(275),
    [anon_sym_KV] = ACTIONS(275),
    [anon_sym_TO] = ACTIONS(275),
    [anon_sym_OUT] = ACTIONS(275),
    [anon_sym_IFNOT] = ACTIONS(273),
    [anon_sym_EXISTS] = ACTIONS(275),
    [anon_sym_FUNCTION] = ACTIONS(275),
    [anon_sym_PARAM] = ACTIONS(275),
    [anon_sym_LIVE] = ACTIONS(275),
    [anon_sym_ONLY] = ACTIONS(275),
    [anon_sym_OMIT] = ACTIONS(275),
    [anon_sym_OPTION] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_AND] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_OR] = ACTIONS(275),
    [anon_sym_QMARK_QMARK] = ACTIONS(273),
    [anon_sym_QMARK_COLON] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_IS] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(273),
    [anon_sym_ISNOT] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(273),
    [anon_sym_QMARK_EQ] = ACTIONS(273),
    [anon_sym_STAR_EQ] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(273),
    [anon_sym_BANG_TILDE] = ACTIONS(273),
    [anon_sym_QMARK_TILDE] = ACTIONS(273),
    [anon_sym_STAR_TILDE] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_EQ] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_x] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(275),
    [anon_sym_] = ACTIONS(273),
    [anon_sym_STAR_STAR] = ACTIONS(273),
    [anon_sym_IN] = ACTIONS(275),
    [anon_sym_CONTAINS] = ACTIONS(275),
    [anon_sym_2] = ACTIONS(273),
    [anon_sym_CONTAINSNOT] = ACTIONS(275),
    [anon_sym_3] = ACTIONS(273),
    [anon_sym_CONTAINSALL] = ACTIONS(275),
    [anon_sym_4] = ACTIONS(273),
    [anon_sym_CONTAINSANY] = ACTIONS(275),
    [anon_sym_5] = ACTIONS(273),
    [anon_sym_CONTAINSNONE] = ACTIONS(275),
    [anon_sym_6] = ACTIONS(273),
    [anon_sym_INSIDE] = ACTIONS(275),
    [anon_sym_7] = ACTIONS(273),
    [anon_sym_NOTINSIDE] = ACTIONS(275),
    [anon_sym_NOTIN] = ACTIONS(273),
    [anon_sym_8] = ACTIONS(273),
    [anon_sym_ALLINSIDE] = ACTIONS(275),
    [anon_sym_9] = ACTIONS(273),
    [anon_sym_ANYINSIDE] = ACTIONS(275),
    [anon_sym_10] = ACTIONS(273),
    [anon_sym_NONEINSIDE] = ACTIONS(275),
    [anon_sym_11] = ACTIONS(273),
    [anon_sym_OUTSIDE] = ACTIONS(275),
    [anon_sym_INTERSECTS] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(273),
    [aux_sym_function_token2] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(273),
    [anon_sym_count] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(273),
    [aux_sym_function_token5] = ACTIONS(273),
    [aux_sym_function_token6] = ACTIONS(273),
    [aux_sym_function_token7] = ACTIONS(273),
    [aux_sym_function_token8] = ACTIONS(273),
    [aux_sym_function_token9] = ACTIONS(273),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(273),
    [aux_sym_function_token15] = ACTIONS(273),
    [aux_sym_function_token16] = ACTIONS(273),
    [aux_sym_function_token17] = ACTIONS(275),
    [anon_sym_any] = ACTIONS(275),
    [anon_sym_array] = ACTIONS(275),
    [anon_sym_bool] = ACTIONS(275),
    [anon_sym_datetime] = ACTIONS(275),
    [anon_sym_decimal] = ACTIONS(275),
    [anon_sym_duration] = ACTIONS(275),
    [anon_sym_float] = ACTIONS(275),
    [anon_sym_int] = ACTIONS(275),
    [anon_sym_number] = ACTIONS(275),
    [anon_sym_object] = ACTIONS(275),
    [anon_sym_string] = ACTIONS(275),
    [anon_sym_record] = ACTIONS(275),
    [anon_sym_option] = ACTIONS(275),
    [anon_sym_geometry] = ACTIONS(275),
    [anon_sym_EDDSA] = ACTIONS(275),
    [anon_sym_ES256] = ACTIONS(275),
    [anon_sym_ES384] = ACTIONS(275),
    [anon_sym_ES512] = ACTIONS(275),
    [anon_sym_HS256] = ACTIONS(275),
    [anon_sym_HS384] = ACTIONS(275),
    [anon_sym_HS512] = ACTIONS(275),
    [anon_sym_PS256] = ACTIONS(275),
    [anon_sym_PS384] = ACTIONS(275),
    [anon_sym_PS512] = ACTIONS(275),
    [anon_sym_RS256] = ACTIONS(275),
    [anon_sym_RS384] = ACTIONS(275),
    [anon_sym_RS512] = ACTIONS(275),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_TRUE] = ACTIONS(275),
    [anon_sym_FALSE] = ACTIONS(275),
    [anon_sym_null] = ACTIONS(275),
    [anon_sym_NULL] = ACTIONS(275),
    [anon_sym_none] = ACTIONS(275),
    [anon_sym_NONE] = ACTIONS(275),
    [sym_variable] = ACTIONS(273),
    [sym_comment] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(277),
    [aux_sym_future_token1] = ACTIONS(277),
    [aux_sym_casting_token1] = ACTIONS(277),
    [aux_sym_property_token1] = ACTIONS(279),
    [aux_sym_identifier_token1] = ACTIONS(279),
    [aux_sym_duration_token1] = ACTIONS(279),
    [aux_sym_constant_token1] = ACTIONS(277),
    [aux_sym_number_token1] = ACTIONS(279),
    [aux_sym_record_token1] = ACTIONS(277),
    [aux_sym_record_token2] = ACTIONS(277),
    [anon_sym_USE] = ACTIONS(279),
    [anon_sym_NS] = ACTIONS(279),
    [anon_sym_DB] = ACTIONS(279),
    [anon_sym_LET] = ACTIONS(279),
    [anon_sym_BEGIN] = ACTIONS(279),
    [anon_sym_TRANSACTION] = ACTIONS(279),
    [anon_sym_CANCEL] = ACTIONS(279),
    [anon_sym_COMMIT] = ACTIONS(279),
    [anon_sym_IF] = ACTIONS(279),
    [anon_sym_ELSE] = ACTIONS(279),
    [anon_sym_THEN] = ACTIONS(279),
    [anon_sym_END] = ACTIONS(279),
    [anon_sym_SELECT] = ACTIONS(279),
    [anon_sym_FROM] = ACTIONS(279),
    [anon_sym_WHERE] = ACTIONS(279),
    [anon_sym_SPLIT] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_GROUP] = ACTIONS(279),
    [anon_sym_BY] = ACTIONS(279),
    [anon_sym_ORDER] = ACTIONS(279),
    [anon_sym_COLLATE] = ACTIONS(279),
    [anon_sym_NUMERIC] = ACTIONS(279),
    [anon_sym_ASC] = ACTIONS(279),
    [anon_sym_DESC] = ACTIONS(279),
    [anon_sym_LIMIT] = ACTIONS(279),
    [anon_sym_START] = ACTIONS(279),
    [anon_sym_FETCH] = ACTIONS(279),
    [anon_sym_TIMEOUT] = ACTIONS(279),
    [anon_sym_PARALLEL] = ACTIONS(279),
    [anon_sym_INSERT] = ACTIONS(279),
    [anon_sym_IGNORE] = ACTIONS(279),
    [anon_sym_INTO] = ACTIONS(279),
    [anon_sym_VALUES] = ACTIONS(279),
    [anon_sym_ON] = ACTIONS(279),
    [anon_sym_DUPLICATE] = ACTIONS(279),
    [anon_sym_KEY] = ACTIONS(279),
    [anon_sym_UPDATE] = ACTIONS(279),
    [anon_sym_CREATE] = ACTIONS(279),
    [anon_sym_CONTENT] = ACTIONS(279),
    [anon_sym_SET] = ACTIONS(279),
    [anon_sym_RETURN] = ACTIONS(279),
    [anon_sym_BEFORE] = ACTIONS(279),
    [anon_sym_AFTER] = ACTIONS(279),
    [anon_sym_DIFF] = ACTIONS(279),
    [anon_sym_MERGE] = ACTIONS(279),
    [anon_sym_PATCH] = ACTIONS(279),
    [anon_sym_RELATE] = ACTIONS(279),
    [anon_sym_DELETE] = ACTIONS(279),
    [anon_sym_DEFINE] = ACTIONS(279),
    [anon_sym_NAMESPACE] = ACTIONS(279),
    [anon_sym_DATABASE] = ACTIONS(279),
    [anon_sym_USER] = ACTIONS(279),
    [anon_sym_PASSWORD] = ACTIONS(279),
    [anon_sym_PASSHASH] = ACTIONS(279),
    [anon_sym_TOKEN] = ACTIONS(279),
    [anon_sym_SCOPE] = ACTIONS(279),
    [anon_sym_TYPE] = ACTIONS(279),
    [anon_sym_VALUE] = ACTIONS(279),
    [anon_sym_SESSION] = ACTIONS(279),
    [anon_sym_SIGNUP] = ACTIONS(279),
    [anon_sym_SIGNIN] = ACTIONS(279),
    [anon_sym_TABLE] = ACTIONS(279),
    [anon_sym_DROP] = ACTIONS(279),
    [anon_sym_SCHEMAFULL] = ACTIONS(279),
    [anon_sym_SCHEMALESS] = ACTIONS(279),
    [anon_sym_AS] = ACTIONS(279),
    [anon_sym_PERMISSIONS] = ACTIONS(279),
    [anon_sym_FULL] = ACTIONS(279),
    [anon_sym_FOR] = ACTIONS(279),
    [anon_sym_select] = ACTIONS(279),
    [anon_sym_update] = ACTIONS(279),
    [anon_sym_create] = ACTIONS(279),
    [anon_sym_delete] = ACTIONS(279),
    [anon_sym_EVENT] = ACTIONS(279),
    [anon_sym_WHEN] = ACTIONS(279),
    [anon_sym_ASSERT] = ACTIONS(279),
    [anon_sym_INDEX] = ACTIONS(279),
    [anon_sym_FIELD] = ACTIONS(279),
    [anon_sym_FIELDS] = ACTIONS(279),
    [anon_sym_COLUMNS] = ACTIONS(279),
    [anon_sym_UNIQUE] = ACTIONS(279),
    [anon_sym_DEFAULT] = ACTIONS(279),
    [anon_sym_READONLY] = ACTIONS(279),
    [anon_sym_REMOVE] = ACTIONS(279),
    [anon_sym_SLEEP] = ACTIONS(279),
    [anon_sym_INFO] = ACTIONS(279),
    [anon_sym_KV] = ACTIONS(279),
    [anon_sym_TO] = ACTIONS(279),
    [anon_sym_OUT] = ACTIONS(279),
    [anon_sym_IFNOT] = ACTIONS(277),
    [anon_sym_EXISTS] = ACTIONS(279),
    [anon_sym_FUNCTION] = ACTIONS(279),
    [anon_sym_PARAM] = ACTIONS(279),
    [anon_sym_LIVE] = ACTIONS(279),
    [anon_sym_ONLY] = ACTIONS(279),
    [anon_sym_OMIT] = ACTIONS(279),
    [anon_sym_OPTION] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AND] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_OR] = ACTIONS(279),
    [anon_sym_QMARK_QMARK] = ACTIONS(277),
    [anon_sym_QMARK_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_IS] = ACTIONS(279),
    [anon_sym_BANG_EQ] = ACTIONS(277),
    [anon_sym_ISNOT] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(277),
    [anon_sym_QMARK_EQ] = ACTIONS(277),
    [anon_sym_STAR_EQ] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(277),
    [anon_sym_BANG_TILDE] = ACTIONS(277),
    [anon_sym_QMARK_TILDE] = ACTIONS(277),
    [anon_sym_STAR_TILDE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_x] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(279),
    [anon_sym_] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [anon_sym_IN] = ACTIONS(279),
    [anon_sym_CONTAINS] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(277),
    [anon_sym_CONTAINSNOT] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(277),
    [anon_sym_CONTAINSALL] = ACTIONS(279),
    [anon_sym_4] = ACTIONS(277),
    [anon_sym_CONTAINSANY] = ACTIONS(279),
    [anon_sym_5] = ACTIONS(277),
    [anon_sym_CONTAINSNONE] = ACTIONS(279),
    [anon_sym_6] = ACTIONS(277),
    [anon_sym_INSIDE] = ACTIONS(279),
    [anon_sym_7] = ACTIONS(277),
    [anon_sym_NOTINSIDE] = ACTIONS(279),
    [anon_sym_NOTIN] = ACTIONS(277),
    [anon_sym_8] = ACTIONS(277),
    [anon_sym_ALLINSIDE] = ACTIONS(279),
    [anon_sym_9] = ACTIONS(277),
    [anon_sym_ANYINSIDE] = ACTIONS(279),
    [anon_sym_10] = ACTIONS(277),
    [anon_sym_NONEINSIDE] = ACTIONS(279),
    [anon_sym_11] = ACTIONS(277),
    [anon_sym_OUTSIDE] = ACTIONS(279),
    [anon_sym_INTERSECTS] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(277),
    [aux_sym_function_token2] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(277),
    [anon_sym_count] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(277),
    [aux_sym_function_token5] = ACTIONS(277),
    [aux_sym_function_token6] = ACTIONS(277),
    [aux_sym_function_token7] = ACTIONS(277),
    [aux_sym_function_token8] = ACTIONS(277),
    [aux_sym_function_token9] = ACTIONS(277),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(277),
    [aux_sym_function_token15] = ACTIONS(277),
    [aux_sym_function_token16] = ACTIONS(277),
    [aux_sym_function_token17] = ACTIONS(279),
    [anon_sym_any] = ACTIONS(279),
    [anon_sym_array] = ACTIONS(279),
    [anon_sym_bool] = ACTIONS(279),
    [anon_sym_datetime] = ACTIONS(279),
    [anon_sym_decimal] = ACTIONS(279),
    [anon_sym_duration] = ACTIONS(279),
    [anon_sym_float] = ACTIONS(279),
    [anon_sym_int] = ACTIONS(279),
    [anon_sym_number] = ACTIONS(279),
    [anon_sym_object] = ACTIONS(279),
    [anon_sym_string] = ACTIONS(279),
    [anon_sym_record] = ACTIONS(279),
    [anon_sym_option] = ACTIONS(279),
    [anon_sym_geometry] = ACTIONS(279),
    [anon_sym_EDDSA] = ACTIONS(279),
    [anon_sym_ES256] = ACTIONS(279),
    [anon_sym_ES384] = ACTIONS(279),
    [anon_sym_ES512] = ACTIONS(279),
    [anon_sym_HS256] = ACTIONS(279),
    [anon_sym_HS384] = ACTIONS(279),
    [anon_sym_HS512] = ACTIONS(279),
    [anon_sym_PS256] = ACTIONS(279),
    [anon_sym_PS384] = ACTIONS(279),
    [anon_sym_PS512] = ACTIONS(279),
    [anon_sym_RS256] = ACTIONS(279),
    [anon_sym_RS384] = ACTIONS(279),
    [anon_sym_RS512] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_TRUE] = ACTIONS(279),
    [anon_sym_FALSE] = ACTIONS(279),
    [anon_sym_null] = ACTIONS(279),
    [anon_sym_NULL] = ACTIONS(279),
    [anon_sym_none] = ACTIONS(279),
    [anon_sym_NONE] = ACTIONS(279),
    [sym_variable] = ACTIONS(277),
    [sym_comment] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(281),
    [aux_sym_future_token1] = ACTIONS(281),
    [aux_sym_casting_token1] = ACTIONS(281),
    [aux_sym_property_token1] = ACTIONS(283),
    [aux_sym_identifier_token1] = ACTIONS(283),
    [aux_sym_duration_token1] = ACTIONS(283),
    [aux_sym_constant_token1] = ACTIONS(281),
    [aux_sym_number_token1] = ACTIONS(283),
    [aux_sym_record_token1] = ACTIONS(281),
    [aux_sym_record_token2] = ACTIONS(281),
    [anon_sym_USE] = ACTIONS(283),
    [anon_sym_NS] = ACTIONS(283),
    [anon_sym_DB] = ACTIONS(283),
    [anon_sym_LET] = ACTIONS(283),
    [anon_sym_BEGIN] = ACTIONS(283),
    [anon_sym_TRANSACTION] = ACTIONS(283),
    [anon_sym_CANCEL] = ACTIONS(283),
    [anon_sym_COMMIT] = ACTIONS(283),
    [anon_sym_IF] = ACTIONS(283),
    [anon_sym_ELSE] = ACTIONS(283),
    [anon_sym_THEN] = ACTIONS(283),
    [anon_sym_END] = ACTIONS(283),
    [anon_sym_SELECT] = ACTIONS(283),
    [anon_sym_FROM] = ACTIONS(283),
    [anon_sym_WHERE] = ACTIONS(283),
    [anon_sym_SPLIT] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_GROUP] = ACTIONS(283),
    [anon_sym_BY] = ACTIONS(283),
    [anon_sym_ORDER] = ACTIONS(283),
    [anon_sym_COLLATE] = ACTIONS(283),
    [anon_sym_NUMERIC] = ACTIONS(283),
    [anon_sym_ASC] = ACTIONS(283),
    [anon_sym_DESC] = ACTIONS(283),
    [anon_sym_LIMIT] = ACTIONS(283),
    [anon_sym_START] = ACTIONS(283),
    [anon_sym_FETCH] = ACTIONS(283),
    [anon_sym_TIMEOUT] = ACTIONS(283),
    [anon_sym_PARALLEL] = ACTIONS(283),
    [anon_sym_INSERT] = ACTIONS(283),
    [anon_sym_IGNORE] = ACTIONS(283),
    [anon_sym_INTO] = ACTIONS(283),
    [anon_sym_VALUES] = ACTIONS(283),
    [anon_sym_ON] = ACTIONS(283),
    [anon_sym_DUPLICATE] = ACTIONS(283),
    [anon_sym_KEY] = ACTIONS(283),
    [anon_sym_UPDATE] = ACTIONS(283),
    [anon_sym_CREATE] = ACTIONS(283),
    [anon_sym_CONTENT] = ACTIONS(283),
    [anon_sym_SET] = ACTIONS(283),
    [anon_sym_RETURN] = ACTIONS(283),
    [anon_sym_BEFORE] = ACTIONS(283),
    [anon_sym_AFTER] = ACTIONS(283),
    [anon_sym_DIFF] = ACTIONS(283),
    [anon_sym_MERGE] = ACTIONS(283),
    [anon_sym_PATCH] = ACTIONS(283),
    [anon_sym_RELATE] = ACTIONS(283),
    [anon_sym_DELETE] = ACTIONS(283),
    [anon_sym_DEFINE] = ACTIONS(283),
    [anon_sym_NAMESPACE] = ACTIONS(283),
    [anon_sym_DATABASE] = ACTIONS(283),
    [anon_sym_USER] = ACTIONS(283),
    [anon_sym_PASSWORD] = ACTIONS(283),
    [anon_sym_PASSHASH] = ACTIONS(283),
    [anon_sym_TOKEN] = ACTIONS(283),
    [anon_sym_SCOPE] = ACTIONS(283),
    [anon_sym_TYPE] = ACTIONS(283),
    [anon_sym_VALUE] = ACTIONS(283),
    [anon_sym_SESSION] = ACTIONS(283),
    [anon_sym_SIGNUP] = ACTIONS(283),
    [anon_sym_SIGNIN] = ACTIONS(283),
    [anon_sym_TABLE] = ACTIONS(283),
    [anon_sym_DROP] = ACTIONS(283),
    [anon_sym_SCHEMAFULL] = ACTIONS(283),
    [anon_sym_SCHEMALESS] = ACTIONS(283),
    [anon_sym_AS] = ACTIONS(283),
    [anon_sym_PERMISSIONS] = ACTIONS(283),
    [anon_sym_FULL] = ACTIONS(283),
    [anon_sym_FOR] = ACTIONS(283),
    [anon_sym_select] = ACTIONS(283),
    [anon_sym_update] = ACTIONS(283),
    [anon_sym_create] = ACTIONS(283),
    [anon_sym_delete] = ACTIONS(283),
    [anon_sym_EVENT] = ACTIONS(283),
    [anon_sym_WHEN] = ACTIONS(283),
    [anon_sym_ASSERT] = ACTIONS(283),
    [anon_sym_INDEX] = ACTIONS(283),
    [anon_sym_FIELD] = ACTIONS(283),
    [anon_sym_FIELDS] = ACTIONS(283),
    [anon_sym_COLUMNS] = ACTIONS(283),
    [anon_sym_UNIQUE] = ACTIONS(283),
    [anon_sym_DEFAULT] = ACTIONS(283),
    [anon_sym_READONLY] = ACTIONS(283),
    [anon_sym_REMOVE] = ACTIONS(283),
    [anon_sym_SLEEP] = ACTIONS(283),
    [anon_sym_INFO] = ACTIONS(283),
    [anon_sym_KV] = ACTIONS(283),
    [anon_sym_TO] = ACTIONS(283),
    [anon_sym_OUT] = ACTIONS(283),
    [anon_sym_IFNOT] = ACTIONS(281),
    [anon_sym_EXISTS] = ACTIONS(283),
    [anon_sym_FUNCTION] = ACTIONS(283),
    [anon_sym_PARAM] = ACTIONS(283),
    [anon_sym_LIVE] = ACTIONS(283),
    [anon_sym_ONLY] = ACTIONS(283),
    [anon_sym_OMIT] = ACTIONS(283),
    [anon_sym_OPTION] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_AND] = ACTIONS(283),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_OR] = ACTIONS(283),
    [anon_sym_QMARK_QMARK] = ACTIONS(281),
    [anon_sym_QMARK_COLON] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_IS] = ACTIONS(283),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_ISNOT] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_QMARK_EQ] = ACTIONS(281),
    [anon_sym_STAR_EQ] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_BANG_TILDE] = ACTIONS(281),
    [anon_sym_QMARK_TILDE] = ACTIONS(281),
    [anon_sym_STAR_TILDE] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(283),
    [anon_sym_x] = ACTIONS(283),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_IN] = ACTIONS(283),
    [anon_sym_CONTAINS] = ACTIONS(283),
    [anon_sym_2] = ACTIONS(281),
    [anon_sym_CONTAINSNOT] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(281),
    [anon_sym_CONTAINSALL] = ACTIONS(283),
    [anon_sym_4] = ACTIONS(281),
    [anon_sym_CONTAINSANY] = ACTIONS(283),
    [anon_sym_5] = ACTIONS(281),
    [anon_sym_CONTAINSNONE] = ACTIONS(283),
    [anon_sym_6] = ACTIONS(281),
    [anon_sym_INSIDE] = ACTIONS(283),
    [anon_sym_7] = ACTIONS(281),
    [anon_sym_NOTINSIDE] = ACTIONS(283),
    [anon_sym_NOTIN] = ACTIONS(281),
    [anon_sym_8] = ACTIONS(281),
    [anon_sym_ALLINSIDE] = ACTIONS(283),
    [anon_sym_9] = ACTIONS(281),
    [anon_sym_ANYINSIDE] = ACTIONS(283),
    [anon_sym_10] = ACTIONS(281),
    [anon_sym_NONEINSIDE] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(281),
    [anon_sym_OUTSIDE] = ACTIONS(283),
    [anon_sym_INTERSECTS] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(281),
    [aux_sym_function_token2] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(281),
    [anon_sym_count] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(281),
    [aux_sym_function_token5] = ACTIONS(281),
    [aux_sym_function_token6] = ACTIONS(281),
    [aux_sym_function_token7] = ACTIONS(281),
    [aux_sym_function_token8] = ACTIONS(281),
    [aux_sym_function_token9] = ACTIONS(281),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(281),
    [aux_sym_function_token15] = ACTIONS(281),
    [aux_sym_function_token16] = ACTIONS(281),
    [aux_sym_function_token17] = ACTIONS(283),
    [anon_sym_any] = ACTIONS(283),
    [anon_sym_array] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(283),
    [anon_sym_datetime] = ACTIONS(283),
    [anon_sym_decimal] = ACTIONS(283),
    [anon_sym_duration] = ACTIONS(283),
    [anon_sym_float] = ACTIONS(283),
    [anon_sym_int] = ACTIONS(283),
    [anon_sym_number] = ACTIONS(283),
    [anon_sym_object] = ACTIONS(283),
    [anon_sym_string] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_option] = ACTIONS(283),
    [anon_sym_geometry] = ACTIONS(283),
    [anon_sym_EDDSA] = ACTIONS(283),
    [anon_sym_ES256] = ACTIONS(283),
    [anon_sym_ES384] = ACTIONS(283),
    [anon_sym_ES512] = ACTIONS(283),
    [anon_sym_HS256] = ACTIONS(283),
    [anon_sym_HS384] = ACTIONS(283),
    [anon_sym_HS512] = ACTIONS(283),
    [anon_sym_PS256] = ACTIONS(283),
    [anon_sym_PS384] = ACTIONS(283),
    [anon_sym_PS512] = ACTIONS(283),
    [anon_sym_RS256] = ACTIONS(283),
    [anon_sym_RS384] = ACTIONS(283),
    [anon_sym_RS512] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_TRUE] = ACTIONS(283),
    [anon_sym_FALSE] = ACTIONS(283),
    [anon_sym_null] = ACTIONS(283),
    [anon_sym_NULL] = ACTIONS(283),
    [anon_sym_none] = ACTIONS(283),
    [anon_sym_NONE] = ACTIONS(283),
    [sym_variable] = ACTIONS(281),
    [sym_comment] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(285),
    [aux_sym_future_token1] = ACTIONS(285),
    [aux_sym_casting_token1] = ACTIONS(285),
    [aux_sym_property_token1] = ACTIONS(287),
    [aux_sym_identifier_token1] = ACTIONS(287),
    [aux_sym_duration_token1] = ACTIONS(287),
    [aux_sym_constant_token1] = ACTIONS(285),
    [aux_sym_number_token1] = ACTIONS(287),
    [aux_sym_record_token1] = ACTIONS(285),
    [aux_sym_record_token2] = ACTIONS(285),
    [anon_sym_USE] = ACTIONS(287),
    [anon_sym_NS] = ACTIONS(287),
    [anon_sym_DB] = ACTIONS(287),
    [anon_sym_LET] = ACTIONS(287),
    [anon_sym_BEGIN] = ACTIONS(287),
    [anon_sym_TRANSACTION] = ACTIONS(287),
    [anon_sym_CANCEL] = ACTIONS(287),
    [anon_sym_COMMIT] = ACTIONS(287),
    [anon_sym_IF] = ACTIONS(287),
    [anon_sym_ELSE] = ACTIONS(287),
    [anon_sym_THEN] = ACTIONS(287),
    [anon_sym_END] = ACTIONS(287),
    [anon_sym_SELECT] = ACTIONS(287),
    [anon_sym_FROM] = ACTIONS(287),
    [anon_sym_WHERE] = ACTIONS(287),
    [anon_sym_SPLIT] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_GROUP] = ACTIONS(287),
    [anon_sym_BY] = ACTIONS(287),
    [anon_sym_ORDER] = ACTIONS(287),
    [anon_sym_COLLATE] = ACTIONS(287),
    [anon_sym_NUMERIC] = ACTIONS(287),
    [anon_sym_ASC] = ACTIONS(287),
    [anon_sym_DESC] = ACTIONS(287),
    [anon_sym_LIMIT] = ACTIONS(287),
    [anon_sym_START] = ACTIONS(287),
    [anon_sym_FETCH] = ACTIONS(287),
    [anon_sym_TIMEOUT] = ACTIONS(287),
    [anon_sym_PARALLEL] = ACTIONS(287),
    [anon_sym_INSERT] = ACTIONS(287),
    [anon_sym_IGNORE] = ACTIONS(287),
    [anon_sym_INTO] = ACTIONS(287),
    [anon_sym_VALUES] = ACTIONS(287),
    [anon_sym_ON] = ACTIONS(287),
    [anon_sym_DUPLICATE] = ACTIONS(287),
    [anon_sym_KEY] = ACTIONS(287),
    [anon_sym_UPDATE] = ACTIONS(287),
    [anon_sym_CREATE] = ACTIONS(287),
    [anon_sym_CONTENT] = ACTIONS(287),
    [anon_sym_SET] = ACTIONS(287),
    [anon_sym_RETURN] = ACTIONS(287),
    [anon_sym_BEFORE] = ACTIONS(287),
    [anon_sym_AFTER] = ACTIONS(287),
    [anon_sym_DIFF] = ACTIONS(287),
    [anon_sym_MERGE] = ACTIONS(287),
    [anon_sym_PATCH] = ACTIONS(287),
    [anon_sym_RELATE] = ACTIONS(287),
    [anon_sym_DELETE] = ACTIONS(287),
    [anon_sym_DEFINE] = ACTIONS(287),
    [anon_sym_NAMESPACE] = ACTIONS(287),
    [anon_sym_DATABASE] = ACTIONS(287),
    [anon_sym_USER] = ACTIONS(287),
    [anon_sym_PASSWORD] = ACTIONS(287),
    [anon_sym_PASSHASH] = ACTIONS(287),
    [anon_sym_TOKEN] = ACTIONS(287),
    [anon_sym_SCOPE] = ACTIONS(287),
    [anon_sym_TYPE] = ACTIONS(287),
    [anon_sym_VALUE] = ACTIONS(287),
    [anon_sym_SESSION] = ACTIONS(287),
    [anon_sym_SIGNUP] = ACTIONS(287),
    [anon_sym_SIGNIN] = ACTIONS(287),
    [anon_sym_TABLE] = ACTIONS(287),
    [anon_sym_DROP] = ACTIONS(287),
    [anon_sym_SCHEMAFULL] = ACTIONS(287),
    [anon_sym_SCHEMALESS] = ACTIONS(287),
    [anon_sym_AS] = ACTIONS(287),
    [anon_sym_PERMISSIONS] = ACTIONS(287),
    [anon_sym_FULL] = ACTIONS(287),
    [anon_sym_FOR] = ACTIONS(287),
    [anon_sym_select] = ACTIONS(287),
    [anon_sym_update] = ACTIONS(287),
    [anon_sym_create] = ACTIONS(287),
    [anon_sym_delete] = ACTIONS(287),
    [anon_sym_EVENT] = ACTIONS(287),
    [anon_sym_WHEN] = ACTIONS(287),
    [anon_sym_ASSERT] = ACTIONS(287),
    [anon_sym_INDEX] = ACTIONS(287),
    [anon_sym_FIELD] = ACTIONS(287),
    [anon_sym_FIELDS] = ACTIONS(287),
    [anon_sym_COLUMNS] = ACTIONS(287),
    [anon_sym_UNIQUE] = ACTIONS(287),
    [anon_sym_DEFAULT] = ACTIONS(287),
    [anon_sym_READONLY] = ACTIONS(287),
    [anon_sym_REMOVE] = ACTIONS(287),
    [anon_sym_SLEEP] = ACTIONS(287),
    [anon_sym_INFO] = ACTIONS(287),
    [anon_sym_KV] = ACTIONS(287),
    [anon_sym_TO] = ACTIONS(287),
    [anon_sym_OUT] = ACTIONS(287),
    [anon_sym_IFNOT] = ACTIONS(285),
    [anon_sym_EXISTS] = ACTIONS(287),
    [anon_sym_FUNCTION] = ACTIONS(287),
    [anon_sym_PARAM] = ACTIONS(287),
    [anon_sym_LIVE] = ACTIONS(287),
    [anon_sym_ONLY] = ACTIONS(287),
    [anon_sym_OMIT] = ACTIONS(287),
    [anon_sym_OPTION] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_AND] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_OR] = ACTIONS(287),
    [anon_sym_QMARK_QMARK] = ACTIONS(285),
    [anon_sym_QMARK_COLON] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_IS] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_ISNOT] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_QMARK_EQ] = ACTIONS(285),
    [anon_sym_STAR_EQ] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(285),
    [anon_sym_BANG_TILDE] = ACTIONS(285),
    [anon_sym_QMARK_TILDE] = ACTIONS(285),
    [anon_sym_STAR_TILDE] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_x] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(287),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(285),
    [anon_sym_IN] = ACTIONS(287),
    [anon_sym_CONTAINS] = ACTIONS(287),
    [anon_sym_2] = ACTIONS(285),
    [anon_sym_CONTAINSNOT] = ACTIONS(287),
    [anon_sym_3] = ACTIONS(285),
    [anon_sym_CONTAINSALL] = ACTIONS(287),
    [anon_sym_4] = ACTIONS(285),
    [anon_sym_CONTAINSANY] = ACTIONS(287),
    [anon_sym_5] = ACTIONS(285),
    [anon_sym_CONTAINSNONE] = ACTIONS(287),
    [anon_sym_6] = ACTIONS(285),
    [anon_sym_INSIDE] = ACTIONS(287),
    [anon_sym_7] = ACTIONS(285),
    [anon_sym_NOTINSIDE] = ACTIONS(287),
    [anon_sym_NOTIN] = ACTIONS(285),
    [anon_sym_8] = ACTIONS(285),
    [anon_sym_ALLINSIDE] = ACTIONS(287),
    [anon_sym_9] = ACTIONS(285),
    [anon_sym_ANYINSIDE] = ACTIONS(287),
    [anon_sym_10] = ACTIONS(285),
    [anon_sym_NONEINSIDE] = ACTIONS(287),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_OUTSIDE] = ACTIONS(287),
    [anon_sym_INTERSECTS] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(285),
    [aux_sym_function_token2] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(285),
    [anon_sym_count] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(285),
    [aux_sym_function_token5] = ACTIONS(285),
    [aux_sym_function_token6] = ACTIONS(285),
    [aux_sym_function_token7] = ACTIONS(285),
    [aux_sym_function_token8] = ACTIONS(285),
    [aux_sym_function_token9] = ACTIONS(285),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(285),
    [aux_sym_function_token15] = ACTIONS(285),
    [aux_sym_function_token16] = ACTIONS(285),
    [aux_sym_function_token17] = ACTIONS(287),
    [anon_sym_any] = ACTIONS(287),
    [anon_sym_array] = ACTIONS(287),
    [anon_sym_bool] = ACTIONS(287),
    [anon_sym_datetime] = ACTIONS(287),
    [anon_sym_decimal] = ACTIONS(287),
    [anon_sym_duration] = ACTIONS(287),
    [anon_sym_float] = ACTIONS(287),
    [anon_sym_int] = ACTIONS(287),
    [anon_sym_number] = ACTIONS(287),
    [anon_sym_object] = ACTIONS(287),
    [anon_sym_string] = ACTIONS(287),
    [anon_sym_record] = ACTIONS(287),
    [anon_sym_option] = ACTIONS(287),
    [anon_sym_geometry] = ACTIONS(287),
    [anon_sym_EDDSA] = ACTIONS(287),
    [anon_sym_ES256] = ACTIONS(287),
    [anon_sym_ES384] = ACTIONS(287),
    [anon_sym_ES512] = ACTIONS(287),
    [anon_sym_HS256] = ACTIONS(287),
    [anon_sym_HS384] = ACTIONS(287),
    [anon_sym_HS512] = ACTIONS(287),
    [anon_sym_PS256] = ACTIONS(287),
    [anon_sym_PS384] = ACTIONS(287),
    [anon_sym_PS512] = ACTIONS(287),
    [anon_sym_RS256] = ACTIONS(287),
    [anon_sym_RS384] = ACTIONS(287),
    [anon_sym_RS512] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_TRUE] = ACTIONS(287),
    [anon_sym_FALSE] = ACTIONS(287),
    [anon_sym_null] = ACTIONS(287),
    [anon_sym_NULL] = ACTIONS(287),
    [anon_sym_none] = ACTIONS(287),
    [anon_sym_NONE] = ACTIONS(287),
    [sym_variable] = ACTIONS(285),
    [sym_comment] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(289),
    [aux_sym_future_token1] = ACTIONS(289),
    [aux_sym_casting_token1] = ACTIONS(289),
    [aux_sym_property_token1] = ACTIONS(291),
    [aux_sym_identifier_token1] = ACTIONS(291),
    [aux_sym_duration_token1] = ACTIONS(291),
    [aux_sym_constant_token1] = ACTIONS(289),
    [aux_sym_number_token1] = ACTIONS(291),
    [aux_sym_record_token1] = ACTIONS(289),
    [aux_sym_record_token2] = ACTIONS(289),
    [anon_sym_USE] = ACTIONS(291),
    [anon_sym_NS] = ACTIONS(291),
    [anon_sym_DB] = ACTIONS(291),
    [anon_sym_LET] = ACTIONS(291),
    [anon_sym_BEGIN] = ACTIONS(291),
    [anon_sym_TRANSACTION] = ACTIONS(291),
    [anon_sym_CANCEL] = ACTIONS(291),
    [anon_sym_COMMIT] = ACTIONS(291),
    [anon_sym_IF] = ACTIONS(291),
    [anon_sym_ELSE] = ACTIONS(291),
    [anon_sym_THEN] = ACTIONS(291),
    [anon_sym_END] = ACTIONS(291),
    [anon_sym_SELECT] = ACTIONS(291),
    [anon_sym_FROM] = ACTIONS(291),
    [anon_sym_WHERE] = ACTIONS(291),
    [anon_sym_SPLIT] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_GROUP] = ACTIONS(291),
    [anon_sym_BY] = ACTIONS(291),
    [anon_sym_ORDER] = ACTIONS(291),
    [anon_sym_COLLATE] = ACTIONS(291),
    [anon_sym_NUMERIC] = ACTIONS(291),
    [anon_sym_ASC] = ACTIONS(291),
    [anon_sym_DESC] = ACTIONS(291),
    [anon_sym_LIMIT] = ACTIONS(291),
    [anon_sym_START] = ACTIONS(291),
    [anon_sym_FETCH] = ACTIONS(291),
    [anon_sym_TIMEOUT] = ACTIONS(291),
    [anon_sym_PARALLEL] = ACTIONS(291),
    [anon_sym_INSERT] = ACTIONS(291),
    [anon_sym_IGNORE] = ACTIONS(291),
    [anon_sym_INTO] = ACTIONS(291),
    [anon_sym_VALUES] = ACTIONS(291),
    [anon_sym_ON] = ACTIONS(291),
    [anon_sym_DUPLICATE] = ACTIONS(291),
    [anon_sym_KEY] = ACTIONS(291),
    [anon_sym_UPDATE] = ACTIONS(291),
    [anon_sym_CREATE] = ACTIONS(291),
    [anon_sym_CONTENT] = ACTIONS(291),
    [anon_sym_SET] = ACTIONS(291),
    [anon_sym_RETURN] = ACTIONS(291),
    [anon_sym_BEFORE] = ACTIONS(291),
    [anon_sym_AFTER] = ACTIONS(291),
    [anon_sym_DIFF] = ACTIONS(291),
    [anon_sym_MERGE] = ACTIONS(291),
    [anon_sym_PATCH] = ACTIONS(291),
    [anon_sym_RELATE] = ACTIONS(291),
    [anon_sym_DELETE] = ACTIONS(291),
    [anon_sym_DEFINE] = ACTIONS(291),
    [anon_sym_NAMESPACE] = ACTIONS(291),
    [anon_sym_DATABASE] = ACTIONS(291),
    [anon_sym_USER] = ACTIONS(291),
    [anon_sym_PASSWORD] = ACTIONS(291),
    [anon_sym_PASSHASH] = ACTIONS(291),
    [anon_sym_TOKEN] = ACTIONS(291),
    [anon_sym_SCOPE] = ACTIONS(291),
    [anon_sym_TYPE] = ACTIONS(291),
    [anon_sym_VALUE] = ACTIONS(291),
    [anon_sym_SESSION] = ACTIONS(291),
    [anon_sym_SIGNUP] = ACTIONS(291),
    [anon_sym_SIGNIN] = ACTIONS(291),
    [anon_sym_TABLE] = ACTIONS(291),
    [anon_sym_DROP] = ACTIONS(291),
    [anon_sym_SCHEMAFULL] = ACTIONS(291),
    [anon_sym_SCHEMALESS] = ACTIONS(291),
    [anon_sym_AS] = ACTIONS(291),
    [anon_sym_PERMISSIONS] = ACTIONS(291),
    [anon_sym_FULL] = ACTIONS(291),
    [anon_sym_FOR] = ACTIONS(291),
    [anon_sym_select] = ACTIONS(291),
    [anon_sym_update] = ACTIONS(291),
    [anon_sym_create] = ACTIONS(291),
    [anon_sym_delete] = ACTIONS(291),
    [anon_sym_EVENT] = ACTIONS(291),
    [anon_sym_WHEN] = ACTIONS(291),
    [anon_sym_ASSERT] = ACTIONS(291),
    [anon_sym_INDEX] = ACTIONS(291),
    [anon_sym_FIELD] = ACTIONS(291),
    [anon_sym_FIELDS] = ACTIONS(291),
    [anon_sym_COLUMNS] = ACTIONS(291),
    [anon_sym_UNIQUE] = ACTIONS(291),
    [anon_sym_DEFAULT] = ACTIONS(291),
    [anon_sym_READONLY] = ACTIONS(291),
    [anon_sym_REMOVE] = ACTIONS(291),
    [anon_sym_SLEEP] = ACTIONS(291),
    [anon_sym_INFO] = ACTIONS(291),
    [anon_sym_KV] = ACTIONS(291),
    [anon_sym_TO] = ACTIONS(291),
    [anon_sym_OUT] = ACTIONS(291),
    [anon_sym_IFNOT] = ACTIONS(289),
    [anon_sym_EXISTS] = ACTIONS(291),
    [anon_sym_FUNCTION] = ACTIONS(291),
    [anon_sym_PARAM] = ACTIONS(291),
    [anon_sym_LIVE] = ACTIONS(291),
    [anon_sym_ONLY] = ACTIONS(291),
    [anon_sym_OMIT] = ACTIONS(291),
    [anon_sym_OPTION] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_AND] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_OR] = ACTIONS(291),
    [anon_sym_QMARK_QMARK] = ACTIONS(289),
    [anon_sym_QMARK_COLON] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_IS] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_ISNOT] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_QMARK_EQ] = ACTIONS(289),
    [anon_sym_STAR_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_BANG_TILDE] = ACTIONS(289),
    [anon_sym_QMARK_TILDE] = ACTIONS(289),
    [anon_sym_STAR_TILDE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_x] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_] = ACTIONS(289),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_IN] = ACTIONS(291),
    [anon_sym_CONTAINS] = ACTIONS(291),
    [anon_sym_2] = ACTIONS(289),
    [anon_sym_CONTAINSNOT] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(289),
    [anon_sym_CONTAINSALL] = ACTIONS(291),
    [anon_sym_4] = ACTIONS(289),
    [anon_sym_CONTAINSANY] = ACTIONS(291),
    [anon_sym_5] = ACTIONS(289),
    [anon_sym_CONTAINSNONE] = ACTIONS(291),
    [anon_sym_6] = ACTIONS(289),
    [anon_sym_INSIDE] = ACTIONS(291),
    [anon_sym_7] = ACTIONS(289),
    [anon_sym_NOTINSIDE] = ACTIONS(291),
    [anon_sym_NOTIN] = ACTIONS(289),
    [anon_sym_8] = ACTIONS(289),
    [anon_sym_ALLINSIDE] = ACTIONS(291),
    [anon_sym_9] = ACTIONS(289),
    [anon_sym_ANYINSIDE] = ACTIONS(291),
    [anon_sym_10] = ACTIONS(289),
    [anon_sym_NONEINSIDE] = ACTIONS(291),
    [anon_sym_11] = ACTIONS(289),
    [anon_sym_OUTSIDE] = ACTIONS(291),
    [anon_sym_INTERSECTS] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_LT_DASH] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(289),
    [aux_sym_function_token2] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(289),
    [anon_sym_count] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(289),
    [aux_sym_function_token5] = ACTIONS(289),
    [aux_sym_function_token6] = ACTIONS(289),
    [aux_sym_function_token7] = ACTIONS(289),
    [aux_sym_function_token8] = ACTIONS(289),
    [aux_sym_function_token9] = ACTIONS(289),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(289),
    [aux_sym_function_token15] = ACTIONS(289),
    [aux_sym_function_token16] = ACTIONS(289),
    [aux_sym_function_token17] = ACTIONS(291),
    [anon_sym_any] = ACTIONS(291),
    [anon_sym_array] = ACTIONS(291),
    [anon_sym_bool] = ACTIONS(291),
    [anon_sym_datetime] = ACTIONS(291),
    [anon_sym_decimal] = ACTIONS(291),
    [anon_sym_duration] = ACTIONS(291),
    [anon_sym_float] = ACTIONS(291),
    [anon_sym_int] = ACTIONS(291),
    [anon_sym_number] = ACTIONS(291),
    [anon_sym_object] = ACTIONS(291),
    [anon_sym_string] = ACTIONS(291),
    [anon_sym_record] = ACTIONS(291),
    [anon_sym_option] = ACTIONS(291),
    [anon_sym_geometry] = ACTIONS(291),
    [anon_sym_EDDSA] = ACTIONS(291),
    [anon_sym_ES256] = ACTIONS(291),
    [anon_sym_ES384] = ACTIONS(291),
    [anon_sym_ES512] = ACTIONS(291),
    [anon_sym_HS256] = ACTIONS(291),
    [anon_sym_HS384] = ACTIONS(291),
    [anon_sym_HS512] = ACTIONS(291),
    [anon_sym_PS256] = ACTIONS(291),
    [anon_sym_PS384] = ACTIONS(291),
    [anon_sym_PS512] = ACTIONS(291),
    [anon_sym_RS256] = ACTIONS(291),
    [anon_sym_RS384] = ACTIONS(291),
    [anon_sym_RS512] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_TRUE] = ACTIONS(291),
    [anon_sym_FALSE] = ACTIONS(291),
    [anon_sym_null] = ACTIONS(291),
    [anon_sym_NULL] = ACTIONS(291),
    [anon_sym_none] = ACTIONS(291),
    [anon_sym_NONE] = ACTIONS(291),
    [sym_variable] = ACTIONS(289),
    [sym_comment] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(293),
    [aux_sym_future_token1] = ACTIONS(293),
    [aux_sym_casting_token1] = ACTIONS(293),
    [aux_sym_property_token1] = ACTIONS(295),
    [aux_sym_identifier_token1] = ACTIONS(295),
    [aux_sym_duration_token1] = ACTIONS(295),
    [aux_sym_constant_token1] = ACTIONS(293),
    [aux_sym_number_token1] = ACTIONS(295),
    [aux_sym_record_token1] = ACTIONS(293),
    [aux_sym_record_token2] = ACTIONS(293),
    [anon_sym_USE] = ACTIONS(295),
    [anon_sym_NS] = ACTIONS(295),
    [anon_sym_DB] = ACTIONS(295),
    [anon_sym_LET] = ACTIONS(295),
    [anon_sym_BEGIN] = ACTIONS(295),
    [anon_sym_TRANSACTION] = ACTIONS(295),
    [anon_sym_CANCEL] = ACTIONS(295),
    [anon_sym_COMMIT] = ACTIONS(295),
    [anon_sym_IF] = ACTIONS(295),
    [anon_sym_ELSE] = ACTIONS(295),
    [anon_sym_THEN] = ACTIONS(295),
    [anon_sym_END] = ACTIONS(295),
    [anon_sym_SELECT] = ACTIONS(295),
    [anon_sym_FROM] = ACTIONS(295),
    [anon_sym_WHERE] = ACTIONS(295),
    [anon_sym_SPLIT] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_GROUP] = ACTIONS(295),
    [anon_sym_BY] = ACTIONS(295),
    [anon_sym_ORDER] = ACTIONS(295),
    [anon_sym_COLLATE] = ACTIONS(295),
    [anon_sym_NUMERIC] = ACTIONS(295),
    [anon_sym_ASC] = ACTIONS(295),
    [anon_sym_DESC] = ACTIONS(295),
    [anon_sym_LIMIT] = ACTIONS(295),
    [anon_sym_START] = ACTIONS(295),
    [anon_sym_FETCH] = ACTIONS(295),
    [anon_sym_TIMEOUT] = ACTIONS(295),
    [anon_sym_PARALLEL] = ACTIONS(295),
    [anon_sym_INSERT] = ACTIONS(295),
    [anon_sym_IGNORE] = ACTIONS(295),
    [anon_sym_INTO] = ACTIONS(295),
    [anon_sym_VALUES] = ACTIONS(295),
    [anon_sym_ON] = ACTIONS(295),
    [anon_sym_DUPLICATE] = ACTIONS(295),
    [anon_sym_KEY] = ACTIONS(295),
    [anon_sym_UPDATE] = ACTIONS(295),
    [anon_sym_CREATE] = ACTIONS(295),
    [anon_sym_CONTENT] = ACTIONS(295),
    [anon_sym_SET] = ACTIONS(295),
    [anon_sym_RETURN] = ACTIONS(295),
    [anon_sym_BEFORE] = ACTIONS(295),
    [anon_sym_AFTER] = ACTIONS(295),
    [anon_sym_DIFF] = ACTIONS(295),
    [anon_sym_MERGE] = ACTIONS(295),
    [anon_sym_PATCH] = ACTIONS(295),
    [anon_sym_RELATE] = ACTIONS(295),
    [anon_sym_DELETE] = ACTIONS(295),
    [anon_sym_DEFINE] = ACTIONS(295),
    [anon_sym_NAMESPACE] = ACTIONS(295),
    [anon_sym_DATABASE] = ACTIONS(295),
    [anon_sym_USER] = ACTIONS(295),
    [anon_sym_PASSWORD] = ACTIONS(295),
    [anon_sym_PASSHASH] = ACTIONS(295),
    [anon_sym_TOKEN] = ACTIONS(295),
    [anon_sym_SCOPE] = ACTIONS(295),
    [anon_sym_TYPE] = ACTIONS(295),
    [anon_sym_VALUE] = ACTIONS(295),
    [anon_sym_SESSION] = ACTIONS(295),
    [anon_sym_SIGNUP] = ACTIONS(295),
    [anon_sym_SIGNIN] = ACTIONS(295),
    [anon_sym_TABLE] = ACTIONS(295),
    [anon_sym_DROP] = ACTIONS(295),
    [anon_sym_SCHEMAFULL] = ACTIONS(295),
    [anon_sym_SCHEMALESS] = ACTIONS(295),
    [anon_sym_AS] = ACTIONS(295),
    [anon_sym_PERMISSIONS] = ACTIONS(295),
    [anon_sym_FULL] = ACTIONS(295),
    [anon_sym_FOR] = ACTIONS(295),
    [anon_sym_select] = ACTIONS(295),
    [anon_sym_update] = ACTIONS(295),
    [anon_sym_create] = ACTIONS(295),
    [anon_sym_delete] = ACTIONS(295),
    [anon_sym_EVENT] = ACTIONS(295),
    [anon_sym_WHEN] = ACTIONS(295),
    [anon_sym_ASSERT] = ACTIONS(295),
    [anon_sym_INDEX] = ACTIONS(295),
    [anon_sym_FIELD] = ACTIONS(295),
    [anon_sym_FIELDS] = ACTIONS(295),
    [anon_sym_COLUMNS] = ACTIONS(295),
    [anon_sym_UNIQUE] = ACTIONS(295),
    [anon_sym_DEFAULT] = ACTIONS(295),
    [anon_sym_READONLY] = ACTIONS(295),
    [anon_sym_REMOVE] = ACTIONS(295),
    [anon_sym_SLEEP] = ACTIONS(295),
    [anon_sym_INFO] = ACTIONS(295),
    [anon_sym_KV] = ACTIONS(295),
    [anon_sym_TO] = ACTIONS(295),
    [anon_sym_OUT] = ACTIONS(295),
    [anon_sym_IFNOT] = ACTIONS(293),
    [anon_sym_EXISTS] = ACTIONS(295),
    [anon_sym_FUNCTION] = ACTIONS(295),
    [anon_sym_PARAM] = ACTIONS(295),
    [anon_sym_LIVE] = ACTIONS(295),
    [anon_sym_ONLY] = ACTIONS(295),
    [anon_sym_OMIT] = ACTIONS(295),
    [anon_sym_OPTION] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_AND] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_OR] = ACTIONS(295),
    [anon_sym_QMARK_QMARK] = ACTIONS(293),
    [anon_sym_QMARK_COLON] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_IS] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(293),
    [anon_sym_ISNOT] = ACTIONS(293),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_QMARK_EQ] = ACTIONS(293),
    [anon_sym_STAR_EQ] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_BANG_TILDE] = ACTIONS(293),
    [anon_sym_QMARK_TILDE] = ACTIONS(293),
    [anon_sym_STAR_TILDE] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_x] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(293),
    [anon_sym_IN] = ACTIONS(295),
    [anon_sym_CONTAINS] = ACTIONS(295),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_CONTAINSNOT] = ACTIONS(295),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_CONTAINSALL] = ACTIONS(295),
    [anon_sym_4] = ACTIONS(293),
    [anon_sym_CONTAINSANY] = ACTIONS(295),
    [anon_sym_5] = ACTIONS(293),
    [anon_sym_CONTAINSNONE] = ACTIONS(295),
    [anon_sym_6] = ACTIONS(293),
    [anon_sym_INSIDE] = ACTIONS(295),
    [anon_sym_7] = ACTIONS(293),
    [anon_sym_NOTINSIDE] = ACTIONS(295),
    [anon_sym_NOTIN] = ACTIONS(293),
    [anon_sym_8] = ACTIONS(293),
    [anon_sym_ALLINSIDE] = ACTIONS(295),
    [anon_sym_9] = ACTIONS(293),
    [anon_sym_ANYINSIDE] = ACTIONS(295),
    [anon_sym_10] = ACTIONS(293),
    [anon_sym_NONEINSIDE] = ACTIONS(295),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_OUTSIDE] = ACTIONS(295),
    [anon_sym_INTERSECTS] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_DASH_GT] = ACTIONS(293),
    [anon_sym_LT_DASH] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(293),
    [aux_sym_function_token2] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(293),
    [anon_sym_count] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(293),
    [aux_sym_function_token5] = ACTIONS(293),
    [aux_sym_function_token6] = ACTIONS(293),
    [aux_sym_function_token7] = ACTIONS(293),
    [aux_sym_function_token8] = ACTIONS(293),
    [aux_sym_function_token9] = ACTIONS(293),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(293),
    [aux_sym_function_token15] = ACTIONS(293),
    [aux_sym_function_token16] = ACTIONS(293),
    [aux_sym_function_token17] = ACTIONS(295),
    [anon_sym_any] = ACTIONS(295),
    [anon_sym_array] = ACTIONS(295),
    [anon_sym_bool] = ACTIONS(295),
    [anon_sym_datetime] = ACTIONS(295),
    [anon_sym_decimal] = ACTIONS(295),
    [anon_sym_duration] = ACTIONS(295),
    [anon_sym_float] = ACTIONS(295),
    [anon_sym_int] = ACTIONS(295),
    [anon_sym_number] = ACTIONS(295),
    [anon_sym_object] = ACTIONS(295),
    [anon_sym_string] = ACTIONS(295),
    [anon_sym_record] = ACTIONS(295),
    [anon_sym_option] = ACTIONS(295),
    [anon_sym_geometry] = ACTIONS(295),
    [anon_sym_EDDSA] = ACTIONS(295),
    [anon_sym_ES256] = ACTIONS(295),
    [anon_sym_ES384] = ACTIONS(295),
    [anon_sym_ES512] = ACTIONS(295),
    [anon_sym_HS256] = ACTIONS(295),
    [anon_sym_HS384] = ACTIONS(295),
    [anon_sym_HS512] = ACTIONS(295),
    [anon_sym_PS256] = ACTIONS(295),
    [anon_sym_PS384] = ACTIONS(295),
    [anon_sym_PS512] = ACTIONS(295),
    [anon_sym_RS256] = ACTIONS(295),
    [anon_sym_RS384] = ACTIONS(295),
    [anon_sym_RS512] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_TRUE] = ACTIONS(295),
    [anon_sym_FALSE] = ACTIONS(295),
    [anon_sym_null] = ACTIONS(295),
    [anon_sym_NULL] = ACTIONS(295),
    [anon_sym_none] = ACTIONS(295),
    [anon_sym_NONE] = ACTIONS(295),
    [sym_variable] = ACTIONS(293),
    [sym_comment] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(297),
    [aux_sym_future_token1] = ACTIONS(297),
    [aux_sym_casting_token1] = ACTIONS(297),
    [aux_sym_property_token1] = ACTIONS(299),
    [aux_sym_identifier_token1] = ACTIONS(299),
    [aux_sym_duration_token1] = ACTIONS(299),
    [aux_sym_constant_token1] = ACTIONS(297),
    [aux_sym_number_token1] = ACTIONS(299),
    [aux_sym_record_token1] = ACTIONS(297),
    [aux_sym_record_token2] = ACTIONS(297),
    [anon_sym_USE] = ACTIONS(299),
    [anon_sym_NS] = ACTIONS(299),
    [anon_sym_DB] = ACTIONS(299),
    [anon_sym_LET] = ACTIONS(299),
    [anon_sym_BEGIN] = ACTIONS(299),
    [anon_sym_TRANSACTION] = ACTIONS(299),
    [anon_sym_CANCEL] = ACTIONS(299),
    [anon_sym_COMMIT] = ACTIONS(299),
    [anon_sym_IF] = ACTIONS(299),
    [anon_sym_ELSE] = ACTIONS(299),
    [anon_sym_THEN] = ACTIONS(299),
    [anon_sym_END] = ACTIONS(299),
    [anon_sym_SELECT] = ACTIONS(299),
    [anon_sym_FROM] = ACTIONS(299),
    [anon_sym_WHERE] = ACTIONS(299),
    [anon_sym_SPLIT] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [anon_sym_GROUP] = ACTIONS(299),
    [anon_sym_BY] = ACTIONS(299),
    [anon_sym_ORDER] = ACTIONS(299),
    [anon_sym_COLLATE] = ACTIONS(299),
    [anon_sym_NUMERIC] = ACTIONS(299),
    [anon_sym_ASC] = ACTIONS(299),
    [anon_sym_DESC] = ACTIONS(299),
    [anon_sym_LIMIT] = ACTIONS(299),
    [anon_sym_START] = ACTIONS(299),
    [anon_sym_FETCH] = ACTIONS(299),
    [anon_sym_TIMEOUT] = ACTIONS(299),
    [anon_sym_PARALLEL] = ACTIONS(299),
    [anon_sym_INSERT] = ACTIONS(299),
    [anon_sym_IGNORE] = ACTIONS(299),
    [anon_sym_INTO] = ACTIONS(299),
    [anon_sym_VALUES] = ACTIONS(299),
    [anon_sym_ON] = ACTIONS(299),
    [anon_sym_DUPLICATE] = ACTIONS(299),
    [anon_sym_KEY] = ACTIONS(299),
    [anon_sym_UPDATE] = ACTIONS(299),
    [anon_sym_CREATE] = ACTIONS(299),
    [anon_sym_CONTENT] = ACTIONS(299),
    [anon_sym_SET] = ACTIONS(299),
    [anon_sym_RETURN] = ACTIONS(299),
    [anon_sym_BEFORE] = ACTIONS(299),
    [anon_sym_AFTER] = ACTIONS(299),
    [anon_sym_DIFF] = ACTIONS(299),
    [anon_sym_MERGE] = ACTIONS(299),
    [anon_sym_PATCH] = ACTIONS(299),
    [anon_sym_RELATE] = ACTIONS(299),
    [anon_sym_DELETE] = ACTIONS(299),
    [anon_sym_DEFINE] = ACTIONS(299),
    [anon_sym_NAMESPACE] = ACTIONS(299),
    [anon_sym_DATABASE] = ACTIONS(299),
    [anon_sym_USER] = ACTIONS(299),
    [anon_sym_PASSWORD] = ACTIONS(299),
    [anon_sym_PASSHASH] = ACTIONS(299),
    [anon_sym_TOKEN] = ACTIONS(299),
    [anon_sym_SCOPE] = ACTIONS(299),
    [anon_sym_TYPE] = ACTIONS(299),
    [anon_sym_VALUE] = ACTIONS(299),
    [anon_sym_SESSION] = ACTIONS(299),
    [anon_sym_SIGNUP] = ACTIONS(299),
    [anon_sym_SIGNIN] = ACTIONS(299),
    [anon_sym_TABLE] = ACTIONS(299),
    [anon_sym_DROP] = ACTIONS(299),
    [anon_sym_SCHEMAFULL] = ACTIONS(299),
    [anon_sym_SCHEMALESS] = ACTIONS(299),
    [anon_sym_AS] = ACTIONS(299),
    [anon_sym_PERMISSIONS] = ACTIONS(299),
    [anon_sym_FULL] = ACTIONS(299),
    [anon_sym_FOR] = ACTIONS(299),
    [anon_sym_select] = ACTIONS(299),
    [anon_sym_update] = ACTIONS(299),
    [anon_sym_create] = ACTIONS(299),
    [anon_sym_delete] = ACTIONS(299),
    [anon_sym_EVENT] = ACTIONS(299),
    [anon_sym_WHEN] = ACTIONS(299),
    [anon_sym_ASSERT] = ACTIONS(299),
    [anon_sym_INDEX] = ACTIONS(299),
    [anon_sym_FIELD] = ACTIONS(299),
    [anon_sym_FIELDS] = ACTIONS(299),
    [anon_sym_COLUMNS] = ACTIONS(299),
    [anon_sym_UNIQUE] = ACTIONS(299),
    [anon_sym_DEFAULT] = ACTIONS(299),
    [anon_sym_READONLY] = ACTIONS(299),
    [anon_sym_REMOVE] = ACTIONS(299),
    [anon_sym_SLEEP] = ACTIONS(299),
    [anon_sym_INFO] = ACTIONS(299),
    [anon_sym_KV] = ACTIONS(299),
    [anon_sym_TO] = ACTIONS(299),
    [anon_sym_OUT] = ACTIONS(299),
    [anon_sym_IFNOT] = ACTIONS(297),
    [anon_sym_EXISTS] = ACTIONS(299),
    [anon_sym_FUNCTION] = ACTIONS(299),
    [anon_sym_PARAM] = ACTIONS(299),
    [anon_sym_LIVE] = ACTIONS(299),
    [anon_sym_ONLY] = ACTIONS(299),
    [anon_sym_OMIT] = ACTIONS(299),
    [anon_sym_OPTION] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(297),
    [anon_sym_AND] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_OR] = ACTIONS(299),
    [anon_sym_QMARK_QMARK] = ACTIONS(297),
    [anon_sym_QMARK_COLON] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_IS] = ACTIONS(299),
    [anon_sym_BANG_EQ] = ACTIONS(297),
    [anon_sym_ISNOT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(297),
    [anon_sym_QMARK_EQ] = ACTIONS(297),
    [anon_sym_STAR_EQ] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
    [anon_sym_BANG_TILDE] = ACTIONS(297),
    [anon_sym_QMARK_TILDE] = ACTIONS(297),
    [anon_sym_STAR_TILDE] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_LT_EQ] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_x] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(297),
    [anon_sym_IN] = ACTIONS(299),
    [anon_sym_CONTAINS] = ACTIONS(299),
    [anon_sym_2] = ACTIONS(297),
    [anon_sym_CONTAINSNOT] = ACTIONS(299),
    [anon_sym_3] = ACTIONS(297),
    [anon_sym_CONTAINSALL] = ACTIONS(299),
    [anon_sym_4] = ACTIONS(297),
    [anon_sym_CONTAINSANY] = ACTIONS(299),
    [anon_sym_5] = ACTIONS(297),
    [anon_sym_CONTAINSNONE] = ACTIONS(299),
    [anon_sym_6] = ACTIONS(297),
    [anon_sym_INSIDE] = ACTIONS(299),
    [anon_sym_7] = ACTIONS(297),
    [anon_sym_NOTINSIDE] = ACTIONS(299),
    [anon_sym_NOTIN] = ACTIONS(297),
    [anon_sym_8] = ACTIONS(297),
    [anon_sym_ALLINSIDE] = ACTIONS(299),
    [anon_sym_9] = ACTIONS(297),
    [anon_sym_ANYINSIDE] = ACTIONS(299),
    [anon_sym_10] = ACTIONS(297),
    [anon_sym_NONEINSIDE] = ACTIONS(299),
    [anon_sym_11] = ACTIONS(297),
    [anon_sym_OUTSIDE] = ACTIONS(299),
    [anon_sym_INTERSECTS] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(297),
    [aux_sym_function_token2] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(297),
    [anon_sym_count] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(297),
    [aux_sym_function_token5] = ACTIONS(297),
    [aux_sym_function_token6] = ACTIONS(297),
    [aux_sym_function_token7] = ACTIONS(297),
    [aux_sym_function_token8] = ACTIONS(297),
    [aux_sym_function_token9] = ACTIONS(297),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(297),
    [aux_sym_function_token15] = ACTIONS(297),
    [aux_sym_function_token16] = ACTIONS(297),
    [aux_sym_function_token17] = ACTIONS(299),
    [anon_sym_any] = ACTIONS(299),
    [anon_sym_array] = ACTIONS(299),
    [anon_sym_bool] = ACTIONS(299),
    [anon_sym_datetime] = ACTIONS(299),
    [anon_sym_decimal] = ACTIONS(299),
    [anon_sym_duration] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_number] = ACTIONS(299),
    [anon_sym_object] = ACTIONS(299),
    [anon_sym_string] = ACTIONS(299),
    [anon_sym_record] = ACTIONS(299),
    [anon_sym_option] = ACTIONS(299),
    [anon_sym_geometry] = ACTIONS(299),
    [anon_sym_EDDSA] = ACTIONS(299),
    [anon_sym_ES256] = ACTIONS(299),
    [anon_sym_ES384] = ACTIONS(299),
    [anon_sym_ES512] = ACTIONS(299),
    [anon_sym_HS256] = ACTIONS(299),
    [anon_sym_HS384] = ACTIONS(299),
    [anon_sym_HS512] = ACTIONS(299),
    [anon_sym_PS256] = ACTIONS(299),
    [anon_sym_PS384] = ACTIONS(299),
    [anon_sym_PS512] = ACTIONS(299),
    [anon_sym_RS256] = ACTIONS(299),
    [anon_sym_RS384] = ACTIONS(299),
    [anon_sym_RS512] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_TRUE] = ACTIONS(299),
    [anon_sym_FALSE] = ACTIONS(299),
    [anon_sym_null] = ACTIONS(299),
    [anon_sym_NULL] = ACTIONS(299),
    [anon_sym_none] = ACTIONS(299),
    [anon_sym_NONE] = ACTIONS(299),
    [sym_variable] = ACTIONS(297),
    [sym_comment] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(301),
    [aux_sym_future_token1] = ACTIONS(301),
    [aux_sym_casting_token1] = ACTIONS(301),
    [aux_sym_property_token1] = ACTIONS(303),
    [aux_sym_identifier_token1] = ACTIONS(303),
    [aux_sym_duration_token1] = ACTIONS(303),
    [aux_sym_constant_token1] = ACTIONS(301),
    [aux_sym_number_token1] = ACTIONS(303),
    [aux_sym_record_token1] = ACTIONS(301),
    [aux_sym_record_token2] = ACTIONS(301),
    [anon_sym_USE] = ACTIONS(303),
    [anon_sym_NS] = ACTIONS(303),
    [anon_sym_DB] = ACTIONS(303),
    [anon_sym_LET] = ACTIONS(303),
    [anon_sym_BEGIN] = ACTIONS(303),
    [anon_sym_TRANSACTION] = ACTIONS(303),
    [anon_sym_CANCEL] = ACTIONS(303),
    [anon_sym_COMMIT] = ACTIONS(303),
    [anon_sym_IF] = ACTIONS(303),
    [anon_sym_ELSE] = ACTIONS(303),
    [anon_sym_THEN] = ACTIONS(303),
    [anon_sym_END] = ACTIONS(303),
    [anon_sym_SELECT] = ACTIONS(303),
    [anon_sym_FROM] = ACTIONS(303),
    [anon_sym_WHERE] = ACTIONS(303),
    [anon_sym_SPLIT] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_GROUP] = ACTIONS(303),
    [anon_sym_BY] = ACTIONS(303),
    [anon_sym_ORDER] = ACTIONS(303),
    [anon_sym_COLLATE] = ACTIONS(303),
    [anon_sym_NUMERIC] = ACTIONS(303),
    [anon_sym_ASC] = ACTIONS(303),
    [anon_sym_DESC] = ACTIONS(303),
    [anon_sym_LIMIT] = ACTIONS(303),
    [anon_sym_START] = ACTIONS(303),
    [anon_sym_FETCH] = ACTIONS(303),
    [anon_sym_TIMEOUT] = ACTIONS(303),
    [anon_sym_PARALLEL] = ACTIONS(303),
    [anon_sym_INSERT] = ACTIONS(303),
    [anon_sym_IGNORE] = ACTIONS(303),
    [anon_sym_INTO] = ACTIONS(303),
    [anon_sym_VALUES] = ACTIONS(303),
    [anon_sym_ON] = ACTIONS(303),
    [anon_sym_DUPLICATE] = ACTIONS(303),
    [anon_sym_KEY] = ACTIONS(303),
    [anon_sym_UPDATE] = ACTIONS(303),
    [anon_sym_CREATE] = ACTIONS(303),
    [anon_sym_CONTENT] = ACTIONS(303),
    [anon_sym_SET] = ACTIONS(303),
    [anon_sym_RETURN] = ACTIONS(303),
    [anon_sym_BEFORE] = ACTIONS(303),
    [anon_sym_AFTER] = ACTIONS(303),
    [anon_sym_DIFF] = ACTIONS(303),
    [anon_sym_MERGE] = ACTIONS(303),
    [anon_sym_PATCH] = ACTIONS(303),
    [anon_sym_RELATE] = ACTIONS(303),
    [anon_sym_DELETE] = ACTIONS(303),
    [anon_sym_DEFINE] = ACTIONS(303),
    [anon_sym_NAMESPACE] = ACTIONS(303),
    [anon_sym_DATABASE] = ACTIONS(303),
    [anon_sym_USER] = ACTIONS(303),
    [anon_sym_PASSWORD] = ACTIONS(303),
    [anon_sym_PASSHASH] = ACTIONS(303),
    [anon_sym_TOKEN] = ACTIONS(303),
    [anon_sym_SCOPE] = ACTIONS(303),
    [anon_sym_TYPE] = ACTIONS(303),
    [anon_sym_VALUE] = ACTIONS(303),
    [anon_sym_SESSION] = ACTIONS(303),
    [anon_sym_SIGNUP] = ACTIONS(303),
    [anon_sym_SIGNIN] = ACTIONS(303),
    [anon_sym_TABLE] = ACTIONS(303),
    [anon_sym_DROP] = ACTIONS(303),
    [anon_sym_SCHEMAFULL] = ACTIONS(303),
    [anon_sym_SCHEMALESS] = ACTIONS(303),
    [anon_sym_AS] = ACTIONS(303),
    [anon_sym_PERMISSIONS] = ACTIONS(303),
    [anon_sym_FULL] = ACTIONS(303),
    [anon_sym_FOR] = ACTIONS(303),
    [anon_sym_select] = ACTIONS(303),
    [anon_sym_update] = ACTIONS(303),
    [anon_sym_create] = ACTIONS(303),
    [anon_sym_delete] = ACTIONS(303),
    [anon_sym_EVENT] = ACTIONS(303),
    [anon_sym_WHEN] = ACTIONS(303),
    [anon_sym_ASSERT] = ACTIONS(303),
    [anon_sym_INDEX] = ACTIONS(303),
    [anon_sym_FIELD] = ACTIONS(303),
    [anon_sym_FIELDS] = ACTIONS(303),
    [anon_sym_COLUMNS] = ACTIONS(303),
    [anon_sym_UNIQUE] = ACTIONS(303),
    [anon_sym_DEFAULT] = ACTIONS(303),
    [anon_sym_READONLY] = ACTIONS(303),
    [anon_sym_REMOVE] = ACTIONS(303),
    [anon_sym_SLEEP] = ACTIONS(303),
    [anon_sym_INFO] = ACTIONS(303),
    [anon_sym_KV] = ACTIONS(303),
    [anon_sym_TO] = ACTIONS(303),
    [anon_sym_OUT] = ACTIONS(303),
    [anon_sym_IFNOT] = ACTIONS(301),
    [anon_sym_EXISTS] = ACTIONS(303),
    [anon_sym_FUNCTION] = ACTIONS(303),
    [anon_sym_PARAM] = ACTIONS(303),
    [anon_sym_LIVE] = ACTIONS(303),
    [anon_sym_ONLY] = ACTIONS(303),
    [anon_sym_OMIT] = ACTIONS(303),
    [anon_sym_OPTION] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_AND] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_OR] = ACTIONS(303),
    [anon_sym_QMARK_QMARK] = ACTIONS(301),
    [anon_sym_QMARK_COLON] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_IS] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_ISNOT] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_QMARK_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_BANG_TILDE] = ACTIONS(301),
    [anon_sym_QMARK_TILDE] = ACTIONS(301),
    [anon_sym_STAR_TILDE] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_x] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(301),
    [anon_sym_IN] = ACTIONS(303),
    [anon_sym_CONTAINS] = ACTIONS(303),
    [anon_sym_2] = ACTIONS(301),
    [anon_sym_CONTAINSNOT] = ACTIONS(303),
    [anon_sym_3] = ACTIONS(301),
    [anon_sym_CONTAINSALL] = ACTIONS(303),
    [anon_sym_4] = ACTIONS(301),
    [anon_sym_CONTAINSANY] = ACTIONS(303),
    [anon_sym_5] = ACTIONS(301),
    [anon_sym_CONTAINSNONE] = ACTIONS(303),
    [anon_sym_6] = ACTIONS(301),
    [anon_sym_INSIDE] = ACTIONS(303),
    [anon_sym_7] = ACTIONS(301),
    [anon_sym_NOTINSIDE] = ACTIONS(303),
    [anon_sym_NOTIN] = ACTIONS(301),
    [anon_sym_8] = ACTIONS(301),
    [anon_sym_ALLINSIDE] = ACTIONS(303),
    [anon_sym_9] = ACTIONS(301),
    [anon_sym_ANYINSIDE] = ACTIONS(303),
    [anon_sym_10] = ACTIONS(301),
    [anon_sym_NONEINSIDE] = ACTIONS(303),
    [anon_sym_11] = ACTIONS(301),
    [anon_sym_OUTSIDE] = ACTIONS(303),
    [anon_sym_INTERSECTS] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(301),
    [aux_sym_function_token2] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(301),
    [anon_sym_count] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(301),
    [aux_sym_function_token5] = ACTIONS(301),
    [aux_sym_function_token6] = ACTIONS(301),
    [aux_sym_function_token7] = ACTIONS(301),
    [aux_sym_function_token8] = ACTIONS(301),
    [aux_sym_function_token9] = ACTIONS(301),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(301),
    [aux_sym_function_token15] = ACTIONS(301),
    [aux_sym_function_token16] = ACTIONS(301),
    [aux_sym_function_token17] = ACTIONS(303),
    [anon_sym_any] = ACTIONS(303),
    [anon_sym_array] = ACTIONS(303),
    [anon_sym_bool] = ACTIONS(303),
    [anon_sym_datetime] = ACTIONS(303),
    [anon_sym_decimal] = ACTIONS(303),
    [anon_sym_duration] = ACTIONS(303),
    [anon_sym_float] = ACTIONS(303),
    [anon_sym_int] = ACTIONS(303),
    [anon_sym_number] = ACTIONS(303),
    [anon_sym_object] = ACTIONS(303),
    [anon_sym_string] = ACTIONS(303),
    [anon_sym_record] = ACTIONS(303),
    [anon_sym_option] = ACTIONS(303),
    [anon_sym_geometry] = ACTIONS(303),
    [anon_sym_EDDSA] = ACTIONS(303),
    [anon_sym_ES256] = ACTIONS(303),
    [anon_sym_ES384] = ACTIONS(303),
    [anon_sym_ES512] = ACTIONS(303),
    [anon_sym_HS256] = ACTIONS(303),
    [anon_sym_HS384] = ACTIONS(303),
    [anon_sym_HS512] = ACTIONS(303),
    [anon_sym_PS256] = ACTIONS(303),
    [anon_sym_PS384] = ACTIONS(303),
    [anon_sym_PS512] = ACTIONS(303),
    [anon_sym_RS256] = ACTIONS(303),
    [anon_sym_RS384] = ACTIONS(303),
    [anon_sym_RS512] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_TRUE] = ACTIONS(303),
    [anon_sym_FALSE] = ACTIONS(303),
    [anon_sym_null] = ACTIONS(303),
    [anon_sym_NULL] = ACTIONS(303),
    [anon_sym_none] = ACTIONS(303),
    [anon_sym_NONE] = ACTIONS(303),
    [sym_variable] = ACTIONS(301),
    [sym_comment] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(305),
    [aux_sym_future_token1] = ACTIONS(305),
    [aux_sym_casting_token1] = ACTIONS(305),
    [aux_sym_property_token1] = ACTIONS(307),
    [aux_sym_identifier_token1] = ACTIONS(307),
    [aux_sym_duration_token1] = ACTIONS(307),
    [aux_sym_constant_token1] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [aux_sym_record_token1] = ACTIONS(305),
    [aux_sym_record_token2] = ACTIONS(305),
    [anon_sym_USE] = ACTIONS(307),
    [anon_sym_NS] = ACTIONS(307),
    [anon_sym_DB] = ACTIONS(307),
    [anon_sym_LET] = ACTIONS(307),
    [anon_sym_BEGIN] = ACTIONS(307),
    [anon_sym_TRANSACTION] = ACTIONS(307),
    [anon_sym_CANCEL] = ACTIONS(307),
    [anon_sym_COMMIT] = ACTIONS(307),
    [anon_sym_IF] = ACTIONS(307),
    [anon_sym_ELSE] = ACTIONS(307),
    [anon_sym_THEN] = ACTIONS(307),
    [anon_sym_END] = ACTIONS(307),
    [anon_sym_SELECT] = ACTIONS(307),
    [anon_sym_FROM] = ACTIONS(307),
    [anon_sym_WHERE] = ACTIONS(307),
    [anon_sym_SPLIT] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_GROUP] = ACTIONS(307),
    [anon_sym_BY] = ACTIONS(307),
    [anon_sym_ORDER] = ACTIONS(307),
    [anon_sym_COLLATE] = ACTIONS(307),
    [anon_sym_NUMERIC] = ACTIONS(307),
    [anon_sym_ASC] = ACTIONS(307),
    [anon_sym_DESC] = ACTIONS(307),
    [anon_sym_LIMIT] = ACTIONS(307),
    [anon_sym_START] = ACTIONS(307),
    [anon_sym_FETCH] = ACTIONS(307),
    [anon_sym_TIMEOUT] = ACTIONS(307),
    [anon_sym_PARALLEL] = ACTIONS(307),
    [anon_sym_INSERT] = ACTIONS(307),
    [anon_sym_IGNORE] = ACTIONS(307),
    [anon_sym_INTO] = ACTIONS(307),
    [anon_sym_VALUES] = ACTIONS(307),
    [anon_sym_ON] = ACTIONS(307),
    [anon_sym_DUPLICATE] = ACTIONS(307),
    [anon_sym_KEY] = ACTIONS(307),
    [anon_sym_UPDATE] = ACTIONS(307),
    [anon_sym_CREATE] = ACTIONS(307),
    [anon_sym_CONTENT] = ACTIONS(307),
    [anon_sym_SET] = ACTIONS(307),
    [anon_sym_RETURN] = ACTIONS(307),
    [anon_sym_BEFORE] = ACTIONS(307),
    [anon_sym_AFTER] = ACTIONS(307),
    [anon_sym_DIFF] = ACTIONS(307),
    [anon_sym_MERGE] = ACTIONS(307),
    [anon_sym_PATCH] = ACTIONS(307),
    [anon_sym_RELATE] = ACTIONS(307),
    [anon_sym_DELETE] = ACTIONS(307),
    [anon_sym_DEFINE] = ACTIONS(307),
    [anon_sym_NAMESPACE] = ACTIONS(307),
    [anon_sym_DATABASE] = ACTIONS(307),
    [anon_sym_USER] = ACTIONS(307),
    [anon_sym_PASSWORD] = ACTIONS(307),
    [anon_sym_PASSHASH] = ACTIONS(307),
    [anon_sym_TOKEN] = ACTIONS(307),
    [anon_sym_SCOPE] = ACTIONS(307),
    [anon_sym_TYPE] = ACTIONS(307),
    [anon_sym_VALUE] = ACTIONS(307),
    [anon_sym_SESSION] = ACTIONS(307),
    [anon_sym_SIGNUP] = ACTIONS(307),
    [anon_sym_SIGNIN] = ACTIONS(307),
    [anon_sym_TABLE] = ACTIONS(307),
    [anon_sym_DROP] = ACTIONS(307),
    [anon_sym_SCHEMAFULL] = ACTIONS(307),
    [anon_sym_SCHEMALESS] = ACTIONS(307),
    [anon_sym_AS] = ACTIONS(307),
    [anon_sym_PERMISSIONS] = ACTIONS(307),
    [anon_sym_FULL] = ACTIONS(307),
    [anon_sym_FOR] = ACTIONS(307),
    [anon_sym_select] = ACTIONS(307),
    [anon_sym_update] = ACTIONS(307),
    [anon_sym_create] = ACTIONS(307),
    [anon_sym_delete] = ACTIONS(307),
    [anon_sym_EVENT] = ACTIONS(307),
    [anon_sym_WHEN] = ACTIONS(307),
    [anon_sym_ASSERT] = ACTIONS(307),
    [anon_sym_INDEX] = ACTIONS(307),
    [anon_sym_FIELD] = ACTIONS(307),
    [anon_sym_FIELDS] = ACTIONS(307),
    [anon_sym_COLUMNS] = ACTIONS(307),
    [anon_sym_UNIQUE] = ACTIONS(307),
    [anon_sym_DEFAULT] = ACTIONS(307),
    [anon_sym_READONLY] = ACTIONS(307),
    [anon_sym_REMOVE] = ACTIONS(307),
    [anon_sym_SLEEP] = ACTIONS(307),
    [anon_sym_INFO] = ACTIONS(307),
    [anon_sym_KV] = ACTIONS(307),
    [anon_sym_TO] = ACTIONS(307),
    [anon_sym_OUT] = ACTIONS(307),
    [anon_sym_IFNOT] = ACTIONS(305),
    [anon_sym_EXISTS] = ACTIONS(307),
    [anon_sym_FUNCTION] = ACTIONS(307),
    [anon_sym_PARAM] = ACTIONS(307),
    [anon_sym_LIVE] = ACTIONS(307),
    [anon_sym_ONLY] = ACTIONS(307),
    [anon_sym_OMIT] = ACTIONS(307),
    [anon_sym_OPTION] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_AND] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_OR] = ACTIONS(307),
    [anon_sym_QMARK_QMARK] = ACTIONS(305),
    [anon_sym_QMARK_COLON] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_IS] = ACTIONS(307),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_ISNOT] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_QMARK_EQ] = ACTIONS(305),
    [anon_sym_STAR_EQ] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
    [anon_sym_BANG_TILDE] = ACTIONS(305),
    [anon_sym_QMARK_TILDE] = ACTIONS(305),
    [anon_sym_STAR_TILDE] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_x] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(305),
    [anon_sym_IN] = ACTIONS(307),
    [anon_sym_CONTAINS] = ACTIONS(307),
    [anon_sym_2] = ACTIONS(305),
    [anon_sym_CONTAINSNOT] = ACTIONS(307),
    [anon_sym_3] = ACTIONS(305),
    [anon_sym_CONTAINSALL] = ACTIONS(307),
    [anon_sym_4] = ACTIONS(305),
    [anon_sym_CONTAINSANY] = ACTIONS(307),
    [anon_sym_5] = ACTIONS(305),
    [anon_sym_CONTAINSNONE] = ACTIONS(307),
    [anon_sym_6] = ACTIONS(305),
    [anon_sym_INSIDE] = ACTIONS(307),
    [anon_sym_7] = ACTIONS(305),
    [anon_sym_NOTINSIDE] = ACTIONS(307),
    [anon_sym_NOTIN] = ACTIONS(305),
    [anon_sym_8] = ACTIONS(305),
    [anon_sym_ALLINSIDE] = ACTIONS(307),
    [anon_sym_9] = ACTIONS(305),
    [anon_sym_ANYINSIDE] = ACTIONS(307),
    [anon_sym_10] = ACTIONS(305),
    [anon_sym_NONEINSIDE] = ACTIONS(307),
    [anon_sym_11] = ACTIONS(305),
    [anon_sym_OUTSIDE] = ACTIONS(307),
    [anon_sym_INTERSECTS] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(305),
    [aux_sym_function_token2] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(305),
    [anon_sym_count] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(305),
    [aux_sym_function_token5] = ACTIONS(305),
    [aux_sym_function_token6] = ACTIONS(305),
    [aux_sym_function_token7] = ACTIONS(305),
    [aux_sym_function_token8] = ACTIONS(305),
    [aux_sym_function_token9] = ACTIONS(305),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(305),
    [aux_sym_function_token15] = ACTIONS(305),
    [aux_sym_function_token16] = ACTIONS(305),
    [aux_sym_function_token17] = ACTIONS(307),
    [anon_sym_any] = ACTIONS(307),
    [anon_sym_array] = ACTIONS(307),
    [anon_sym_bool] = ACTIONS(307),
    [anon_sym_datetime] = ACTIONS(307),
    [anon_sym_decimal] = ACTIONS(307),
    [anon_sym_duration] = ACTIONS(307),
    [anon_sym_float] = ACTIONS(307),
    [anon_sym_int] = ACTIONS(307),
    [anon_sym_number] = ACTIONS(307),
    [anon_sym_object] = ACTIONS(307),
    [anon_sym_string] = ACTIONS(307),
    [anon_sym_record] = ACTIONS(307),
    [anon_sym_option] = ACTIONS(307),
    [anon_sym_geometry] = ACTIONS(307),
    [anon_sym_EDDSA] = ACTIONS(307),
    [anon_sym_ES256] = ACTIONS(307),
    [anon_sym_ES384] = ACTIONS(307),
    [anon_sym_ES512] = ACTIONS(307),
    [anon_sym_HS256] = ACTIONS(307),
    [anon_sym_HS384] = ACTIONS(307),
    [anon_sym_HS512] = ACTIONS(307),
    [anon_sym_PS256] = ACTIONS(307),
    [anon_sym_PS384] = ACTIONS(307),
    [anon_sym_PS512] = ACTIONS(307),
    [anon_sym_RS256] = ACTIONS(307),
    [anon_sym_RS384] = ACTIONS(307),
    [anon_sym_RS512] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(307),
    [anon_sym_null] = ACTIONS(307),
    [anon_sym_NULL] = ACTIONS(307),
    [anon_sym_none] = ACTIONS(307),
    [anon_sym_NONE] = ACTIONS(307),
    [sym_variable] = ACTIONS(305),
    [sym_comment] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(309),
    [aux_sym_future_token1] = ACTIONS(309),
    [aux_sym_casting_token1] = ACTIONS(309),
    [aux_sym_property_token1] = ACTIONS(311),
    [aux_sym_identifier_token1] = ACTIONS(311),
    [aux_sym_duration_token1] = ACTIONS(311),
    [aux_sym_constant_token1] = ACTIONS(309),
    [aux_sym_number_token1] = ACTIONS(311),
    [aux_sym_record_token1] = ACTIONS(309),
    [aux_sym_record_token2] = ACTIONS(309),
    [anon_sym_USE] = ACTIONS(311),
    [anon_sym_NS] = ACTIONS(311),
    [anon_sym_DB] = ACTIONS(311),
    [anon_sym_LET] = ACTIONS(311),
    [anon_sym_BEGIN] = ACTIONS(311),
    [anon_sym_TRANSACTION] = ACTIONS(311),
    [anon_sym_CANCEL] = ACTIONS(311),
    [anon_sym_COMMIT] = ACTIONS(311),
    [anon_sym_IF] = ACTIONS(311),
    [anon_sym_ELSE] = ACTIONS(311),
    [anon_sym_THEN] = ACTIONS(311),
    [anon_sym_END] = ACTIONS(311),
    [anon_sym_SELECT] = ACTIONS(311),
    [anon_sym_FROM] = ACTIONS(311),
    [anon_sym_WHERE] = ACTIONS(311),
    [anon_sym_SPLIT] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_GROUP] = ACTIONS(311),
    [anon_sym_BY] = ACTIONS(311),
    [anon_sym_ORDER] = ACTIONS(311),
    [anon_sym_COLLATE] = ACTIONS(311),
    [anon_sym_NUMERIC] = ACTIONS(311),
    [anon_sym_ASC] = ACTIONS(311),
    [anon_sym_DESC] = ACTIONS(311),
    [anon_sym_LIMIT] = ACTIONS(311),
    [anon_sym_START] = ACTIONS(311),
    [anon_sym_FETCH] = ACTIONS(311),
    [anon_sym_TIMEOUT] = ACTIONS(311),
    [anon_sym_PARALLEL] = ACTIONS(311),
    [anon_sym_INSERT] = ACTIONS(311),
    [anon_sym_IGNORE] = ACTIONS(311),
    [anon_sym_INTO] = ACTIONS(311),
    [anon_sym_VALUES] = ACTIONS(311),
    [anon_sym_ON] = ACTIONS(311),
    [anon_sym_DUPLICATE] = ACTIONS(311),
    [anon_sym_KEY] = ACTIONS(311),
    [anon_sym_UPDATE] = ACTIONS(311),
    [anon_sym_CREATE] = ACTIONS(311),
    [anon_sym_CONTENT] = ACTIONS(311),
    [anon_sym_SET] = ACTIONS(311),
    [anon_sym_RETURN] = ACTIONS(311),
    [anon_sym_BEFORE] = ACTIONS(311),
    [anon_sym_AFTER] = ACTIONS(311),
    [anon_sym_DIFF] = ACTIONS(311),
    [anon_sym_MERGE] = ACTIONS(311),
    [anon_sym_PATCH] = ACTIONS(311),
    [anon_sym_RELATE] = ACTIONS(311),
    [anon_sym_DELETE] = ACTIONS(311),
    [anon_sym_DEFINE] = ACTIONS(311),
    [anon_sym_NAMESPACE] = ACTIONS(311),
    [anon_sym_DATABASE] = ACTIONS(311),
    [anon_sym_USER] = ACTIONS(311),
    [anon_sym_PASSWORD] = ACTIONS(311),
    [anon_sym_PASSHASH] = ACTIONS(311),
    [anon_sym_TOKEN] = ACTIONS(311),
    [anon_sym_SCOPE] = ACTIONS(311),
    [anon_sym_TYPE] = ACTIONS(311),
    [anon_sym_VALUE] = ACTIONS(311),
    [anon_sym_SESSION] = ACTIONS(311),
    [anon_sym_SIGNUP] = ACTIONS(311),
    [anon_sym_SIGNIN] = ACTIONS(311),
    [anon_sym_TABLE] = ACTIONS(311),
    [anon_sym_DROP] = ACTIONS(311),
    [anon_sym_SCHEMAFULL] = ACTIONS(311),
    [anon_sym_SCHEMALESS] = ACTIONS(311),
    [anon_sym_AS] = ACTIONS(311),
    [anon_sym_PERMISSIONS] = ACTIONS(311),
    [anon_sym_FULL] = ACTIONS(311),
    [anon_sym_FOR] = ACTIONS(311),
    [anon_sym_select] = ACTIONS(311),
    [anon_sym_update] = ACTIONS(311),
    [anon_sym_create] = ACTIONS(311),
    [anon_sym_delete] = ACTIONS(311),
    [anon_sym_EVENT] = ACTIONS(311),
    [anon_sym_WHEN] = ACTIONS(311),
    [anon_sym_ASSERT] = ACTIONS(311),
    [anon_sym_INDEX] = ACTIONS(311),
    [anon_sym_FIELD] = ACTIONS(311),
    [anon_sym_FIELDS] = ACTIONS(311),
    [anon_sym_COLUMNS] = ACTIONS(311),
    [anon_sym_UNIQUE] = ACTIONS(311),
    [anon_sym_DEFAULT] = ACTIONS(311),
    [anon_sym_READONLY] = ACTIONS(311),
    [anon_sym_REMOVE] = ACTIONS(311),
    [anon_sym_SLEEP] = ACTIONS(311),
    [anon_sym_INFO] = ACTIONS(311),
    [anon_sym_KV] = ACTIONS(311),
    [anon_sym_TO] = ACTIONS(311),
    [anon_sym_OUT] = ACTIONS(311),
    [anon_sym_IFNOT] = ACTIONS(309),
    [anon_sym_EXISTS] = ACTIONS(311),
    [anon_sym_FUNCTION] = ACTIONS(311),
    [anon_sym_PARAM] = ACTIONS(311),
    [anon_sym_LIVE] = ACTIONS(311),
    [anon_sym_ONLY] = ACTIONS(311),
    [anon_sym_OMIT] = ACTIONS(311),
    [anon_sym_OPTION] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_AND] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_OR] = ACTIONS(311),
    [anon_sym_QMARK_QMARK] = ACTIONS(309),
    [anon_sym_QMARK_COLON] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_IS] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(309),
    [anon_sym_ISNOT] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [anon_sym_QMARK_EQ] = ACTIONS(309),
    [anon_sym_STAR_EQ] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [anon_sym_BANG_TILDE] = ACTIONS(309),
    [anon_sym_QMARK_TILDE] = ACTIONS(309),
    [anon_sym_STAR_TILDE] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_x] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(311),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [anon_sym_IN] = ACTIONS(311),
    [anon_sym_CONTAINS] = ACTIONS(311),
    [anon_sym_2] = ACTIONS(309),
    [anon_sym_CONTAINSNOT] = ACTIONS(311),
    [anon_sym_3] = ACTIONS(309),
    [anon_sym_CONTAINSALL] = ACTIONS(311),
    [anon_sym_4] = ACTIONS(309),
    [anon_sym_CONTAINSANY] = ACTIONS(311),
    [anon_sym_5] = ACTIONS(309),
    [anon_sym_CONTAINSNONE] = ACTIONS(311),
    [anon_sym_6] = ACTIONS(309),
    [anon_sym_INSIDE] = ACTIONS(311),
    [anon_sym_7] = ACTIONS(309),
    [anon_sym_NOTINSIDE] = ACTIONS(311),
    [anon_sym_NOTIN] = ACTIONS(309),
    [anon_sym_8] = ACTIONS(309),
    [anon_sym_ALLINSIDE] = ACTIONS(311),
    [anon_sym_9] = ACTIONS(309),
    [anon_sym_ANYINSIDE] = ACTIONS(311),
    [anon_sym_10] = ACTIONS(309),
    [anon_sym_NONEINSIDE] = ACTIONS(311),
    [anon_sym_11] = ACTIONS(309),
    [anon_sym_OUTSIDE] = ACTIONS(311),
    [anon_sym_INTERSECTS] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(309),
    [aux_sym_function_token2] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(309),
    [anon_sym_count] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(309),
    [aux_sym_function_token5] = ACTIONS(309),
    [aux_sym_function_token6] = ACTIONS(309),
    [aux_sym_function_token7] = ACTIONS(309),
    [aux_sym_function_token8] = ACTIONS(309),
    [aux_sym_function_token9] = ACTIONS(309),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(309),
    [aux_sym_function_token15] = ACTIONS(309),
    [aux_sym_function_token16] = ACTIONS(309),
    [aux_sym_function_token17] = ACTIONS(311),
    [anon_sym_any] = ACTIONS(311),
    [anon_sym_array] = ACTIONS(311),
    [anon_sym_bool] = ACTIONS(311),
    [anon_sym_datetime] = ACTIONS(311),
    [anon_sym_decimal] = ACTIONS(311),
    [anon_sym_duration] = ACTIONS(311),
    [anon_sym_float] = ACTIONS(311),
    [anon_sym_int] = ACTIONS(311),
    [anon_sym_number] = ACTIONS(311),
    [anon_sym_object] = ACTIONS(311),
    [anon_sym_string] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_option] = ACTIONS(311),
    [anon_sym_geometry] = ACTIONS(311),
    [anon_sym_EDDSA] = ACTIONS(311),
    [anon_sym_ES256] = ACTIONS(311),
    [anon_sym_ES384] = ACTIONS(311),
    [anon_sym_ES512] = ACTIONS(311),
    [anon_sym_HS256] = ACTIONS(311),
    [anon_sym_HS384] = ACTIONS(311),
    [anon_sym_HS512] = ACTIONS(311),
    [anon_sym_PS256] = ACTIONS(311),
    [anon_sym_PS384] = ACTIONS(311),
    [anon_sym_PS512] = ACTIONS(311),
    [anon_sym_RS256] = ACTIONS(311),
    [anon_sym_RS384] = ACTIONS(311),
    [anon_sym_RS512] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_TRUE] = ACTIONS(311),
    [anon_sym_FALSE] = ACTIONS(311),
    [anon_sym_null] = ACTIONS(311),
    [anon_sym_NULL] = ACTIONS(311),
    [anon_sym_none] = ACTIONS(311),
    [anon_sym_NONE] = ACTIONS(311),
    [sym_variable] = ACTIONS(309),
    [sym_comment] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(313),
    [aux_sym_future_token1] = ACTIONS(313),
    [aux_sym_casting_token1] = ACTIONS(313),
    [aux_sym_property_token1] = ACTIONS(315),
    [aux_sym_identifier_token1] = ACTIONS(315),
    [aux_sym_duration_token1] = ACTIONS(315),
    [aux_sym_constant_token1] = ACTIONS(313),
    [aux_sym_number_token1] = ACTIONS(315),
    [aux_sym_record_token1] = ACTIONS(313),
    [aux_sym_record_token2] = ACTIONS(313),
    [anon_sym_USE] = ACTIONS(315),
    [anon_sym_NS] = ACTIONS(315),
    [anon_sym_DB] = ACTIONS(315),
    [anon_sym_LET] = ACTIONS(315),
    [anon_sym_BEGIN] = ACTIONS(315),
    [anon_sym_TRANSACTION] = ACTIONS(315),
    [anon_sym_CANCEL] = ACTIONS(315),
    [anon_sym_COMMIT] = ACTIONS(315),
    [anon_sym_IF] = ACTIONS(315),
    [anon_sym_ELSE] = ACTIONS(315),
    [anon_sym_THEN] = ACTIONS(315),
    [anon_sym_END] = ACTIONS(315),
    [anon_sym_SELECT] = ACTIONS(315),
    [anon_sym_FROM] = ACTIONS(315),
    [anon_sym_WHERE] = ACTIONS(315),
    [anon_sym_SPLIT] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_GROUP] = ACTIONS(315),
    [anon_sym_BY] = ACTIONS(315),
    [anon_sym_ORDER] = ACTIONS(315),
    [anon_sym_COLLATE] = ACTIONS(315),
    [anon_sym_NUMERIC] = ACTIONS(315),
    [anon_sym_ASC] = ACTIONS(315),
    [anon_sym_DESC] = ACTIONS(315),
    [anon_sym_LIMIT] = ACTIONS(315),
    [anon_sym_START] = ACTIONS(315),
    [anon_sym_FETCH] = ACTIONS(315),
    [anon_sym_TIMEOUT] = ACTIONS(315),
    [anon_sym_PARALLEL] = ACTIONS(315),
    [anon_sym_INSERT] = ACTIONS(315),
    [anon_sym_IGNORE] = ACTIONS(315),
    [anon_sym_INTO] = ACTIONS(315),
    [anon_sym_VALUES] = ACTIONS(315),
    [anon_sym_ON] = ACTIONS(315),
    [anon_sym_DUPLICATE] = ACTIONS(315),
    [anon_sym_KEY] = ACTIONS(315),
    [anon_sym_UPDATE] = ACTIONS(315),
    [anon_sym_CREATE] = ACTIONS(315),
    [anon_sym_CONTENT] = ACTIONS(315),
    [anon_sym_SET] = ACTIONS(315),
    [anon_sym_RETURN] = ACTIONS(315),
    [anon_sym_BEFORE] = ACTIONS(315),
    [anon_sym_AFTER] = ACTIONS(315),
    [anon_sym_DIFF] = ACTIONS(315),
    [anon_sym_MERGE] = ACTIONS(315),
    [anon_sym_PATCH] = ACTIONS(315),
    [anon_sym_RELATE] = ACTIONS(315),
    [anon_sym_DELETE] = ACTIONS(315),
    [anon_sym_DEFINE] = ACTIONS(315),
    [anon_sym_NAMESPACE] = ACTIONS(315),
    [anon_sym_DATABASE] = ACTIONS(315),
    [anon_sym_USER] = ACTIONS(315),
    [anon_sym_PASSWORD] = ACTIONS(315),
    [anon_sym_PASSHASH] = ACTIONS(315),
    [anon_sym_TOKEN] = ACTIONS(315),
    [anon_sym_SCOPE] = ACTIONS(315),
    [anon_sym_TYPE] = ACTIONS(315),
    [anon_sym_VALUE] = ACTIONS(315),
    [anon_sym_SESSION] = ACTIONS(315),
    [anon_sym_SIGNUP] = ACTIONS(315),
    [anon_sym_SIGNIN] = ACTIONS(315),
    [anon_sym_TABLE] = ACTIONS(315),
    [anon_sym_DROP] = ACTIONS(315),
    [anon_sym_SCHEMAFULL] = ACTIONS(315),
    [anon_sym_SCHEMALESS] = ACTIONS(315),
    [anon_sym_AS] = ACTIONS(315),
    [anon_sym_PERMISSIONS] = ACTIONS(315),
    [anon_sym_FULL] = ACTIONS(315),
    [anon_sym_FOR] = ACTIONS(315),
    [anon_sym_select] = ACTIONS(315),
    [anon_sym_update] = ACTIONS(315),
    [anon_sym_create] = ACTIONS(315),
    [anon_sym_delete] = ACTIONS(315),
    [anon_sym_EVENT] = ACTIONS(315),
    [anon_sym_WHEN] = ACTIONS(315),
    [anon_sym_ASSERT] = ACTIONS(315),
    [anon_sym_INDEX] = ACTIONS(315),
    [anon_sym_FIELD] = ACTIONS(315),
    [anon_sym_FIELDS] = ACTIONS(315),
    [anon_sym_COLUMNS] = ACTIONS(315),
    [anon_sym_UNIQUE] = ACTIONS(315),
    [anon_sym_DEFAULT] = ACTIONS(315),
    [anon_sym_READONLY] = ACTIONS(315),
    [anon_sym_REMOVE] = ACTIONS(315),
    [anon_sym_SLEEP] = ACTIONS(315),
    [anon_sym_INFO] = ACTIONS(315),
    [anon_sym_KV] = ACTIONS(315),
    [anon_sym_TO] = ACTIONS(315),
    [anon_sym_OUT] = ACTIONS(315),
    [anon_sym_IFNOT] = ACTIONS(313),
    [anon_sym_EXISTS] = ACTIONS(315),
    [anon_sym_FUNCTION] = ACTIONS(315),
    [anon_sym_PARAM] = ACTIONS(315),
    [anon_sym_LIVE] = ACTIONS(315),
    [anon_sym_ONLY] = ACTIONS(315),
    [anon_sym_OMIT] = ACTIONS(315),
    [anon_sym_OPTION] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_AND] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_OR] = ACTIONS(315),
    [anon_sym_QMARK_QMARK] = ACTIONS(313),
    [anon_sym_QMARK_COLON] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_IS] = ACTIONS(315),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_ISNOT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_QMARK_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_BANG_TILDE] = ACTIONS(313),
    [anon_sym_QMARK_TILDE] = ACTIONS(313),
    [anon_sym_STAR_TILDE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_x] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_] = ACTIONS(313),
    [anon_sym_STAR_STAR] = ACTIONS(313),
    [anon_sym_IN] = ACTIONS(315),
    [anon_sym_CONTAINS] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(313),
    [anon_sym_CONTAINSNOT] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(313),
    [anon_sym_CONTAINSALL] = ACTIONS(315),
    [anon_sym_4] = ACTIONS(313),
    [anon_sym_CONTAINSANY] = ACTIONS(315),
    [anon_sym_5] = ACTIONS(313),
    [anon_sym_CONTAINSNONE] = ACTIONS(315),
    [anon_sym_6] = ACTIONS(313),
    [anon_sym_INSIDE] = ACTIONS(315),
    [anon_sym_7] = ACTIONS(313),
    [anon_sym_NOTINSIDE] = ACTIONS(315),
    [anon_sym_NOTIN] = ACTIONS(313),
    [anon_sym_8] = ACTIONS(313),
    [anon_sym_ALLINSIDE] = ACTIONS(315),
    [anon_sym_9] = ACTIONS(313),
    [anon_sym_ANYINSIDE] = ACTIONS(315),
    [anon_sym_10] = ACTIONS(313),
    [anon_sym_NONEINSIDE] = ACTIONS(315),
    [anon_sym_11] = ACTIONS(313),
    [anon_sym_OUTSIDE] = ACTIONS(315),
    [anon_sym_INTERSECTS] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(313),
    [aux_sym_function_token2] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(313),
    [anon_sym_count] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(313),
    [aux_sym_function_token5] = ACTIONS(313),
    [aux_sym_function_token6] = ACTIONS(313),
    [aux_sym_function_token7] = ACTIONS(313),
    [aux_sym_function_token8] = ACTIONS(313),
    [aux_sym_function_token9] = ACTIONS(313),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(313),
    [aux_sym_function_token15] = ACTIONS(313),
    [aux_sym_function_token16] = ACTIONS(313),
    [aux_sym_function_token17] = ACTIONS(315),
    [anon_sym_any] = ACTIONS(315),
    [anon_sym_array] = ACTIONS(315),
    [anon_sym_bool] = ACTIONS(315),
    [anon_sym_datetime] = ACTIONS(315),
    [anon_sym_decimal] = ACTIONS(315),
    [anon_sym_duration] = ACTIONS(315),
    [anon_sym_float] = ACTIONS(315),
    [anon_sym_int] = ACTIONS(315),
    [anon_sym_number] = ACTIONS(315),
    [anon_sym_object] = ACTIONS(315),
    [anon_sym_string] = ACTIONS(315),
    [anon_sym_record] = ACTIONS(315),
    [anon_sym_option] = ACTIONS(315),
    [anon_sym_geometry] = ACTIONS(315),
    [anon_sym_EDDSA] = ACTIONS(315),
    [anon_sym_ES256] = ACTIONS(315),
    [anon_sym_ES384] = ACTIONS(315),
    [anon_sym_ES512] = ACTIONS(315),
    [anon_sym_HS256] = ACTIONS(315),
    [anon_sym_HS384] = ACTIONS(315),
    [anon_sym_HS512] = ACTIONS(315),
    [anon_sym_PS256] = ACTIONS(315),
    [anon_sym_PS384] = ACTIONS(315),
    [anon_sym_PS512] = ACTIONS(315),
    [anon_sym_RS256] = ACTIONS(315),
    [anon_sym_RS384] = ACTIONS(315),
    [anon_sym_RS512] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_TRUE] = ACTIONS(315),
    [anon_sym_FALSE] = ACTIONS(315),
    [anon_sym_null] = ACTIONS(315),
    [anon_sym_NULL] = ACTIONS(315),
    [anon_sym_none] = ACTIONS(315),
    [anon_sym_NONE] = ACTIONS(315),
    [sym_variable] = ACTIONS(313),
    [sym_comment] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(269),
    [aux_sym_future_token1] = ACTIONS(269),
    [aux_sym_casting_token1] = ACTIONS(269),
    [aux_sym_property_token1] = ACTIONS(271),
    [aux_sym_identifier_token1] = ACTIONS(271),
    [aux_sym_duration_token1] = ACTIONS(271),
    [aux_sym_constant_token1] = ACTIONS(269),
    [aux_sym_number_token1] = ACTIONS(271),
    [aux_sym_record_token1] = ACTIONS(269),
    [aux_sym_record_token2] = ACTIONS(269),
    [anon_sym_USE] = ACTIONS(271),
    [anon_sym_NS] = ACTIONS(271),
    [anon_sym_DB] = ACTIONS(271),
    [anon_sym_LET] = ACTIONS(271),
    [anon_sym_BEGIN] = ACTIONS(271),
    [anon_sym_TRANSACTION] = ACTIONS(271),
    [anon_sym_CANCEL] = ACTIONS(271),
    [anon_sym_COMMIT] = ACTIONS(271),
    [anon_sym_IF] = ACTIONS(271),
    [anon_sym_ELSE] = ACTIONS(271),
    [anon_sym_THEN] = ACTIONS(271),
    [anon_sym_END] = ACTIONS(271),
    [anon_sym_SELECT] = ACTIONS(271),
    [anon_sym_FROM] = ACTIONS(271),
    [anon_sym_WHERE] = ACTIONS(271),
    [anon_sym_SPLIT] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(271),
    [anon_sym_GROUP] = ACTIONS(271),
    [anon_sym_BY] = ACTIONS(271),
    [anon_sym_ORDER] = ACTIONS(271),
    [anon_sym_COLLATE] = ACTIONS(271),
    [anon_sym_NUMERIC] = ACTIONS(271),
    [anon_sym_ASC] = ACTIONS(271),
    [anon_sym_DESC] = ACTIONS(271),
    [anon_sym_LIMIT] = ACTIONS(271),
    [anon_sym_START] = ACTIONS(271),
    [anon_sym_FETCH] = ACTIONS(271),
    [anon_sym_TIMEOUT] = ACTIONS(271),
    [anon_sym_PARALLEL] = ACTIONS(271),
    [anon_sym_INSERT] = ACTIONS(271),
    [anon_sym_IGNORE] = ACTIONS(271),
    [anon_sym_INTO] = ACTIONS(271),
    [anon_sym_VALUES] = ACTIONS(271),
    [anon_sym_ON] = ACTIONS(271),
    [anon_sym_DUPLICATE] = ACTIONS(271),
    [anon_sym_KEY] = ACTIONS(271),
    [anon_sym_UPDATE] = ACTIONS(271),
    [anon_sym_CREATE] = ACTIONS(271),
    [anon_sym_CONTENT] = ACTIONS(271),
    [anon_sym_SET] = ACTIONS(271),
    [anon_sym_RETURN] = ACTIONS(271),
    [anon_sym_BEFORE] = ACTIONS(271),
    [anon_sym_AFTER] = ACTIONS(271),
    [anon_sym_DIFF] = ACTIONS(271),
    [anon_sym_MERGE] = ACTIONS(271),
    [anon_sym_PATCH] = ACTIONS(271),
    [anon_sym_RELATE] = ACTIONS(271),
    [anon_sym_DELETE] = ACTIONS(271),
    [anon_sym_DEFINE] = ACTIONS(271),
    [anon_sym_NAMESPACE] = ACTIONS(271),
    [anon_sym_DATABASE] = ACTIONS(271),
    [anon_sym_USER] = ACTIONS(271),
    [anon_sym_PASSWORD] = ACTIONS(271),
    [anon_sym_PASSHASH] = ACTIONS(271),
    [anon_sym_TOKEN] = ACTIONS(271),
    [anon_sym_SCOPE] = ACTIONS(271),
    [anon_sym_TYPE] = ACTIONS(271),
    [anon_sym_VALUE] = ACTIONS(271),
    [anon_sym_SESSION] = ACTIONS(271),
    [anon_sym_SIGNUP] = ACTIONS(271),
    [anon_sym_SIGNIN] = ACTIONS(271),
    [anon_sym_TABLE] = ACTIONS(271),
    [anon_sym_DROP] = ACTIONS(271),
    [anon_sym_SCHEMAFULL] = ACTIONS(271),
    [anon_sym_SCHEMALESS] = ACTIONS(271),
    [anon_sym_AS] = ACTIONS(271),
    [anon_sym_PERMISSIONS] = ACTIONS(271),
    [anon_sym_FULL] = ACTIONS(271),
    [anon_sym_FOR] = ACTIONS(271),
    [anon_sym_select] = ACTIONS(271),
    [anon_sym_update] = ACTIONS(271),
    [anon_sym_create] = ACTIONS(271),
    [anon_sym_delete] = ACTIONS(271),
    [anon_sym_EVENT] = ACTIONS(271),
    [anon_sym_WHEN] = ACTIONS(271),
    [anon_sym_ASSERT] = ACTIONS(271),
    [anon_sym_INDEX] = ACTIONS(271),
    [anon_sym_FIELD] = ACTIONS(271),
    [anon_sym_FIELDS] = ACTIONS(271),
    [anon_sym_COLUMNS] = ACTIONS(271),
    [anon_sym_UNIQUE] = ACTIONS(271),
    [anon_sym_DEFAULT] = ACTIONS(271),
    [anon_sym_READONLY] = ACTIONS(271),
    [anon_sym_REMOVE] = ACTIONS(271),
    [anon_sym_SLEEP] = ACTIONS(271),
    [anon_sym_INFO] = ACTIONS(271),
    [anon_sym_KV] = ACTIONS(271),
    [anon_sym_TO] = ACTIONS(271),
    [anon_sym_OUT] = ACTIONS(271),
    [anon_sym_IFNOT] = ACTIONS(269),
    [anon_sym_EXISTS] = ACTIONS(271),
    [anon_sym_FUNCTION] = ACTIONS(271),
    [anon_sym_PARAM] = ACTIONS(271),
    [anon_sym_LIVE] = ACTIONS(271),
    [anon_sym_ONLY] = ACTIONS(271),
    [anon_sym_OMIT] = ACTIONS(271),
    [anon_sym_OPTION] = ACTIONS(271),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_AND] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_OR] = ACTIONS(271),
    [anon_sym_QMARK_QMARK] = ACTIONS(269),
    [anon_sym_QMARK_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_IS] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_ISNOT] = ACTIONS(269),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_QMARK_EQ] = ACTIONS(269),
    [anon_sym_STAR_EQ] = ACTIONS(269),
    [anon_sym_TILDE] = ACTIONS(269),
    [anon_sym_BANG_TILDE] = ACTIONS(269),
    [anon_sym_QMARK_TILDE] = ACTIONS(269),
    [anon_sym_STAR_TILDE] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(271),
    [anon_sym_x] = ACTIONS(271),
    [anon_sym_SLASH] = ACTIONS(271),
    [anon_sym_] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(269),
    [anon_sym_IN] = ACTIONS(271),
    [anon_sym_CONTAINS] = ACTIONS(271),
    [anon_sym_2] = ACTIONS(269),
    [anon_sym_CONTAINSNOT] = ACTIONS(271),
    [anon_sym_3] = ACTIONS(269),
    [anon_sym_CONTAINSALL] = ACTIONS(271),
    [anon_sym_4] = ACTIONS(269),
    [anon_sym_CONTAINSANY] = ACTIONS(271),
    [anon_sym_5] = ACTIONS(269),
    [anon_sym_CONTAINSNONE] = ACTIONS(271),
    [anon_sym_6] = ACTIONS(269),
    [anon_sym_INSIDE] = ACTIONS(271),
    [anon_sym_7] = ACTIONS(269),
    [anon_sym_NOTINSIDE] = ACTIONS(271),
    [anon_sym_NOTIN] = ACTIONS(269),
    [anon_sym_8] = ACTIONS(269),
    [anon_sym_ALLINSIDE] = ACTIONS(271),
    [anon_sym_9] = ACTIONS(269),
    [anon_sym_ANYINSIDE] = ACTIONS(271),
    [anon_sym_10] = ACTIONS(269),
    [anon_sym_NONEINSIDE] = ACTIONS(271),
    [anon_sym_11] = ACTIONS(269),
    [anon_sym_OUTSIDE] = ACTIONS(271),
    [anon_sym_INTERSECTS] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_DASH_GT] = ACTIONS(269),
    [anon_sym_LT_DASH] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [aux_sym_function_token1] = ACTIONS(269),
    [aux_sym_function_token2] = ACTIONS(269),
    [aux_sym_function_token3] = ACTIONS(269),
    [anon_sym_count] = ACTIONS(271),
    [aux_sym_function_token4] = ACTIONS(269),
    [aux_sym_function_token5] = ACTIONS(269),
    [aux_sym_function_token6] = ACTIONS(269),
    [aux_sym_function_token7] = ACTIONS(269),
    [aux_sym_function_token8] = ACTIONS(269),
    [aux_sym_function_token9] = ACTIONS(269),
    [aux_sym_function_token10] = ACTIONS(269),
    [aux_sym_function_token11] = ACTIONS(271),
    [aux_sym_function_token12] = ACTIONS(269),
    [aux_sym_function_token13] = ACTIONS(271),
    [aux_sym_function_token14] = ACTIONS(269),
    [aux_sym_function_token15] = ACTIONS(269),
    [aux_sym_function_token16] = ACTIONS(269),
    [aux_sym_function_token17] = ACTIONS(271),
    [anon_sym_any] = ACTIONS(271),
    [anon_sym_array] = ACTIONS(271),
    [anon_sym_bool] = ACTIONS(271),
    [anon_sym_datetime] = ACTIONS(271),
    [anon_sym_decimal] = ACTIONS(271),
    [anon_sym_duration] = ACTIONS(271),
    [anon_sym_float] = ACTIONS(271),
    [anon_sym_int] = ACTIONS(271),
    [anon_sym_number] = ACTIONS(271),
    [anon_sym_object] = ACTIONS(271),
    [anon_sym_string] = ACTIONS(271),
    [anon_sym_record] = ACTIONS(271),
    [anon_sym_option] = ACTIONS(271),
    [anon_sym_geometry] = ACTIONS(271),
    [anon_sym_EDDSA] = ACTIONS(271),
    [anon_sym_ES256] = ACTIONS(271),
    [anon_sym_ES384] = ACTIONS(271),
    [anon_sym_ES512] = ACTIONS(271),
    [anon_sym_HS256] = ACTIONS(271),
    [anon_sym_HS384] = ACTIONS(271),
    [anon_sym_HS512] = ACTIONS(271),
    [anon_sym_PS256] = ACTIONS(271),
    [anon_sym_PS384] = ACTIONS(271),
    [anon_sym_PS512] = ACTIONS(271),
    [anon_sym_RS256] = ACTIONS(271),
    [anon_sym_RS384] = ACTIONS(271),
    [anon_sym_RS512] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_TRUE] = ACTIONS(271),
    [anon_sym_FALSE] = ACTIONS(271),
    [anon_sym_null] = ACTIONS(271),
    [anon_sym_NULL] = ACTIONS(271),
    [anon_sym_none] = ACTIONS(271),
    [anon_sym_NONE] = ACTIONS(271),
    [sym_variable] = ACTIONS(269),
    [sym_comment] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(317),
    [aux_sym_future_token1] = ACTIONS(317),
    [aux_sym_casting_token1] = ACTIONS(317),
    [aux_sym_property_token1] = ACTIONS(319),
    [aux_sym_identifier_token1] = ACTIONS(319),
    [aux_sym_duration_token1] = ACTIONS(319),
    [aux_sym_constant_token1] = ACTIONS(317),
    [aux_sym_number_token1] = ACTIONS(319),
    [aux_sym_record_token1] = ACTIONS(317),
    [aux_sym_record_token2] = ACTIONS(317),
    [anon_sym_USE] = ACTIONS(319),
    [anon_sym_NS] = ACTIONS(319),
    [anon_sym_DB] = ACTIONS(319),
    [anon_sym_LET] = ACTIONS(319),
    [anon_sym_BEGIN] = ACTIONS(319),
    [anon_sym_TRANSACTION] = ACTIONS(319),
    [anon_sym_CANCEL] = ACTIONS(319),
    [anon_sym_COMMIT] = ACTIONS(319),
    [anon_sym_IF] = ACTIONS(319),
    [anon_sym_ELSE] = ACTIONS(319),
    [anon_sym_THEN] = ACTIONS(319),
    [anon_sym_END] = ACTIONS(319),
    [anon_sym_SELECT] = ACTIONS(319),
    [anon_sym_FROM] = ACTIONS(319),
    [anon_sym_WHERE] = ACTIONS(319),
    [anon_sym_SPLIT] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_GROUP] = ACTIONS(319),
    [anon_sym_BY] = ACTIONS(319),
    [anon_sym_ORDER] = ACTIONS(319),
    [anon_sym_COLLATE] = ACTIONS(319),
    [anon_sym_NUMERIC] = ACTIONS(319),
    [anon_sym_ASC] = ACTIONS(319),
    [anon_sym_DESC] = ACTIONS(319),
    [anon_sym_LIMIT] = ACTIONS(319),
    [anon_sym_START] = ACTIONS(319),
    [anon_sym_FETCH] = ACTIONS(319),
    [anon_sym_TIMEOUT] = ACTIONS(319),
    [anon_sym_PARALLEL] = ACTIONS(319),
    [anon_sym_INSERT] = ACTIONS(319),
    [anon_sym_IGNORE] = ACTIONS(319),
    [anon_sym_INTO] = ACTIONS(319),
    [anon_sym_VALUES] = ACTIONS(319),
    [anon_sym_ON] = ACTIONS(319),
    [anon_sym_DUPLICATE] = ACTIONS(319),
    [anon_sym_KEY] = ACTIONS(319),
    [anon_sym_UPDATE] = ACTIONS(319),
    [anon_sym_CREATE] = ACTIONS(319),
    [anon_sym_CONTENT] = ACTIONS(319),
    [anon_sym_SET] = ACTIONS(319),
    [anon_sym_RETURN] = ACTIONS(319),
    [anon_sym_BEFORE] = ACTIONS(319),
    [anon_sym_AFTER] = ACTIONS(319),
    [anon_sym_DIFF] = ACTIONS(319),
    [anon_sym_MERGE] = ACTIONS(319),
    [anon_sym_PATCH] = ACTIONS(319),
    [anon_sym_RELATE] = ACTIONS(319),
    [anon_sym_DELETE] = ACTIONS(319),
    [anon_sym_DEFINE] = ACTIONS(319),
    [anon_sym_NAMESPACE] = ACTIONS(319),
    [anon_sym_DATABASE] = ACTIONS(319),
    [anon_sym_USER] = ACTIONS(319),
    [anon_sym_PASSWORD] = ACTIONS(319),
    [anon_sym_PASSHASH] = ACTIONS(319),
    [anon_sym_TOKEN] = ACTIONS(319),
    [anon_sym_SCOPE] = ACTIONS(319),
    [anon_sym_TYPE] = ACTIONS(319),
    [anon_sym_VALUE] = ACTIONS(319),
    [anon_sym_SESSION] = ACTIONS(319),
    [anon_sym_SIGNUP] = ACTIONS(319),
    [anon_sym_SIGNIN] = ACTIONS(319),
    [anon_sym_TABLE] = ACTIONS(319),
    [anon_sym_DROP] = ACTIONS(319),
    [anon_sym_SCHEMAFULL] = ACTIONS(319),
    [anon_sym_SCHEMALESS] = ACTIONS(319),
    [anon_sym_AS] = ACTIONS(319),
    [anon_sym_PERMISSIONS] = ACTIONS(319),
    [anon_sym_FULL] = ACTIONS(319),
    [anon_sym_FOR] = ACTIONS(319),
    [anon_sym_select] = ACTIONS(319),
    [anon_sym_update] = ACTIONS(319),
    [anon_sym_create] = ACTIONS(319),
    [anon_sym_delete] = ACTIONS(319),
    [anon_sym_EVENT] = ACTIONS(319),
    [anon_sym_WHEN] = ACTIONS(319),
    [anon_sym_ASSERT] = ACTIONS(319),
    [anon_sym_INDEX] = ACTIONS(319),
    [anon_sym_FIELD] = ACTIONS(319),
    [anon_sym_FIELDS] = ACTIONS(319),
    [anon_sym_COLUMNS] = ACTIONS(319),
    [anon_sym_UNIQUE] = ACTIONS(319),
    [anon_sym_DEFAULT] = ACTIONS(319),
    [anon_sym_READONLY] = ACTIONS(319),
    [anon_sym_REMOVE] = ACTIONS(319),
    [anon_sym_SLEEP] = ACTIONS(319),
    [anon_sym_INFO] = ACTIONS(319),
    [anon_sym_KV] = ACTIONS(319),
    [anon_sym_TO] = ACTIONS(319),
    [anon_sym_OUT] = ACTIONS(319),
    [anon_sym_IFNOT] = ACTIONS(317),
    [anon_sym_EXISTS] = ACTIONS(319),
    [anon_sym_FUNCTION] = ACTIONS(319),
    [anon_sym_PARAM] = ACTIONS(319),
    [anon_sym_LIVE] = ACTIONS(319),
    [anon_sym_ONLY] = ACTIONS(319),
    [anon_sym_OMIT] = ACTIONS(319),
    [anon_sym_OPTION] = ACTIONS(319),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_AND] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_OR] = ACTIONS(319),
    [anon_sym_QMARK_QMARK] = ACTIONS(317),
    [anon_sym_QMARK_COLON] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_IS] = ACTIONS(319),
    [anon_sym_BANG_EQ] = ACTIONS(317),
    [anon_sym_ISNOT] = ACTIONS(317),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [anon_sym_QMARK_EQ] = ACTIONS(317),
    [anon_sym_STAR_EQ] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_BANG_TILDE] = ACTIONS(317),
    [anon_sym_QMARK_TILDE] = ACTIONS(317),
    [anon_sym_STAR_TILDE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_x] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_] = ACTIONS(317),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [anon_sym_IN] = ACTIONS(319),
    [anon_sym_CONTAINS] = ACTIONS(319),
    [anon_sym_2] = ACTIONS(317),
    [anon_sym_CONTAINSNOT] = ACTIONS(319),
    [anon_sym_3] = ACTIONS(317),
    [anon_sym_CONTAINSALL] = ACTIONS(319),
    [anon_sym_4] = ACTIONS(317),
    [anon_sym_CONTAINSANY] = ACTIONS(319),
    [anon_sym_5] = ACTIONS(317),
    [anon_sym_CONTAINSNONE] = ACTIONS(319),
    [anon_sym_6] = ACTIONS(317),
    [anon_sym_INSIDE] = ACTIONS(319),
    [anon_sym_7] = ACTIONS(317),
    [anon_sym_NOTINSIDE] = ACTIONS(319),
    [anon_sym_NOTIN] = ACTIONS(317),
    [anon_sym_8] = ACTIONS(317),
    [anon_sym_ALLINSIDE] = ACTIONS(319),
    [anon_sym_9] = ACTIONS(317),
    [anon_sym_ANYINSIDE] = ACTIONS(319),
    [anon_sym_10] = ACTIONS(317),
    [anon_sym_NONEINSIDE] = ACTIONS(319),
    [anon_sym_11] = ACTIONS(317),
    [anon_sym_OUTSIDE] = ACTIONS(319),
    [anon_sym_INTERSECTS] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(317),
    [aux_sym_function_token2] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(317),
    [anon_sym_count] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(317),
    [aux_sym_function_token5] = ACTIONS(317),
    [aux_sym_function_token6] = ACTIONS(317),
    [aux_sym_function_token7] = ACTIONS(317),
    [aux_sym_function_token8] = ACTIONS(317),
    [aux_sym_function_token9] = ACTIONS(317),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(317),
    [aux_sym_function_token15] = ACTIONS(317),
    [aux_sym_function_token16] = ACTIONS(317),
    [aux_sym_function_token17] = ACTIONS(319),
    [anon_sym_any] = ACTIONS(319),
    [anon_sym_array] = ACTIONS(319),
    [anon_sym_bool] = ACTIONS(319),
    [anon_sym_datetime] = ACTIONS(319),
    [anon_sym_decimal] = ACTIONS(319),
    [anon_sym_duration] = ACTIONS(319),
    [anon_sym_float] = ACTIONS(319),
    [anon_sym_int] = ACTIONS(319),
    [anon_sym_number] = ACTIONS(319),
    [anon_sym_object] = ACTIONS(319),
    [anon_sym_string] = ACTIONS(319),
    [anon_sym_record] = ACTIONS(319),
    [anon_sym_option] = ACTIONS(319),
    [anon_sym_geometry] = ACTIONS(319),
    [anon_sym_EDDSA] = ACTIONS(319),
    [anon_sym_ES256] = ACTIONS(319),
    [anon_sym_ES384] = ACTIONS(319),
    [anon_sym_ES512] = ACTIONS(319),
    [anon_sym_HS256] = ACTIONS(319),
    [anon_sym_HS384] = ACTIONS(319),
    [anon_sym_HS512] = ACTIONS(319),
    [anon_sym_PS256] = ACTIONS(319),
    [anon_sym_PS384] = ACTIONS(319),
    [anon_sym_PS512] = ACTIONS(319),
    [anon_sym_RS256] = ACTIONS(319),
    [anon_sym_RS384] = ACTIONS(319),
    [anon_sym_RS512] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_TRUE] = ACTIONS(319),
    [anon_sym_FALSE] = ACTIONS(319),
    [anon_sym_null] = ACTIONS(319),
    [anon_sym_NULL] = ACTIONS(319),
    [anon_sym_none] = ACTIONS(319),
    [anon_sym_NONE] = ACTIONS(319),
    [sym_variable] = ACTIONS(317),
    [sym_comment] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(321),
    [aux_sym_future_token1] = ACTIONS(321),
    [aux_sym_casting_token1] = ACTIONS(321),
    [aux_sym_property_token1] = ACTIONS(323),
    [aux_sym_identifier_token1] = ACTIONS(323),
    [aux_sym_duration_token1] = ACTIONS(323),
    [aux_sym_constant_token1] = ACTIONS(321),
    [aux_sym_number_token1] = ACTIONS(323),
    [aux_sym_record_token1] = ACTIONS(321),
    [aux_sym_record_token2] = ACTIONS(321),
    [anon_sym_USE] = ACTIONS(323),
    [anon_sym_NS] = ACTIONS(323),
    [anon_sym_DB] = ACTIONS(323),
    [anon_sym_LET] = ACTIONS(323),
    [anon_sym_BEGIN] = ACTIONS(323),
    [anon_sym_TRANSACTION] = ACTIONS(323),
    [anon_sym_CANCEL] = ACTIONS(323),
    [anon_sym_COMMIT] = ACTIONS(323),
    [anon_sym_IF] = ACTIONS(323),
    [anon_sym_ELSE] = ACTIONS(323),
    [anon_sym_THEN] = ACTIONS(323),
    [anon_sym_END] = ACTIONS(323),
    [anon_sym_SELECT] = ACTIONS(323),
    [anon_sym_FROM] = ACTIONS(323),
    [anon_sym_WHERE] = ACTIONS(323),
    [anon_sym_SPLIT] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_GROUP] = ACTIONS(323),
    [anon_sym_BY] = ACTIONS(323),
    [anon_sym_ORDER] = ACTIONS(323),
    [anon_sym_COLLATE] = ACTIONS(323),
    [anon_sym_NUMERIC] = ACTIONS(323),
    [anon_sym_ASC] = ACTIONS(323),
    [anon_sym_DESC] = ACTIONS(323),
    [anon_sym_LIMIT] = ACTIONS(323),
    [anon_sym_START] = ACTIONS(323),
    [anon_sym_FETCH] = ACTIONS(323),
    [anon_sym_TIMEOUT] = ACTIONS(323),
    [anon_sym_PARALLEL] = ACTIONS(323),
    [anon_sym_INSERT] = ACTIONS(323),
    [anon_sym_IGNORE] = ACTIONS(323),
    [anon_sym_INTO] = ACTIONS(323),
    [anon_sym_VALUES] = ACTIONS(323),
    [anon_sym_ON] = ACTIONS(323),
    [anon_sym_DUPLICATE] = ACTIONS(323),
    [anon_sym_KEY] = ACTIONS(323),
    [anon_sym_UPDATE] = ACTIONS(323),
    [anon_sym_CREATE] = ACTIONS(323),
    [anon_sym_CONTENT] = ACTIONS(323),
    [anon_sym_SET] = ACTIONS(323),
    [anon_sym_RETURN] = ACTIONS(323),
    [anon_sym_BEFORE] = ACTIONS(323),
    [anon_sym_AFTER] = ACTIONS(323),
    [anon_sym_DIFF] = ACTIONS(323),
    [anon_sym_MERGE] = ACTIONS(323),
    [anon_sym_PATCH] = ACTIONS(323),
    [anon_sym_RELATE] = ACTIONS(323),
    [anon_sym_DELETE] = ACTIONS(323),
    [anon_sym_DEFINE] = ACTIONS(323),
    [anon_sym_NAMESPACE] = ACTIONS(323),
    [anon_sym_DATABASE] = ACTIONS(323),
    [anon_sym_USER] = ACTIONS(323),
    [anon_sym_PASSWORD] = ACTIONS(323),
    [anon_sym_PASSHASH] = ACTIONS(323),
    [anon_sym_TOKEN] = ACTIONS(323),
    [anon_sym_SCOPE] = ACTIONS(323),
    [anon_sym_TYPE] = ACTIONS(323),
    [anon_sym_VALUE] = ACTIONS(323),
    [anon_sym_SESSION] = ACTIONS(323),
    [anon_sym_SIGNUP] = ACTIONS(323),
    [anon_sym_SIGNIN] = ACTIONS(323),
    [anon_sym_TABLE] = ACTIONS(323),
    [anon_sym_DROP] = ACTIONS(323),
    [anon_sym_SCHEMAFULL] = ACTIONS(323),
    [anon_sym_SCHEMALESS] = ACTIONS(323),
    [anon_sym_AS] = ACTIONS(323),
    [anon_sym_PERMISSIONS] = ACTIONS(323),
    [anon_sym_FULL] = ACTIONS(323),
    [anon_sym_FOR] = ACTIONS(323),
    [anon_sym_select] = ACTIONS(323),
    [anon_sym_update] = ACTIONS(323),
    [anon_sym_create] = ACTIONS(323),
    [anon_sym_delete] = ACTIONS(323),
    [anon_sym_EVENT] = ACTIONS(323),
    [anon_sym_WHEN] = ACTIONS(323),
    [anon_sym_ASSERT] = ACTIONS(323),
    [anon_sym_INDEX] = ACTIONS(323),
    [anon_sym_FIELD] = ACTIONS(323),
    [anon_sym_FIELDS] = ACTIONS(323),
    [anon_sym_COLUMNS] = ACTIONS(323),
    [anon_sym_UNIQUE] = ACTIONS(323),
    [anon_sym_DEFAULT] = ACTIONS(323),
    [anon_sym_READONLY] = ACTIONS(323),
    [anon_sym_REMOVE] = ACTIONS(323),
    [anon_sym_SLEEP] = ACTIONS(323),
    [anon_sym_INFO] = ACTIONS(323),
    [anon_sym_KV] = ACTIONS(323),
    [anon_sym_TO] = ACTIONS(323),
    [anon_sym_OUT] = ACTIONS(323),
    [anon_sym_IFNOT] = ACTIONS(321),
    [anon_sym_EXISTS] = ACTIONS(323),
    [anon_sym_FUNCTION] = ACTIONS(323),
    [anon_sym_PARAM] = ACTIONS(323),
    [anon_sym_LIVE] = ACTIONS(323),
    [anon_sym_ONLY] = ACTIONS(323),
    [anon_sym_OMIT] = ACTIONS(323),
    [anon_sym_OPTION] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_AND] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_OR] = ACTIONS(323),
    [anon_sym_QMARK_QMARK] = ACTIONS(321),
    [anon_sym_QMARK_COLON] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_IS] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_ISNOT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_QMARK_EQ] = ACTIONS(321),
    [anon_sym_STAR_EQ] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_BANG_TILDE] = ACTIONS(321),
    [anon_sym_QMARK_TILDE] = ACTIONS(321),
    [anon_sym_STAR_TILDE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_x] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_] = ACTIONS(321),
    [anon_sym_STAR_STAR] = ACTIONS(321),
    [anon_sym_IN] = ACTIONS(323),
    [anon_sym_CONTAINS] = ACTIONS(323),
    [anon_sym_2] = ACTIONS(321),
    [anon_sym_CONTAINSNOT] = ACTIONS(323),
    [anon_sym_3] = ACTIONS(321),
    [anon_sym_CONTAINSALL] = ACTIONS(323),
    [anon_sym_4] = ACTIONS(321),
    [anon_sym_CONTAINSANY] = ACTIONS(323),
    [anon_sym_5] = ACTIONS(321),
    [anon_sym_CONTAINSNONE] = ACTIONS(323),
    [anon_sym_6] = ACTIONS(321),
    [anon_sym_INSIDE] = ACTIONS(323),
    [anon_sym_7] = ACTIONS(321),
    [anon_sym_NOTINSIDE] = ACTIONS(323),
    [anon_sym_NOTIN] = ACTIONS(321),
    [anon_sym_8] = ACTIONS(321),
    [anon_sym_ALLINSIDE] = ACTIONS(323),
    [anon_sym_9] = ACTIONS(321),
    [anon_sym_ANYINSIDE] = ACTIONS(323),
    [anon_sym_10] = ACTIONS(321),
    [anon_sym_NONEINSIDE] = ACTIONS(323),
    [anon_sym_11] = ACTIONS(321),
    [anon_sym_OUTSIDE] = ACTIONS(323),
    [anon_sym_INTERSECTS] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_LT_DASH] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(321),
    [aux_sym_function_token2] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(321),
    [anon_sym_count] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(321),
    [aux_sym_function_token5] = ACTIONS(321),
    [aux_sym_function_token6] = ACTIONS(321),
    [aux_sym_function_token7] = ACTIONS(321),
    [aux_sym_function_token8] = ACTIONS(321),
    [aux_sym_function_token9] = ACTIONS(321),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(321),
    [aux_sym_function_token15] = ACTIONS(321),
    [aux_sym_function_token16] = ACTIONS(321),
    [aux_sym_function_token17] = ACTIONS(323),
    [anon_sym_any] = ACTIONS(323),
    [anon_sym_array] = ACTIONS(323),
    [anon_sym_bool] = ACTIONS(323),
    [anon_sym_datetime] = ACTIONS(323),
    [anon_sym_decimal] = ACTIONS(323),
    [anon_sym_duration] = ACTIONS(323),
    [anon_sym_float] = ACTIONS(323),
    [anon_sym_int] = ACTIONS(323),
    [anon_sym_number] = ACTIONS(323),
    [anon_sym_object] = ACTIONS(323),
    [anon_sym_string] = ACTIONS(323),
    [anon_sym_record] = ACTIONS(323),
    [anon_sym_option] = ACTIONS(323),
    [anon_sym_geometry] = ACTIONS(323),
    [anon_sym_EDDSA] = ACTIONS(323),
    [anon_sym_ES256] = ACTIONS(323),
    [anon_sym_ES384] = ACTIONS(323),
    [anon_sym_ES512] = ACTIONS(323),
    [anon_sym_HS256] = ACTIONS(323),
    [anon_sym_HS384] = ACTIONS(323),
    [anon_sym_HS512] = ACTIONS(323),
    [anon_sym_PS256] = ACTIONS(323),
    [anon_sym_PS384] = ACTIONS(323),
    [anon_sym_PS512] = ACTIONS(323),
    [anon_sym_RS256] = ACTIONS(323),
    [anon_sym_RS384] = ACTIONS(323),
    [anon_sym_RS512] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(323),
    [anon_sym_false] = ACTIONS(323),
    [anon_sym_TRUE] = ACTIONS(323),
    [anon_sym_FALSE] = ACTIONS(323),
    [anon_sym_null] = ACTIONS(323),
    [anon_sym_NULL] = ACTIONS(323),
    [anon_sym_none] = ACTIONS(323),
    [anon_sym_NONE] = ACTIONS(323),
    [sym_variable] = ACTIONS(321),
    [sym_comment] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(325),
    [aux_sym_future_token1] = ACTIONS(325),
    [aux_sym_casting_token1] = ACTIONS(325),
    [aux_sym_property_token1] = ACTIONS(327),
    [aux_sym_identifier_token1] = ACTIONS(327),
    [aux_sym_duration_token1] = ACTIONS(327),
    [aux_sym_constant_token1] = ACTIONS(325),
    [aux_sym_number_token1] = ACTIONS(327),
    [aux_sym_record_token1] = ACTIONS(325),
    [aux_sym_record_token2] = ACTIONS(325),
    [anon_sym_USE] = ACTIONS(327),
    [anon_sym_NS] = ACTIONS(327),
    [anon_sym_DB] = ACTIONS(327),
    [anon_sym_LET] = ACTIONS(327),
    [anon_sym_BEGIN] = ACTIONS(327),
    [anon_sym_TRANSACTION] = ACTIONS(327),
    [anon_sym_CANCEL] = ACTIONS(327),
    [anon_sym_COMMIT] = ACTIONS(327),
    [anon_sym_IF] = ACTIONS(327),
    [anon_sym_ELSE] = ACTIONS(327),
    [anon_sym_THEN] = ACTIONS(327),
    [anon_sym_END] = ACTIONS(327),
    [anon_sym_SELECT] = ACTIONS(327),
    [anon_sym_FROM] = ACTIONS(327),
    [anon_sym_WHERE] = ACTIONS(327),
    [anon_sym_SPLIT] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_GROUP] = ACTIONS(327),
    [anon_sym_BY] = ACTIONS(327),
    [anon_sym_ORDER] = ACTIONS(327),
    [anon_sym_COLLATE] = ACTIONS(327),
    [anon_sym_NUMERIC] = ACTIONS(327),
    [anon_sym_ASC] = ACTIONS(327),
    [anon_sym_DESC] = ACTIONS(327),
    [anon_sym_LIMIT] = ACTIONS(327),
    [anon_sym_START] = ACTIONS(327),
    [anon_sym_FETCH] = ACTIONS(327),
    [anon_sym_TIMEOUT] = ACTIONS(327),
    [anon_sym_PARALLEL] = ACTIONS(327),
    [anon_sym_INSERT] = ACTIONS(327),
    [anon_sym_IGNORE] = ACTIONS(327),
    [anon_sym_INTO] = ACTIONS(327),
    [anon_sym_VALUES] = ACTIONS(327),
    [anon_sym_ON] = ACTIONS(327),
    [anon_sym_DUPLICATE] = ACTIONS(327),
    [anon_sym_KEY] = ACTIONS(327),
    [anon_sym_UPDATE] = ACTIONS(327),
    [anon_sym_CREATE] = ACTIONS(327),
    [anon_sym_CONTENT] = ACTIONS(327),
    [anon_sym_SET] = ACTIONS(327),
    [anon_sym_RETURN] = ACTIONS(327),
    [anon_sym_BEFORE] = ACTIONS(327),
    [anon_sym_AFTER] = ACTIONS(327),
    [anon_sym_DIFF] = ACTIONS(327),
    [anon_sym_MERGE] = ACTIONS(327),
    [anon_sym_PATCH] = ACTIONS(327),
    [anon_sym_RELATE] = ACTIONS(327),
    [anon_sym_DELETE] = ACTIONS(327),
    [anon_sym_DEFINE] = ACTIONS(327),
    [anon_sym_NAMESPACE] = ACTIONS(327),
    [anon_sym_DATABASE] = ACTIONS(327),
    [anon_sym_USER] = ACTIONS(327),
    [anon_sym_PASSWORD] = ACTIONS(327),
    [anon_sym_PASSHASH] = ACTIONS(327),
    [anon_sym_TOKEN] = ACTIONS(327),
    [anon_sym_SCOPE] = ACTIONS(327),
    [anon_sym_TYPE] = ACTIONS(327),
    [anon_sym_VALUE] = ACTIONS(327),
    [anon_sym_SESSION] = ACTIONS(327),
    [anon_sym_SIGNUP] = ACTIONS(327),
    [anon_sym_SIGNIN] = ACTIONS(327),
    [anon_sym_TABLE] = ACTIONS(327),
    [anon_sym_DROP] = ACTIONS(327),
    [anon_sym_SCHEMAFULL] = ACTIONS(327),
    [anon_sym_SCHEMALESS] = ACTIONS(327),
    [anon_sym_AS] = ACTIONS(327),
    [anon_sym_PERMISSIONS] = ACTIONS(327),
    [anon_sym_FULL] = ACTIONS(327),
    [anon_sym_FOR] = ACTIONS(327),
    [anon_sym_select] = ACTIONS(327),
    [anon_sym_update] = ACTIONS(327),
    [anon_sym_create] = ACTIONS(327),
    [anon_sym_delete] = ACTIONS(327),
    [anon_sym_EVENT] = ACTIONS(327),
    [anon_sym_WHEN] = ACTIONS(327),
    [anon_sym_ASSERT] = ACTIONS(327),
    [anon_sym_INDEX] = ACTIONS(327),
    [anon_sym_FIELD] = ACTIONS(327),
    [anon_sym_FIELDS] = ACTIONS(327),
    [anon_sym_COLUMNS] = ACTIONS(327),
    [anon_sym_UNIQUE] = ACTIONS(327),
    [anon_sym_DEFAULT] = ACTIONS(327),
    [anon_sym_READONLY] = ACTIONS(327),
    [anon_sym_REMOVE] = ACTIONS(327),
    [anon_sym_SLEEP] = ACTIONS(327),
    [anon_sym_INFO] = ACTIONS(327),
    [anon_sym_KV] = ACTIONS(327),
    [anon_sym_TO] = ACTIONS(327),
    [anon_sym_OUT] = ACTIONS(327),
    [anon_sym_IFNOT] = ACTIONS(325),
    [anon_sym_EXISTS] = ACTIONS(327),
    [anon_sym_FUNCTION] = ACTIONS(327),
    [anon_sym_PARAM] = ACTIONS(327),
    [anon_sym_LIVE] = ACTIONS(327),
    [anon_sym_ONLY] = ACTIONS(327),
    [anon_sym_OMIT] = ACTIONS(327),
    [anon_sym_OPTION] = ACTIONS(327),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_AND] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_OR] = ACTIONS(327),
    [anon_sym_QMARK_QMARK] = ACTIONS(325),
    [anon_sym_QMARK_COLON] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_IS] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_ISNOT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_QMARK_EQ] = ACTIONS(325),
    [anon_sym_STAR_EQ] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_BANG_TILDE] = ACTIONS(325),
    [anon_sym_QMARK_TILDE] = ACTIONS(325),
    [anon_sym_STAR_TILDE] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_x] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_] = ACTIONS(325),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [anon_sym_IN] = ACTIONS(327),
    [anon_sym_CONTAINS] = ACTIONS(327),
    [anon_sym_2] = ACTIONS(325),
    [anon_sym_CONTAINSNOT] = ACTIONS(327),
    [anon_sym_3] = ACTIONS(325),
    [anon_sym_CONTAINSALL] = ACTIONS(327),
    [anon_sym_4] = ACTIONS(325),
    [anon_sym_CONTAINSANY] = ACTIONS(327),
    [anon_sym_5] = ACTIONS(325),
    [anon_sym_CONTAINSNONE] = ACTIONS(327),
    [anon_sym_6] = ACTIONS(325),
    [anon_sym_INSIDE] = ACTIONS(327),
    [anon_sym_7] = ACTIONS(325),
    [anon_sym_NOTINSIDE] = ACTIONS(327),
    [anon_sym_NOTIN] = ACTIONS(325),
    [anon_sym_8] = ACTIONS(325),
    [anon_sym_ALLINSIDE] = ACTIONS(327),
    [anon_sym_9] = ACTIONS(325),
    [anon_sym_ANYINSIDE] = ACTIONS(327),
    [anon_sym_10] = ACTIONS(325),
    [anon_sym_NONEINSIDE] = ACTIONS(327),
    [anon_sym_11] = ACTIONS(325),
    [anon_sym_OUTSIDE] = ACTIONS(327),
    [anon_sym_INTERSECTS] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_DASH_GT] = ACTIONS(325),
    [anon_sym_LT_DASH] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(325),
    [aux_sym_function_token2] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(325),
    [anon_sym_count] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(325),
    [aux_sym_function_token5] = ACTIONS(325),
    [aux_sym_function_token6] = ACTIONS(325),
    [aux_sym_function_token7] = ACTIONS(325),
    [aux_sym_function_token8] = ACTIONS(325),
    [aux_sym_function_token9] = ACTIONS(325),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(325),
    [aux_sym_function_token15] = ACTIONS(325),
    [aux_sym_function_token16] = ACTIONS(325),
    [aux_sym_function_token17] = ACTIONS(327),
    [anon_sym_any] = ACTIONS(327),
    [anon_sym_array] = ACTIONS(327),
    [anon_sym_bool] = ACTIONS(327),
    [anon_sym_datetime] = ACTIONS(327),
    [anon_sym_decimal] = ACTIONS(327),
    [anon_sym_duration] = ACTIONS(327),
    [anon_sym_float] = ACTIONS(327),
    [anon_sym_int] = ACTIONS(327),
    [anon_sym_number] = ACTIONS(327),
    [anon_sym_object] = ACTIONS(327),
    [anon_sym_string] = ACTIONS(327),
    [anon_sym_record] = ACTIONS(327),
    [anon_sym_option] = ACTIONS(327),
    [anon_sym_geometry] = ACTIONS(327),
    [anon_sym_EDDSA] = ACTIONS(327),
    [anon_sym_ES256] = ACTIONS(327),
    [anon_sym_ES384] = ACTIONS(327),
    [anon_sym_ES512] = ACTIONS(327),
    [anon_sym_HS256] = ACTIONS(327),
    [anon_sym_HS384] = ACTIONS(327),
    [anon_sym_HS512] = ACTIONS(327),
    [anon_sym_PS256] = ACTIONS(327),
    [anon_sym_PS384] = ACTIONS(327),
    [anon_sym_PS512] = ACTIONS(327),
    [anon_sym_RS256] = ACTIONS(327),
    [anon_sym_RS384] = ACTIONS(327),
    [anon_sym_RS512] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_TRUE] = ACTIONS(327),
    [anon_sym_FALSE] = ACTIONS(327),
    [anon_sym_null] = ACTIONS(327),
    [anon_sym_NULL] = ACTIONS(327),
    [anon_sym_none] = ACTIONS(327),
    [anon_sym_NONE] = ACTIONS(327),
    [sym_variable] = ACTIONS(325),
    [sym_comment] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(329),
    [aux_sym_future_token1] = ACTIONS(329),
    [aux_sym_casting_token1] = ACTIONS(329),
    [aux_sym_property_token1] = ACTIONS(331),
    [aux_sym_identifier_token1] = ACTIONS(331),
    [aux_sym_duration_token1] = ACTIONS(331),
    [aux_sym_constant_token1] = ACTIONS(329),
    [aux_sym_number_token1] = ACTIONS(331),
    [aux_sym_record_token1] = ACTIONS(329),
    [aux_sym_record_token2] = ACTIONS(329),
    [anon_sym_USE] = ACTIONS(331),
    [anon_sym_NS] = ACTIONS(331),
    [anon_sym_DB] = ACTIONS(331),
    [anon_sym_LET] = ACTIONS(331),
    [anon_sym_BEGIN] = ACTIONS(331),
    [anon_sym_TRANSACTION] = ACTIONS(331),
    [anon_sym_CANCEL] = ACTIONS(331),
    [anon_sym_COMMIT] = ACTIONS(331),
    [anon_sym_IF] = ACTIONS(331),
    [anon_sym_ELSE] = ACTIONS(331),
    [anon_sym_THEN] = ACTIONS(331),
    [anon_sym_END] = ACTIONS(331),
    [anon_sym_SELECT] = ACTIONS(331),
    [anon_sym_FROM] = ACTIONS(331),
    [anon_sym_WHERE] = ACTIONS(331),
    [anon_sym_SPLIT] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_GROUP] = ACTIONS(331),
    [anon_sym_BY] = ACTIONS(331),
    [anon_sym_ORDER] = ACTIONS(331),
    [anon_sym_COLLATE] = ACTIONS(331),
    [anon_sym_NUMERIC] = ACTIONS(331),
    [anon_sym_ASC] = ACTIONS(331),
    [anon_sym_DESC] = ACTIONS(331),
    [anon_sym_LIMIT] = ACTIONS(331),
    [anon_sym_START] = ACTIONS(331),
    [anon_sym_FETCH] = ACTIONS(331),
    [anon_sym_TIMEOUT] = ACTIONS(331),
    [anon_sym_PARALLEL] = ACTIONS(331),
    [anon_sym_INSERT] = ACTIONS(331),
    [anon_sym_IGNORE] = ACTIONS(331),
    [anon_sym_INTO] = ACTIONS(331),
    [anon_sym_VALUES] = ACTIONS(331),
    [anon_sym_ON] = ACTIONS(331),
    [anon_sym_DUPLICATE] = ACTIONS(331),
    [anon_sym_KEY] = ACTIONS(331),
    [anon_sym_UPDATE] = ACTIONS(331),
    [anon_sym_CREATE] = ACTIONS(331),
    [anon_sym_CONTENT] = ACTIONS(331),
    [anon_sym_SET] = ACTIONS(331),
    [anon_sym_RETURN] = ACTIONS(331),
    [anon_sym_BEFORE] = ACTIONS(331),
    [anon_sym_AFTER] = ACTIONS(331),
    [anon_sym_DIFF] = ACTIONS(331),
    [anon_sym_MERGE] = ACTIONS(331),
    [anon_sym_PATCH] = ACTIONS(331),
    [anon_sym_RELATE] = ACTIONS(331),
    [anon_sym_DELETE] = ACTIONS(331),
    [anon_sym_DEFINE] = ACTIONS(331),
    [anon_sym_NAMESPACE] = ACTIONS(331),
    [anon_sym_DATABASE] = ACTIONS(331),
    [anon_sym_USER] = ACTIONS(331),
    [anon_sym_PASSWORD] = ACTIONS(331),
    [anon_sym_PASSHASH] = ACTIONS(331),
    [anon_sym_TOKEN] = ACTIONS(331),
    [anon_sym_SCOPE] = ACTIONS(331),
    [anon_sym_TYPE] = ACTIONS(331),
    [anon_sym_VALUE] = ACTIONS(331),
    [anon_sym_SESSION] = ACTIONS(331),
    [anon_sym_SIGNUP] = ACTIONS(331),
    [anon_sym_SIGNIN] = ACTIONS(331),
    [anon_sym_TABLE] = ACTIONS(331),
    [anon_sym_DROP] = ACTIONS(331),
    [anon_sym_SCHEMAFULL] = ACTIONS(331),
    [anon_sym_SCHEMALESS] = ACTIONS(331),
    [anon_sym_AS] = ACTIONS(331),
    [anon_sym_PERMISSIONS] = ACTIONS(331),
    [anon_sym_FULL] = ACTIONS(331),
    [anon_sym_FOR] = ACTIONS(331),
    [anon_sym_select] = ACTIONS(331),
    [anon_sym_update] = ACTIONS(331),
    [anon_sym_create] = ACTIONS(331),
    [anon_sym_delete] = ACTIONS(331),
    [anon_sym_EVENT] = ACTIONS(331),
    [anon_sym_WHEN] = ACTIONS(331),
    [anon_sym_ASSERT] = ACTIONS(331),
    [anon_sym_INDEX] = ACTIONS(331),
    [anon_sym_FIELD] = ACTIONS(331),
    [anon_sym_FIELDS] = ACTIONS(331),
    [anon_sym_COLUMNS] = ACTIONS(331),
    [anon_sym_UNIQUE] = ACTIONS(331),
    [anon_sym_DEFAULT] = ACTIONS(331),
    [anon_sym_READONLY] = ACTIONS(331),
    [anon_sym_REMOVE] = ACTIONS(331),
    [anon_sym_SLEEP] = ACTIONS(331),
    [anon_sym_INFO] = ACTIONS(331),
    [anon_sym_KV] = ACTIONS(331),
    [anon_sym_TO] = ACTIONS(331),
    [anon_sym_OUT] = ACTIONS(331),
    [anon_sym_IFNOT] = ACTIONS(329),
    [anon_sym_EXISTS] = ACTIONS(331),
    [anon_sym_FUNCTION] = ACTIONS(331),
    [anon_sym_PARAM] = ACTIONS(331),
    [anon_sym_LIVE] = ACTIONS(331),
    [anon_sym_ONLY] = ACTIONS(331),
    [anon_sym_OMIT] = ACTIONS(331),
    [anon_sym_OPTION] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(329),
    [anon_sym_AND] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(329),
    [anon_sym_OR] = ACTIONS(331),
    [anon_sym_QMARK_QMARK] = ACTIONS(329),
    [anon_sym_QMARK_COLON] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_IS] = ACTIONS(331),
    [anon_sym_BANG_EQ] = ACTIONS(329),
    [anon_sym_ISNOT] = ACTIONS(329),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [anon_sym_QMARK_EQ] = ACTIONS(329),
    [anon_sym_STAR_EQ] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_BANG_TILDE] = ACTIONS(329),
    [anon_sym_QMARK_TILDE] = ACTIONS(329),
    [anon_sym_STAR_TILDE] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_x] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_] = ACTIONS(329),
    [anon_sym_STAR_STAR] = ACTIONS(329),
    [anon_sym_IN] = ACTIONS(331),
    [anon_sym_CONTAINS] = ACTIONS(331),
    [anon_sym_2] = ACTIONS(329),
    [anon_sym_CONTAINSNOT] = ACTIONS(331),
    [anon_sym_3] = ACTIONS(329),
    [anon_sym_CONTAINSALL] = ACTIONS(331),
    [anon_sym_4] = ACTIONS(329),
    [anon_sym_CONTAINSANY] = ACTIONS(331),
    [anon_sym_5] = ACTIONS(329),
    [anon_sym_CONTAINSNONE] = ACTIONS(331),
    [anon_sym_6] = ACTIONS(329),
    [anon_sym_INSIDE] = ACTIONS(331),
    [anon_sym_7] = ACTIONS(329),
    [anon_sym_NOTINSIDE] = ACTIONS(331),
    [anon_sym_NOTIN] = ACTIONS(329),
    [anon_sym_8] = ACTIONS(329),
    [anon_sym_ALLINSIDE] = ACTIONS(331),
    [anon_sym_9] = ACTIONS(329),
    [anon_sym_ANYINSIDE] = ACTIONS(331),
    [anon_sym_10] = ACTIONS(329),
    [anon_sym_NONEINSIDE] = ACTIONS(331),
    [anon_sym_11] = ACTIONS(329),
    [anon_sym_OUTSIDE] = ACTIONS(331),
    [anon_sym_INTERSECTS] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_DASH_GT] = ACTIONS(329),
    [anon_sym_LT_DASH] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(329),
    [aux_sym_function_token2] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(329),
    [anon_sym_count] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(329),
    [aux_sym_function_token5] = ACTIONS(329),
    [aux_sym_function_token6] = ACTIONS(329),
    [aux_sym_function_token7] = ACTIONS(329),
    [aux_sym_function_token8] = ACTIONS(329),
    [aux_sym_function_token9] = ACTIONS(329),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(329),
    [aux_sym_function_token15] = ACTIONS(329),
    [aux_sym_function_token16] = ACTIONS(329),
    [aux_sym_function_token17] = ACTIONS(331),
    [anon_sym_any] = ACTIONS(331),
    [anon_sym_array] = ACTIONS(331),
    [anon_sym_bool] = ACTIONS(331),
    [anon_sym_datetime] = ACTIONS(331),
    [anon_sym_decimal] = ACTIONS(331),
    [anon_sym_duration] = ACTIONS(331),
    [anon_sym_float] = ACTIONS(331),
    [anon_sym_int] = ACTIONS(331),
    [anon_sym_number] = ACTIONS(331),
    [anon_sym_object] = ACTIONS(331),
    [anon_sym_string] = ACTIONS(331),
    [anon_sym_record] = ACTIONS(331),
    [anon_sym_option] = ACTIONS(331),
    [anon_sym_geometry] = ACTIONS(331),
    [anon_sym_EDDSA] = ACTIONS(331),
    [anon_sym_ES256] = ACTIONS(331),
    [anon_sym_ES384] = ACTIONS(331),
    [anon_sym_ES512] = ACTIONS(331),
    [anon_sym_HS256] = ACTIONS(331),
    [anon_sym_HS384] = ACTIONS(331),
    [anon_sym_HS512] = ACTIONS(331),
    [anon_sym_PS256] = ACTIONS(331),
    [anon_sym_PS384] = ACTIONS(331),
    [anon_sym_PS512] = ACTIONS(331),
    [anon_sym_RS256] = ACTIONS(331),
    [anon_sym_RS384] = ACTIONS(331),
    [anon_sym_RS512] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_TRUE] = ACTIONS(331),
    [anon_sym_FALSE] = ACTIONS(331),
    [anon_sym_null] = ACTIONS(331),
    [anon_sym_NULL] = ACTIONS(331),
    [anon_sym_none] = ACTIONS(331),
    [anon_sym_NONE] = ACTIONS(331),
    [sym_variable] = ACTIONS(329),
    [sym_comment] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
  },
  [26] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE_SEMI] = ACTIONS(333),
    [anon_sym_RBRACE_COMMA] = ACTIONS(333),
    [aux_sym_future_token1] = ACTIONS(333),
    [aux_sym_casting_token1] = ACTIONS(333),
    [aux_sym_property_token1] = ACTIONS(335),
    [aux_sym_identifier_token1] = ACTIONS(335),
    [aux_sym_duration_token1] = ACTIONS(335),
    [aux_sym_constant_token1] = ACTIONS(333),
    [aux_sym_number_token1] = ACTIONS(335),
    [aux_sym_record_token1] = ACTIONS(333),
    [aux_sym_record_token2] = ACTIONS(333),
    [anon_sym_USE] = ACTIONS(335),
    [anon_sym_NS] = ACTIONS(335),
    [anon_sym_DB] = ACTIONS(335),
    [anon_sym_LET] = ACTIONS(335),
    [anon_sym_BEGIN] = ACTIONS(335),
    [anon_sym_TRANSACTION] = ACTIONS(335),
    [anon_sym_CANCEL] = ACTIONS(335),
    [anon_sym_COMMIT] = ACTIONS(335),
    [anon_sym_IF] = ACTIONS(335),
    [anon_sym_ELSE] = ACTIONS(335),
    [anon_sym_THEN] = ACTIONS(335),
    [anon_sym_END] = ACTIONS(335),
    [anon_sym_SELECT] = ACTIONS(335),
    [anon_sym_FROM] = ACTIONS(335),
    [anon_sym_WHERE] = ACTIONS(335),
    [anon_sym_SPLIT] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_GROUP] = ACTIONS(335),
    [anon_sym_BY] = ACTIONS(335),
    [anon_sym_ORDER] = ACTIONS(335),
    [anon_sym_COLLATE] = ACTIONS(335),
    [anon_sym_NUMERIC] = ACTIONS(335),
    [anon_sym_ASC] = ACTIONS(335),
    [anon_sym_DESC] = ACTIONS(335),
    [anon_sym_LIMIT] = ACTIONS(335),
    [anon_sym_START] = ACTIONS(335),
    [anon_sym_FETCH] = ACTIONS(335),
    [anon_sym_TIMEOUT] = ACTIONS(335),
    [anon_sym_PARALLEL] = ACTIONS(335),
    [anon_sym_INSERT] = ACTIONS(335),
    [anon_sym_IGNORE] = ACTIONS(335),
    [anon_sym_INTO] = ACTIONS(335),
    [anon_sym_VALUES] = ACTIONS(335),
    [anon_sym_ON] = ACTIONS(335),
    [anon_sym_DUPLICATE] = ACTIONS(335),
    [anon_sym_KEY] = ACTIONS(335),
    [anon_sym_UPDATE] = ACTIONS(335),
    [anon_sym_CREATE] = ACTIONS(335),
    [anon_sym_CONTENT] = ACTIONS(335),
    [anon_sym_SET] = ACTIONS(335),
    [anon_sym_RETURN] = ACTIONS(335),
    [anon_sym_BEFORE] = ACTIONS(335),
    [anon_sym_AFTER] = ACTIONS(335),
    [anon_sym_DIFF] = ACTIONS(335),
    [anon_sym_MERGE] = ACTIONS(335),
    [anon_sym_PATCH] = ACTIONS(335),
    [anon_sym_RELATE] = ACTIONS(335),
    [anon_sym_DELETE] = ACTIONS(335),
    [anon_sym_DEFINE] = ACTIONS(335),
    [anon_sym_NAMESPACE] = ACTIONS(335),
    [anon_sym_DATABASE] = ACTIONS(335),
    [anon_sym_USER] = ACTIONS(335),
    [anon_sym_PASSWORD] = ACTIONS(335),
    [anon_sym_PASSHASH] = ACTIONS(335),
    [anon_sym_TOKEN] = ACTIONS(335),
    [anon_sym_SCOPE] = ACTIONS(335),
    [anon_sym_TYPE] = ACTIONS(335),
    [anon_sym_VALUE] = ACTIONS(335),
    [anon_sym_SESSION] = ACTIONS(335),
    [anon_sym_SIGNUP] = ACTIONS(335),
    [anon_sym_SIGNIN] = ACTIONS(335),
    [anon_sym_TABLE] = ACTIONS(335),
    [anon_sym_DROP] = ACTIONS(335),
    [anon_sym_SCHEMAFULL] = ACTIONS(335),
    [anon_sym_SCHEMALESS] = ACTIONS(335),
    [anon_sym_AS] = ACTIONS(335),
    [anon_sym_PERMISSIONS] = ACTIONS(335),
    [anon_sym_FULL] = ACTIONS(335),
    [anon_sym_FOR] = ACTIONS(335),
    [anon_sym_select] = ACTIONS(335),
    [anon_sym_update] = ACTIONS(335),
    [anon_sym_create] = ACTIONS(335),
    [anon_sym_delete] = ACTIONS(335),
    [anon_sym_EVENT] = ACTIONS(335),
    [anon_sym_WHEN] = ACTIONS(335),
    [anon_sym_ASSERT] = ACTIONS(335),
    [anon_sym_INDEX] = ACTIONS(335),
    [anon_sym_FIELD] = ACTIONS(335),
    [anon_sym_FIELDS] = ACTIONS(335),
    [anon_sym_COLUMNS] = ACTIONS(335),
    [anon_sym_UNIQUE] = ACTIONS(335),
    [anon_sym_DEFAULT] = ACTIONS(335),
    [anon_sym_READONLY] = ACTIONS(335),
    [anon_sym_REMOVE] = ACTIONS(335),
    [anon_sym_SLEEP] = ACTIONS(335),
    [anon_sym_INFO] = ACTIONS(335),
    [anon_sym_KV] = ACTIONS(335),
    [anon_sym_TO] = ACTIONS(335),
    [anon_sym_OUT] = ACTIONS(335),
    [anon_sym_IFNOT] = ACTIONS(333),
    [anon_sym_EXISTS] = ACTIONS(335),
    [anon_sym_FUNCTION] = ACTIONS(335),
    [anon_sym_PARAM] = ACTIONS(335),
    [anon_sym_LIVE] = ACTIONS(335),
    [anon_sym_ONLY] = ACTIONS(335),
    [anon_sym_OMIT] = ACTIONS(335),
    [anon_sym_OPTION] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_AND] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_OR] = ACTIONS(335),
    [anon_sym_QMARK_QMARK] = ACTIONS(333),
    [anon_sym_QMARK_COLON] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_IS] = ACTIONS(335),
    [anon_sym_BANG_EQ] = ACTIONS(333),
    [anon_sym_ISNOT] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(333),
    [anon_sym_QMARK_EQ] = ACTIONS(333),
    [anon_sym_STAR_EQ] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_BANG_TILDE] = ACTIONS(333),
    [anon_sym_QMARK_TILDE] = ACTIONS(333),
    [anon_sym_STAR_TILDE] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_x] = ACTIONS(335),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(333),
    [anon_sym_IN] = ACTIONS(335),
    [anon_sym_CONTAINS] = ACTIONS(335),
    [anon_sym_2] = ACTIONS(333),
    [anon_sym_CONTAINSNOT] = ACTIONS(335),
    [anon_sym_3] = ACTIONS(333),
    [anon_sym_CONTAINSALL] = ACTIONS(335),
    [anon_sym_4] = ACTIONS(333),
    [anon_sym_CONTAINSANY] = ACTIONS(335),
    [anon_sym_5] = ACTIONS(333),
    [anon_sym_CONTAINSNONE] = ACTIONS(335),
    [anon_sym_6] = ACTIONS(333),
    [anon_sym_INSIDE] = ACTIONS(335),
    [anon_sym_7] = ACTIONS(333),
    [anon_sym_NOTINSIDE] = ACTIONS(335),
    [anon_sym_NOTIN] = ACTIONS(333),
    [anon_sym_8] = ACTIONS(333),
    [anon_sym_ALLINSIDE] = ACTIONS(335),
    [anon_sym_9] = ACTIONS(333),
    [anon_sym_ANYINSIDE] = ACTIONS(335),
    [anon_sym_10] = ACTIONS(333),
    [anon_sym_NONEINSIDE] = ACTIONS(335),
    [anon_sym_11] = ACTIONS(333),
    [anon_sym_OUTSIDE] = ACTIONS(335),
    [anon_sym_INTERSECTS] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_DASH_GT] = ACTIONS(333),
    [anon_sym_LT_DASH] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(333),
    [aux_sym_function_token2] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(333),
    [anon_sym_count] = ACTIONS(335),
    [aux_sym_function_token4] = ACTIONS(333),
    [aux_sym_function_token5] = ACTIONS(333),
    [aux_sym_function_token6] = ACTIONS(333),
    [aux_sym_function_token7] = ACTIONS(333),
    [aux_sym_function_token8] = ACTIONS(333),
    [aux_sym_function_token9] = ACTIONS(333),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(335),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(335),
    [aux_sym_function_token14] = ACTIONS(333),
    [aux_sym_function_token15] = ACTIONS(333),
    [aux_sym_function_token16] = ACTIONS(333),
    [aux_sym_function_token17] = ACTIONS(335),
    [anon_sym_any] = ACTIONS(335),
    [anon_sym_array] = ACTIONS(335),
    [anon_sym_bool] = ACTIONS(335),
    [anon_sym_datetime] = ACTIONS(335),
    [anon_sym_decimal] = ACTIONS(335),
    [anon_sym_duration] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_number] = ACTIONS(335),
    [anon_sym_object] = ACTIONS(335),
    [anon_sym_string] = ACTIONS(335),
    [anon_sym_record] = ACTIONS(335),
    [anon_sym_option] = ACTIONS(335),
    [anon_sym_geometry] = ACTIONS(335),
    [anon_sym_EDDSA] = ACTIONS(335),
    [anon_sym_ES256] = ACTIONS(335),
    [anon_sym_ES384] = ACTIONS(335),
    [anon_sym_ES512] = ACTIONS(335),
    [anon_sym_HS256] = ACTIONS(335),
    [anon_sym_HS384] = ACTIONS(335),
    [anon_sym_HS512] = ACTIONS(335),
    [anon_sym_PS256] = ACTIONS(335),
    [anon_sym_PS384] = ACTIONS(335),
    [anon_sym_PS512] = ACTIONS(335),
    [anon_sym_RS256] = ACTIONS(335),
    [anon_sym_RS384] = ACTIONS(335),
    [anon_sym_RS512] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(335),
    [anon_sym_false] = ACTIONS(335),
    [anon_sym_TRUE] = ACTIONS(335),
    [anon_sym_FALSE] = ACTIONS(335),
    [anon_sym_null] = ACTIONS(335),
    [anon_sym_NULL] = ACTIONS(335),
    [anon_sym_none] = ACTIONS(335),
    [anon_sym_NONE] = ACTIONS(335),
    [sym_variable] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
  },
  [27] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE_SEMI] = ACTIONS(337),
    [anon_sym_RBRACE_COMMA] = ACTIONS(337),
    [aux_sym_future_token1] = ACTIONS(337),
    [aux_sym_casting_token1] = ACTIONS(337),
    [aux_sym_property_token1] = ACTIONS(339),
    [aux_sym_identifier_token1] = ACTIONS(339),
    [aux_sym_duration_token1] = ACTIONS(339),
    [aux_sym_constant_token1] = ACTIONS(337),
    [aux_sym_number_token1] = ACTIONS(339),
    [aux_sym_record_token1] = ACTIONS(337),
    [aux_sym_record_token2] = ACTIONS(337),
    [anon_sym_USE] = ACTIONS(339),
    [anon_sym_NS] = ACTIONS(339),
    [anon_sym_DB] = ACTIONS(339),
    [anon_sym_LET] = ACTIONS(339),
    [anon_sym_BEGIN] = ACTIONS(339),
    [anon_sym_TRANSACTION] = ACTIONS(339),
    [anon_sym_CANCEL] = ACTIONS(339),
    [anon_sym_COMMIT] = ACTIONS(339),
    [anon_sym_IF] = ACTIONS(339),
    [anon_sym_ELSE] = ACTIONS(339),
    [anon_sym_THEN] = ACTIONS(339),
    [anon_sym_END] = ACTIONS(339),
    [anon_sym_SELECT] = ACTIONS(339),
    [anon_sym_FROM] = ACTIONS(339),
    [anon_sym_WHERE] = ACTIONS(339),
    [anon_sym_SPLIT] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_GROUP] = ACTIONS(339),
    [anon_sym_BY] = ACTIONS(339),
    [anon_sym_ORDER] = ACTIONS(339),
    [anon_sym_COLLATE] = ACTIONS(339),
    [anon_sym_NUMERIC] = ACTIONS(339),
    [anon_sym_ASC] = ACTIONS(339),
    [anon_sym_DESC] = ACTIONS(339),
    [anon_sym_LIMIT] = ACTIONS(339),
    [anon_sym_START] = ACTIONS(339),
    [anon_sym_FETCH] = ACTIONS(339),
    [anon_sym_TIMEOUT] = ACTIONS(339),
    [anon_sym_PARALLEL] = ACTIONS(339),
    [anon_sym_INSERT] = ACTIONS(339),
    [anon_sym_IGNORE] = ACTIONS(339),
    [anon_sym_INTO] = ACTIONS(339),
    [anon_sym_VALUES] = ACTIONS(339),
    [anon_sym_ON] = ACTIONS(339),
    [anon_sym_DUPLICATE] = ACTIONS(339),
    [anon_sym_KEY] = ACTIONS(339),
    [anon_sym_UPDATE] = ACTIONS(339),
    [anon_sym_CREATE] = ACTIONS(339),
    [anon_sym_CONTENT] = ACTIONS(339),
    [anon_sym_SET] = ACTIONS(339),
    [anon_sym_RETURN] = ACTIONS(339),
    [anon_sym_BEFORE] = ACTIONS(339),
    [anon_sym_AFTER] = ACTIONS(339),
    [anon_sym_DIFF] = ACTIONS(339),
    [anon_sym_MERGE] = ACTIONS(339),
    [anon_sym_PATCH] = ACTIONS(339),
    [anon_sym_RELATE] = ACTIONS(339),
    [anon_sym_DELETE] = ACTIONS(339),
    [anon_sym_DEFINE] = ACTIONS(339),
    [anon_sym_NAMESPACE] = ACTIONS(339),
    [anon_sym_DATABASE] = ACTIONS(339),
    [anon_sym_USER] = ACTIONS(339),
    [anon_sym_PASSWORD] = ACTIONS(339),
    [anon_sym_PASSHASH] = ACTIONS(339),
    [anon_sym_TOKEN] = ACTIONS(339),
    [anon_sym_SCOPE] = ACTIONS(339),
    [anon_sym_TYPE] = ACTIONS(339),
    [anon_sym_VALUE] = ACTIONS(339),
    [anon_sym_SESSION] = ACTIONS(339),
    [anon_sym_SIGNUP] = ACTIONS(339),
    [anon_sym_SIGNIN] = ACTIONS(339),
    [anon_sym_TABLE] = ACTIONS(339),
    [anon_sym_DROP] = ACTIONS(339),
    [anon_sym_SCHEMAFULL] = ACTIONS(339),
    [anon_sym_SCHEMALESS] = ACTIONS(339),
    [anon_sym_AS] = ACTIONS(339),
    [anon_sym_PERMISSIONS] = ACTIONS(339),
    [anon_sym_FULL] = ACTIONS(339),
    [anon_sym_FOR] = ACTIONS(339),
    [anon_sym_select] = ACTIONS(339),
    [anon_sym_update] = ACTIONS(339),
    [anon_sym_create] = ACTIONS(339),
    [anon_sym_delete] = ACTIONS(339),
    [anon_sym_EVENT] = ACTIONS(339),
    [anon_sym_WHEN] = ACTIONS(339),
    [anon_sym_ASSERT] = ACTIONS(339),
    [anon_sym_INDEX] = ACTIONS(339),
    [anon_sym_FIELD] = ACTIONS(339),
    [anon_sym_FIELDS] = ACTIONS(339),
    [anon_sym_COLUMNS] = ACTIONS(339),
    [anon_sym_UNIQUE] = ACTIONS(339),
    [anon_sym_DEFAULT] = ACTIONS(339),
    [anon_sym_READONLY] = ACTIONS(339),
    [anon_sym_REMOVE] = ACTIONS(339),
    [anon_sym_SLEEP] = ACTIONS(339),
    [anon_sym_INFO] = ACTIONS(339),
    [anon_sym_KV] = ACTIONS(339),
    [anon_sym_TO] = ACTIONS(339),
    [anon_sym_OUT] = ACTIONS(339),
    [anon_sym_IFNOT] = ACTIONS(337),
    [anon_sym_EXISTS] = ACTIONS(339),
    [anon_sym_FUNCTION] = ACTIONS(339),
    [anon_sym_PARAM] = ACTIONS(339),
    [anon_sym_LIVE] = ACTIONS(339),
    [anon_sym_ONLY] = ACTIONS(339),
    [anon_sym_OMIT] = ACTIONS(339),
    [anon_sym_OPTION] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_AND] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_OR] = ACTIONS(339),
    [anon_sym_QMARK_QMARK] = ACTIONS(337),
    [anon_sym_QMARK_COLON] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_IS] = ACTIONS(339),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_ISNOT] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_QMARK_EQ] = ACTIONS(337),
    [anon_sym_STAR_EQ] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [anon_sym_BANG_TILDE] = ACTIONS(337),
    [anon_sym_QMARK_TILDE] = ACTIONS(337),
    [anon_sym_STAR_TILDE] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_x] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(337),
    [anon_sym_] = ACTIONS(337),
    [anon_sym_STAR_STAR] = ACTIONS(337),
    [anon_sym_IN] = ACTIONS(339),
    [anon_sym_CONTAINS] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(337),
    [anon_sym_CONTAINSNOT] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(337),
    [anon_sym_CONTAINSALL] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(337),
    [anon_sym_CONTAINSANY] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(337),
    [anon_sym_CONTAINSNONE] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(337),
    [anon_sym_INSIDE] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(337),
    [anon_sym_NOTINSIDE] = ACTIONS(339),
    [anon_sym_NOTIN] = ACTIONS(337),
    [anon_sym_8] = ACTIONS(337),
    [anon_sym_ALLINSIDE] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(337),
    [anon_sym_ANYINSIDE] = ACTIONS(339),
    [anon_sym_10] = ACTIONS(337),
    [anon_sym_NONEINSIDE] = ACTIONS(339),
    [anon_sym_11] = ACTIONS(337),
    [anon_sym_OUTSIDE] = ACTIONS(339),
    [anon_sym_INTERSECTS] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_DASH_GT] = ACTIONS(337),
    [anon_sym_LT_DASH] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [aux_sym_function_token1] = ACTIONS(337),
    [aux_sym_function_token2] = ACTIONS(337),
    [aux_sym_function_token3] = ACTIONS(337),
    [anon_sym_count] = ACTIONS(339),
    [aux_sym_function_token4] = ACTIONS(337),
    [aux_sym_function_token5] = ACTIONS(337),
    [aux_sym_function_token6] = ACTIONS(337),
    [aux_sym_function_token7] = ACTIONS(337),
    [aux_sym_function_token8] = ACTIONS(337),
    [aux_sym_function_token9] = ACTIONS(337),
    [aux_sym_function_token10] = ACTIONS(337),
    [aux_sym_function_token11] = ACTIONS(339),
    [aux_sym_function_token12] = ACTIONS(337),
    [aux_sym_function_token13] = ACTIONS(339),
    [aux_sym_function_token14] = ACTIONS(337),
    [aux_sym_function_token15] = ACTIONS(337),
    [aux_sym_function_token16] = ACTIONS(337),
    [aux_sym_function_token17] = ACTIONS(339),
    [anon_sym_any] = ACTIONS(339),
    [anon_sym_array] = ACTIONS(339),
    [anon_sym_bool] = ACTIONS(339),
    [anon_sym_datetime] = ACTIONS(339),
    [anon_sym_decimal] = ACTIONS(339),
    [anon_sym_duration] = ACTIONS(339),
    [anon_sym_float] = ACTIONS(339),
    [anon_sym_int] = ACTIONS(339),
    [anon_sym_number] = ACTIONS(339),
    [anon_sym_object] = ACTIONS(339),
    [anon_sym_string] = ACTIONS(339),
    [anon_sym_record] = ACTIONS(339),
    [anon_sym_option] = ACTIONS(339),
    [anon_sym_geometry] = ACTIONS(339),
    [anon_sym_EDDSA] = ACTIONS(339),
    [anon_sym_ES256] = ACTIONS(339),
    [anon_sym_ES384] = ACTIONS(339),
    [anon_sym_ES512] = ACTIONS(339),
    [anon_sym_HS256] = ACTIONS(339),
    [anon_sym_HS384] = ACTIONS(339),
    [anon_sym_HS512] = ACTIONS(339),
    [anon_sym_PS256] = ACTIONS(339),
    [anon_sym_PS384] = ACTIONS(339),
    [anon_sym_PS512] = ACTIONS(339),
    [anon_sym_RS256] = ACTIONS(339),
    [anon_sym_RS384] = ACTIONS(339),
    [anon_sym_RS512] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_TRUE] = ACTIONS(339),
    [anon_sym_FALSE] = ACTIONS(339),
    [anon_sym_null] = ACTIONS(339),
    [anon_sym_NULL] = ACTIONS(339),
    [anon_sym_none] = ACTIONS(339),
    [anon_sym_NONE] = ACTIONS(339),
    [sym_variable] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(341),
    [aux_sym_future_token1] = ACTIONS(341),
    [aux_sym_casting_token1] = ACTIONS(341),
    [aux_sym_property_token1] = ACTIONS(343),
    [aux_sym_identifier_token1] = ACTIONS(343),
    [aux_sym_duration_token1] = ACTIONS(343),
    [aux_sym_constant_token1] = ACTIONS(341),
    [aux_sym_number_token1] = ACTIONS(343),
    [aux_sym_record_token1] = ACTIONS(341),
    [aux_sym_record_token2] = ACTIONS(341),
    [anon_sym_USE] = ACTIONS(343),
    [anon_sym_NS] = ACTIONS(343),
    [anon_sym_DB] = ACTIONS(343),
    [anon_sym_LET] = ACTIONS(343),
    [anon_sym_BEGIN] = ACTIONS(343),
    [anon_sym_TRANSACTION] = ACTIONS(343),
    [anon_sym_CANCEL] = ACTIONS(343),
    [anon_sym_COMMIT] = ACTIONS(343),
    [anon_sym_IF] = ACTIONS(343),
    [anon_sym_ELSE] = ACTIONS(343),
    [anon_sym_THEN] = ACTIONS(343),
    [anon_sym_END] = ACTIONS(343),
    [anon_sym_SELECT] = ACTIONS(343),
    [anon_sym_FROM] = ACTIONS(343),
    [anon_sym_WHERE] = ACTIONS(343),
    [anon_sym_SPLIT] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_GROUP] = ACTIONS(343),
    [anon_sym_BY] = ACTIONS(343),
    [anon_sym_ORDER] = ACTIONS(343),
    [anon_sym_COLLATE] = ACTIONS(343),
    [anon_sym_NUMERIC] = ACTIONS(343),
    [anon_sym_ASC] = ACTIONS(343),
    [anon_sym_DESC] = ACTIONS(343),
    [anon_sym_LIMIT] = ACTIONS(343),
    [anon_sym_START] = ACTIONS(343),
    [anon_sym_FETCH] = ACTIONS(343),
    [anon_sym_TIMEOUT] = ACTIONS(343),
    [anon_sym_PARALLEL] = ACTIONS(343),
    [anon_sym_INSERT] = ACTIONS(343),
    [anon_sym_IGNORE] = ACTIONS(343),
    [anon_sym_INTO] = ACTIONS(343),
    [anon_sym_VALUES] = ACTIONS(343),
    [anon_sym_ON] = ACTIONS(343),
    [anon_sym_DUPLICATE] = ACTIONS(343),
    [anon_sym_KEY] = ACTIONS(343),
    [anon_sym_UPDATE] = ACTIONS(343),
    [anon_sym_CREATE] = ACTIONS(343),
    [anon_sym_CONTENT] = ACTIONS(343),
    [anon_sym_SET] = ACTIONS(343),
    [anon_sym_RETURN] = ACTIONS(343),
    [anon_sym_BEFORE] = ACTIONS(343),
    [anon_sym_AFTER] = ACTIONS(343),
    [anon_sym_DIFF] = ACTIONS(343),
    [anon_sym_MERGE] = ACTIONS(343),
    [anon_sym_PATCH] = ACTIONS(343),
    [anon_sym_RELATE] = ACTIONS(343),
    [anon_sym_DELETE] = ACTIONS(343),
    [anon_sym_DEFINE] = ACTIONS(343),
    [anon_sym_NAMESPACE] = ACTIONS(343),
    [anon_sym_DATABASE] = ACTIONS(343),
    [anon_sym_USER] = ACTIONS(343),
    [anon_sym_PASSWORD] = ACTIONS(343),
    [anon_sym_PASSHASH] = ACTIONS(343),
    [anon_sym_TOKEN] = ACTIONS(343),
    [anon_sym_SCOPE] = ACTIONS(343),
    [anon_sym_TYPE] = ACTIONS(343),
    [anon_sym_VALUE] = ACTIONS(343),
    [anon_sym_SESSION] = ACTIONS(343),
    [anon_sym_SIGNUP] = ACTIONS(343),
    [anon_sym_SIGNIN] = ACTIONS(343),
    [anon_sym_TABLE] = ACTIONS(343),
    [anon_sym_DROP] = ACTIONS(343),
    [anon_sym_SCHEMAFULL] = ACTIONS(343),
    [anon_sym_SCHEMALESS] = ACTIONS(343),
    [anon_sym_AS] = ACTIONS(343),
    [anon_sym_PERMISSIONS] = ACTIONS(343),
    [anon_sym_FULL] = ACTIONS(343),
    [anon_sym_FOR] = ACTIONS(343),
    [anon_sym_select] = ACTIONS(343),
    [anon_sym_update] = ACTIONS(343),
    [anon_sym_create] = ACTIONS(343),
    [anon_sym_delete] = ACTIONS(343),
    [anon_sym_EVENT] = ACTIONS(343),
    [anon_sym_WHEN] = ACTIONS(343),
    [anon_sym_ASSERT] = ACTIONS(343),
    [anon_sym_INDEX] = ACTIONS(343),
    [anon_sym_FIELD] = ACTIONS(343),
    [anon_sym_FIELDS] = ACTIONS(343),
    [anon_sym_COLUMNS] = ACTIONS(343),
    [anon_sym_UNIQUE] = ACTIONS(343),
    [anon_sym_DEFAULT] = ACTIONS(343),
    [anon_sym_READONLY] = ACTIONS(343),
    [anon_sym_REMOVE] = ACTIONS(343),
    [anon_sym_SLEEP] = ACTIONS(343),
    [anon_sym_INFO] = ACTIONS(343),
    [anon_sym_KV] = ACTIONS(343),
    [anon_sym_TO] = ACTIONS(343),
    [anon_sym_OUT] = ACTIONS(343),
    [anon_sym_IFNOT] = ACTIONS(341),
    [anon_sym_EXISTS] = ACTIONS(343),
    [anon_sym_FUNCTION] = ACTIONS(343),
    [anon_sym_PARAM] = ACTIONS(343),
    [anon_sym_LIVE] = ACTIONS(343),
    [anon_sym_ONLY] = ACTIONS(343),
    [anon_sym_OMIT] = ACTIONS(343),
    [anon_sym_OPTION] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_AND] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_OR] = ACTIONS(343),
    [anon_sym_QMARK_QMARK] = ACTIONS(341),
    [anon_sym_QMARK_COLON] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_IS] = ACTIONS(343),
    [anon_sym_BANG_EQ] = ACTIONS(341),
    [anon_sym_ISNOT] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(341),
    [anon_sym_QMARK_EQ] = ACTIONS(341),
    [anon_sym_STAR_EQ] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_BANG_TILDE] = ACTIONS(341),
    [anon_sym_QMARK_TILDE] = ACTIONS(341),
    [anon_sym_STAR_TILDE] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_LT_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_EQ] = ACTIONS(341),
    [anon_sym_PLUS] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_x] = ACTIONS(343),
    [anon_sym_SLASH] = ACTIONS(343),
    [anon_sym_] = ACTIONS(341),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_IN] = ACTIONS(343),
    [anon_sym_CONTAINS] = ACTIONS(343),
    [anon_sym_2] = ACTIONS(341),
    [anon_sym_CONTAINSNOT] = ACTIONS(343),
    [anon_sym_3] = ACTIONS(341),
    [anon_sym_CONTAINSALL] = ACTIONS(343),
    [anon_sym_4] = ACTIONS(341),
    [anon_sym_CONTAINSANY] = ACTIONS(343),
    [anon_sym_5] = ACTIONS(341),
    [anon_sym_CONTAINSNONE] = ACTIONS(343),
    [anon_sym_6] = ACTIONS(341),
    [anon_sym_INSIDE] = ACTIONS(343),
    [anon_sym_7] = ACTIONS(341),
    [anon_sym_NOTINSIDE] = ACTIONS(343),
    [anon_sym_NOTIN] = ACTIONS(341),
    [anon_sym_8] = ACTIONS(341),
    [anon_sym_ALLINSIDE] = ACTIONS(343),
    [anon_sym_9] = ACTIONS(341),
    [anon_sym_ANYINSIDE] = ACTIONS(343),
    [anon_sym_10] = ACTIONS(341),
    [anon_sym_NONEINSIDE] = ACTIONS(343),
    [anon_sym_11] = ACTIONS(341),
    [anon_sym_OUTSIDE] = ACTIONS(343),
    [anon_sym_INTERSECTS] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_DASH_GT] = ACTIONS(341),
    [anon_sym_LT_DASH] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [aux_sym_function_token1] = ACTIONS(341),
    [aux_sym_function_token2] = ACTIONS(341),
    [aux_sym_function_token3] = ACTIONS(341),
    [anon_sym_count] = ACTIONS(343),
    [aux_sym_function_token4] = ACTIONS(341),
    [aux_sym_function_token5] = ACTIONS(341),
    [aux_sym_function_token6] = ACTIONS(341),
    [aux_sym_function_token7] = ACTIONS(341),
    [aux_sym_function_token8] = ACTIONS(341),
    [aux_sym_function_token9] = ACTIONS(341),
    [aux_sym_function_token10] = ACTIONS(341),
    [aux_sym_function_token11] = ACTIONS(343),
    [aux_sym_function_token12] = ACTIONS(341),
    [aux_sym_function_token13] = ACTIONS(343),
    [aux_sym_function_token14] = ACTIONS(341),
    [aux_sym_function_token15] = ACTIONS(341),
    [aux_sym_function_token16] = ACTIONS(341),
    [aux_sym_function_token17] = ACTIONS(343),
    [anon_sym_any] = ACTIONS(343),
    [anon_sym_array] = ACTIONS(343),
    [anon_sym_bool] = ACTIONS(343),
    [anon_sym_datetime] = ACTIONS(343),
    [anon_sym_decimal] = ACTIONS(343),
    [anon_sym_duration] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_number] = ACTIONS(343),
    [anon_sym_object] = ACTIONS(343),
    [anon_sym_string] = ACTIONS(343),
    [anon_sym_record] = ACTIONS(343),
    [anon_sym_option] = ACTIONS(343),
    [anon_sym_geometry] = ACTIONS(343),
    [anon_sym_EDDSA] = ACTIONS(343),
    [anon_sym_ES256] = ACTIONS(343),
    [anon_sym_ES384] = ACTIONS(343),
    [anon_sym_ES512] = ACTIONS(343),
    [anon_sym_HS256] = ACTIONS(343),
    [anon_sym_HS384] = ACTIONS(343),
    [anon_sym_HS512] = ACTIONS(343),
    [anon_sym_PS256] = ACTIONS(343),
    [anon_sym_PS384] = ACTIONS(343),
    [anon_sym_PS512] = ACTIONS(343),
    [anon_sym_RS256] = ACTIONS(343),
    [anon_sym_RS384] = ACTIONS(343),
    [anon_sym_RS512] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_TRUE] = ACTIONS(343),
    [anon_sym_FALSE] = ACTIONS(343),
    [anon_sym_null] = ACTIONS(343),
    [anon_sym_NULL] = ACTIONS(343),
    [anon_sym_none] = ACTIONS(343),
    [anon_sym_NONE] = ACTIONS(343),
    [sym_variable] = ACTIONS(341),
    [sym_comment] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
  },
  [29] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE_SEMI] = ACTIONS(345),
    [anon_sym_RBRACE_COMMA] = ACTIONS(345),
    [aux_sym_future_token1] = ACTIONS(345),
    [aux_sym_casting_token1] = ACTIONS(345),
    [aux_sym_property_token1] = ACTIONS(347),
    [aux_sym_identifier_token1] = ACTIONS(347),
    [aux_sym_duration_token1] = ACTIONS(347),
    [aux_sym_constant_token1] = ACTIONS(345),
    [aux_sym_number_token1] = ACTIONS(347),
    [aux_sym_record_token1] = ACTIONS(345),
    [aux_sym_record_token2] = ACTIONS(345),
    [anon_sym_USE] = ACTIONS(347),
    [anon_sym_NS] = ACTIONS(347),
    [anon_sym_DB] = ACTIONS(347),
    [anon_sym_LET] = ACTIONS(347),
    [anon_sym_BEGIN] = ACTIONS(347),
    [anon_sym_TRANSACTION] = ACTIONS(347),
    [anon_sym_CANCEL] = ACTIONS(347),
    [anon_sym_COMMIT] = ACTIONS(347),
    [anon_sym_IF] = ACTIONS(347),
    [anon_sym_ELSE] = ACTIONS(347),
    [anon_sym_THEN] = ACTIONS(347),
    [anon_sym_END] = ACTIONS(347),
    [anon_sym_SELECT] = ACTIONS(347),
    [anon_sym_FROM] = ACTIONS(347),
    [anon_sym_WHERE] = ACTIONS(347),
    [anon_sym_SPLIT] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_GROUP] = ACTIONS(347),
    [anon_sym_BY] = ACTIONS(347),
    [anon_sym_ORDER] = ACTIONS(347),
    [anon_sym_COLLATE] = ACTIONS(347),
    [anon_sym_NUMERIC] = ACTIONS(347),
    [anon_sym_ASC] = ACTIONS(347),
    [anon_sym_DESC] = ACTIONS(347),
    [anon_sym_LIMIT] = ACTIONS(347),
    [anon_sym_START] = ACTIONS(347),
    [anon_sym_FETCH] = ACTIONS(347),
    [anon_sym_TIMEOUT] = ACTIONS(347),
    [anon_sym_PARALLEL] = ACTIONS(347),
    [anon_sym_INSERT] = ACTIONS(347),
    [anon_sym_IGNORE] = ACTIONS(347),
    [anon_sym_INTO] = ACTIONS(347),
    [anon_sym_VALUES] = ACTIONS(347),
    [anon_sym_ON] = ACTIONS(347),
    [anon_sym_DUPLICATE] = ACTIONS(347),
    [anon_sym_KEY] = ACTIONS(347),
    [anon_sym_UPDATE] = ACTIONS(347),
    [anon_sym_CREATE] = ACTIONS(347),
    [anon_sym_CONTENT] = ACTIONS(347),
    [anon_sym_SET] = ACTIONS(347),
    [anon_sym_RETURN] = ACTIONS(347),
    [anon_sym_BEFORE] = ACTIONS(347),
    [anon_sym_AFTER] = ACTIONS(347),
    [anon_sym_DIFF] = ACTIONS(347),
    [anon_sym_MERGE] = ACTIONS(347),
    [anon_sym_PATCH] = ACTIONS(347),
    [anon_sym_RELATE] = ACTIONS(347),
    [anon_sym_DELETE] = ACTIONS(347),
    [anon_sym_DEFINE] = ACTIONS(347),
    [anon_sym_NAMESPACE] = ACTIONS(347),
    [anon_sym_DATABASE] = ACTIONS(347),
    [anon_sym_USER] = ACTIONS(347),
    [anon_sym_PASSWORD] = ACTIONS(347),
    [anon_sym_PASSHASH] = ACTIONS(347),
    [anon_sym_TOKEN] = ACTIONS(347),
    [anon_sym_SCOPE] = ACTIONS(347),
    [anon_sym_TYPE] = ACTIONS(347),
    [anon_sym_VALUE] = ACTIONS(347),
    [anon_sym_SESSION] = ACTIONS(347),
    [anon_sym_SIGNUP] = ACTIONS(347),
    [anon_sym_SIGNIN] = ACTIONS(347),
    [anon_sym_TABLE] = ACTIONS(347),
    [anon_sym_DROP] = ACTIONS(347),
    [anon_sym_SCHEMAFULL] = ACTIONS(347),
    [anon_sym_SCHEMALESS] = ACTIONS(347),
    [anon_sym_AS] = ACTIONS(347),
    [anon_sym_PERMISSIONS] = ACTIONS(347),
    [anon_sym_FULL] = ACTIONS(347),
    [anon_sym_FOR] = ACTIONS(347),
    [anon_sym_select] = ACTIONS(347),
    [anon_sym_update] = ACTIONS(347),
    [anon_sym_create] = ACTIONS(347),
    [anon_sym_delete] = ACTIONS(347),
    [anon_sym_EVENT] = ACTIONS(347),
    [anon_sym_WHEN] = ACTIONS(347),
    [anon_sym_ASSERT] = ACTIONS(347),
    [anon_sym_INDEX] = ACTIONS(347),
    [anon_sym_FIELD] = ACTIONS(347),
    [anon_sym_FIELDS] = ACTIONS(347),
    [anon_sym_COLUMNS] = ACTIONS(347),
    [anon_sym_UNIQUE] = ACTIONS(347),
    [anon_sym_DEFAULT] = ACTIONS(347),
    [anon_sym_READONLY] = ACTIONS(347),
    [anon_sym_REMOVE] = ACTIONS(347),
    [anon_sym_SLEEP] = ACTIONS(347),
    [anon_sym_INFO] = ACTIONS(347),
    [anon_sym_KV] = ACTIONS(347),
    [anon_sym_TO] = ACTIONS(347),
    [anon_sym_OUT] = ACTIONS(347),
    [anon_sym_IFNOT] = ACTIONS(345),
    [anon_sym_EXISTS] = ACTIONS(347),
    [anon_sym_FUNCTION] = ACTIONS(347),
    [anon_sym_PARAM] = ACTIONS(347),
    [anon_sym_LIVE] = ACTIONS(347),
    [anon_sym_ONLY] = ACTIONS(347),
    [anon_sym_OMIT] = ACTIONS(347),
    [anon_sym_OPTION] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_AND] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_OR] = ACTIONS(347),
    [anon_sym_QMARK_QMARK] = ACTIONS(345),
    [anon_sym_QMARK_COLON] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_IS] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(345),
    [anon_sym_ISNOT] = ACTIONS(345),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [anon_sym_QMARK_EQ] = ACTIONS(345),
    [anon_sym_STAR_EQ] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_BANG_TILDE] = ACTIONS(345),
    [anon_sym_QMARK_TILDE] = ACTIONS(345),
    [anon_sym_STAR_TILDE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_x] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(345),
    [anon_sym_] = ACTIONS(345),
    [anon_sym_STAR_STAR] = ACTIONS(345),
    [anon_sym_IN] = ACTIONS(347),
    [anon_sym_CONTAINS] = ACTIONS(347),
    [anon_sym_2] = ACTIONS(345),
    [anon_sym_CONTAINSNOT] = ACTIONS(347),
    [anon_sym_3] = ACTIONS(345),
    [anon_sym_CONTAINSALL] = ACTIONS(347),
    [anon_sym_4] = ACTIONS(345),
    [anon_sym_CONTAINSANY] = ACTIONS(347),
    [anon_sym_5] = ACTIONS(345),
    [anon_sym_CONTAINSNONE] = ACTIONS(347),
    [anon_sym_6] = ACTIONS(345),
    [anon_sym_INSIDE] = ACTIONS(347),
    [anon_sym_7] = ACTIONS(345),
    [anon_sym_NOTINSIDE] = ACTIONS(347),
    [anon_sym_NOTIN] = ACTIONS(345),
    [anon_sym_8] = ACTIONS(345),
    [anon_sym_ALLINSIDE] = ACTIONS(347),
    [anon_sym_9] = ACTIONS(345),
    [anon_sym_ANYINSIDE] = ACTIONS(347),
    [anon_sym_10] = ACTIONS(345),
    [anon_sym_NONEINSIDE] = ACTIONS(347),
    [anon_sym_11] = ACTIONS(345),
    [anon_sym_OUTSIDE] = ACTIONS(347),
    [anon_sym_INTERSECTS] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_DASH_GT] = ACTIONS(345),
    [anon_sym_LT_DASH] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [aux_sym_function_token1] = ACTIONS(345),
    [aux_sym_function_token2] = ACTIONS(345),
    [aux_sym_function_token3] = ACTIONS(345),
    [anon_sym_count] = ACTIONS(347),
    [aux_sym_function_token4] = ACTIONS(345),
    [aux_sym_function_token5] = ACTIONS(345),
    [aux_sym_function_token6] = ACTIONS(345),
    [aux_sym_function_token7] = ACTIONS(345),
    [aux_sym_function_token8] = ACTIONS(345),
    [aux_sym_function_token9] = ACTIONS(345),
    [aux_sym_function_token10] = ACTIONS(345),
    [aux_sym_function_token11] = ACTIONS(347),
    [aux_sym_function_token12] = ACTIONS(345),
    [aux_sym_function_token13] = ACTIONS(347),
    [aux_sym_function_token14] = ACTIONS(345),
    [aux_sym_function_token15] = ACTIONS(345),
    [aux_sym_function_token16] = ACTIONS(345),
    [aux_sym_function_token17] = ACTIONS(347),
    [anon_sym_any] = ACTIONS(347),
    [anon_sym_array] = ACTIONS(347),
    [anon_sym_bool] = ACTIONS(347),
    [anon_sym_datetime] = ACTIONS(347),
    [anon_sym_decimal] = ACTIONS(347),
    [anon_sym_duration] = ACTIONS(347),
    [anon_sym_float] = ACTIONS(347),
    [anon_sym_int] = ACTIONS(347),
    [anon_sym_number] = ACTIONS(347),
    [anon_sym_object] = ACTIONS(347),
    [anon_sym_string] = ACTIONS(347),
    [anon_sym_record] = ACTIONS(347),
    [anon_sym_option] = ACTIONS(347),
    [anon_sym_geometry] = ACTIONS(347),
    [anon_sym_EDDSA] = ACTIONS(347),
    [anon_sym_ES256] = ACTIONS(347),
    [anon_sym_ES384] = ACTIONS(347),
    [anon_sym_ES512] = ACTIONS(347),
    [anon_sym_HS256] = ACTIONS(347),
    [anon_sym_HS384] = ACTIONS(347),
    [anon_sym_HS512] = ACTIONS(347),
    [anon_sym_PS256] = ACTIONS(347),
    [anon_sym_PS384] = ACTIONS(347),
    [anon_sym_PS512] = ACTIONS(347),
    [anon_sym_RS256] = ACTIONS(347),
    [anon_sym_RS384] = ACTIONS(347),
    [anon_sym_RS512] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_TRUE] = ACTIONS(347),
    [anon_sym_FALSE] = ACTIONS(347),
    [anon_sym_null] = ACTIONS(347),
    [anon_sym_NULL] = ACTIONS(347),
    [anon_sym_none] = ACTIONS(347),
    [anon_sym_NONE] = ACTIONS(347),
    [sym_variable] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(345),
    [aux_sym_future_token1] = ACTIONS(345),
    [aux_sym_casting_token1] = ACTIONS(345),
    [aux_sym_property_token1] = ACTIONS(347),
    [aux_sym_identifier_token1] = ACTIONS(347),
    [aux_sym_duration_token1] = ACTIONS(347),
    [aux_sym_constant_token1] = ACTIONS(345),
    [aux_sym_number_token1] = ACTIONS(347),
    [aux_sym_record_token1] = ACTIONS(345),
    [aux_sym_record_token2] = ACTIONS(345),
    [anon_sym_USE] = ACTIONS(347),
    [anon_sym_NS] = ACTIONS(347),
    [anon_sym_DB] = ACTIONS(347),
    [anon_sym_LET] = ACTIONS(347),
    [anon_sym_BEGIN] = ACTIONS(347),
    [anon_sym_TRANSACTION] = ACTIONS(347),
    [anon_sym_CANCEL] = ACTIONS(347),
    [anon_sym_COMMIT] = ACTIONS(347),
    [anon_sym_IF] = ACTIONS(347),
    [anon_sym_ELSE] = ACTIONS(347),
    [anon_sym_THEN] = ACTIONS(347),
    [anon_sym_END] = ACTIONS(347),
    [anon_sym_SELECT] = ACTIONS(347),
    [anon_sym_FROM] = ACTIONS(347),
    [anon_sym_WHERE] = ACTIONS(347),
    [anon_sym_SPLIT] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_GROUP] = ACTIONS(347),
    [anon_sym_BY] = ACTIONS(347),
    [anon_sym_ORDER] = ACTIONS(347),
    [anon_sym_COLLATE] = ACTIONS(347),
    [anon_sym_NUMERIC] = ACTIONS(347),
    [anon_sym_ASC] = ACTIONS(347),
    [anon_sym_DESC] = ACTIONS(347),
    [anon_sym_LIMIT] = ACTIONS(347),
    [anon_sym_START] = ACTIONS(347),
    [anon_sym_FETCH] = ACTIONS(347),
    [anon_sym_TIMEOUT] = ACTIONS(347),
    [anon_sym_PARALLEL] = ACTIONS(347),
    [anon_sym_INSERT] = ACTIONS(347),
    [anon_sym_IGNORE] = ACTIONS(347),
    [anon_sym_INTO] = ACTIONS(347),
    [anon_sym_VALUES] = ACTIONS(347),
    [anon_sym_ON] = ACTIONS(347),
    [anon_sym_DUPLICATE] = ACTIONS(347),
    [anon_sym_KEY] = ACTIONS(347),
    [anon_sym_UPDATE] = ACTIONS(347),
    [anon_sym_CREATE] = ACTIONS(347),
    [anon_sym_CONTENT] = ACTIONS(347),
    [anon_sym_SET] = ACTIONS(347),
    [anon_sym_RETURN] = ACTIONS(347),
    [anon_sym_BEFORE] = ACTIONS(347),
    [anon_sym_AFTER] = ACTIONS(347),
    [anon_sym_DIFF] = ACTIONS(347),
    [anon_sym_MERGE] = ACTIONS(347),
    [anon_sym_PATCH] = ACTIONS(347),
    [anon_sym_RELATE] = ACTIONS(347),
    [anon_sym_DELETE] = ACTIONS(347),
    [anon_sym_DEFINE] = ACTIONS(347),
    [anon_sym_NAMESPACE] = ACTIONS(347),
    [anon_sym_DATABASE] = ACTIONS(347),
    [anon_sym_USER] = ACTIONS(347),
    [anon_sym_PASSWORD] = ACTIONS(347),
    [anon_sym_PASSHASH] = ACTIONS(347),
    [anon_sym_TOKEN] = ACTIONS(347),
    [anon_sym_SCOPE] = ACTIONS(347),
    [anon_sym_TYPE] = ACTIONS(347),
    [anon_sym_VALUE] = ACTIONS(347),
    [anon_sym_SESSION] = ACTIONS(347),
    [anon_sym_SIGNUP] = ACTIONS(347),
    [anon_sym_SIGNIN] = ACTIONS(347),
    [anon_sym_TABLE] = ACTIONS(347),
    [anon_sym_DROP] = ACTIONS(347),
    [anon_sym_SCHEMAFULL] = ACTIONS(347),
    [anon_sym_SCHEMALESS] = ACTIONS(347),
    [anon_sym_AS] = ACTIONS(347),
    [anon_sym_PERMISSIONS] = ACTIONS(347),
    [anon_sym_FULL] = ACTIONS(347),
    [anon_sym_FOR] = ACTIONS(347),
    [anon_sym_select] = ACTIONS(347),
    [anon_sym_update] = ACTIONS(347),
    [anon_sym_create] = ACTIONS(347),
    [anon_sym_delete] = ACTIONS(347),
    [anon_sym_EVENT] = ACTIONS(347),
    [anon_sym_WHEN] = ACTIONS(347),
    [anon_sym_ASSERT] = ACTIONS(347),
    [anon_sym_INDEX] = ACTIONS(347),
    [anon_sym_FIELD] = ACTIONS(347),
    [anon_sym_FIELDS] = ACTIONS(347),
    [anon_sym_COLUMNS] = ACTIONS(347),
    [anon_sym_UNIQUE] = ACTIONS(347),
    [anon_sym_DEFAULT] = ACTIONS(347),
    [anon_sym_READONLY] = ACTIONS(347),
    [anon_sym_REMOVE] = ACTIONS(347),
    [anon_sym_SLEEP] = ACTIONS(347),
    [anon_sym_INFO] = ACTIONS(347),
    [anon_sym_KV] = ACTIONS(347),
    [anon_sym_TO] = ACTIONS(347),
    [anon_sym_OUT] = ACTIONS(347),
    [anon_sym_IFNOT] = ACTIONS(345),
    [anon_sym_EXISTS] = ACTIONS(347),
    [anon_sym_FUNCTION] = ACTIONS(347),
    [anon_sym_PARAM] = ACTIONS(347),
    [anon_sym_LIVE] = ACTIONS(347),
    [anon_sym_ONLY] = ACTIONS(347),
    [anon_sym_OMIT] = ACTIONS(347),
    [anon_sym_OPTION] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_AND] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_OR] = ACTIONS(347),
    [anon_sym_QMARK_QMARK] = ACTIONS(345),
    [anon_sym_QMARK_COLON] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_IS] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(345),
    [anon_sym_ISNOT] = ACTIONS(345),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [anon_sym_QMARK_EQ] = ACTIONS(345),
    [anon_sym_STAR_EQ] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_BANG_TILDE] = ACTIONS(345),
    [anon_sym_QMARK_TILDE] = ACTIONS(345),
    [anon_sym_STAR_TILDE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(345),
    [anon_sym_PLUS] = ACTIONS(345),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_x] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_] = ACTIONS(345),
    [anon_sym_STAR_STAR] = ACTIONS(345),
    [anon_sym_IN] = ACTIONS(347),
    [anon_sym_CONTAINS] = ACTIONS(347),
    [anon_sym_2] = ACTIONS(345),
    [anon_sym_CONTAINSNOT] = ACTIONS(347),
    [anon_sym_3] = ACTIONS(345),
    [anon_sym_CONTAINSALL] = ACTIONS(347),
    [anon_sym_4] = ACTIONS(345),
    [anon_sym_CONTAINSANY] = ACTIONS(347),
    [anon_sym_5] = ACTIONS(345),
    [anon_sym_CONTAINSNONE] = ACTIONS(347),
    [anon_sym_6] = ACTIONS(345),
    [anon_sym_INSIDE] = ACTIONS(347),
    [anon_sym_7] = ACTIONS(345),
    [anon_sym_NOTINSIDE] = ACTIONS(347),
    [anon_sym_NOTIN] = ACTIONS(345),
    [anon_sym_8] = ACTIONS(345),
    [anon_sym_ALLINSIDE] = ACTIONS(347),
    [anon_sym_9] = ACTIONS(345),
    [anon_sym_ANYINSIDE] = ACTIONS(347),
    [anon_sym_10] = ACTIONS(345),
    [anon_sym_NONEINSIDE] = ACTIONS(347),
    [anon_sym_11] = ACTIONS(345),
    [anon_sym_OUTSIDE] = ACTIONS(347),
    [anon_sym_INTERSECTS] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
    [anon_sym_DASH_GT] = ACTIONS(345),
    [anon_sym_LT_DASH] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [aux_sym_function_token1] = ACTIONS(345),
    [aux_sym_function_token2] = ACTIONS(345),
    [aux_sym_function_token3] = ACTIONS(345),
    [anon_sym_count] = ACTIONS(347),
    [aux_sym_function_token4] = ACTIONS(345),
    [aux_sym_function_token5] = ACTIONS(345),
    [aux_sym_function_token6] = ACTIONS(345),
    [aux_sym_function_token7] = ACTIONS(345),
    [aux_sym_function_token8] = ACTIONS(345),
    [aux_sym_function_token9] = ACTIONS(345),
    [aux_sym_function_token10] = ACTIONS(345),
    [aux_sym_function_token11] = ACTIONS(347),
    [aux_sym_function_token12] = ACTIONS(345),
    [aux_sym_function_token13] = ACTIONS(347),
    [aux_sym_function_token14] = ACTIONS(345),
    [aux_sym_function_token15] = ACTIONS(345),
    [aux_sym_function_token16] = ACTIONS(345),
    [aux_sym_function_token17] = ACTIONS(347),
    [anon_sym_any] = ACTIONS(347),
    [anon_sym_array] = ACTIONS(347),
    [anon_sym_bool] = ACTIONS(347),
    [anon_sym_datetime] = ACTIONS(347),
    [anon_sym_decimal] = ACTIONS(347),
    [anon_sym_duration] = ACTIONS(347),
    [anon_sym_float] = ACTIONS(347),
    [anon_sym_int] = ACTIONS(347),
    [anon_sym_number] = ACTIONS(347),
    [anon_sym_object] = ACTIONS(347),
    [anon_sym_string] = ACTIONS(347),
    [anon_sym_record] = ACTIONS(347),
    [anon_sym_option] = ACTIONS(347),
    [anon_sym_geometry] = ACTIONS(347),
    [anon_sym_EDDSA] = ACTIONS(347),
    [anon_sym_ES256] = ACTIONS(347),
    [anon_sym_ES384] = ACTIONS(347),
    [anon_sym_ES512] = ACTIONS(347),
    [anon_sym_HS256] = ACTIONS(347),
    [anon_sym_HS384] = ACTIONS(347),
    [anon_sym_HS512] = ACTIONS(347),
    [anon_sym_PS256] = ACTIONS(347),
    [anon_sym_PS384] = ACTIONS(347),
    [anon_sym_PS512] = ACTIONS(347),
    [anon_sym_RS256] = ACTIONS(347),
    [anon_sym_RS384] = ACTIONS(347),
    [anon_sym_RS512] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [anon_sym_TRUE] = ACTIONS(347),
    [anon_sym_FALSE] = ACTIONS(347),
    [anon_sym_null] = ACTIONS(347),
    [anon_sym_NULL] = ACTIONS(347),
    [anon_sym_none] = ACTIONS(347),
    [anon_sym_NONE] = ACTIONS(347),
    [sym_variable] = ACTIONS(345),
    [sym_comment] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(345),
  },
  [31] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE_SEMI] = ACTIONS(341),
    [anon_sym_RBRACE_COMMA] = ACTIONS(341),
    [aux_sym_future_token1] = ACTIONS(341),
    [aux_sym_casting_token1] = ACTIONS(341),
    [aux_sym_property_token1] = ACTIONS(343),
    [aux_sym_identifier_token1] = ACTIONS(343),
    [aux_sym_duration_token1] = ACTIONS(343),
    [aux_sym_constant_token1] = ACTIONS(341),
    [aux_sym_number_token1] = ACTIONS(343),
    [aux_sym_record_token1] = ACTIONS(341),
    [aux_sym_record_token2] = ACTIONS(341),
    [anon_sym_USE] = ACTIONS(343),
    [anon_sym_NS] = ACTIONS(343),
    [anon_sym_DB] = ACTIONS(343),
    [anon_sym_LET] = ACTIONS(343),
    [anon_sym_BEGIN] = ACTIONS(343),
    [anon_sym_TRANSACTION] = ACTIONS(343),
    [anon_sym_CANCEL] = ACTIONS(343),
    [anon_sym_COMMIT] = ACTIONS(343),
    [anon_sym_IF] = ACTIONS(343),
    [anon_sym_ELSE] = ACTIONS(343),
    [anon_sym_THEN] = ACTIONS(343),
    [anon_sym_END] = ACTIONS(343),
    [anon_sym_SELECT] = ACTIONS(343),
    [anon_sym_FROM] = ACTIONS(343),
    [anon_sym_WHERE] = ACTIONS(343),
    [anon_sym_SPLIT] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_GROUP] = ACTIONS(343),
    [anon_sym_BY] = ACTIONS(343),
    [anon_sym_ORDER] = ACTIONS(343),
    [anon_sym_COLLATE] = ACTIONS(343),
    [anon_sym_NUMERIC] = ACTIONS(343),
    [anon_sym_ASC] = ACTIONS(343),
    [anon_sym_DESC] = ACTIONS(343),
    [anon_sym_LIMIT] = ACTIONS(343),
    [anon_sym_START] = ACTIONS(343),
    [anon_sym_FETCH] = ACTIONS(343),
    [anon_sym_TIMEOUT] = ACTIONS(343),
    [anon_sym_PARALLEL] = ACTIONS(343),
    [anon_sym_INSERT] = ACTIONS(343),
    [anon_sym_IGNORE] = ACTIONS(343),
    [anon_sym_INTO] = ACTIONS(343),
    [anon_sym_VALUES] = ACTIONS(343),
    [anon_sym_ON] = ACTIONS(343),
    [anon_sym_DUPLICATE] = ACTIONS(343),
    [anon_sym_KEY] = ACTIONS(343),
    [anon_sym_UPDATE] = ACTIONS(343),
    [anon_sym_CREATE] = ACTIONS(343),
    [anon_sym_CONTENT] = ACTIONS(343),
    [anon_sym_SET] = ACTIONS(343),
    [anon_sym_RETURN] = ACTIONS(343),
    [anon_sym_BEFORE] = ACTIONS(343),
    [anon_sym_AFTER] = ACTIONS(343),
    [anon_sym_DIFF] = ACTIONS(343),
    [anon_sym_MERGE] = ACTIONS(343),
    [anon_sym_PATCH] = ACTIONS(343),
    [anon_sym_RELATE] = ACTIONS(343),
    [anon_sym_DELETE] = ACTIONS(343),
    [anon_sym_DEFINE] = ACTIONS(343),
    [anon_sym_NAMESPACE] = ACTIONS(343),
    [anon_sym_DATABASE] = ACTIONS(343),
    [anon_sym_USER] = ACTIONS(343),
    [anon_sym_PASSWORD] = ACTIONS(343),
    [anon_sym_PASSHASH] = ACTIONS(343),
    [anon_sym_TOKEN] = ACTIONS(343),
    [anon_sym_SCOPE] = ACTIONS(343),
    [anon_sym_TYPE] = ACTIONS(343),
    [anon_sym_VALUE] = ACTIONS(343),
    [anon_sym_SESSION] = ACTIONS(343),
    [anon_sym_SIGNUP] = ACTIONS(343),
    [anon_sym_SIGNIN] = ACTIONS(343),
    [anon_sym_TABLE] = ACTIONS(343),
    [anon_sym_DROP] = ACTIONS(343),
    [anon_sym_SCHEMAFULL] = ACTIONS(343),
    [anon_sym_SCHEMALESS] = ACTIONS(343),
    [anon_sym_AS] = ACTIONS(343),
    [anon_sym_PERMISSIONS] = ACTIONS(343),
    [anon_sym_FULL] = ACTIONS(343),
    [anon_sym_FOR] = ACTIONS(343),
    [anon_sym_select] = ACTIONS(343),
    [anon_sym_update] = ACTIONS(343),
    [anon_sym_create] = ACTIONS(343),
    [anon_sym_delete] = ACTIONS(343),
    [anon_sym_EVENT] = ACTIONS(343),
    [anon_sym_WHEN] = ACTIONS(343),
    [anon_sym_ASSERT] = ACTIONS(343),
    [anon_sym_INDEX] = ACTIONS(343),
    [anon_sym_FIELD] = ACTIONS(343),
    [anon_sym_FIELDS] = ACTIONS(343),
    [anon_sym_COLUMNS] = ACTIONS(343),
    [anon_sym_UNIQUE] = ACTIONS(343),
    [anon_sym_DEFAULT] = ACTIONS(343),
    [anon_sym_READONLY] = ACTIONS(343),
    [anon_sym_REMOVE] = ACTIONS(343),
    [anon_sym_SLEEP] = ACTIONS(343),
    [anon_sym_INFO] = ACTIONS(343),
    [anon_sym_KV] = ACTIONS(343),
    [anon_sym_TO] = ACTIONS(343),
    [anon_sym_OUT] = ACTIONS(343),
    [anon_sym_IFNOT] = ACTIONS(341),
    [anon_sym_EXISTS] = ACTIONS(343),
    [anon_sym_FUNCTION] = ACTIONS(343),
    [anon_sym_PARAM] = ACTIONS(343),
    [anon_sym_LIVE] = ACTIONS(343),
    [anon_sym_ONLY] = ACTIONS(343),
    [anon_sym_OMIT] = ACTIONS(343),
    [anon_sym_OPTION] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_AND] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_OR] = ACTIONS(343),
    [anon_sym_QMARK_QMARK] = ACTIONS(341),
    [anon_sym_QMARK_COLON] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_IS] = ACTIONS(343),
    [anon_sym_BANG_EQ] = ACTIONS(341),
    [anon_sym_ISNOT] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(341),
    [anon_sym_QMARK_EQ] = ACTIONS(341),
    [anon_sym_STAR_EQ] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_BANG_TILDE] = ACTIONS(341),
    [anon_sym_QMARK_TILDE] = ACTIONS(341),
    [anon_sym_STAR_TILDE] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_LT_EQ] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_EQ] = ACTIONS(341),
    [anon_sym_PLUS] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_x] = ACTIONS(343),
    [anon_sym_SLASH] = ACTIONS(341),
    [anon_sym_] = ACTIONS(341),
    [anon_sym_STAR_STAR] = ACTIONS(341),
    [anon_sym_IN] = ACTIONS(343),
    [anon_sym_CONTAINS] = ACTIONS(343),
    [anon_sym_2] = ACTIONS(341),
    [anon_sym_CONTAINSNOT] = ACTIONS(343),
    [anon_sym_3] = ACTIONS(341),
    [anon_sym_CONTAINSALL] = ACTIONS(343),
    [anon_sym_4] = ACTIONS(341),
    [anon_sym_CONTAINSANY] = ACTIONS(343),
    [anon_sym_5] = ACTIONS(341),
    [anon_sym_CONTAINSNONE] = ACTIONS(343),
    [anon_sym_6] = ACTIONS(341),
    [anon_sym_INSIDE] = ACTIONS(343),
    [anon_sym_7] = ACTIONS(341),
    [anon_sym_NOTINSIDE] = ACTIONS(343),
    [anon_sym_NOTIN] = ACTIONS(341),
    [anon_sym_8] = ACTIONS(341),
    [anon_sym_ALLINSIDE] = ACTIONS(343),
    [anon_sym_9] = ACTIONS(341),
    [anon_sym_ANYINSIDE] = ACTIONS(343),
    [anon_sym_10] = ACTIONS(341),
    [anon_sym_NONEINSIDE] = ACTIONS(343),
    [anon_sym_11] = ACTIONS(341),
    [anon_sym_OUTSIDE] = ACTIONS(343),
    [anon_sym_INTERSECTS] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_DASH_GT] = ACTIONS(341),
    [anon_sym_LT_DASH] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [aux_sym_function_token1] = ACTIONS(341),
    [aux_sym_function_token2] = ACTIONS(341),
    [aux_sym_function_token3] = ACTIONS(341),
    [anon_sym_count] = ACTIONS(343),
    [aux_sym_function_token4] = ACTIONS(341),
    [aux_sym_function_token5] = ACTIONS(341),
    [aux_sym_function_token6] = ACTIONS(341),
    [aux_sym_function_token7] = ACTIONS(341),
    [aux_sym_function_token8] = ACTIONS(341),
    [aux_sym_function_token9] = ACTIONS(341),
    [aux_sym_function_token10] = ACTIONS(341),
    [aux_sym_function_token11] = ACTIONS(343),
    [aux_sym_function_token12] = ACTIONS(341),
    [aux_sym_function_token13] = ACTIONS(343),
    [aux_sym_function_token14] = ACTIONS(341),
    [aux_sym_function_token15] = ACTIONS(341),
    [aux_sym_function_token16] = ACTIONS(341),
    [aux_sym_function_token17] = ACTIONS(343),
    [anon_sym_any] = ACTIONS(343),
    [anon_sym_array] = ACTIONS(343),
    [anon_sym_bool] = ACTIONS(343),
    [anon_sym_datetime] = ACTIONS(343),
    [anon_sym_decimal] = ACTIONS(343),
    [anon_sym_duration] = ACTIONS(343),
    [anon_sym_float] = ACTIONS(343),
    [anon_sym_int] = ACTIONS(343),
    [anon_sym_number] = ACTIONS(343),
    [anon_sym_object] = ACTIONS(343),
    [anon_sym_string] = ACTIONS(343),
    [anon_sym_record] = ACTIONS(343),
    [anon_sym_option] = ACTIONS(343),
    [anon_sym_geometry] = ACTIONS(343),
    [anon_sym_EDDSA] = ACTIONS(343),
    [anon_sym_ES256] = ACTIONS(343),
    [anon_sym_ES384] = ACTIONS(343),
    [anon_sym_ES512] = ACTIONS(343),
    [anon_sym_HS256] = ACTIONS(343),
    [anon_sym_HS384] = ACTIONS(343),
    [anon_sym_HS512] = ACTIONS(343),
    [anon_sym_PS256] = ACTIONS(343),
    [anon_sym_PS384] = ACTIONS(343),
    [anon_sym_PS512] = ACTIONS(343),
    [anon_sym_RS256] = ACTIONS(343),
    [anon_sym_RS384] = ACTIONS(343),
    [anon_sym_RS512] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_TRUE] = ACTIONS(343),
    [anon_sym_FALSE] = ACTIONS(343),
    [anon_sym_null] = ACTIONS(343),
    [anon_sym_NULL] = ACTIONS(343),
    [anon_sym_none] = ACTIONS(343),
    [anon_sym_NONE] = ACTIONS(343),
    [sym_variable] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
  },
  [32] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE_SEMI] = ACTIONS(325),
    [anon_sym_RBRACE_COMMA] = ACTIONS(325),
    [aux_sym_future_token1] = ACTIONS(325),
    [aux_sym_casting_token1] = ACTIONS(325),
    [aux_sym_property_token1] = ACTIONS(327),
    [aux_sym_identifier_token1] = ACTIONS(327),
    [aux_sym_duration_token1] = ACTIONS(327),
    [aux_sym_constant_token1] = ACTIONS(325),
    [aux_sym_number_token1] = ACTIONS(327),
    [aux_sym_record_token1] = ACTIONS(325),
    [aux_sym_record_token2] = ACTIONS(325),
    [anon_sym_USE] = ACTIONS(327),
    [anon_sym_NS] = ACTIONS(327),
    [anon_sym_DB] = ACTIONS(327),
    [anon_sym_LET] = ACTIONS(327),
    [anon_sym_BEGIN] = ACTIONS(327),
    [anon_sym_TRANSACTION] = ACTIONS(327),
    [anon_sym_CANCEL] = ACTIONS(327),
    [anon_sym_COMMIT] = ACTIONS(327),
    [anon_sym_IF] = ACTIONS(327),
    [anon_sym_ELSE] = ACTIONS(327),
    [anon_sym_THEN] = ACTIONS(327),
    [anon_sym_END] = ACTIONS(327),
    [anon_sym_SELECT] = ACTIONS(327),
    [anon_sym_FROM] = ACTIONS(327),
    [anon_sym_WHERE] = ACTIONS(327),
    [anon_sym_SPLIT] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_GROUP] = ACTIONS(327),
    [anon_sym_BY] = ACTIONS(327),
    [anon_sym_ORDER] = ACTIONS(327),
    [anon_sym_COLLATE] = ACTIONS(327),
    [anon_sym_NUMERIC] = ACTIONS(327),
    [anon_sym_ASC] = ACTIONS(327),
    [anon_sym_DESC] = ACTIONS(327),
    [anon_sym_LIMIT] = ACTIONS(327),
    [anon_sym_START] = ACTIONS(327),
    [anon_sym_FETCH] = ACTIONS(327),
    [anon_sym_TIMEOUT] = ACTIONS(327),
    [anon_sym_PARALLEL] = ACTIONS(327),
    [anon_sym_INSERT] = ACTIONS(327),
    [anon_sym_IGNORE] = ACTIONS(327),
    [anon_sym_INTO] = ACTIONS(327),
    [anon_sym_VALUES] = ACTIONS(327),
    [anon_sym_ON] = ACTIONS(327),
    [anon_sym_DUPLICATE] = ACTIONS(327),
    [anon_sym_KEY] = ACTIONS(327),
    [anon_sym_UPDATE] = ACTIONS(327),
    [anon_sym_CREATE] = ACTIONS(327),
    [anon_sym_CONTENT] = ACTIONS(327),
    [anon_sym_SET] = ACTIONS(327),
    [anon_sym_RETURN] = ACTIONS(327),
    [anon_sym_BEFORE] = ACTIONS(327),
    [anon_sym_AFTER] = ACTIONS(327),
    [anon_sym_DIFF] = ACTIONS(327),
    [anon_sym_MERGE] = ACTIONS(327),
    [anon_sym_PATCH] = ACTIONS(327),
    [anon_sym_RELATE] = ACTIONS(327),
    [anon_sym_DELETE] = ACTIONS(327),
    [anon_sym_DEFINE] = ACTIONS(327),
    [anon_sym_NAMESPACE] = ACTIONS(327),
    [anon_sym_DATABASE] = ACTIONS(327),
    [anon_sym_USER] = ACTIONS(327),
    [anon_sym_PASSWORD] = ACTIONS(327),
    [anon_sym_PASSHASH] = ACTIONS(327),
    [anon_sym_TOKEN] = ACTIONS(327),
    [anon_sym_SCOPE] = ACTIONS(327),
    [anon_sym_TYPE] = ACTIONS(327),
    [anon_sym_VALUE] = ACTIONS(327),
    [anon_sym_SESSION] = ACTIONS(327),
    [anon_sym_SIGNUP] = ACTIONS(327),
    [anon_sym_SIGNIN] = ACTIONS(327),
    [anon_sym_TABLE] = ACTIONS(327),
    [anon_sym_DROP] = ACTIONS(327),
    [anon_sym_SCHEMAFULL] = ACTIONS(327),
    [anon_sym_SCHEMALESS] = ACTIONS(327),
    [anon_sym_AS] = ACTIONS(327),
    [anon_sym_PERMISSIONS] = ACTIONS(327),
    [anon_sym_FULL] = ACTIONS(327),
    [anon_sym_FOR] = ACTIONS(327),
    [anon_sym_select] = ACTIONS(327),
    [anon_sym_update] = ACTIONS(327),
    [anon_sym_create] = ACTIONS(327),
    [anon_sym_delete] = ACTIONS(327),
    [anon_sym_EVENT] = ACTIONS(327),
    [anon_sym_WHEN] = ACTIONS(327),
    [anon_sym_ASSERT] = ACTIONS(327),
    [anon_sym_INDEX] = ACTIONS(327),
    [anon_sym_FIELD] = ACTIONS(327),
    [anon_sym_FIELDS] = ACTIONS(327),
    [anon_sym_COLUMNS] = ACTIONS(327),
    [anon_sym_UNIQUE] = ACTIONS(327),
    [anon_sym_DEFAULT] = ACTIONS(327),
    [anon_sym_READONLY] = ACTIONS(327),
    [anon_sym_REMOVE] = ACTIONS(327),
    [anon_sym_SLEEP] = ACTIONS(327),
    [anon_sym_INFO] = ACTIONS(327),
    [anon_sym_KV] = ACTIONS(327),
    [anon_sym_TO] = ACTIONS(327),
    [anon_sym_OUT] = ACTIONS(327),
    [anon_sym_IFNOT] = ACTIONS(325),
    [anon_sym_EXISTS] = ACTIONS(327),
    [anon_sym_FUNCTION] = ACTIONS(327),
    [anon_sym_PARAM] = ACTIONS(327),
    [anon_sym_LIVE] = ACTIONS(327),
    [anon_sym_ONLY] = ACTIONS(327),
    [anon_sym_OMIT] = ACTIONS(327),
    [anon_sym_OPTION] = ACTIONS(327),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_AND] = ACTIONS(327),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_OR] = ACTIONS(327),
    [anon_sym_QMARK_QMARK] = ACTIONS(325),
    [anon_sym_QMARK_COLON] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_IS] = ACTIONS(327),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_ISNOT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_QMARK_EQ] = ACTIONS(325),
    [anon_sym_STAR_EQ] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_BANG_TILDE] = ACTIONS(325),
    [anon_sym_QMARK_TILDE] = ACTIONS(325),
    [anon_sym_STAR_TILDE] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_x] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_] = ACTIONS(325),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [anon_sym_IN] = ACTIONS(327),
    [anon_sym_CONTAINS] = ACTIONS(327),
    [anon_sym_2] = ACTIONS(325),
    [anon_sym_CONTAINSNOT] = ACTIONS(327),
    [anon_sym_3] = ACTIONS(325),
    [anon_sym_CONTAINSALL] = ACTIONS(327),
    [anon_sym_4] = ACTIONS(325),
    [anon_sym_CONTAINSANY] = ACTIONS(327),
    [anon_sym_5] = ACTIONS(325),
    [anon_sym_CONTAINSNONE] = ACTIONS(327),
    [anon_sym_6] = ACTIONS(325),
    [anon_sym_INSIDE] = ACTIONS(327),
    [anon_sym_7] = ACTIONS(325),
    [anon_sym_NOTINSIDE] = ACTIONS(327),
    [anon_sym_NOTIN] = ACTIONS(325),
    [anon_sym_8] = ACTIONS(325),
    [anon_sym_ALLINSIDE] = ACTIONS(327),
    [anon_sym_9] = ACTIONS(325),
    [anon_sym_ANYINSIDE] = ACTIONS(327),
    [anon_sym_10] = ACTIONS(325),
    [anon_sym_NONEINSIDE] = ACTIONS(327),
    [anon_sym_11] = ACTIONS(325),
    [anon_sym_OUTSIDE] = ACTIONS(327),
    [anon_sym_INTERSECTS] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_DASH_GT] = ACTIONS(325),
    [anon_sym_LT_DASH] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [aux_sym_function_token1] = ACTIONS(325),
    [aux_sym_function_token2] = ACTIONS(325),
    [aux_sym_function_token3] = ACTIONS(325),
    [anon_sym_count] = ACTIONS(327),
    [aux_sym_function_token4] = ACTIONS(325),
    [aux_sym_function_token5] = ACTIONS(325),
    [aux_sym_function_token6] = ACTIONS(325),
    [aux_sym_function_token7] = ACTIONS(325),
    [aux_sym_function_token8] = ACTIONS(325),
    [aux_sym_function_token9] = ACTIONS(325),
    [aux_sym_function_token10] = ACTIONS(325),
    [aux_sym_function_token11] = ACTIONS(327),
    [aux_sym_function_token12] = ACTIONS(325),
    [aux_sym_function_token13] = ACTIONS(327),
    [aux_sym_function_token14] = ACTIONS(325),
    [aux_sym_function_token15] = ACTIONS(325),
    [aux_sym_function_token16] = ACTIONS(325),
    [aux_sym_function_token17] = ACTIONS(327),
    [anon_sym_any] = ACTIONS(327),
    [anon_sym_array] = ACTIONS(327),
    [anon_sym_bool] = ACTIONS(327),
    [anon_sym_datetime] = ACTIONS(327),
    [anon_sym_decimal] = ACTIONS(327),
    [anon_sym_duration] = ACTIONS(327),
    [anon_sym_float] = ACTIONS(327),
    [anon_sym_int] = ACTIONS(327),
    [anon_sym_number] = ACTIONS(327),
    [anon_sym_object] = ACTIONS(327),
    [anon_sym_string] = ACTIONS(327),
    [anon_sym_record] = ACTIONS(327),
    [anon_sym_option] = ACTIONS(327),
    [anon_sym_geometry] = ACTIONS(327),
    [anon_sym_EDDSA] = ACTIONS(327),
    [anon_sym_ES256] = ACTIONS(327),
    [anon_sym_ES384] = ACTIONS(327),
    [anon_sym_ES512] = ACTIONS(327),
    [anon_sym_HS256] = ACTIONS(327),
    [anon_sym_HS384] = ACTIONS(327),
    [anon_sym_HS512] = ACTIONS(327),
    [anon_sym_PS256] = ACTIONS(327),
    [anon_sym_PS384] = ACTIONS(327),
    [anon_sym_PS512] = ACTIONS(327),
    [anon_sym_RS256] = ACTIONS(327),
    [anon_sym_RS384] = ACTIONS(327),
    [anon_sym_RS512] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(327),
    [anon_sym_TRUE] = ACTIONS(327),
    [anon_sym_FALSE] = ACTIONS(327),
    [anon_sym_null] = ACTIONS(327),
    [anon_sym_NULL] = ACTIONS(327),
    [anon_sym_none] = ACTIONS(327),
    [anon_sym_NONE] = ACTIONS(327),
    [sym_variable] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
  },
  [33] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE_SEMI] = ACTIONS(321),
    [anon_sym_RBRACE_COMMA] = ACTIONS(321),
    [aux_sym_future_token1] = ACTIONS(321),
    [aux_sym_casting_token1] = ACTIONS(321),
    [aux_sym_property_token1] = ACTIONS(323),
    [aux_sym_identifier_token1] = ACTIONS(323),
    [aux_sym_duration_token1] = ACTIONS(323),
    [aux_sym_constant_token1] = ACTIONS(321),
    [aux_sym_number_token1] = ACTIONS(323),
    [aux_sym_record_token1] = ACTIONS(321),
    [aux_sym_record_token2] = ACTIONS(321),
    [anon_sym_USE] = ACTIONS(323),
    [anon_sym_NS] = ACTIONS(323),
    [anon_sym_DB] = ACTIONS(323),
    [anon_sym_LET] = ACTIONS(323),
    [anon_sym_BEGIN] = ACTIONS(323),
    [anon_sym_TRANSACTION] = ACTIONS(323),
    [anon_sym_CANCEL] = ACTIONS(323),
    [anon_sym_COMMIT] = ACTIONS(323),
    [anon_sym_IF] = ACTIONS(323),
    [anon_sym_ELSE] = ACTIONS(323),
    [anon_sym_THEN] = ACTIONS(323),
    [anon_sym_END] = ACTIONS(323),
    [anon_sym_SELECT] = ACTIONS(323),
    [anon_sym_FROM] = ACTIONS(323),
    [anon_sym_WHERE] = ACTIONS(323),
    [anon_sym_SPLIT] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_GROUP] = ACTIONS(323),
    [anon_sym_BY] = ACTIONS(323),
    [anon_sym_ORDER] = ACTIONS(323),
    [anon_sym_COLLATE] = ACTIONS(323),
    [anon_sym_NUMERIC] = ACTIONS(323),
    [anon_sym_ASC] = ACTIONS(323),
    [anon_sym_DESC] = ACTIONS(323),
    [anon_sym_LIMIT] = ACTIONS(323),
    [anon_sym_START] = ACTIONS(323),
    [anon_sym_FETCH] = ACTIONS(323),
    [anon_sym_TIMEOUT] = ACTIONS(323),
    [anon_sym_PARALLEL] = ACTIONS(323),
    [anon_sym_INSERT] = ACTIONS(323),
    [anon_sym_IGNORE] = ACTIONS(323),
    [anon_sym_INTO] = ACTIONS(323),
    [anon_sym_VALUES] = ACTIONS(323),
    [anon_sym_ON] = ACTIONS(323),
    [anon_sym_DUPLICATE] = ACTIONS(323),
    [anon_sym_KEY] = ACTIONS(323),
    [anon_sym_UPDATE] = ACTIONS(323),
    [anon_sym_CREATE] = ACTIONS(323),
    [anon_sym_CONTENT] = ACTIONS(323),
    [anon_sym_SET] = ACTIONS(323),
    [anon_sym_RETURN] = ACTIONS(323),
    [anon_sym_BEFORE] = ACTIONS(323),
    [anon_sym_AFTER] = ACTIONS(323),
    [anon_sym_DIFF] = ACTIONS(323),
    [anon_sym_MERGE] = ACTIONS(323),
    [anon_sym_PATCH] = ACTIONS(323),
    [anon_sym_RELATE] = ACTIONS(323),
    [anon_sym_DELETE] = ACTIONS(323),
    [anon_sym_DEFINE] = ACTIONS(323),
    [anon_sym_NAMESPACE] = ACTIONS(323),
    [anon_sym_DATABASE] = ACTIONS(323),
    [anon_sym_USER] = ACTIONS(323),
    [anon_sym_PASSWORD] = ACTIONS(323),
    [anon_sym_PASSHASH] = ACTIONS(323),
    [anon_sym_TOKEN] = ACTIONS(323),
    [anon_sym_SCOPE] = ACTIONS(323),
    [anon_sym_TYPE] = ACTIONS(323),
    [anon_sym_VALUE] = ACTIONS(323),
    [anon_sym_SESSION] = ACTIONS(323),
    [anon_sym_SIGNUP] = ACTIONS(323),
    [anon_sym_SIGNIN] = ACTIONS(323),
    [anon_sym_TABLE] = ACTIONS(323),
    [anon_sym_DROP] = ACTIONS(323),
    [anon_sym_SCHEMAFULL] = ACTIONS(323),
    [anon_sym_SCHEMALESS] = ACTIONS(323),
    [anon_sym_AS] = ACTIONS(323),
    [anon_sym_PERMISSIONS] = ACTIONS(323),
    [anon_sym_FULL] = ACTIONS(323),
    [anon_sym_FOR] = ACTIONS(323),
    [anon_sym_select] = ACTIONS(323),
    [anon_sym_update] = ACTIONS(323),
    [anon_sym_create] = ACTIONS(323),
    [anon_sym_delete] = ACTIONS(323),
    [anon_sym_EVENT] = ACTIONS(323),
    [anon_sym_WHEN] = ACTIONS(323),
    [anon_sym_ASSERT] = ACTIONS(323),
    [anon_sym_INDEX] = ACTIONS(323),
    [anon_sym_FIELD] = ACTIONS(323),
    [anon_sym_FIELDS] = ACTIONS(323),
    [anon_sym_COLUMNS] = ACTIONS(323),
    [anon_sym_UNIQUE] = ACTIONS(323),
    [anon_sym_DEFAULT] = ACTIONS(323),
    [anon_sym_READONLY] = ACTIONS(323),
    [anon_sym_REMOVE] = ACTIONS(323),
    [anon_sym_SLEEP] = ACTIONS(323),
    [anon_sym_INFO] = ACTIONS(323),
    [anon_sym_KV] = ACTIONS(323),
    [anon_sym_TO] = ACTIONS(323),
    [anon_sym_OUT] = ACTIONS(323),
    [anon_sym_IFNOT] = ACTIONS(321),
    [anon_sym_EXISTS] = ACTIONS(323),
    [anon_sym_FUNCTION] = ACTIONS(323),
    [anon_sym_PARAM] = ACTIONS(323),
    [anon_sym_LIVE] = ACTIONS(323),
    [anon_sym_ONLY] = ACTIONS(323),
    [anon_sym_OMIT] = ACTIONS(323),
    [anon_sym_OPTION] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_AND] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_OR] = ACTIONS(323),
    [anon_sym_QMARK_QMARK] = ACTIONS(321),
    [anon_sym_QMARK_COLON] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_IS] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_ISNOT] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_QMARK_EQ] = ACTIONS(321),
    [anon_sym_STAR_EQ] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_BANG_TILDE] = ACTIONS(321),
    [anon_sym_QMARK_TILDE] = ACTIONS(321),
    [anon_sym_STAR_TILDE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_x] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(321),
    [anon_sym_] = ACTIONS(321),
    [anon_sym_STAR_STAR] = ACTIONS(321),
    [anon_sym_IN] = ACTIONS(323),
    [anon_sym_CONTAINS] = ACTIONS(323),
    [anon_sym_2] = ACTIONS(321),
    [anon_sym_CONTAINSNOT] = ACTIONS(323),
    [anon_sym_3] = ACTIONS(321),
    [anon_sym_CONTAINSALL] = ACTIONS(323),
    [anon_sym_4] = ACTIONS(321),
    [anon_sym_CONTAINSANY] = ACTIONS(323),
    [anon_sym_5] = ACTIONS(321),
    [anon_sym_CONTAINSNONE] = ACTIONS(323),
    [anon_sym_6] = ACTIONS(321),
    [anon_sym_INSIDE] = ACTIONS(323),
    [anon_sym_7] = ACTIONS(321),
    [anon_sym_NOTINSIDE] = ACTIONS(323),
    [anon_sym_NOTIN] = ACTIONS(321),
    [anon_sym_8] = ACTIONS(321),
    [anon_sym_ALLINSIDE] = ACTIONS(323),
    [anon_sym_9] = ACTIONS(321),
    [anon_sym_ANYINSIDE] = ACTIONS(323),
    [anon_sym_10] = ACTIONS(321),
    [anon_sym_NONEINSIDE] = ACTIONS(323),
    [anon_sym_11] = ACTIONS(321),
    [anon_sym_OUTSIDE] = ACTIONS(323),
    [anon_sym_INTERSECTS] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_DASH_GT] = ACTIONS(321),
    [anon_sym_LT_DASH] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [aux_sym_function_token1] = ACTIONS(321),
    [aux_sym_function_token2] = ACTIONS(321),
    [aux_sym_function_token3] = ACTIONS(321),
    [anon_sym_count] = ACTIONS(323),
    [aux_sym_function_token4] = ACTIONS(321),
    [aux_sym_function_token5] = ACTIONS(321),
    [aux_sym_function_token6] = ACTIONS(321),
    [aux_sym_function_token7] = ACTIONS(321),
    [aux_sym_function_token8] = ACTIONS(321),
    [aux_sym_function_token9] = ACTIONS(321),
    [aux_sym_function_token10] = ACTIONS(321),
    [aux_sym_function_token11] = ACTIONS(323),
    [aux_sym_function_token12] = ACTIONS(321),
    [aux_sym_function_token13] = ACTIONS(323),
    [aux_sym_function_token14] = ACTIONS(321),
    [aux_sym_function_token15] = ACTIONS(321),
    [aux_sym_function_token16] = ACTIONS(321),
    [aux_sym_function_token17] = ACTIONS(323),
    [anon_sym_any] = ACTIONS(323),
    [anon_sym_array] = ACTIONS(323),
    [anon_sym_bool] = ACTIONS(323),
    [anon_sym_datetime] = ACTIONS(323),
    [anon_sym_decimal] = ACTIONS(323),
    [anon_sym_duration] = ACTIONS(323),
    [anon_sym_float] = ACTIONS(323),
    [anon_sym_int] = ACTIONS(323),
    [anon_sym_number] = ACTIONS(323),
    [anon_sym_object] = ACTIONS(323),
    [anon_sym_string] = ACTIONS(323),
    [anon_sym_record] = ACTIONS(323),
    [anon_sym_option] = ACTIONS(323),
    [anon_sym_geometry] = ACTIONS(323),
    [anon_sym_EDDSA] = ACTIONS(323),
    [anon_sym_ES256] = ACTIONS(323),
    [anon_sym_ES384] = ACTIONS(323),
    [anon_sym_ES512] = ACTIONS(323),
    [anon_sym_HS256] = ACTIONS(323),
    [anon_sym_HS384] = ACTIONS(323),
    [anon_sym_HS512] = ACTIONS(323),
    [anon_sym_PS256] = ACTIONS(323),
    [anon_sym_PS384] = ACTIONS(323),
    [anon_sym_PS512] = ACTIONS(323),
    [anon_sym_RS256] = ACTIONS(323),
    [anon_sym_RS384] = ACTIONS(323),
    [anon_sym_RS512] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(323),
    [anon_sym_false] = ACTIONS(323),
    [anon_sym_TRUE] = ACTIONS(323),
    [anon_sym_FALSE] = ACTIONS(323),
    [anon_sym_null] = ACTIONS(323),
    [anon_sym_NULL] = ACTIONS(323),
    [anon_sym_none] = ACTIONS(323),
    [anon_sym_NONE] = ACTIONS(323),
    [sym_variable] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
  },
  [34] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE_SEMI] = ACTIONS(317),
    [anon_sym_RBRACE_COMMA] = ACTIONS(317),
    [aux_sym_future_token1] = ACTIONS(317),
    [aux_sym_casting_token1] = ACTIONS(317),
    [aux_sym_property_token1] = ACTIONS(319),
    [aux_sym_identifier_token1] = ACTIONS(319),
    [aux_sym_duration_token1] = ACTIONS(319),
    [aux_sym_constant_token1] = ACTIONS(317),
    [aux_sym_number_token1] = ACTIONS(319),
    [aux_sym_record_token1] = ACTIONS(317),
    [aux_sym_record_token2] = ACTIONS(317),
    [anon_sym_USE] = ACTIONS(319),
    [anon_sym_NS] = ACTIONS(319),
    [anon_sym_DB] = ACTIONS(319),
    [anon_sym_LET] = ACTIONS(319),
    [anon_sym_BEGIN] = ACTIONS(319),
    [anon_sym_TRANSACTION] = ACTIONS(319),
    [anon_sym_CANCEL] = ACTIONS(319),
    [anon_sym_COMMIT] = ACTIONS(319),
    [anon_sym_IF] = ACTIONS(319),
    [anon_sym_ELSE] = ACTIONS(319),
    [anon_sym_THEN] = ACTIONS(319),
    [anon_sym_END] = ACTIONS(319),
    [anon_sym_SELECT] = ACTIONS(319),
    [anon_sym_FROM] = ACTIONS(319),
    [anon_sym_WHERE] = ACTIONS(319),
    [anon_sym_SPLIT] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_GROUP] = ACTIONS(319),
    [anon_sym_BY] = ACTIONS(319),
    [anon_sym_ORDER] = ACTIONS(319),
    [anon_sym_COLLATE] = ACTIONS(319),
    [anon_sym_NUMERIC] = ACTIONS(319),
    [anon_sym_ASC] = ACTIONS(319),
    [anon_sym_DESC] = ACTIONS(319),
    [anon_sym_LIMIT] = ACTIONS(319),
    [anon_sym_START] = ACTIONS(319),
    [anon_sym_FETCH] = ACTIONS(319),
    [anon_sym_TIMEOUT] = ACTIONS(319),
    [anon_sym_PARALLEL] = ACTIONS(319),
    [anon_sym_INSERT] = ACTIONS(319),
    [anon_sym_IGNORE] = ACTIONS(319),
    [anon_sym_INTO] = ACTIONS(319),
    [anon_sym_VALUES] = ACTIONS(319),
    [anon_sym_ON] = ACTIONS(319),
    [anon_sym_DUPLICATE] = ACTIONS(319),
    [anon_sym_KEY] = ACTIONS(319),
    [anon_sym_UPDATE] = ACTIONS(319),
    [anon_sym_CREATE] = ACTIONS(319),
    [anon_sym_CONTENT] = ACTIONS(319),
    [anon_sym_SET] = ACTIONS(319),
    [anon_sym_RETURN] = ACTIONS(319),
    [anon_sym_BEFORE] = ACTIONS(319),
    [anon_sym_AFTER] = ACTIONS(319),
    [anon_sym_DIFF] = ACTIONS(319),
    [anon_sym_MERGE] = ACTIONS(319),
    [anon_sym_PATCH] = ACTIONS(319),
    [anon_sym_RELATE] = ACTIONS(319),
    [anon_sym_DELETE] = ACTIONS(319),
    [anon_sym_DEFINE] = ACTIONS(319),
    [anon_sym_NAMESPACE] = ACTIONS(319),
    [anon_sym_DATABASE] = ACTIONS(319),
    [anon_sym_USER] = ACTIONS(319),
    [anon_sym_PASSWORD] = ACTIONS(319),
    [anon_sym_PASSHASH] = ACTIONS(319),
    [anon_sym_TOKEN] = ACTIONS(319),
    [anon_sym_SCOPE] = ACTIONS(319),
    [anon_sym_TYPE] = ACTIONS(319),
    [anon_sym_VALUE] = ACTIONS(319),
    [anon_sym_SESSION] = ACTIONS(319),
    [anon_sym_SIGNUP] = ACTIONS(319),
    [anon_sym_SIGNIN] = ACTIONS(319),
    [anon_sym_TABLE] = ACTIONS(319),
    [anon_sym_DROP] = ACTIONS(319),
    [anon_sym_SCHEMAFULL] = ACTIONS(319),
    [anon_sym_SCHEMALESS] = ACTIONS(319),
    [anon_sym_AS] = ACTIONS(319),
    [anon_sym_PERMISSIONS] = ACTIONS(319),
    [anon_sym_FULL] = ACTIONS(319),
    [anon_sym_FOR] = ACTIONS(319),
    [anon_sym_select] = ACTIONS(319),
    [anon_sym_update] = ACTIONS(319),
    [anon_sym_create] = ACTIONS(319),
    [anon_sym_delete] = ACTIONS(319),
    [anon_sym_EVENT] = ACTIONS(319),
    [anon_sym_WHEN] = ACTIONS(319),
    [anon_sym_ASSERT] = ACTIONS(319),
    [anon_sym_INDEX] = ACTIONS(319),
    [anon_sym_FIELD] = ACTIONS(319),
    [anon_sym_FIELDS] = ACTIONS(319),
    [anon_sym_COLUMNS] = ACTIONS(319),
    [anon_sym_UNIQUE] = ACTIONS(319),
    [anon_sym_DEFAULT] = ACTIONS(319),
    [anon_sym_READONLY] = ACTIONS(319),
    [anon_sym_REMOVE] = ACTIONS(319),
    [anon_sym_SLEEP] = ACTIONS(319),
    [anon_sym_INFO] = ACTIONS(319),
    [anon_sym_KV] = ACTIONS(319),
    [anon_sym_TO] = ACTIONS(319),
    [anon_sym_OUT] = ACTIONS(319),
    [anon_sym_IFNOT] = ACTIONS(317),
    [anon_sym_EXISTS] = ACTIONS(319),
    [anon_sym_FUNCTION] = ACTIONS(319),
    [anon_sym_PARAM] = ACTIONS(319),
    [anon_sym_LIVE] = ACTIONS(319),
    [anon_sym_ONLY] = ACTIONS(319),
    [anon_sym_OMIT] = ACTIONS(319),
    [anon_sym_OPTION] = ACTIONS(319),
    [anon_sym_AMP_AMP] = ACTIONS(317),
    [anon_sym_AND] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_OR] = ACTIONS(319),
    [anon_sym_QMARK_QMARK] = ACTIONS(317),
    [anon_sym_QMARK_COLON] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_IS] = ACTIONS(319),
    [anon_sym_BANG_EQ] = ACTIONS(317),
    [anon_sym_ISNOT] = ACTIONS(317),
    [anon_sym_EQ_EQ] = ACTIONS(317),
    [anon_sym_QMARK_EQ] = ACTIONS(317),
    [anon_sym_STAR_EQ] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_BANG_TILDE] = ACTIONS(317),
    [anon_sym_QMARK_TILDE] = ACTIONS(317),
    [anon_sym_STAR_TILDE] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_LT_EQ] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_STAR] = ACTIONS(319),
    [anon_sym_x] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(317),
    [anon_sym_] = ACTIONS(317),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [anon_sym_IN] = ACTIONS(319),
    [anon_sym_CONTAINS] = ACTIONS(319),
    [anon_sym_2] = ACTIONS(317),
    [anon_sym_CONTAINSNOT] = ACTIONS(319),
    [anon_sym_3] = ACTIONS(317),
    [anon_sym_CONTAINSALL] = ACTIONS(319),
    [anon_sym_4] = ACTIONS(317),
    [anon_sym_CONTAINSANY] = ACTIONS(319),
    [anon_sym_5] = ACTIONS(317),
    [anon_sym_CONTAINSNONE] = ACTIONS(319),
    [anon_sym_6] = ACTIONS(317),
    [anon_sym_INSIDE] = ACTIONS(319),
    [anon_sym_7] = ACTIONS(317),
    [anon_sym_NOTINSIDE] = ACTIONS(319),
    [anon_sym_NOTIN] = ACTIONS(317),
    [anon_sym_8] = ACTIONS(317),
    [anon_sym_ALLINSIDE] = ACTIONS(319),
    [anon_sym_9] = ACTIONS(317),
    [anon_sym_ANYINSIDE] = ACTIONS(319),
    [anon_sym_10] = ACTIONS(317),
    [anon_sym_NONEINSIDE] = ACTIONS(319),
    [anon_sym_11] = ACTIONS(317),
    [anon_sym_OUTSIDE] = ACTIONS(319),
    [anon_sym_INTERSECTS] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_DASH_GT] = ACTIONS(317),
    [anon_sym_LT_DASH] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [aux_sym_function_token1] = ACTIONS(317),
    [aux_sym_function_token2] = ACTIONS(317),
    [aux_sym_function_token3] = ACTIONS(317),
    [anon_sym_count] = ACTIONS(319),
    [aux_sym_function_token4] = ACTIONS(317),
    [aux_sym_function_token5] = ACTIONS(317),
    [aux_sym_function_token6] = ACTIONS(317),
    [aux_sym_function_token7] = ACTIONS(317),
    [aux_sym_function_token8] = ACTIONS(317),
    [aux_sym_function_token9] = ACTIONS(317),
    [aux_sym_function_token10] = ACTIONS(317),
    [aux_sym_function_token11] = ACTIONS(319),
    [aux_sym_function_token12] = ACTIONS(317),
    [aux_sym_function_token13] = ACTIONS(319),
    [aux_sym_function_token14] = ACTIONS(317),
    [aux_sym_function_token15] = ACTIONS(317),
    [aux_sym_function_token16] = ACTIONS(317),
    [aux_sym_function_token17] = ACTIONS(319),
    [anon_sym_any] = ACTIONS(319),
    [anon_sym_array] = ACTIONS(319),
    [anon_sym_bool] = ACTIONS(319),
    [anon_sym_datetime] = ACTIONS(319),
    [anon_sym_decimal] = ACTIONS(319),
    [anon_sym_duration] = ACTIONS(319),
    [anon_sym_float] = ACTIONS(319),
    [anon_sym_int] = ACTIONS(319),
    [anon_sym_number] = ACTIONS(319),
    [anon_sym_object] = ACTIONS(319),
    [anon_sym_string] = ACTIONS(319),
    [anon_sym_record] = ACTIONS(319),
    [anon_sym_option] = ACTIONS(319),
    [anon_sym_geometry] = ACTIONS(319),
    [anon_sym_EDDSA] = ACTIONS(319),
    [anon_sym_ES256] = ACTIONS(319),
    [anon_sym_ES384] = ACTIONS(319),
    [anon_sym_ES512] = ACTIONS(319),
    [anon_sym_HS256] = ACTIONS(319),
    [anon_sym_HS384] = ACTIONS(319),
    [anon_sym_HS512] = ACTIONS(319),
    [anon_sym_PS256] = ACTIONS(319),
    [anon_sym_PS384] = ACTIONS(319),
    [anon_sym_PS512] = ACTIONS(319),
    [anon_sym_RS256] = ACTIONS(319),
    [anon_sym_RS384] = ACTIONS(319),
    [anon_sym_RS512] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_TRUE] = ACTIONS(319),
    [anon_sym_FALSE] = ACTIONS(319),
    [anon_sym_null] = ACTIONS(319),
    [anon_sym_NULL] = ACTIONS(319),
    [anon_sym_none] = ACTIONS(319),
    [anon_sym_NONE] = ACTIONS(319),
    [sym_variable] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(337),
    [aux_sym_future_token1] = ACTIONS(337),
    [aux_sym_casting_token1] = ACTIONS(337),
    [aux_sym_property_token1] = ACTIONS(339),
    [aux_sym_identifier_token1] = ACTIONS(339),
    [aux_sym_duration_token1] = ACTIONS(339),
    [aux_sym_constant_token1] = ACTIONS(337),
    [aux_sym_number_token1] = ACTIONS(339),
    [aux_sym_record_token1] = ACTIONS(337),
    [aux_sym_record_token2] = ACTIONS(337),
    [anon_sym_USE] = ACTIONS(339),
    [anon_sym_NS] = ACTIONS(339),
    [anon_sym_DB] = ACTIONS(339),
    [anon_sym_LET] = ACTIONS(339),
    [anon_sym_BEGIN] = ACTIONS(339),
    [anon_sym_TRANSACTION] = ACTIONS(339),
    [anon_sym_CANCEL] = ACTIONS(339),
    [anon_sym_COMMIT] = ACTIONS(339),
    [anon_sym_IF] = ACTIONS(339),
    [anon_sym_ELSE] = ACTIONS(339),
    [anon_sym_THEN] = ACTIONS(339),
    [anon_sym_END] = ACTIONS(339),
    [anon_sym_SELECT] = ACTIONS(339),
    [anon_sym_FROM] = ACTIONS(339),
    [anon_sym_WHERE] = ACTIONS(339),
    [anon_sym_SPLIT] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_GROUP] = ACTIONS(339),
    [anon_sym_BY] = ACTIONS(339),
    [anon_sym_ORDER] = ACTIONS(339),
    [anon_sym_COLLATE] = ACTIONS(339),
    [anon_sym_NUMERIC] = ACTIONS(339),
    [anon_sym_ASC] = ACTIONS(339),
    [anon_sym_DESC] = ACTIONS(339),
    [anon_sym_LIMIT] = ACTIONS(339),
    [anon_sym_START] = ACTIONS(339),
    [anon_sym_FETCH] = ACTIONS(339),
    [anon_sym_TIMEOUT] = ACTIONS(339),
    [anon_sym_PARALLEL] = ACTIONS(339),
    [anon_sym_INSERT] = ACTIONS(339),
    [anon_sym_IGNORE] = ACTIONS(339),
    [anon_sym_INTO] = ACTIONS(339),
    [anon_sym_VALUES] = ACTIONS(339),
    [anon_sym_ON] = ACTIONS(339),
    [anon_sym_DUPLICATE] = ACTIONS(339),
    [anon_sym_KEY] = ACTIONS(339),
    [anon_sym_UPDATE] = ACTIONS(339),
    [anon_sym_CREATE] = ACTIONS(339),
    [anon_sym_CONTENT] = ACTIONS(339),
    [anon_sym_SET] = ACTIONS(339),
    [anon_sym_RETURN] = ACTIONS(339),
    [anon_sym_BEFORE] = ACTIONS(339),
    [anon_sym_AFTER] = ACTIONS(339),
    [anon_sym_DIFF] = ACTIONS(339),
    [anon_sym_MERGE] = ACTIONS(339),
    [anon_sym_PATCH] = ACTIONS(339),
    [anon_sym_RELATE] = ACTIONS(339),
    [anon_sym_DELETE] = ACTIONS(339),
    [anon_sym_DEFINE] = ACTIONS(339),
    [anon_sym_NAMESPACE] = ACTIONS(339),
    [anon_sym_DATABASE] = ACTIONS(339),
    [anon_sym_USER] = ACTIONS(339),
    [anon_sym_PASSWORD] = ACTIONS(339),
    [anon_sym_PASSHASH] = ACTIONS(339),
    [anon_sym_TOKEN] = ACTIONS(339),
    [anon_sym_SCOPE] = ACTIONS(339),
    [anon_sym_TYPE] = ACTIONS(339),
    [anon_sym_VALUE] = ACTIONS(339),
    [anon_sym_SESSION] = ACTIONS(339),
    [anon_sym_SIGNUP] = ACTIONS(339),
    [anon_sym_SIGNIN] = ACTIONS(339),
    [anon_sym_TABLE] = ACTIONS(339),
    [anon_sym_DROP] = ACTIONS(339),
    [anon_sym_SCHEMAFULL] = ACTIONS(339),
    [anon_sym_SCHEMALESS] = ACTIONS(339),
    [anon_sym_AS] = ACTIONS(339),
    [anon_sym_PERMISSIONS] = ACTIONS(339),
    [anon_sym_FULL] = ACTIONS(339),
    [anon_sym_FOR] = ACTIONS(339),
    [anon_sym_select] = ACTIONS(339),
    [anon_sym_update] = ACTIONS(339),
    [anon_sym_create] = ACTIONS(339),
    [anon_sym_delete] = ACTIONS(339),
    [anon_sym_EVENT] = ACTIONS(339),
    [anon_sym_WHEN] = ACTIONS(339),
    [anon_sym_ASSERT] = ACTIONS(339),
    [anon_sym_INDEX] = ACTIONS(339),
    [anon_sym_FIELD] = ACTIONS(339),
    [anon_sym_FIELDS] = ACTIONS(339),
    [anon_sym_COLUMNS] = ACTIONS(339),
    [anon_sym_UNIQUE] = ACTIONS(339),
    [anon_sym_DEFAULT] = ACTIONS(339),
    [anon_sym_READONLY] = ACTIONS(339),
    [anon_sym_REMOVE] = ACTIONS(339),
    [anon_sym_SLEEP] = ACTIONS(339),
    [anon_sym_INFO] = ACTIONS(339),
    [anon_sym_KV] = ACTIONS(339),
    [anon_sym_TO] = ACTIONS(339),
    [anon_sym_OUT] = ACTIONS(339),
    [anon_sym_IFNOT] = ACTIONS(337),
    [anon_sym_EXISTS] = ACTIONS(339),
    [anon_sym_FUNCTION] = ACTIONS(339),
    [anon_sym_PARAM] = ACTIONS(339),
    [anon_sym_LIVE] = ACTIONS(339),
    [anon_sym_ONLY] = ACTIONS(339),
    [anon_sym_OMIT] = ACTIONS(339),
    [anon_sym_OPTION] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_AND] = ACTIONS(339),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_OR] = ACTIONS(339),
    [anon_sym_QMARK_QMARK] = ACTIONS(337),
    [anon_sym_QMARK_COLON] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_IS] = ACTIONS(339),
    [anon_sym_BANG_EQ] = ACTIONS(337),
    [anon_sym_ISNOT] = ACTIONS(337),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [anon_sym_QMARK_EQ] = ACTIONS(337),
    [anon_sym_STAR_EQ] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [anon_sym_BANG_TILDE] = ACTIONS(337),
    [anon_sym_QMARK_TILDE] = ACTIONS(337),
    [anon_sym_STAR_TILDE] = ACTIONS(337),
    [anon_sym_LT] = ACTIONS(339),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_x] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [anon_sym_] = ACTIONS(337),
    [anon_sym_STAR_STAR] = ACTIONS(337),
    [anon_sym_IN] = ACTIONS(339),
    [anon_sym_CONTAINS] = ACTIONS(339),
    [anon_sym_2] = ACTIONS(337),
    [anon_sym_CONTAINSNOT] = ACTIONS(339),
    [anon_sym_3] = ACTIONS(337),
    [anon_sym_CONTAINSALL] = ACTIONS(339),
    [anon_sym_4] = ACTIONS(337),
    [anon_sym_CONTAINSANY] = ACTIONS(339),
    [anon_sym_5] = ACTIONS(337),
    [anon_sym_CONTAINSNONE] = ACTIONS(339),
    [anon_sym_6] = ACTIONS(337),
    [anon_sym_INSIDE] = ACTIONS(339),
    [anon_sym_7] = ACTIONS(337),
    [anon_sym_NOTINSIDE] = ACTIONS(339),
    [anon_sym_NOTIN] = ACTIONS(337),
    [anon_sym_8] = ACTIONS(337),
    [anon_sym_ALLINSIDE] = ACTIONS(339),
    [anon_sym_9] = ACTIONS(337),
    [anon_sym_ANYINSIDE] = ACTIONS(339),
    [anon_sym_10] = ACTIONS(337),
    [anon_sym_NONEINSIDE] = ACTIONS(339),
    [anon_sym_11] = ACTIONS(337),
    [anon_sym_OUTSIDE] = ACTIONS(339),
    [anon_sym_INTERSECTS] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_DASH_GT] = ACTIONS(337),
    [anon_sym_LT_DASH] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [aux_sym_function_token1] = ACTIONS(337),
    [aux_sym_function_token2] = ACTIONS(337),
    [aux_sym_function_token3] = ACTIONS(337),
    [anon_sym_count] = ACTIONS(339),
    [aux_sym_function_token4] = ACTIONS(337),
    [aux_sym_function_token5] = ACTIONS(337),
    [aux_sym_function_token6] = ACTIONS(337),
    [aux_sym_function_token7] = ACTIONS(337),
    [aux_sym_function_token8] = ACTIONS(337),
    [aux_sym_function_token9] = ACTIONS(337),
    [aux_sym_function_token10] = ACTIONS(337),
    [aux_sym_function_token11] = ACTIONS(339),
    [aux_sym_function_token12] = ACTIONS(337),
    [aux_sym_function_token13] = ACTIONS(339),
    [aux_sym_function_token14] = ACTIONS(337),
    [aux_sym_function_token15] = ACTIONS(337),
    [aux_sym_function_token16] = ACTIONS(337),
    [aux_sym_function_token17] = ACTIONS(339),
    [anon_sym_any] = ACTIONS(339),
    [anon_sym_array] = ACTIONS(339),
    [anon_sym_bool] = ACTIONS(339),
    [anon_sym_datetime] = ACTIONS(339),
    [anon_sym_decimal] = ACTIONS(339),
    [anon_sym_duration] = ACTIONS(339),
    [anon_sym_float] = ACTIONS(339),
    [anon_sym_int] = ACTIONS(339),
    [anon_sym_number] = ACTIONS(339),
    [anon_sym_object] = ACTIONS(339),
    [anon_sym_string] = ACTIONS(339),
    [anon_sym_record] = ACTIONS(339),
    [anon_sym_option] = ACTIONS(339),
    [anon_sym_geometry] = ACTIONS(339),
    [anon_sym_EDDSA] = ACTIONS(339),
    [anon_sym_ES256] = ACTIONS(339),
    [anon_sym_ES384] = ACTIONS(339),
    [anon_sym_ES512] = ACTIONS(339),
    [anon_sym_HS256] = ACTIONS(339),
    [anon_sym_HS384] = ACTIONS(339),
    [anon_sym_HS512] = ACTIONS(339),
    [anon_sym_PS256] = ACTIONS(339),
    [anon_sym_PS384] = ACTIONS(339),
    [anon_sym_PS512] = ACTIONS(339),
    [anon_sym_RS256] = ACTIONS(339),
    [anon_sym_RS384] = ACTIONS(339),
    [anon_sym_RS512] = ACTIONS(339),
    [anon_sym_true] = ACTIONS(339),
    [anon_sym_false] = ACTIONS(339),
    [anon_sym_TRUE] = ACTIONS(339),
    [anon_sym_FALSE] = ACTIONS(339),
    [anon_sym_null] = ACTIONS(339),
    [anon_sym_NULL] = ACTIONS(339),
    [anon_sym_none] = ACTIONS(339),
    [anon_sym_NONE] = ACTIONS(339),
    [sym_variable] = ACTIONS(337),
    [sym_comment] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(337),
  },
  [36] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE_SEMI] = ACTIONS(265),
    [anon_sym_RBRACE_COMMA] = ACTIONS(265),
    [aux_sym_future_token1] = ACTIONS(265),
    [aux_sym_casting_token1] = ACTIONS(265),
    [aux_sym_property_token1] = ACTIONS(267),
    [aux_sym_identifier_token1] = ACTIONS(267),
    [aux_sym_duration_token1] = ACTIONS(267),
    [aux_sym_constant_token1] = ACTIONS(265),
    [aux_sym_number_token1] = ACTIONS(267),
    [aux_sym_record_token1] = ACTIONS(265),
    [aux_sym_record_token2] = ACTIONS(265),
    [anon_sym_USE] = ACTIONS(267),
    [anon_sym_NS] = ACTIONS(267),
    [anon_sym_DB] = ACTIONS(267),
    [anon_sym_LET] = ACTIONS(267),
    [anon_sym_BEGIN] = ACTIONS(267),
    [anon_sym_TRANSACTION] = ACTIONS(267),
    [anon_sym_CANCEL] = ACTIONS(267),
    [anon_sym_COMMIT] = ACTIONS(267),
    [anon_sym_IF] = ACTIONS(267),
    [anon_sym_ELSE] = ACTIONS(267),
    [anon_sym_THEN] = ACTIONS(267),
    [anon_sym_END] = ACTIONS(267),
    [anon_sym_SELECT] = ACTIONS(267),
    [anon_sym_FROM] = ACTIONS(267),
    [anon_sym_WHERE] = ACTIONS(267),
    [anon_sym_SPLIT] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(267),
    [anon_sym_GROUP] = ACTIONS(267),
    [anon_sym_BY] = ACTIONS(267),
    [anon_sym_ORDER] = ACTIONS(267),
    [anon_sym_COLLATE] = ACTIONS(267),
    [anon_sym_NUMERIC] = ACTIONS(267),
    [anon_sym_ASC] = ACTIONS(267),
    [anon_sym_DESC] = ACTIONS(267),
    [anon_sym_LIMIT] = ACTIONS(267),
    [anon_sym_START] = ACTIONS(267),
    [anon_sym_FETCH] = ACTIONS(267),
    [anon_sym_TIMEOUT] = ACTIONS(267),
    [anon_sym_PARALLEL] = ACTIONS(267),
    [anon_sym_INSERT] = ACTIONS(267),
    [anon_sym_IGNORE] = ACTIONS(267),
    [anon_sym_INTO] = ACTIONS(267),
    [anon_sym_VALUES] = ACTIONS(267),
    [anon_sym_ON] = ACTIONS(267),
    [anon_sym_DUPLICATE] = ACTIONS(267),
    [anon_sym_KEY] = ACTIONS(267),
    [anon_sym_UPDATE] = ACTIONS(267),
    [anon_sym_CREATE] = ACTIONS(267),
    [anon_sym_CONTENT] = ACTIONS(267),
    [anon_sym_SET] = ACTIONS(267),
    [anon_sym_RETURN] = ACTIONS(267),
    [anon_sym_BEFORE] = ACTIONS(267),
    [anon_sym_AFTER] = ACTIONS(267),
    [anon_sym_DIFF] = ACTIONS(267),
    [anon_sym_MERGE] = ACTIONS(267),
    [anon_sym_PATCH] = ACTIONS(267),
    [anon_sym_RELATE] = ACTIONS(267),
    [anon_sym_DELETE] = ACTIONS(267),
    [anon_sym_DEFINE] = ACTIONS(267),
    [anon_sym_NAMESPACE] = ACTIONS(267),
    [anon_sym_DATABASE] = ACTIONS(267),
    [anon_sym_USER] = ACTIONS(267),
    [anon_sym_PASSWORD] = ACTIONS(267),
    [anon_sym_PASSHASH] = ACTIONS(267),
    [anon_sym_TOKEN] = ACTIONS(267),
    [anon_sym_SCOPE] = ACTIONS(267),
    [anon_sym_TYPE] = ACTIONS(267),
    [anon_sym_VALUE] = ACTIONS(267),
    [anon_sym_SESSION] = ACTIONS(267),
    [anon_sym_SIGNUP] = ACTIONS(267),
    [anon_sym_SIGNIN] = ACTIONS(267),
    [anon_sym_TABLE] = ACTIONS(267),
    [anon_sym_DROP] = ACTIONS(267),
    [anon_sym_SCHEMAFULL] = ACTIONS(267),
    [anon_sym_SCHEMALESS] = ACTIONS(267),
    [anon_sym_AS] = ACTIONS(267),
    [anon_sym_PERMISSIONS] = ACTIONS(267),
    [anon_sym_FULL] = ACTIONS(267),
    [anon_sym_FOR] = ACTIONS(267),
    [anon_sym_select] = ACTIONS(267),
    [anon_sym_update] = ACTIONS(267),
    [anon_sym_create] = ACTIONS(267),
    [anon_sym_delete] = ACTIONS(267),
    [anon_sym_EVENT] = ACTIONS(267),
    [anon_sym_WHEN] = ACTIONS(267),
    [anon_sym_ASSERT] = ACTIONS(267),
    [anon_sym_INDEX] = ACTIONS(267),
    [anon_sym_FIELD] = ACTIONS(267),
    [anon_sym_FIELDS] = ACTIONS(267),
    [anon_sym_COLUMNS] = ACTIONS(267),
    [anon_sym_UNIQUE] = ACTIONS(267),
    [anon_sym_DEFAULT] = ACTIONS(267),
    [anon_sym_READONLY] = ACTIONS(267),
    [anon_sym_REMOVE] = ACTIONS(267),
    [anon_sym_SLEEP] = ACTIONS(267),
    [anon_sym_INFO] = ACTIONS(267),
    [anon_sym_KV] = ACTIONS(267),
    [anon_sym_TO] = ACTIONS(267),
    [anon_sym_OUT] = ACTIONS(267),
    [anon_sym_IFNOT] = ACTIONS(265),
    [anon_sym_EXISTS] = ACTIONS(267),
    [anon_sym_FUNCTION] = ACTIONS(267),
    [anon_sym_PARAM] = ACTIONS(267),
    [anon_sym_LIVE] = ACTIONS(267),
    [anon_sym_ONLY] = ACTIONS(267),
    [anon_sym_OMIT] = ACTIONS(267),
    [anon_sym_OPTION] = ACTIONS(267),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_AND] = ACTIONS(267),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_OR] = ACTIONS(267),
    [anon_sym_QMARK_QMARK] = ACTIONS(265),
    [anon_sym_QMARK_COLON] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_IS] = ACTIONS(267),
    [anon_sym_BANG_EQ] = ACTIONS(265),
    [anon_sym_ISNOT] = ACTIONS(265),
    [anon_sym_EQ_EQ] = ACTIONS(265),
    [anon_sym_QMARK_EQ] = ACTIONS(265),
    [anon_sym_STAR_EQ] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(265),
    [anon_sym_BANG_TILDE] = ACTIONS(265),
    [anon_sym_QMARK_TILDE] = ACTIONS(265),
    [anon_sym_STAR_TILDE] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_LT_EQ] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(265),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_x] = ACTIONS(267),
    [anon_sym_SLASH] = ACTIONS(265),
    [anon_sym_] = ACTIONS(265),
    [anon_sym_STAR_STAR] = ACTIONS(265),
    [anon_sym_IN] = ACTIONS(267),
    [anon_sym_CONTAINS] = ACTIONS(267),
    [anon_sym_2] = ACTIONS(265),
    [anon_sym_CONTAINSNOT] = ACTIONS(267),
    [anon_sym_3] = ACTIONS(265),
    [anon_sym_CONTAINSALL] = ACTIONS(267),
    [anon_sym_4] = ACTIONS(265),
    [anon_sym_CONTAINSANY] = ACTIONS(267),
    [anon_sym_5] = ACTIONS(265),
    [anon_sym_CONTAINSNONE] = ACTIONS(267),
    [anon_sym_6] = ACTIONS(265),
    [anon_sym_INSIDE] = ACTIONS(267),
    [anon_sym_7] = ACTIONS(265),
    [anon_sym_NOTINSIDE] = ACTIONS(267),
    [anon_sym_NOTIN] = ACTIONS(265),
    [anon_sym_8] = ACTIONS(265),
    [anon_sym_ALLINSIDE] = ACTIONS(267),
    [anon_sym_9] = ACTIONS(265),
    [anon_sym_ANYINSIDE] = ACTIONS(267),
    [anon_sym_10] = ACTIONS(265),
    [anon_sym_NONEINSIDE] = ACTIONS(267),
    [anon_sym_11] = ACTIONS(265),
    [anon_sym_OUTSIDE] = ACTIONS(267),
    [anon_sym_INTERSECTS] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_DASH_GT] = ACTIONS(265),
    [anon_sym_LT_DASH] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [aux_sym_function_token1] = ACTIONS(265),
    [aux_sym_function_token2] = ACTIONS(265),
    [aux_sym_function_token3] = ACTIONS(265),
    [anon_sym_count] = ACTIONS(267),
    [aux_sym_function_token4] = ACTIONS(265),
    [aux_sym_function_token5] = ACTIONS(265),
    [aux_sym_function_token6] = ACTIONS(265),
    [aux_sym_function_token7] = ACTIONS(265),
    [aux_sym_function_token8] = ACTIONS(265),
    [aux_sym_function_token9] = ACTIONS(265),
    [aux_sym_function_token10] = ACTIONS(265),
    [aux_sym_function_token11] = ACTIONS(267),
    [aux_sym_function_token12] = ACTIONS(265),
    [aux_sym_function_token13] = ACTIONS(267),
    [aux_sym_function_token14] = ACTIONS(265),
    [aux_sym_function_token15] = ACTIONS(265),
    [aux_sym_function_token16] = ACTIONS(265),
    [aux_sym_function_token17] = ACTIONS(267),
    [anon_sym_any] = ACTIONS(267),
    [anon_sym_array] = ACTIONS(267),
    [anon_sym_bool] = ACTIONS(267),
    [anon_sym_datetime] = ACTIONS(267),
    [anon_sym_decimal] = ACTIONS(267),
    [anon_sym_duration] = ACTIONS(267),
    [anon_sym_float] = ACTIONS(267),
    [anon_sym_int] = ACTIONS(267),
    [anon_sym_number] = ACTIONS(267),
    [anon_sym_object] = ACTIONS(267),
    [anon_sym_string] = ACTIONS(267),
    [anon_sym_record] = ACTIONS(267),
    [anon_sym_option] = ACTIONS(267),
    [anon_sym_geometry] = ACTIONS(267),
    [anon_sym_EDDSA] = ACTIONS(267),
    [anon_sym_ES256] = ACTIONS(267),
    [anon_sym_ES384] = ACTIONS(267),
    [anon_sym_ES512] = ACTIONS(267),
    [anon_sym_HS256] = ACTIONS(267),
    [anon_sym_HS384] = ACTIONS(267),
    [anon_sym_HS512] = ACTIONS(267),
    [anon_sym_PS256] = ACTIONS(267),
    [anon_sym_PS384] = ACTIONS(267),
    [anon_sym_PS512] = ACTIONS(267),
    [anon_sym_RS256] = ACTIONS(267),
    [anon_sym_RS384] = ACTIONS(267),
    [anon_sym_RS512] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_TRUE] = ACTIONS(267),
    [anon_sym_FALSE] = ACTIONS(267),
    [anon_sym_null] = ACTIONS(267),
    [anon_sym_NULL] = ACTIONS(267),
    [anon_sym_none] = ACTIONS(267),
    [anon_sym_NONE] = ACTIONS(267),
    [sym_variable] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(333),
    [aux_sym_future_token1] = ACTIONS(333),
    [aux_sym_casting_token1] = ACTIONS(333),
    [aux_sym_property_token1] = ACTIONS(335),
    [aux_sym_identifier_token1] = ACTIONS(335),
    [aux_sym_duration_token1] = ACTIONS(335),
    [aux_sym_constant_token1] = ACTIONS(333),
    [aux_sym_number_token1] = ACTIONS(335),
    [aux_sym_record_token1] = ACTIONS(333),
    [aux_sym_record_token2] = ACTIONS(333),
    [anon_sym_USE] = ACTIONS(335),
    [anon_sym_NS] = ACTIONS(335),
    [anon_sym_DB] = ACTIONS(335),
    [anon_sym_LET] = ACTIONS(335),
    [anon_sym_BEGIN] = ACTIONS(335),
    [anon_sym_TRANSACTION] = ACTIONS(335),
    [anon_sym_CANCEL] = ACTIONS(335),
    [anon_sym_COMMIT] = ACTIONS(335),
    [anon_sym_IF] = ACTIONS(335),
    [anon_sym_ELSE] = ACTIONS(335),
    [anon_sym_THEN] = ACTIONS(335),
    [anon_sym_END] = ACTIONS(335),
    [anon_sym_SELECT] = ACTIONS(335),
    [anon_sym_FROM] = ACTIONS(335),
    [anon_sym_WHERE] = ACTIONS(335),
    [anon_sym_SPLIT] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_GROUP] = ACTIONS(335),
    [anon_sym_BY] = ACTIONS(335),
    [anon_sym_ORDER] = ACTIONS(335),
    [anon_sym_COLLATE] = ACTIONS(335),
    [anon_sym_NUMERIC] = ACTIONS(335),
    [anon_sym_ASC] = ACTIONS(335),
    [anon_sym_DESC] = ACTIONS(335),
    [anon_sym_LIMIT] = ACTIONS(335),
    [anon_sym_START] = ACTIONS(335),
    [anon_sym_FETCH] = ACTIONS(335),
    [anon_sym_TIMEOUT] = ACTIONS(335),
    [anon_sym_PARALLEL] = ACTIONS(335),
    [anon_sym_INSERT] = ACTIONS(335),
    [anon_sym_IGNORE] = ACTIONS(335),
    [anon_sym_INTO] = ACTIONS(335),
    [anon_sym_VALUES] = ACTIONS(335),
    [anon_sym_ON] = ACTIONS(335),
    [anon_sym_DUPLICATE] = ACTIONS(335),
    [anon_sym_KEY] = ACTIONS(335),
    [anon_sym_UPDATE] = ACTIONS(335),
    [anon_sym_CREATE] = ACTIONS(335),
    [anon_sym_CONTENT] = ACTIONS(335),
    [anon_sym_SET] = ACTIONS(335),
    [anon_sym_RETURN] = ACTIONS(335),
    [anon_sym_BEFORE] = ACTIONS(335),
    [anon_sym_AFTER] = ACTIONS(335),
    [anon_sym_DIFF] = ACTIONS(335),
    [anon_sym_MERGE] = ACTIONS(335),
    [anon_sym_PATCH] = ACTIONS(335),
    [anon_sym_RELATE] = ACTIONS(335),
    [anon_sym_DELETE] = ACTIONS(335),
    [anon_sym_DEFINE] = ACTIONS(335),
    [anon_sym_NAMESPACE] = ACTIONS(335),
    [anon_sym_DATABASE] = ACTIONS(335),
    [anon_sym_USER] = ACTIONS(335),
    [anon_sym_PASSWORD] = ACTIONS(335),
    [anon_sym_PASSHASH] = ACTIONS(335),
    [anon_sym_TOKEN] = ACTIONS(335),
    [anon_sym_SCOPE] = ACTIONS(335),
    [anon_sym_TYPE] = ACTIONS(335),
    [anon_sym_VALUE] = ACTIONS(335),
    [anon_sym_SESSION] = ACTIONS(335),
    [anon_sym_SIGNUP] = ACTIONS(335),
    [anon_sym_SIGNIN] = ACTIONS(335),
    [anon_sym_TABLE] = ACTIONS(335),
    [anon_sym_DROP] = ACTIONS(335),
    [anon_sym_SCHEMAFULL] = ACTIONS(335),
    [anon_sym_SCHEMALESS] = ACTIONS(335),
    [anon_sym_AS] = ACTIONS(335),
    [anon_sym_PERMISSIONS] = ACTIONS(335),
    [anon_sym_FULL] = ACTIONS(335),
    [anon_sym_FOR] = ACTIONS(335),
    [anon_sym_select] = ACTIONS(335),
    [anon_sym_update] = ACTIONS(335),
    [anon_sym_create] = ACTIONS(335),
    [anon_sym_delete] = ACTIONS(335),
    [anon_sym_EVENT] = ACTIONS(335),
    [anon_sym_WHEN] = ACTIONS(335),
    [anon_sym_ASSERT] = ACTIONS(335),
    [anon_sym_INDEX] = ACTIONS(335),
    [anon_sym_FIELD] = ACTIONS(335),
    [anon_sym_FIELDS] = ACTIONS(335),
    [anon_sym_COLUMNS] = ACTIONS(335),
    [anon_sym_UNIQUE] = ACTIONS(335),
    [anon_sym_DEFAULT] = ACTIONS(335),
    [anon_sym_READONLY] = ACTIONS(335),
    [anon_sym_REMOVE] = ACTIONS(335),
    [anon_sym_SLEEP] = ACTIONS(335),
    [anon_sym_INFO] = ACTIONS(335),
    [anon_sym_KV] = ACTIONS(335),
    [anon_sym_TO] = ACTIONS(335),
    [anon_sym_OUT] = ACTIONS(335),
    [anon_sym_IFNOT] = ACTIONS(333),
    [anon_sym_EXISTS] = ACTIONS(335),
    [anon_sym_FUNCTION] = ACTIONS(335),
    [anon_sym_PARAM] = ACTIONS(335),
    [anon_sym_LIVE] = ACTIONS(335),
    [anon_sym_ONLY] = ACTIONS(335),
    [anon_sym_OMIT] = ACTIONS(335),
    [anon_sym_OPTION] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_AND] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_OR] = ACTIONS(335),
    [anon_sym_QMARK_QMARK] = ACTIONS(333),
    [anon_sym_QMARK_COLON] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_IS] = ACTIONS(335),
    [anon_sym_BANG_EQ] = ACTIONS(333),
    [anon_sym_ISNOT] = ACTIONS(333),
    [anon_sym_EQ_EQ] = ACTIONS(333),
    [anon_sym_QMARK_EQ] = ACTIONS(333),
    [anon_sym_STAR_EQ] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_BANG_TILDE] = ACTIONS(333),
    [anon_sym_QMARK_TILDE] = ACTIONS(333),
    [anon_sym_STAR_TILDE] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(335),
    [anon_sym_STAR] = ACTIONS(335),
    [anon_sym_x] = ACTIONS(335),
    [anon_sym_SLASH] = ACTIONS(335),
    [anon_sym_] = ACTIONS(333),
    [anon_sym_STAR_STAR] = ACTIONS(333),
    [anon_sym_IN] = ACTIONS(335),
    [anon_sym_CONTAINS] = ACTIONS(335),
    [anon_sym_2] = ACTIONS(333),
    [anon_sym_CONTAINSNOT] = ACTIONS(335),
    [anon_sym_3] = ACTIONS(333),
    [anon_sym_CONTAINSALL] = ACTIONS(335),
    [anon_sym_4] = ACTIONS(333),
    [anon_sym_CONTAINSANY] = ACTIONS(335),
    [anon_sym_5] = ACTIONS(333),
    [anon_sym_CONTAINSNONE] = ACTIONS(335),
    [anon_sym_6] = ACTIONS(333),
    [anon_sym_INSIDE] = ACTIONS(335),
    [anon_sym_7] = ACTIONS(333),
    [anon_sym_NOTINSIDE] = ACTIONS(335),
    [anon_sym_NOTIN] = ACTIONS(333),
    [anon_sym_8] = ACTIONS(333),
    [anon_sym_ALLINSIDE] = ACTIONS(335),
    [anon_sym_9] = ACTIONS(333),
    [anon_sym_ANYINSIDE] = ACTIONS(335),
    [anon_sym_10] = ACTIONS(333),
    [anon_sym_NONEINSIDE] = ACTIONS(335),
    [anon_sym_11] = ACTIONS(333),
    [anon_sym_OUTSIDE] = ACTIONS(335),
    [anon_sym_INTERSECTS] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_DASH_GT] = ACTIONS(333),
    [anon_sym_LT_DASH] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [aux_sym_function_token1] = ACTIONS(333),
    [aux_sym_function_token2] = ACTIONS(333),
    [aux_sym_function_token3] = ACTIONS(333),
    [anon_sym_count] = ACTIONS(335),
    [aux_sym_function_token4] = ACTIONS(333),
    [aux_sym_function_token5] = ACTIONS(333),
    [aux_sym_function_token6] = ACTIONS(333),
    [aux_sym_function_token7] = ACTIONS(333),
    [aux_sym_function_token8] = ACTIONS(333),
    [aux_sym_function_token9] = ACTIONS(333),
    [aux_sym_function_token10] = ACTIONS(333),
    [aux_sym_function_token11] = ACTIONS(335),
    [aux_sym_function_token12] = ACTIONS(333),
    [aux_sym_function_token13] = ACTIONS(335),
    [aux_sym_function_token14] = ACTIONS(333),
    [aux_sym_function_token15] = ACTIONS(333),
    [aux_sym_function_token16] = ACTIONS(333),
    [aux_sym_function_token17] = ACTIONS(335),
    [anon_sym_any] = ACTIONS(335),
    [anon_sym_array] = ACTIONS(335),
    [anon_sym_bool] = ACTIONS(335),
    [anon_sym_datetime] = ACTIONS(335),
    [anon_sym_decimal] = ACTIONS(335),
    [anon_sym_duration] = ACTIONS(335),
    [anon_sym_float] = ACTIONS(335),
    [anon_sym_int] = ACTIONS(335),
    [anon_sym_number] = ACTIONS(335),
    [anon_sym_object] = ACTIONS(335),
    [anon_sym_string] = ACTIONS(335),
    [anon_sym_record] = ACTIONS(335),
    [anon_sym_option] = ACTIONS(335),
    [anon_sym_geometry] = ACTIONS(335),
    [anon_sym_EDDSA] = ACTIONS(335),
    [anon_sym_ES256] = ACTIONS(335),
    [anon_sym_ES384] = ACTIONS(335),
    [anon_sym_ES512] = ACTIONS(335),
    [anon_sym_HS256] = ACTIONS(335),
    [anon_sym_HS384] = ACTIONS(335),
    [anon_sym_HS512] = ACTIONS(335),
    [anon_sym_PS256] = ACTIONS(335),
    [anon_sym_PS384] = ACTIONS(335),
    [anon_sym_PS512] = ACTIONS(335),
    [anon_sym_RS256] = ACTIONS(335),
    [anon_sym_RS384] = ACTIONS(335),
    [anon_sym_RS512] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(335),
    [anon_sym_false] = ACTIONS(335),
    [anon_sym_TRUE] = ACTIONS(335),
    [anon_sym_FALSE] = ACTIONS(335),
    [anon_sym_null] = ACTIONS(335),
    [anon_sym_NULL] = ACTIONS(335),
    [anon_sym_none] = ACTIONS(335),
    [anon_sym_NONE] = ACTIONS(335),
    [sym_variable] = ACTIONS(333),
    [sym_comment] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(349),
    [aux_sym_future_token1] = ACTIONS(349),
    [aux_sym_casting_token1] = ACTIONS(349),
    [aux_sym_property_token1] = ACTIONS(351),
    [aux_sym_identifier_token1] = ACTIONS(351),
    [aux_sym_duration_token1] = ACTIONS(351),
    [aux_sym_constant_token1] = ACTIONS(349),
    [aux_sym_number_token1] = ACTIONS(351),
    [aux_sym_record_token1] = ACTIONS(349),
    [aux_sym_record_token2] = ACTIONS(349),
    [anon_sym_USE] = ACTIONS(351),
    [anon_sym_NS] = ACTIONS(351),
    [anon_sym_DB] = ACTIONS(351),
    [anon_sym_LET] = ACTIONS(351),
    [anon_sym_BEGIN] = ACTIONS(351),
    [anon_sym_TRANSACTION] = ACTIONS(351),
    [anon_sym_CANCEL] = ACTIONS(351),
    [anon_sym_COMMIT] = ACTIONS(351),
    [anon_sym_IF] = ACTIONS(351),
    [anon_sym_ELSE] = ACTIONS(351),
    [anon_sym_THEN] = ACTIONS(351),
    [anon_sym_END] = ACTIONS(351),
    [anon_sym_SELECT] = ACTIONS(351),
    [anon_sym_FROM] = ACTIONS(351),
    [anon_sym_WHERE] = ACTIONS(351),
    [anon_sym_SPLIT] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
    [anon_sym_GROUP] = ACTIONS(351),
    [anon_sym_BY] = ACTIONS(351),
    [anon_sym_ORDER] = ACTIONS(351),
    [anon_sym_COLLATE] = ACTIONS(351),
    [anon_sym_NUMERIC] = ACTIONS(351),
    [anon_sym_ASC] = ACTIONS(351),
    [anon_sym_DESC] = ACTIONS(351),
    [anon_sym_LIMIT] = ACTIONS(351),
    [anon_sym_START] = ACTIONS(351),
    [anon_sym_FETCH] = ACTIONS(351),
    [anon_sym_TIMEOUT] = ACTIONS(351),
    [anon_sym_PARALLEL] = ACTIONS(351),
    [anon_sym_INSERT] = ACTIONS(351),
    [anon_sym_IGNORE] = ACTIONS(351),
    [anon_sym_INTO] = ACTIONS(351),
    [anon_sym_VALUES] = ACTIONS(351),
    [anon_sym_ON] = ACTIONS(351),
    [anon_sym_DUPLICATE] = ACTIONS(351),
    [anon_sym_KEY] = ACTIONS(351),
    [anon_sym_UPDATE] = ACTIONS(351),
    [anon_sym_CREATE] = ACTIONS(351),
    [anon_sym_CONTENT] = ACTIONS(351),
    [anon_sym_SET] = ACTIONS(351),
    [anon_sym_RETURN] = ACTIONS(351),
    [anon_sym_BEFORE] = ACTIONS(351),
    [anon_sym_AFTER] = ACTIONS(351),
    [anon_sym_DIFF] = ACTIONS(351),
    [anon_sym_MERGE] = ACTIONS(351),
    [anon_sym_PATCH] = ACTIONS(351),
    [anon_sym_RELATE] = ACTIONS(351),
    [anon_sym_DELETE] = ACTIONS(351),
    [anon_sym_DEFINE] = ACTIONS(351),
    [anon_sym_NAMESPACE] = ACTIONS(351),
    [anon_sym_DATABASE] = ACTIONS(351),
    [anon_sym_USER] = ACTIONS(351),
    [anon_sym_PASSWORD] = ACTIONS(351),
    [anon_sym_PASSHASH] = ACTIONS(351),
    [anon_sym_TOKEN] = ACTIONS(351),
    [anon_sym_SCOPE] = ACTIONS(351),
    [anon_sym_TYPE] = ACTIONS(351),
    [anon_sym_VALUE] = ACTIONS(351),
    [anon_sym_SESSION] = ACTIONS(351),
    [anon_sym_SIGNUP] = ACTIONS(351),
    [anon_sym_SIGNIN] = ACTIONS(351),
    [anon_sym_TABLE] = ACTIONS(351),
    [anon_sym_DROP] = ACTIONS(351),
    [anon_sym_SCHEMAFULL] = ACTIONS(351),
    [anon_sym_SCHEMALESS] = ACTIONS(351),
    [anon_sym_AS] = ACTIONS(351),
    [anon_sym_PERMISSIONS] = ACTIONS(351),
    [anon_sym_FULL] = ACTIONS(351),
    [anon_sym_FOR] = ACTIONS(351),
    [anon_sym_select] = ACTIONS(351),
    [anon_sym_update] = ACTIONS(351),
    [anon_sym_create] = ACTIONS(351),
    [anon_sym_delete] = ACTIONS(351),
    [anon_sym_EVENT] = ACTIONS(351),
    [anon_sym_WHEN] = ACTIONS(351),
    [anon_sym_ASSERT] = ACTIONS(351),
    [anon_sym_INDEX] = ACTIONS(351),
    [anon_sym_FIELD] = ACTIONS(351),
    [anon_sym_FIELDS] = ACTIONS(351),
    [anon_sym_COLUMNS] = ACTIONS(351),
    [anon_sym_UNIQUE] = ACTIONS(351),
    [anon_sym_DEFAULT] = ACTIONS(351),
    [anon_sym_READONLY] = ACTIONS(351),
    [anon_sym_REMOVE] = ACTIONS(351),
    [anon_sym_SLEEP] = ACTIONS(351),
    [anon_sym_INFO] = ACTIONS(351),
    [anon_sym_KV] = ACTIONS(351),
    [anon_sym_TO] = ACTIONS(351),
    [anon_sym_OUT] = ACTIONS(351),
    [anon_sym_IFNOT] = ACTIONS(349),
    [anon_sym_EXISTS] = ACTIONS(351),
    [anon_sym_FUNCTION] = ACTIONS(351),
    [anon_sym_PARAM] = ACTIONS(351),
    [anon_sym_LIVE] = ACTIONS(351),
    [anon_sym_ONLY] = ACTIONS(351),
    [anon_sym_OMIT] = ACTIONS(351),
    [anon_sym_OPTION] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_AND] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_OR] = ACTIONS(351),
    [anon_sym_QMARK_QMARK] = ACTIONS(349),
    [anon_sym_QMARK_COLON] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_IS] = ACTIONS(351),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_ISNOT] = ACTIONS(349),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [anon_sym_QMARK_EQ] = ACTIONS(349),
    [anon_sym_STAR_EQ] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_QMARK_TILDE] = ACTIONS(349),
    [anon_sym_STAR_TILDE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_x] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_] = ACTIONS(349),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [anon_sym_IN] = ACTIONS(351),
    [anon_sym_CONTAINS] = ACTIONS(351),
    [anon_sym_2] = ACTIONS(349),
    [anon_sym_CONTAINSNOT] = ACTIONS(351),
    [anon_sym_3] = ACTIONS(349),
    [anon_sym_CONTAINSALL] = ACTIONS(351),
    [anon_sym_4] = ACTIONS(349),
    [anon_sym_CONTAINSANY] = ACTIONS(351),
    [anon_sym_5] = ACTIONS(349),
    [anon_sym_CONTAINSNONE] = ACTIONS(351),
    [anon_sym_6] = ACTIONS(349),
    [anon_sym_INSIDE] = ACTIONS(351),
    [anon_sym_7] = ACTIONS(349),
    [anon_sym_NOTINSIDE] = ACTIONS(351),
    [anon_sym_NOTIN] = ACTIONS(349),
    [anon_sym_8] = ACTIONS(349),
    [anon_sym_ALLINSIDE] = ACTIONS(351),
    [anon_sym_9] = ACTIONS(349),
    [anon_sym_ANYINSIDE] = ACTIONS(351),
    [anon_sym_10] = ACTIONS(349),
    [anon_sym_NONEINSIDE] = ACTIONS(351),
    [anon_sym_11] = ACTIONS(349),
    [anon_sym_OUTSIDE] = ACTIONS(351),
    [anon_sym_INTERSECTS] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_LT_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [aux_sym_function_token1] = ACTIONS(349),
    [aux_sym_function_token2] = ACTIONS(349),
    [aux_sym_function_token3] = ACTIONS(349),
    [anon_sym_count] = ACTIONS(351),
    [aux_sym_function_token4] = ACTIONS(349),
    [aux_sym_function_token5] = ACTIONS(349),
    [aux_sym_function_token6] = ACTIONS(349),
    [aux_sym_function_token7] = ACTIONS(349),
    [aux_sym_function_token8] = ACTIONS(349),
    [aux_sym_function_token9] = ACTIONS(349),
    [aux_sym_function_token10] = ACTIONS(349),
    [aux_sym_function_token11] = ACTIONS(351),
    [aux_sym_function_token12] = ACTIONS(349),
    [aux_sym_function_token13] = ACTIONS(351),
    [aux_sym_function_token14] = ACTIONS(349),
    [aux_sym_function_token15] = ACTIONS(349),
    [aux_sym_function_token16] = ACTIONS(349),
    [aux_sym_function_token17] = ACTIONS(351),
    [anon_sym_any] = ACTIONS(351),
    [anon_sym_array] = ACTIONS(351),
    [anon_sym_bool] = ACTIONS(351),
    [anon_sym_datetime] = ACTIONS(351),
    [anon_sym_decimal] = ACTIONS(351),
    [anon_sym_duration] = ACTIONS(351),
    [anon_sym_float] = ACTIONS(351),
    [anon_sym_int] = ACTIONS(351),
    [anon_sym_number] = ACTIONS(351),
    [anon_sym_object] = ACTIONS(351),
    [anon_sym_string] = ACTIONS(351),
    [anon_sym_record] = ACTIONS(351),
    [anon_sym_option] = ACTIONS(351),
    [anon_sym_geometry] = ACTIONS(351),
    [anon_sym_EDDSA] = ACTIONS(351),
    [anon_sym_ES256] = ACTIONS(351),
    [anon_sym_ES384] = ACTIONS(351),
    [anon_sym_ES512] = ACTIONS(351),
    [anon_sym_HS256] = ACTIONS(351),
    [anon_sym_HS384] = ACTIONS(351),
    [anon_sym_HS512] = ACTIONS(351),
    [anon_sym_PS256] = ACTIONS(351),
    [anon_sym_PS384] = ACTIONS(351),
    [anon_sym_PS512] = ACTIONS(351),
    [anon_sym_RS256] = ACTIONS(351),
    [anon_sym_RS384] = ACTIONS(351),
    [anon_sym_RS512] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_TRUE] = ACTIONS(351),
    [anon_sym_FALSE] = ACTIONS(351),
    [anon_sym_null] = ACTIONS(351),
    [anon_sym_NULL] = ACTIONS(351),
    [anon_sym_none] = ACTIONS(351),
    [anon_sym_NONE] = ACTIONS(351),
    [sym_variable] = ACTIONS(349),
    [sym_comment] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
  },
  [39] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE_SEMI] = ACTIONS(313),
    [anon_sym_RBRACE_COMMA] = ACTIONS(313),
    [aux_sym_future_token1] = ACTIONS(313),
    [aux_sym_casting_token1] = ACTIONS(313),
    [aux_sym_property_token1] = ACTIONS(315),
    [aux_sym_identifier_token1] = ACTIONS(315),
    [aux_sym_duration_token1] = ACTIONS(315),
    [aux_sym_constant_token1] = ACTIONS(313),
    [aux_sym_number_token1] = ACTIONS(315),
    [aux_sym_record_token1] = ACTIONS(313),
    [aux_sym_record_token2] = ACTIONS(313),
    [anon_sym_USE] = ACTIONS(315),
    [anon_sym_NS] = ACTIONS(315),
    [anon_sym_DB] = ACTIONS(315),
    [anon_sym_LET] = ACTIONS(315),
    [anon_sym_BEGIN] = ACTIONS(315),
    [anon_sym_TRANSACTION] = ACTIONS(315),
    [anon_sym_CANCEL] = ACTIONS(315),
    [anon_sym_COMMIT] = ACTIONS(315),
    [anon_sym_IF] = ACTIONS(315),
    [anon_sym_ELSE] = ACTIONS(315),
    [anon_sym_THEN] = ACTIONS(315),
    [anon_sym_END] = ACTIONS(315),
    [anon_sym_SELECT] = ACTIONS(315),
    [anon_sym_FROM] = ACTIONS(315),
    [anon_sym_WHERE] = ACTIONS(315),
    [anon_sym_SPLIT] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_GROUP] = ACTIONS(315),
    [anon_sym_BY] = ACTIONS(315),
    [anon_sym_ORDER] = ACTIONS(315),
    [anon_sym_COLLATE] = ACTIONS(315),
    [anon_sym_NUMERIC] = ACTIONS(315),
    [anon_sym_ASC] = ACTIONS(315),
    [anon_sym_DESC] = ACTIONS(315),
    [anon_sym_LIMIT] = ACTIONS(315),
    [anon_sym_START] = ACTIONS(315),
    [anon_sym_FETCH] = ACTIONS(315),
    [anon_sym_TIMEOUT] = ACTIONS(315),
    [anon_sym_PARALLEL] = ACTIONS(315),
    [anon_sym_INSERT] = ACTIONS(315),
    [anon_sym_IGNORE] = ACTIONS(315),
    [anon_sym_INTO] = ACTIONS(315),
    [anon_sym_VALUES] = ACTIONS(315),
    [anon_sym_ON] = ACTIONS(315),
    [anon_sym_DUPLICATE] = ACTIONS(315),
    [anon_sym_KEY] = ACTIONS(315),
    [anon_sym_UPDATE] = ACTIONS(315),
    [anon_sym_CREATE] = ACTIONS(315),
    [anon_sym_CONTENT] = ACTIONS(315),
    [anon_sym_SET] = ACTIONS(315),
    [anon_sym_RETURN] = ACTIONS(315),
    [anon_sym_BEFORE] = ACTIONS(315),
    [anon_sym_AFTER] = ACTIONS(315),
    [anon_sym_DIFF] = ACTIONS(315),
    [anon_sym_MERGE] = ACTIONS(315),
    [anon_sym_PATCH] = ACTIONS(315),
    [anon_sym_RELATE] = ACTIONS(315),
    [anon_sym_DELETE] = ACTIONS(315),
    [anon_sym_DEFINE] = ACTIONS(315),
    [anon_sym_NAMESPACE] = ACTIONS(315),
    [anon_sym_DATABASE] = ACTIONS(315),
    [anon_sym_USER] = ACTIONS(315),
    [anon_sym_PASSWORD] = ACTIONS(315),
    [anon_sym_PASSHASH] = ACTIONS(315),
    [anon_sym_TOKEN] = ACTIONS(315),
    [anon_sym_SCOPE] = ACTIONS(315),
    [anon_sym_TYPE] = ACTIONS(315),
    [anon_sym_VALUE] = ACTIONS(315),
    [anon_sym_SESSION] = ACTIONS(315),
    [anon_sym_SIGNUP] = ACTIONS(315),
    [anon_sym_SIGNIN] = ACTIONS(315),
    [anon_sym_TABLE] = ACTIONS(315),
    [anon_sym_DROP] = ACTIONS(315),
    [anon_sym_SCHEMAFULL] = ACTIONS(315),
    [anon_sym_SCHEMALESS] = ACTIONS(315),
    [anon_sym_AS] = ACTIONS(315),
    [anon_sym_PERMISSIONS] = ACTIONS(315),
    [anon_sym_FULL] = ACTIONS(315),
    [anon_sym_FOR] = ACTIONS(315),
    [anon_sym_select] = ACTIONS(315),
    [anon_sym_update] = ACTIONS(315),
    [anon_sym_create] = ACTIONS(315),
    [anon_sym_delete] = ACTIONS(315),
    [anon_sym_EVENT] = ACTIONS(315),
    [anon_sym_WHEN] = ACTIONS(315),
    [anon_sym_ASSERT] = ACTIONS(315),
    [anon_sym_INDEX] = ACTIONS(315),
    [anon_sym_FIELD] = ACTIONS(315),
    [anon_sym_FIELDS] = ACTIONS(315),
    [anon_sym_COLUMNS] = ACTIONS(315),
    [anon_sym_UNIQUE] = ACTIONS(315),
    [anon_sym_DEFAULT] = ACTIONS(315),
    [anon_sym_READONLY] = ACTIONS(315),
    [anon_sym_REMOVE] = ACTIONS(315),
    [anon_sym_SLEEP] = ACTIONS(315),
    [anon_sym_INFO] = ACTIONS(315),
    [anon_sym_KV] = ACTIONS(315),
    [anon_sym_TO] = ACTIONS(315),
    [anon_sym_OUT] = ACTIONS(315),
    [anon_sym_IFNOT] = ACTIONS(313),
    [anon_sym_EXISTS] = ACTIONS(315),
    [anon_sym_FUNCTION] = ACTIONS(315),
    [anon_sym_PARAM] = ACTIONS(315),
    [anon_sym_LIVE] = ACTIONS(315),
    [anon_sym_ONLY] = ACTIONS(315),
    [anon_sym_OMIT] = ACTIONS(315),
    [anon_sym_OPTION] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_AND] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_OR] = ACTIONS(315),
    [anon_sym_QMARK_QMARK] = ACTIONS(313),
    [anon_sym_QMARK_COLON] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_IS] = ACTIONS(315),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_ISNOT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_QMARK_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
    [anon_sym_BANG_TILDE] = ACTIONS(313),
    [anon_sym_QMARK_TILDE] = ACTIONS(313),
    [anon_sym_STAR_TILDE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_x] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_] = ACTIONS(313),
    [anon_sym_STAR_STAR] = ACTIONS(313),
    [anon_sym_IN] = ACTIONS(315),
    [anon_sym_CONTAINS] = ACTIONS(315),
    [anon_sym_2] = ACTIONS(313),
    [anon_sym_CONTAINSNOT] = ACTIONS(315),
    [anon_sym_3] = ACTIONS(313),
    [anon_sym_CONTAINSALL] = ACTIONS(315),
    [anon_sym_4] = ACTIONS(313),
    [anon_sym_CONTAINSANY] = ACTIONS(315),
    [anon_sym_5] = ACTIONS(313),
    [anon_sym_CONTAINSNONE] = ACTIONS(315),
    [anon_sym_6] = ACTIONS(313),
    [anon_sym_INSIDE] = ACTIONS(315),
    [anon_sym_7] = ACTIONS(313),
    [anon_sym_NOTINSIDE] = ACTIONS(315),
    [anon_sym_NOTIN] = ACTIONS(313),
    [anon_sym_8] = ACTIONS(313),
    [anon_sym_ALLINSIDE] = ACTIONS(315),
    [anon_sym_9] = ACTIONS(313),
    [anon_sym_ANYINSIDE] = ACTIONS(315),
    [anon_sym_10] = ACTIONS(313),
    [anon_sym_NONEINSIDE] = ACTIONS(315),
    [anon_sym_11] = ACTIONS(313),
    [anon_sym_OUTSIDE] = ACTIONS(315),
    [anon_sym_INTERSECTS] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DASH_GT] = ACTIONS(313),
    [anon_sym_LT_DASH] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [aux_sym_function_token1] = ACTIONS(313),
    [aux_sym_function_token2] = ACTIONS(313),
    [aux_sym_function_token3] = ACTIONS(313),
    [anon_sym_count] = ACTIONS(315),
    [aux_sym_function_token4] = ACTIONS(313),
    [aux_sym_function_token5] = ACTIONS(313),
    [aux_sym_function_token6] = ACTIONS(313),
    [aux_sym_function_token7] = ACTIONS(313),
    [aux_sym_function_token8] = ACTIONS(313),
    [aux_sym_function_token9] = ACTIONS(313),
    [aux_sym_function_token10] = ACTIONS(313),
    [aux_sym_function_token11] = ACTIONS(315),
    [aux_sym_function_token12] = ACTIONS(313),
    [aux_sym_function_token13] = ACTIONS(315),
    [aux_sym_function_token14] = ACTIONS(313),
    [aux_sym_function_token15] = ACTIONS(313),
    [aux_sym_function_token16] = ACTIONS(313),
    [aux_sym_function_token17] = ACTIONS(315),
    [anon_sym_any] = ACTIONS(315),
    [anon_sym_array] = ACTIONS(315),
    [anon_sym_bool] = ACTIONS(315),
    [anon_sym_datetime] = ACTIONS(315),
    [anon_sym_decimal] = ACTIONS(315),
    [anon_sym_duration] = ACTIONS(315),
    [anon_sym_float] = ACTIONS(315),
    [anon_sym_int] = ACTIONS(315),
    [anon_sym_number] = ACTIONS(315),
    [anon_sym_object] = ACTIONS(315),
    [anon_sym_string] = ACTIONS(315),
    [anon_sym_record] = ACTIONS(315),
    [anon_sym_option] = ACTIONS(315),
    [anon_sym_geometry] = ACTIONS(315),
    [anon_sym_EDDSA] = ACTIONS(315),
    [anon_sym_ES256] = ACTIONS(315),
    [anon_sym_ES384] = ACTIONS(315),
    [anon_sym_ES512] = ACTIONS(315),
    [anon_sym_HS256] = ACTIONS(315),
    [anon_sym_HS384] = ACTIONS(315),
    [anon_sym_HS512] = ACTIONS(315),
    [anon_sym_PS256] = ACTIONS(315),
    [anon_sym_PS384] = ACTIONS(315),
    [anon_sym_PS512] = ACTIONS(315),
    [anon_sym_RS256] = ACTIONS(315),
    [anon_sym_RS384] = ACTIONS(315),
    [anon_sym_RS512] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_TRUE] = ACTIONS(315),
    [anon_sym_FALSE] = ACTIONS(315),
    [anon_sym_null] = ACTIONS(315),
    [anon_sym_NULL] = ACTIONS(315),
    [anon_sym_none] = ACTIONS(315),
    [anon_sym_NONE] = ACTIONS(315),
    [sym_variable] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
  },
  [40] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE_SEMI] = ACTIONS(309),
    [anon_sym_RBRACE_COMMA] = ACTIONS(309),
    [aux_sym_future_token1] = ACTIONS(309),
    [aux_sym_casting_token1] = ACTIONS(309),
    [aux_sym_property_token1] = ACTIONS(311),
    [aux_sym_identifier_token1] = ACTIONS(311),
    [aux_sym_duration_token1] = ACTIONS(311),
    [aux_sym_constant_token1] = ACTIONS(309),
    [aux_sym_number_token1] = ACTIONS(311),
    [aux_sym_record_token1] = ACTIONS(309),
    [aux_sym_record_token2] = ACTIONS(309),
    [anon_sym_USE] = ACTIONS(311),
    [anon_sym_NS] = ACTIONS(311),
    [anon_sym_DB] = ACTIONS(311),
    [anon_sym_LET] = ACTIONS(311),
    [anon_sym_BEGIN] = ACTIONS(311),
    [anon_sym_TRANSACTION] = ACTIONS(311),
    [anon_sym_CANCEL] = ACTIONS(311),
    [anon_sym_COMMIT] = ACTIONS(311),
    [anon_sym_IF] = ACTIONS(311),
    [anon_sym_ELSE] = ACTIONS(311),
    [anon_sym_THEN] = ACTIONS(311),
    [anon_sym_END] = ACTIONS(311),
    [anon_sym_SELECT] = ACTIONS(311),
    [anon_sym_FROM] = ACTIONS(311),
    [anon_sym_WHERE] = ACTIONS(311),
    [anon_sym_SPLIT] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_GROUP] = ACTIONS(311),
    [anon_sym_BY] = ACTIONS(311),
    [anon_sym_ORDER] = ACTIONS(311),
    [anon_sym_COLLATE] = ACTIONS(311),
    [anon_sym_NUMERIC] = ACTIONS(311),
    [anon_sym_ASC] = ACTIONS(311),
    [anon_sym_DESC] = ACTIONS(311),
    [anon_sym_LIMIT] = ACTIONS(311),
    [anon_sym_START] = ACTIONS(311),
    [anon_sym_FETCH] = ACTIONS(311),
    [anon_sym_TIMEOUT] = ACTIONS(311),
    [anon_sym_PARALLEL] = ACTIONS(311),
    [anon_sym_INSERT] = ACTIONS(311),
    [anon_sym_IGNORE] = ACTIONS(311),
    [anon_sym_INTO] = ACTIONS(311),
    [anon_sym_VALUES] = ACTIONS(311),
    [anon_sym_ON] = ACTIONS(311),
    [anon_sym_DUPLICATE] = ACTIONS(311),
    [anon_sym_KEY] = ACTIONS(311),
    [anon_sym_UPDATE] = ACTIONS(311),
    [anon_sym_CREATE] = ACTIONS(311),
    [anon_sym_CONTENT] = ACTIONS(311),
    [anon_sym_SET] = ACTIONS(311),
    [anon_sym_RETURN] = ACTIONS(311),
    [anon_sym_BEFORE] = ACTIONS(311),
    [anon_sym_AFTER] = ACTIONS(311),
    [anon_sym_DIFF] = ACTIONS(311),
    [anon_sym_MERGE] = ACTIONS(311),
    [anon_sym_PATCH] = ACTIONS(311),
    [anon_sym_RELATE] = ACTIONS(311),
    [anon_sym_DELETE] = ACTIONS(311),
    [anon_sym_DEFINE] = ACTIONS(311),
    [anon_sym_NAMESPACE] = ACTIONS(311),
    [anon_sym_DATABASE] = ACTIONS(311),
    [anon_sym_USER] = ACTIONS(311),
    [anon_sym_PASSWORD] = ACTIONS(311),
    [anon_sym_PASSHASH] = ACTIONS(311),
    [anon_sym_TOKEN] = ACTIONS(311),
    [anon_sym_SCOPE] = ACTIONS(311),
    [anon_sym_TYPE] = ACTIONS(311),
    [anon_sym_VALUE] = ACTIONS(311),
    [anon_sym_SESSION] = ACTIONS(311),
    [anon_sym_SIGNUP] = ACTIONS(311),
    [anon_sym_SIGNIN] = ACTIONS(311),
    [anon_sym_TABLE] = ACTIONS(311),
    [anon_sym_DROP] = ACTIONS(311),
    [anon_sym_SCHEMAFULL] = ACTIONS(311),
    [anon_sym_SCHEMALESS] = ACTIONS(311),
    [anon_sym_AS] = ACTIONS(311),
    [anon_sym_PERMISSIONS] = ACTIONS(311),
    [anon_sym_FULL] = ACTIONS(311),
    [anon_sym_FOR] = ACTIONS(311),
    [anon_sym_select] = ACTIONS(311),
    [anon_sym_update] = ACTIONS(311),
    [anon_sym_create] = ACTIONS(311),
    [anon_sym_delete] = ACTIONS(311),
    [anon_sym_EVENT] = ACTIONS(311),
    [anon_sym_WHEN] = ACTIONS(311),
    [anon_sym_ASSERT] = ACTIONS(311),
    [anon_sym_INDEX] = ACTIONS(311),
    [anon_sym_FIELD] = ACTIONS(311),
    [anon_sym_FIELDS] = ACTIONS(311),
    [anon_sym_COLUMNS] = ACTIONS(311),
    [anon_sym_UNIQUE] = ACTIONS(311),
    [anon_sym_DEFAULT] = ACTIONS(311),
    [anon_sym_READONLY] = ACTIONS(311),
    [anon_sym_REMOVE] = ACTIONS(311),
    [anon_sym_SLEEP] = ACTIONS(311),
    [anon_sym_INFO] = ACTIONS(311),
    [anon_sym_KV] = ACTIONS(311),
    [anon_sym_TO] = ACTIONS(311),
    [anon_sym_OUT] = ACTIONS(311),
    [anon_sym_IFNOT] = ACTIONS(309),
    [anon_sym_EXISTS] = ACTIONS(311),
    [anon_sym_FUNCTION] = ACTIONS(311),
    [anon_sym_PARAM] = ACTIONS(311),
    [anon_sym_LIVE] = ACTIONS(311),
    [anon_sym_ONLY] = ACTIONS(311),
    [anon_sym_OMIT] = ACTIONS(311),
    [anon_sym_OPTION] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_AND] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_OR] = ACTIONS(311),
    [anon_sym_QMARK_QMARK] = ACTIONS(309),
    [anon_sym_QMARK_COLON] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_IS] = ACTIONS(311),
    [anon_sym_BANG_EQ] = ACTIONS(309),
    [anon_sym_ISNOT] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [anon_sym_QMARK_EQ] = ACTIONS(309),
    [anon_sym_STAR_EQ] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
    [anon_sym_BANG_TILDE] = ACTIONS(309),
    [anon_sym_QMARK_TILDE] = ACTIONS(309),
    [anon_sym_STAR_TILDE] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [anon_sym_PLUS] = ACTIONS(309),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(311),
    [anon_sym_x] = ACTIONS(311),
    [anon_sym_SLASH] = ACTIONS(309),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_STAR_STAR] = ACTIONS(309),
    [anon_sym_IN] = ACTIONS(311),
    [anon_sym_CONTAINS] = ACTIONS(311),
    [anon_sym_2] = ACTIONS(309),
    [anon_sym_CONTAINSNOT] = ACTIONS(311),
    [anon_sym_3] = ACTIONS(309),
    [anon_sym_CONTAINSALL] = ACTIONS(311),
    [anon_sym_4] = ACTIONS(309),
    [anon_sym_CONTAINSANY] = ACTIONS(311),
    [anon_sym_5] = ACTIONS(309),
    [anon_sym_CONTAINSNONE] = ACTIONS(311),
    [anon_sym_6] = ACTIONS(309),
    [anon_sym_INSIDE] = ACTIONS(311),
    [anon_sym_7] = ACTIONS(309),
    [anon_sym_NOTINSIDE] = ACTIONS(311),
    [anon_sym_NOTIN] = ACTIONS(309),
    [anon_sym_8] = ACTIONS(309),
    [anon_sym_ALLINSIDE] = ACTIONS(311),
    [anon_sym_9] = ACTIONS(309),
    [anon_sym_ANYINSIDE] = ACTIONS(311),
    [anon_sym_10] = ACTIONS(309),
    [anon_sym_NONEINSIDE] = ACTIONS(311),
    [anon_sym_11] = ACTIONS(309),
    [anon_sym_OUTSIDE] = ACTIONS(311),
    [anon_sym_INTERSECTS] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_LT_DASH] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [aux_sym_function_token1] = ACTIONS(309),
    [aux_sym_function_token2] = ACTIONS(309),
    [aux_sym_function_token3] = ACTIONS(309),
    [anon_sym_count] = ACTIONS(311),
    [aux_sym_function_token4] = ACTIONS(309),
    [aux_sym_function_token5] = ACTIONS(309),
    [aux_sym_function_token6] = ACTIONS(309),
    [aux_sym_function_token7] = ACTIONS(309),
    [aux_sym_function_token8] = ACTIONS(309),
    [aux_sym_function_token9] = ACTIONS(309),
    [aux_sym_function_token10] = ACTIONS(309),
    [aux_sym_function_token11] = ACTIONS(311),
    [aux_sym_function_token12] = ACTIONS(309),
    [aux_sym_function_token13] = ACTIONS(311),
    [aux_sym_function_token14] = ACTIONS(309),
    [aux_sym_function_token15] = ACTIONS(309),
    [aux_sym_function_token16] = ACTIONS(309),
    [aux_sym_function_token17] = ACTIONS(311),
    [anon_sym_any] = ACTIONS(311),
    [anon_sym_array] = ACTIONS(311),
    [anon_sym_bool] = ACTIONS(311),
    [anon_sym_datetime] = ACTIONS(311),
    [anon_sym_decimal] = ACTIONS(311),
    [anon_sym_duration] = ACTIONS(311),
    [anon_sym_float] = ACTIONS(311),
    [anon_sym_int] = ACTIONS(311),
    [anon_sym_number] = ACTIONS(311),
    [anon_sym_object] = ACTIONS(311),
    [anon_sym_string] = ACTIONS(311),
    [anon_sym_record] = ACTIONS(311),
    [anon_sym_option] = ACTIONS(311),
    [anon_sym_geometry] = ACTIONS(311),
    [anon_sym_EDDSA] = ACTIONS(311),
    [anon_sym_ES256] = ACTIONS(311),
    [anon_sym_ES384] = ACTIONS(311),
    [anon_sym_ES512] = ACTIONS(311),
    [anon_sym_HS256] = ACTIONS(311),
    [anon_sym_HS384] = ACTIONS(311),
    [anon_sym_HS512] = ACTIONS(311),
    [anon_sym_PS256] = ACTIONS(311),
    [anon_sym_PS384] = ACTIONS(311),
    [anon_sym_PS512] = ACTIONS(311),
    [anon_sym_RS256] = ACTIONS(311),
    [anon_sym_RS384] = ACTIONS(311),
    [anon_sym_RS512] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_TRUE] = ACTIONS(311),
    [anon_sym_FALSE] = ACTIONS(311),
    [anon_sym_null] = ACTIONS(311),
    [anon_sym_NULL] = ACTIONS(311),
    [anon_sym_none] = ACTIONS(311),
    [anon_sym_NONE] = ACTIONS(311),
    [sym_variable] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
  },
  [41] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE_SEMI] = ACTIONS(329),
    [anon_sym_RBRACE_COMMA] = ACTIONS(329),
    [aux_sym_future_token1] = ACTIONS(329),
    [aux_sym_casting_token1] = ACTIONS(329),
    [aux_sym_property_token1] = ACTIONS(331),
    [aux_sym_identifier_token1] = ACTIONS(331),
    [aux_sym_duration_token1] = ACTIONS(331),
    [aux_sym_constant_token1] = ACTIONS(329),
    [aux_sym_number_token1] = ACTIONS(331),
    [aux_sym_record_token1] = ACTIONS(329),
    [aux_sym_record_token2] = ACTIONS(329),
    [anon_sym_USE] = ACTIONS(331),
    [anon_sym_NS] = ACTIONS(331),
    [anon_sym_DB] = ACTIONS(331),
    [anon_sym_LET] = ACTIONS(331),
    [anon_sym_BEGIN] = ACTIONS(331),
    [anon_sym_TRANSACTION] = ACTIONS(331),
    [anon_sym_CANCEL] = ACTIONS(331),
    [anon_sym_COMMIT] = ACTIONS(331),
    [anon_sym_IF] = ACTIONS(331),
    [anon_sym_ELSE] = ACTIONS(331),
    [anon_sym_THEN] = ACTIONS(331),
    [anon_sym_END] = ACTIONS(331),
    [anon_sym_SELECT] = ACTIONS(331),
    [anon_sym_FROM] = ACTIONS(331),
    [anon_sym_WHERE] = ACTIONS(331),
    [anon_sym_SPLIT] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_GROUP] = ACTIONS(331),
    [anon_sym_BY] = ACTIONS(331),
    [anon_sym_ORDER] = ACTIONS(331),
    [anon_sym_COLLATE] = ACTIONS(331),
    [anon_sym_NUMERIC] = ACTIONS(331),
    [anon_sym_ASC] = ACTIONS(331),
    [anon_sym_DESC] = ACTIONS(331),
    [anon_sym_LIMIT] = ACTIONS(331),
    [anon_sym_START] = ACTIONS(331),
    [anon_sym_FETCH] = ACTIONS(331),
    [anon_sym_TIMEOUT] = ACTIONS(331),
    [anon_sym_PARALLEL] = ACTIONS(331),
    [anon_sym_INSERT] = ACTIONS(331),
    [anon_sym_IGNORE] = ACTIONS(331),
    [anon_sym_INTO] = ACTIONS(331),
    [anon_sym_VALUES] = ACTIONS(331),
    [anon_sym_ON] = ACTIONS(331),
    [anon_sym_DUPLICATE] = ACTIONS(331),
    [anon_sym_KEY] = ACTIONS(331),
    [anon_sym_UPDATE] = ACTIONS(331),
    [anon_sym_CREATE] = ACTIONS(331),
    [anon_sym_CONTENT] = ACTIONS(331),
    [anon_sym_SET] = ACTIONS(331),
    [anon_sym_RETURN] = ACTIONS(331),
    [anon_sym_BEFORE] = ACTIONS(331),
    [anon_sym_AFTER] = ACTIONS(331),
    [anon_sym_DIFF] = ACTIONS(331),
    [anon_sym_MERGE] = ACTIONS(331),
    [anon_sym_PATCH] = ACTIONS(331),
    [anon_sym_RELATE] = ACTIONS(331),
    [anon_sym_DELETE] = ACTIONS(331),
    [anon_sym_DEFINE] = ACTIONS(331),
    [anon_sym_NAMESPACE] = ACTIONS(331),
    [anon_sym_DATABASE] = ACTIONS(331),
    [anon_sym_USER] = ACTIONS(331),
    [anon_sym_PASSWORD] = ACTIONS(331),
    [anon_sym_PASSHASH] = ACTIONS(331),
    [anon_sym_TOKEN] = ACTIONS(331),
    [anon_sym_SCOPE] = ACTIONS(331),
    [anon_sym_TYPE] = ACTIONS(331),
    [anon_sym_VALUE] = ACTIONS(331),
    [anon_sym_SESSION] = ACTIONS(331),
    [anon_sym_SIGNUP] = ACTIONS(331),
    [anon_sym_SIGNIN] = ACTIONS(331),
    [anon_sym_TABLE] = ACTIONS(331),
    [anon_sym_DROP] = ACTIONS(331),
    [anon_sym_SCHEMAFULL] = ACTIONS(331),
    [anon_sym_SCHEMALESS] = ACTIONS(331),
    [anon_sym_AS] = ACTIONS(331),
    [anon_sym_PERMISSIONS] = ACTIONS(331),
    [anon_sym_FULL] = ACTIONS(331),
    [anon_sym_FOR] = ACTIONS(331),
    [anon_sym_select] = ACTIONS(331),
    [anon_sym_update] = ACTIONS(331),
    [anon_sym_create] = ACTIONS(331),
    [anon_sym_delete] = ACTIONS(331),
    [anon_sym_EVENT] = ACTIONS(331),
    [anon_sym_WHEN] = ACTIONS(331),
    [anon_sym_ASSERT] = ACTIONS(331),
    [anon_sym_INDEX] = ACTIONS(331),
    [anon_sym_FIELD] = ACTIONS(331),
    [anon_sym_FIELDS] = ACTIONS(331),
    [anon_sym_COLUMNS] = ACTIONS(331),
    [anon_sym_UNIQUE] = ACTIONS(331),
    [anon_sym_DEFAULT] = ACTIONS(331),
    [anon_sym_READONLY] = ACTIONS(331),
    [anon_sym_REMOVE] = ACTIONS(331),
    [anon_sym_SLEEP] = ACTIONS(331),
    [anon_sym_INFO] = ACTIONS(331),
    [anon_sym_KV] = ACTIONS(331),
    [anon_sym_TO] = ACTIONS(331),
    [anon_sym_OUT] = ACTIONS(331),
    [anon_sym_IFNOT] = ACTIONS(329),
    [anon_sym_EXISTS] = ACTIONS(331),
    [anon_sym_FUNCTION] = ACTIONS(331),
    [anon_sym_PARAM] = ACTIONS(331),
    [anon_sym_LIVE] = ACTIONS(331),
    [anon_sym_ONLY] = ACTIONS(331),
    [anon_sym_OMIT] = ACTIONS(331),
    [anon_sym_OPTION] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(329),
    [anon_sym_AND] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(329),
    [anon_sym_OR] = ACTIONS(331),
    [anon_sym_QMARK_QMARK] = ACTIONS(329),
    [anon_sym_QMARK_COLON] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_IS] = ACTIONS(331),
    [anon_sym_BANG_EQ] = ACTIONS(329),
    [anon_sym_ISNOT] = ACTIONS(329),
    [anon_sym_EQ_EQ] = ACTIONS(329),
    [anon_sym_QMARK_EQ] = ACTIONS(329),
    [anon_sym_STAR_EQ] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_BANG_TILDE] = ACTIONS(329),
    [anon_sym_QMARK_TILDE] = ACTIONS(329),
    [anon_sym_STAR_TILDE] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_EQ] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_STAR] = ACTIONS(331),
    [anon_sym_x] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_] = ACTIONS(329),
    [anon_sym_STAR_STAR] = ACTIONS(329),
    [anon_sym_IN] = ACTIONS(331),
    [anon_sym_CONTAINS] = ACTIONS(331),
    [anon_sym_2] = ACTIONS(329),
    [anon_sym_CONTAINSNOT] = ACTIONS(331),
    [anon_sym_3] = ACTIONS(329),
    [anon_sym_CONTAINSALL] = ACTIONS(331),
    [anon_sym_4] = ACTIONS(329),
    [anon_sym_CONTAINSANY] = ACTIONS(331),
    [anon_sym_5] = ACTIONS(329),
    [anon_sym_CONTAINSNONE] = ACTIONS(331),
    [anon_sym_6] = ACTIONS(329),
    [anon_sym_INSIDE] = ACTIONS(331),
    [anon_sym_7] = ACTIONS(329),
    [anon_sym_NOTINSIDE] = ACTIONS(331),
    [anon_sym_NOTIN] = ACTIONS(329),
    [anon_sym_8] = ACTIONS(329),
    [anon_sym_ALLINSIDE] = ACTIONS(331),
    [anon_sym_9] = ACTIONS(329),
    [anon_sym_ANYINSIDE] = ACTIONS(331),
    [anon_sym_10] = ACTIONS(329),
    [anon_sym_NONEINSIDE] = ACTIONS(331),
    [anon_sym_11] = ACTIONS(329),
    [anon_sym_OUTSIDE] = ACTIONS(331),
    [anon_sym_INTERSECTS] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_DASH_GT] = ACTIONS(329),
    [anon_sym_LT_DASH] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [aux_sym_function_token1] = ACTIONS(329),
    [aux_sym_function_token2] = ACTIONS(329),
    [aux_sym_function_token3] = ACTIONS(329),
    [anon_sym_count] = ACTIONS(331),
    [aux_sym_function_token4] = ACTIONS(329),
    [aux_sym_function_token5] = ACTIONS(329),
    [aux_sym_function_token6] = ACTIONS(329),
    [aux_sym_function_token7] = ACTIONS(329),
    [aux_sym_function_token8] = ACTIONS(329),
    [aux_sym_function_token9] = ACTIONS(329),
    [aux_sym_function_token10] = ACTIONS(329),
    [aux_sym_function_token11] = ACTIONS(331),
    [aux_sym_function_token12] = ACTIONS(329),
    [aux_sym_function_token13] = ACTIONS(331),
    [aux_sym_function_token14] = ACTIONS(329),
    [aux_sym_function_token15] = ACTIONS(329),
    [aux_sym_function_token16] = ACTIONS(329),
    [aux_sym_function_token17] = ACTIONS(331),
    [anon_sym_any] = ACTIONS(331),
    [anon_sym_array] = ACTIONS(331),
    [anon_sym_bool] = ACTIONS(331),
    [anon_sym_datetime] = ACTIONS(331),
    [anon_sym_decimal] = ACTIONS(331),
    [anon_sym_duration] = ACTIONS(331),
    [anon_sym_float] = ACTIONS(331),
    [anon_sym_int] = ACTIONS(331),
    [anon_sym_number] = ACTIONS(331),
    [anon_sym_object] = ACTIONS(331),
    [anon_sym_string] = ACTIONS(331),
    [anon_sym_record] = ACTIONS(331),
    [anon_sym_option] = ACTIONS(331),
    [anon_sym_geometry] = ACTIONS(331),
    [anon_sym_EDDSA] = ACTIONS(331),
    [anon_sym_ES256] = ACTIONS(331),
    [anon_sym_ES384] = ACTIONS(331),
    [anon_sym_ES512] = ACTIONS(331),
    [anon_sym_HS256] = ACTIONS(331),
    [anon_sym_HS384] = ACTIONS(331),
    [anon_sym_HS512] = ACTIONS(331),
    [anon_sym_PS256] = ACTIONS(331),
    [anon_sym_PS384] = ACTIONS(331),
    [anon_sym_PS512] = ACTIONS(331),
    [anon_sym_RS256] = ACTIONS(331),
    [anon_sym_RS384] = ACTIONS(331),
    [anon_sym_RS512] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_TRUE] = ACTIONS(331),
    [anon_sym_FALSE] = ACTIONS(331),
    [anon_sym_null] = ACTIONS(331),
    [anon_sym_NULL] = ACTIONS(331),
    [anon_sym_none] = ACTIONS(331),
    [anon_sym_NONE] = ACTIONS(331),
    [sym_variable] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
  },
  [42] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE_SEMI] = ACTIONS(349),
    [anon_sym_RBRACE_COMMA] = ACTIONS(349),
    [aux_sym_future_token1] = ACTIONS(349),
    [aux_sym_casting_token1] = ACTIONS(349),
    [aux_sym_property_token1] = ACTIONS(351),
    [aux_sym_identifier_token1] = ACTIONS(351),
    [aux_sym_duration_token1] = ACTIONS(351),
    [aux_sym_constant_token1] = ACTIONS(349),
    [aux_sym_number_token1] = ACTIONS(351),
    [aux_sym_record_token1] = ACTIONS(349),
    [aux_sym_record_token2] = ACTIONS(349),
    [anon_sym_USE] = ACTIONS(351),
    [anon_sym_NS] = ACTIONS(351),
    [anon_sym_DB] = ACTIONS(351),
    [anon_sym_LET] = ACTIONS(351),
    [anon_sym_BEGIN] = ACTIONS(351),
    [anon_sym_TRANSACTION] = ACTIONS(351),
    [anon_sym_CANCEL] = ACTIONS(351),
    [anon_sym_COMMIT] = ACTIONS(351),
    [anon_sym_IF] = ACTIONS(351),
    [anon_sym_ELSE] = ACTIONS(351),
    [anon_sym_THEN] = ACTIONS(351),
    [anon_sym_END] = ACTIONS(351),
    [anon_sym_SELECT] = ACTIONS(351),
    [anon_sym_FROM] = ACTIONS(351),
    [anon_sym_WHERE] = ACTIONS(351),
    [anon_sym_SPLIT] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
    [anon_sym_GROUP] = ACTIONS(351),
    [anon_sym_BY] = ACTIONS(351),
    [anon_sym_ORDER] = ACTIONS(351),
    [anon_sym_COLLATE] = ACTIONS(351),
    [anon_sym_NUMERIC] = ACTIONS(351),
    [anon_sym_ASC] = ACTIONS(351),
    [anon_sym_DESC] = ACTIONS(351),
    [anon_sym_LIMIT] = ACTIONS(351),
    [anon_sym_START] = ACTIONS(351),
    [anon_sym_FETCH] = ACTIONS(351),
    [anon_sym_TIMEOUT] = ACTIONS(351),
    [anon_sym_PARALLEL] = ACTIONS(351),
    [anon_sym_INSERT] = ACTIONS(351),
    [anon_sym_IGNORE] = ACTIONS(351),
    [anon_sym_INTO] = ACTIONS(351),
    [anon_sym_VALUES] = ACTIONS(351),
    [anon_sym_ON] = ACTIONS(351),
    [anon_sym_DUPLICATE] = ACTIONS(351),
    [anon_sym_KEY] = ACTIONS(351),
    [anon_sym_UPDATE] = ACTIONS(351),
    [anon_sym_CREATE] = ACTIONS(351),
    [anon_sym_CONTENT] = ACTIONS(351),
    [anon_sym_SET] = ACTIONS(351),
    [anon_sym_RETURN] = ACTIONS(351),
    [anon_sym_BEFORE] = ACTIONS(351),
    [anon_sym_AFTER] = ACTIONS(351),
    [anon_sym_DIFF] = ACTIONS(351),
    [anon_sym_MERGE] = ACTIONS(351),
    [anon_sym_PATCH] = ACTIONS(351),
    [anon_sym_RELATE] = ACTIONS(351),
    [anon_sym_DELETE] = ACTIONS(351),
    [anon_sym_DEFINE] = ACTIONS(351),
    [anon_sym_NAMESPACE] = ACTIONS(351),
    [anon_sym_DATABASE] = ACTIONS(351),
    [anon_sym_USER] = ACTIONS(351),
    [anon_sym_PASSWORD] = ACTIONS(351),
    [anon_sym_PASSHASH] = ACTIONS(351),
    [anon_sym_TOKEN] = ACTIONS(351),
    [anon_sym_SCOPE] = ACTIONS(351),
    [anon_sym_TYPE] = ACTIONS(351),
    [anon_sym_VALUE] = ACTIONS(351),
    [anon_sym_SESSION] = ACTIONS(351),
    [anon_sym_SIGNUP] = ACTIONS(351),
    [anon_sym_SIGNIN] = ACTIONS(351),
    [anon_sym_TABLE] = ACTIONS(351),
    [anon_sym_DROP] = ACTIONS(351),
    [anon_sym_SCHEMAFULL] = ACTIONS(351),
    [anon_sym_SCHEMALESS] = ACTIONS(351),
    [anon_sym_AS] = ACTIONS(351),
    [anon_sym_PERMISSIONS] = ACTIONS(351),
    [anon_sym_FULL] = ACTIONS(351),
    [anon_sym_FOR] = ACTIONS(351),
    [anon_sym_select] = ACTIONS(351),
    [anon_sym_update] = ACTIONS(351),
    [anon_sym_create] = ACTIONS(351),
    [anon_sym_delete] = ACTIONS(351),
    [anon_sym_EVENT] = ACTIONS(351),
    [anon_sym_WHEN] = ACTIONS(351),
    [anon_sym_ASSERT] = ACTIONS(351),
    [anon_sym_INDEX] = ACTIONS(351),
    [anon_sym_FIELD] = ACTIONS(351),
    [anon_sym_FIELDS] = ACTIONS(351),
    [anon_sym_COLUMNS] = ACTIONS(351),
    [anon_sym_UNIQUE] = ACTIONS(351),
    [anon_sym_DEFAULT] = ACTIONS(351),
    [anon_sym_READONLY] = ACTIONS(351),
    [anon_sym_REMOVE] = ACTIONS(351),
    [anon_sym_SLEEP] = ACTIONS(351),
    [anon_sym_INFO] = ACTIONS(351),
    [anon_sym_KV] = ACTIONS(351),
    [anon_sym_TO] = ACTIONS(351),
    [anon_sym_OUT] = ACTIONS(351),
    [anon_sym_IFNOT] = ACTIONS(349),
    [anon_sym_EXISTS] = ACTIONS(351),
    [anon_sym_FUNCTION] = ACTIONS(351),
    [anon_sym_PARAM] = ACTIONS(351),
    [anon_sym_LIVE] = ACTIONS(351),
    [anon_sym_ONLY] = ACTIONS(351),
    [anon_sym_OMIT] = ACTIONS(351),
    [anon_sym_OPTION] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_AND] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_OR] = ACTIONS(351),
    [anon_sym_QMARK_QMARK] = ACTIONS(349),
    [anon_sym_QMARK_COLON] = ACTIONS(349),
    [anon_sym_EQ] = ACTIONS(351),
    [anon_sym_IS] = ACTIONS(351),
    [anon_sym_BANG_EQ] = ACTIONS(349),
    [anon_sym_ISNOT] = ACTIONS(349),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [anon_sym_QMARK_EQ] = ACTIONS(349),
    [anon_sym_STAR_EQ] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_BANG_TILDE] = ACTIONS(349),
    [anon_sym_QMARK_TILDE] = ACTIONS(349),
    [anon_sym_STAR_TILDE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_x] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_] = ACTIONS(349),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [anon_sym_IN] = ACTIONS(351),
    [anon_sym_CONTAINS] = ACTIONS(351),
    [anon_sym_2] = ACTIONS(349),
    [anon_sym_CONTAINSNOT] = ACTIONS(351),
    [anon_sym_3] = ACTIONS(349),
    [anon_sym_CONTAINSALL] = ACTIONS(351),
    [anon_sym_4] = ACTIONS(349),
    [anon_sym_CONTAINSANY] = ACTIONS(351),
    [anon_sym_5] = ACTIONS(349),
    [anon_sym_CONTAINSNONE] = ACTIONS(351),
    [anon_sym_6] = ACTIONS(349),
    [anon_sym_INSIDE] = ACTIONS(351),
    [anon_sym_7] = ACTIONS(349),
    [anon_sym_NOTINSIDE] = ACTIONS(351),
    [anon_sym_NOTIN] = ACTIONS(349),
    [anon_sym_8] = ACTIONS(349),
    [anon_sym_ALLINSIDE] = ACTIONS(351),
    [anon_sym_9] = ACTIONS(349),
    [anon_sym_ANYINSIDE] = ACTIONS(351),
    [anon_sym_10] = ACTIONS(349),
    [anon_sym_NONEINSIDE] = ACTIONS(351),
    [anon_sym_11] = ACTIONS(349),
    [anon_sym_OUTSIDE] = ACTIONS(351),
    [anon_sym_INTERSECTS] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_DASH_GT] = ACTIONS(349),
    [anon_sym_LT_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [aux_sym_function_token1] = ACTIONS(349),
    [aux_sym_function_token2] = ACTIONS(349),
    [aux_sym_function_token3] = ACTIONS(349),
    [anon_sym_count] = ACTIONS(351),
    [aux_sym_function_token4] = ACTIONS(349),
    [aux_sym_function_token5] = ACTIONS(349),
    [aux_sym_function_token6] = ACTIONS(349),
    [aux_sym_function_token7] = ACTIONS(349),
    [aux_sym_function_token8] = ACTIONS(349),
    [aux_sym_function_token9] = ACTIONS(349),
    [aux_sym_function_token10] = ACTIONS(349),
    [aux_sym_function_token11] = ACTIONS(351),
    [aux_sym_function_token12] = ACTIONS(349),
    [aux_sym_function_token13] = ACTIONS(351),
    [aux_sym_function_token14] = ACTIONS(349),
    [aux_sym_function_token15] = ACTIONS(349),
    [aux_sym_function_token16] = ACTIONS(349),
    [aux_sym_function_token17] = ACTIONS(351),
    [anon_sym_any] = ACTIONS(351),
    [anon_sym_array] = ACTIONS(351),
    [anon_sym_bool] = ACTIONS(351),
    [anon_sym_datetime] = ACTIONS(351),
    [anon_sym_decimal] = ACTIONS(351),
    [anon_sym_duration] = ACTIONS(351),
    [anon_sym_float] = ACTIONS(351),
    [anon_sym_int] = ACTIONS(351),
    [anon_sym_number] = ACTIONS(351),
    [anon_sym_object] = ACTIONS(351),
    [anon_sym_string] = ACTIONS(351),
    [anon_sym_record] = ACTIONS(351),
    [anon_sym_option] = ACTIONS(351),
    [anon_sym_geometry] = ACTIONS(351),
    [anon_sym_EDDSA] = ACTIONS(351),
    [anon_sym_ES256] = ACTIONS(351),
    [anon_sym_ES384] = ACTIONS(351),
    [anon_sym_ES512] = ACTIONS(351),
    [anon_sym_HS256] = ACTIONS(351),
    [anon_sym_HS384] = ACTIONS(351),
    [anon_sym_HS512] = ACTIONS(351),
    [anon_sym_PS256] = ACTIONS(351),
    [anon_sym_PS384] = ACTIONS(351),
    [anon_sym_PS512] = ACTIONS(351),
    [anon_sym_RS256] = ACTIONS(351),
    [anon_sym_RS384] = ACTIONS(351),
    [anon_sym_RS512] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_TRUE] = ACTIONS(351),
    [anon_sym_FALSE] = ACTIONS(351),
    [anon_sym_null] = ACTIONS(351),
    [anon_sym_NULL] = ACTIONS(351),
    [anon_sym_none] = ACTIONS(351),
    [anon_sym_NONE] = ACTIONS(351),
    [sym_variable] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
  },
  [43] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE_SEMI] = ACTIONS(273),
    [anon_sym_RBRACE_COMMA] = ACTIONS(273),
    [aux_sym_future_token1] = ACTIONS(273),
    [aux_sym_casting_token1] = ACTIONS(273),
    [aux_sym_property_token1] = ACTIONS(275),
    [aux_sym_identifier_token1] = ACTIONS(275),
    [aux_sym_duration_token1] = ACTIONS(275),
    [aux_sym_constant_token1] = ACTIONS(273),
    [aux_sym_number_token1] = ACTIONS(275),
    [aux_sym_record_token1] = ACTIONS(273),
    [aux_sym_record_token2] = ACTIONS(273),
    [anon_sym_USE] = ACTIONS(275),
    [anon_sym_NS] = ACTIONS(275),
    [anon_sym_DB] = ACTIONS(275),
    [anon_sym_LET] = ACTIONS(275),
    [anon_sym_BEGIN] = ACTIONS(275),
    [anon_sym_TRANSACTION] = ACTIONS(275),
    [anon_sym_CANCEL] = ACTIONS(275),
    [anon_sym_COMMIT] = ACTIONS(275),
    [anon_sym_IF] = ACTIONS(275),
    [anon_sym_ELSE] = ACTIONS(275),
    [anon_sym_THEN] = ACTIONS(275),
    [anon_sym_END] = ACTIONS(275),
    [anon_sym_SELECT] = ACTIONS(275),
    [anon_sym_FROM] = ACTIONS(275),
    [anon_sym_WHERE] = ACTIONS(275),
    [anon_sym_SPLIT] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_GROUP] = ACTIONS(275),
    [anon_sym_BY] = ACTIONS(275),
    [anon_sym_ORDER] = ACTIONS(275),
    [anon_sym_COLLATE] = ACTIONS(275),
    [anon_sym_NUMERIC] = ACTIONS(275),
    [anon_sym_ASC] = ACTIONS(275),
    [anon_sym_DESC] = ACTIONS(275),
    [anon_sym_LIMIT] = ACTIONS(275),
    [anon_sym_START] = ACTIONS(275),
    [anon_sym_FETCH] = ACTIONS(275),
    [anon_sym_TIMEOUT] = ACTIONS(275),
    [anon_sym_PARALLEL] = ACTIONS(275),
    [anon_sym_INSERT] = ACTIONS(275),
    [anon_sym_IGNORE] = ACTIONS(275),
    [anon_sym_INTO] = ACTIONS(275),
    [anon_sym_VALUES] = ACTIONS(275),
    [anon_sym_ON] = ACTIONS(275),
    [anon_sym_DUPLICATE] = ACTIONS(275),
    [anon_sym_KEY] = ACTIONS(275),
    [anon_sym_UPDATE] = ACTIONS(275),
    [anon_sym_CREATE] = ACTIONS(275),
    [anon_sym_CONTENT] = ACTIONS(275),
    [anon_sym_SET] = ACTIONS(275),
    [anon_sym_RETURN] = ACTIONS(275),
    [anon_sym_BEFORE] = ACTIONS(275),
    [anon_sym_AFTER] = ACTIONS(275),
    [anon_sym_DIFF] = ACTIONS(275),
    [anon_sym_MERGE] = ACTIONS(275),
    [anon_sym_PATCH] = ACTIONS(275),
    [anon_sym_RELATE] = ACTIONS(275),
    [anon_sym_DELETE] = ACTIONS(275),
    [anon_sym_DEFINE] = ACTIONS(275),
    [anon_sym_NAMESPACE] = ACTIONS(275),
    [anon_sym_DATABASE] = ACTIONS(275),
    [anon_sym_USER] = ACTIONS(275),
    [anon_sym_PASSWORD] = ACTIONS(275),
    [anon_sym_PASSHASH] = ACTIONS(275),
    [anon_sym_TOKEN] = ACTIONS(275),
    [anon_sym_SCOPE] = ACTIONS(275),
    [anon_sym_TYPE] = ACTIONS(275),
    [anon_sym_VALUE] = ACTIONS(275),
    [anon_sym_SESSION] = ACTIONS(275),
    [anon_sym_SIGNUP] = ACTIONS(275),
    [anon_sym_SIGNIN] = ACTIONS(275),
    [anon_sym_TABLE] = ACTIONS(275),
    [anon_sym_DROP] = ACTIONS(275),
    [anon_sym_SCHEMAFULL] = ACTIONS(275),
    [anon_sym_SCHEMALESS] = ACTIONS(275),
    [anon_sym_AS] = ACTIONS(275),
    [anon_sym_PERMISSIONS] = ACTIONS(275),
    [anon_sym_FULL] = ACTIONS(275),
    [anon_sym_FOR] = ACTIONS(275),
    [anon_sym_select] = ACTIONS(275),
    [anon_sym_update] = ACTIONS(275),
    [anon_sym_create] = ACTIONS(275),
    [anon_sym_delete] = ACTIONS(275),
    [anon_sym_EVENT] = ACTIONS(275),
    [anon_sym_WHEN] = ACTIONS(275),
    [anon_sym_ASSERT] = ACTIONS(275),
    [anon_sym_INDEX] = ACTIONS(275),
    [anon_sym_FIELD] = ACTIONS(275),
    [anon_sym_FIELDS] = ACTIONS(275),
    [anon_sym_COLUMNS] = ACTIONS(275),
    [anon_sym_UNIQUE] = ACTIONS(275),
    [anon_sym_DEFAULT] = ACTIONS(275),
    [anon_sym_READONLY] = ACTIONS(275),
    [anon_sym_REMOVE] = ACTIONS(275),
    [anon_sym_SLEEP] = ACTIONS(275),
    [anon_sym_INFO] = ACTIONS(275),
    [anon_sym_KV] = ACTIONS(275),
    [anon_sym_TO] = ACTIONS(275),
    [anon_sym_OUT] = ACTIONS(275),
    [anon_sym_IFNOT] = ACTIONS(273),
    [anon_sym_EXISTS] = ACTIONS(275),
    [anon_sym_FUNCTION] = ACTIONS(275),
    [anon_sym_PARAM] = ACTIONS(275),
    [anon_sym_LIVE] = ACTIONS(275),
    [anon_sym_ONLY] = ACTIONS(275),
    [anon_sym_OMIT] = ACTIONS(275),
    [anon_sym_OPTION] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_AND] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_OR] = ACTIONS(275),
    [anon_sym_QMARK_QMARK] = ACTIONS(273),
    [anon_sym_QMARK_COLON] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_IS] = ACTIONS(275),
    [anon_sym_BANG_EQ] = ACTIONS(273),
    [anon_sym_ISNOT] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(273),
    [anon_sym_QMARK_EQ] = ACTIONS(273),
    [anon_sym_STAR_EQ] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(273),
    [anon_sym_BANG_TILDE] = ACTIONS(273),
    [anon_sym_QMARK_TILDE] = ACTIONS(273),
    [anon_sym_STAR_TILDE] = ACTIONS(273),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_EQ] = ACTIONS(273),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(275),
    [anon_sym_STAR] = ACTIONS(275),
    [anon_sym_x] = ACTIONS(275),
    [anon_sym_SLASH] = ACTIONS(273),
    [anon_sym_] = ACTIONS(273),
    [anon_sym_STAR_STAR] = ACTIONS(273),
    [anon_sym_IN] = ACTIONS(275),
    [anon_sym_CONTAINS] = ACTIONS(275),
    [anon_sym_2] = ACTIONS(273),
    [anon_sym_CONTAINSNOT] = ACTIONS(275),
    [anon_sym_3] = ACTIONS(273),
    [anon_sym_CONTAINSALL] = ACTIONS(275),
    [anon_sym_4] = ACTIONS(273),
    [anon_sym_CONTAINSANY] = ACTIONS(275),
    [anon_sym_5] = ACTIONS(273),
    [anon_sym_CONTAINSNONE] = ACTIONS(275),
    [anon_sym_6] = ACTIONS(273),
    [anon_sym_INSIDE] = ACTIONS(275),
    [anon_sym_7] = ACTIONS(273),
    [anon_sym_NOTINSIDE] = ACTIONS(275),
    [anon_sym_NOTIN] = ACTIONS(273),
    [anon_sym_8] = ACTIONS(273),
    [anon_sym_ALLINSIDE] = ACTIONS(275),
    [anon_sym_9] = ACTIONS(273),
    [anon_sym_ANYINSIDE] = ACTIONS(275),
    [anon_sym_10] = ACTIONS(273),
    [anon_sym_NONEINSIDE] = ACTIONS(275),
    [anon_sym_11] = ACTIONS(273),
    [anon_sym_OUTSIDE] = ACTIONS(275),
    [anon_sym_INTERSECTS] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [aux_sym_function_token1] = ACTIONS(273),
    [aux_sym_function_token2] = ACTIONS(273),
    [aux_sym_function_token3] = ACTIONS(273),
    [anon_sym_count] = ACTIONS(275),
    [aux_sym_function_token4] = ACTIONS(273),
    [aux_sym_function_token5] = ACTIONS(273),
    [aux_sym_function_token6] = ACTIONS(273),
    [aux_sym_function_token7] = ACTIONS(273),
    [aux_sym_function_token8] = ACTIONS(273),
    [aux_sym_function_token9] = ACTIONS(273),
    [aux_sym_function_token10] = ACTIONS(273),
    [aux_sym_function_token11] = ACTIONS(275),
    [aux_sym_function_token12] = ACTIONS(273),
    [aux_sym_function_token13] = ACTIONS(275),
    [aux_sym_function_token14] = ACTIONS(273),
    [aux_sym_function_token15] = ACTIONS(273),
    [aux_sym_function_token16] = ACTIONS(273),
    [aux_sym_function_token17] = ACTIONS(275),
    [anon_sym_any] = ACTIONS(275),
    [anon_sym_array] = ACTIONS(275),
    [anon_sym_bool] = ACTIONS(275),
    [anon_sym_datetime] = ACTIONS(275),
    [anon_sym_decimal] = ACTIONS(275),
    [anon_sym_duration] = ACTIONS(275),
    [anon_sym_float] = ACTIONS(275),
    [anon_sym_int] = ACTIONS(275),
    [anon_sym_number] = ACTIONS(275),
    [anon_sym_object] = ACTIONS(275),
    [anon_sym_string] = ACTIONS(275),
    [anon_sym_record] = ACTIONS(275),
    [anon_sym_option] = ACTIONS(275),
    [anon_sym_geometry] = ACTIONS(275),
    [anon_sym_EDDSA] = ACTIONS(275),
    [anon_sym_ES256] = ACTIONS(275),
    [anon_sym_ES384] = ACTIONS(275),
    [anon_sym_ES512] = ACTIONS(275),
    [anon_sym_HS256] = ACTIONS(275),
    [anon_sym_HS384] = ACTIONS(275),
    [anon_sym_HS512] = ACTIONS(275),
    [anon_sym_PS256] = ACTIONS(275),
    [anon_sym_PS384] = ACTIONS(275),
    [anon_sym_PS512] = ACTIONS(275),
    [anon_sym_RS256] = ACTIONS(275),
    [anon_sym_RS384] = ACTIONS(275),
    [anon_sym_RS512] = ACTIONS(275),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_TRUE] = ACTIONS(275),
    [anon_sym_FALSE] = ACTIONS(275),
    [anon_sym_null] = ACTIONS(275),
    [anon_sym_NULL] = ACTIONS(275),
    [anon_sym_none] = ACTIONS(275),
    [anon_sym_NONE] = ACTIONS(275),
    [sym_variable] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
  },
  [44] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE_SEMI] = ACTIONS(277),
    [anon_sym_RBRACE_COMMA] = ACTIONS(277),
    [aux_sym_future_token1] = ACTIONS(277),
    [aux_sym_casting_token1] = ACTIONS(277),
    [aux_sym_property_token1] = ACTIONS(279),
    [aux_sym_identifier_token1] = ACTIONS(279),
    [aux_sym_duration_token1] = ACTIONS(279),
    [aux_sym_constant_token1] = ACTIONS(277),
    [aux_sym_number_token1] = ACTIONS(279),
    [aux_sym_record_token1] = ACTIONS(277),
    [aux_sym_record_token2] = ACTIONS(277),
    [anon_sym_USE] = ACTIONS(279),
    [anon_sym_NS] = ACTIONS(279),
    [anon_sym_DB] = ACTIONS(279),
    [anon_sym_LET] = ACTIONS(279),
    [anon_sym_BEGIN] = ACTIONS(279),
    [anon_sym_TRANSACTION] = ACTIONS(279),
    [anon_sym_CANCEL] = ACTIONS(279),
    [anon_sym_COMMIT] = ACTIONS(279),
    [anon_sym_IF] = ACTIONS(279),
    [anon_sym_ELSE] = ACTIONS(279),
    [anon_sym_THEN] = ACTIONS(279),
    [anon_sym_END] = ACTIONS(279),
    [anon_sym_SELECT] = ACTIONS(279),
    [anon_sym_FROM] = ACTIONS(279),
    [anon_sym_WHERE] = ACTIONS(279),
    [anon_sym_SPLIT] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(279),
    [anon_sym_GROUP] = ACTIONS(279),
    [anon_sym_BY] = ACTIONS(279),
    [anon_sym_ORDER] = ACTIONS(279),
    [anon_sym_COLLATE] = ACTIONS(279),
    [anon_sym_NUMERIC] = ACTIONS(279),
    [anon_sym_ASC] = ACTIONS(279),
    [anon_sym_DESC] = ACTIONS(279),
    [anon_sym_LIMIT] = ACTIONS(279),
    [anon_sym_START] = ACTIONS(279),
    [anon_sym_FETCH] = ACTIONS(279),
    [anon_sym_TIMEOUT] = ACTIONS(279),
    [anon_sym_PARALLEL] = ACTIONS(279),
    [anon_sym_INSERT] = ACTIONS(279),
    [anon_sym_IGNORE] = ACTIONS(279),
    [anon_sym_INTO] = ACTIONS(279),
    [anon_sym_VALUES] = ACTIONS(279),
    [anon_sym_ON] = ACTIONS(279),
    [anon_sym_DUPLICATE] = ACTIONS(279),
    [anon_sym_KEY] = ACTIONS(279),
    [anon_sym_UPDATE] = ACTIONS(279),
    [anon_sym_CREATE] = ACTIONS(279),
    [anon_sym_CONTENT] = ACTIONS(279),
    [anon_sym_SET] = ACTIONS(279),
    [anon_sym_RETURN] = ACTIONS(279),
    [anon_sym_BEFORE] = ACTIONS(279),
    [anon_sym_AFTER] = ACTIONS(279),
    [anon_sym_DIFF] = ACTIONS(279),
    [anon_sym_MERGE] = ACTIONS(279),
    [anon_sym_PATCH] = ACTIONS(279),
    [anon_sym_RELATE] = ACTIONS(279),
    [anon_sym_DELETE] = ACTIONS(279),
    [anon_sym_DEFINE] = ACTIONS(279),
    [anon_sym_NAMESPACE] = ACTIONS(279),
    [anon_sym_DATABASE] = ACTIONS(279),
    [anon_sym_USER] = ACTIONS(279),
    [anon_sym_PASSWORD] = ACTIONS(279),
    [anon_sym_PASSHASH] = ACTIONS(279),
    [anon_sym_TOKEN] = ACTIONS(279),
    [anon_sym_SCOPE] = ACTIONS(279),
    [anon_sym_TYPE] = ACTIONS(279),
    [anon_sym_VALUE] = ACTIONS(279),
    [anon_sym_SESSION] = ACTIONS(279),
    [anon_sym_SIGNUP] = ACTIONS(279),
    [anon_sym_SIGNIN] = ACTIONS(279),
    [anon_sym_TABLE] = ACTIONS(279),
    [anon_sym_DROP] = ACTIONS(279),
    [anon_sym_SCHEMAFULL] = ACTIONS(279),
    [anon_sym_SCHEMALESS] = ACTIONS(279),
    [anon_sym_AS] = ACTIONS(279),
    [anon_sym_PERMISSIONS] = ACTIONS(279),
    [anon_sym_FULL] = ACTIONS(279),
    [anon_sym_FOR] = ACTIONS(279),
    [anon_sym_select] = ACTIONS(279),
    [anon_sym_update] = ACTIONS(279),
    [anon_sym_create] = ACTIONS(279),
    [anon_sym_delete] = ACTIONS(279),
    [anon_sym_EVENT] = ACTIONS(279),
    [anon_sym_WHEN] = ACTIONS(279),
    [anon_sym_ASSERT] = ACTIONS(279),
    [anon_sym_INDEX] = ACTIONS(279),
    [anon_sym_FIELD] = ACTIONS(279),
    [anon_sym_FIELDS] = ACTIONS(279),
    [anon_sym_COLUMNS] = ACTIONS(279),
    [anon_sym_UNIQUE] = ACTIONS(279),
    [anon_sym_DEFAULT] = ACTIONS(279),
    [anon_sym_READONLY] = ACTIONS(279),
    [anon_sym_REMOVE] = ACTIONS(279),
    [anon_sym_SLEEP] = ACTIONS(279),
    [anon_sym_INFO] = ACTIONS(279),
    [anon_sym_KV] = ACTIONS(279),
    [anon_sym_TO] = ACTIONS(279),
    [anon_sym_OUT] = ACTIONS(279),
    [anon_sym_IFNOT] = ACTIONS(277),
    [anon_sym_EXISTS] = ACTIONS(279),
    [anon_sym_FUNCTION] = ACTIONS(279),
    [anon_sym_PARAM] = ACTIONS(279),
    [anon_sym_LIVE] = ACTIONS(279),
    [anon_sym_ONLY] = ACTIONS(279),
    [anon_sym_OMIT] = ACTIONS(279),
    [anon_sym_OPTION] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_AND] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_OR] = ACTIONS(279),
    [anon_sym_QMARK_QMARK] = ACTIONS(277),
    [anon_sym_QMARK_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_IS] = ACTIONS(279),
    [anon_sym_BANG_EQ] = ACTIONS(277),
    [anon_sym_ISNOT] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(277),
    [anon_sym_QMARK_EQ] = ACTIONS(277),
    [anon_sym_STAR_EQ] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(277),
    [anon_sym_BANG_TILDE] = ACTIONS(277),
    [anon_sym_QMARK_TILDE] = ACTIONS(277),
    [anon_sym_STAR_TILDE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(279),
    [anon_sym_x] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_] = ACTIONS(277),
    [anon_sym_STAR_STAR] = ACTIONS(277),
    [anon_sym_IN] = ACTIONS(279),
    [anon_sym_CONTAINS] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(277),
    [anon_sym_CONTAINSNOT] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(277),
    [anon_sym_CONTAINSALL] = ACTIONS(279),
    [anon_sym_4] = ACTIONS(277),
    [anon_sym_CONTAINSANY] = ACTIONS(279),
    [anon_sym_5] = ACTIONS(277),
    [anon_sym_CONTAINSNONE] = ACTIONS(279),
    [anon_sym_6] = ACTIONS(277),
    [anon_sym_INSIDE] = ACTIONS(279),
    [anon_sym_7] = ACTIONS(277),
    [anon_sym_NOTINSIDE] = ACTIONS(279),
    [anon_sym_NOTIN] = ACTIONS(277),
    [anon_sym_8] = ACTIONS(277),
    [anon_sym_ALLINSIDE] = ACTIONS(279),
    [anon_sym_9] = ACTIONS(277),
    [anon_sym_ANYINSIDE] = ACTIONS(279),
    [anon_sym_10] = ACTIONS(277),
    [anon_sym_NONEINSIDE] = ACTIONS(279),
    [anon_sym_11] = ACTIONS(277),
    [anon_sym_OUTSIDE] = ACTIONS(279),
    [anon_sym_INTERSECTS] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_DASH_GT] = ACTIONS(277),
    [anon_sym_LT_DASH] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [aux_sym_function_token1] = ACTIONS(277),
    [aux_sym_function_token2] = ACTIONS(277),
    [aux_sym_function_token3] = ACTIONS(277),
    [anon_sym_count] = ACTIONS(279),
    [aux_sym_function_token4] = ACTIONS(277),
    [aux_sym_function_token5] = ACTIONS(277),
    [aux_sym_function_token6] = ACTIONS(277),
    [aux_sym_function_token7] = ACTIONS(277),
    [aux_sym_function_token8] = ACTIONS(277),
    [aux_sym_function_token9] = ACTIONS(277),
    [aux_sym_function_token10] = ACTIONS(277),
    [aux_sym_function_token11] = ACTIONS(279),
    [aux_sym_function_token12] = ACTIONS(277),
    [aux_sym_function_token13] = ACTIONS(279),
    [aux_sym_function_token14] = ACTIONS(277),
    [aux_sym_function_token15] = ACTIONS(277),
    [aux_sym_function_token16] = ACTIONS(277),
    [aux_sym_function_token17] = ACTIONS(279),
    [anon_sym_any] = ACTIONS(279),
    [anon_sym_array] = ACTIONS(279),
    [anon_sym_bool] = ACTIONS(279),
    [anon_sym_datetime] = ACTIONS(279),
    [anon_sym_decimal] = ACTIONS(279),
    [anon_sym_duration] = ACTIONS(279),
    [anon_sym_float] = ACTIONS(279),
    [anon_sym_int] = ACTIONS(279),
    [anon_sym_number] = ACTIONS(279),
    [anon_sym_object] = ACTIONS(279),
    [anon_sym_string] = ACTIONS(279),
    [anon_sym_record] = ACTIONS(279),
    [anon_sym_option] = ACTIONS(279),
    [anon_sym_geometry] = ACTIONS(279),
    [anon_sym_EDDSA] = ACTIONS(279),
    [anon_sym_ES256] = ACTIONS(279),
    [anon_sym_ES384] = ACTIONS(279),
    [anon_sym_ES512] = ACTIONS(279),
    [anon_sym_HS256] = ACTIONS(279),
    [anon_sym_HS384] = ACTIONS(279),
    [anon_sym_HS512] = ACTIONS(279),
    [anon_sym_PS256] = ACTIONS(279),
    [anon_sym_PS384] = ACTIONS(279),
    [anon_sym_PS512] = ACTIONS(279),
    [anon_sym_RS256] = ACTIONS(279),
    [anon_sym_RS384] = ACTIONS(279),
    [anon_sym_RS512] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_TRUE] = ACTIONS(279),
    [anon_sym_FALSE] = ACTIONS(279),
    [anon_sym_null] = ACTIONS(279),
    [anon_sym_NULL] = ACTIONS(279),
    [anon_sym_none] = ACTIONS(279),
    [anon_sym_NONE] = ACTIONS(279),
    [sym_variable] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
  },
  [45] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE_SEMI] = ACTIONS(281),
    [anon_sym_RBRACE_COMMA] = ACTIONS(281),
    [aux_sym_future_token1] = ACTIONS(281),
    [aux_sym_casting_token1] = ACTIONS(281),
    [aux_sym_property_token1] = ACTIONS(283),
    [aux_sym_identifier_token1] = ACTIONS(283),
    [aux_sym_duration_token1] = ACTIONS(283),
    [aux_sym_constant_token1] = ACTIONS(281),
    [aux_sym_number_token1] = ACTIONS(283),
    [aux_sym_record_token1] = ACTIONS(281),
    [aux_sym_record_token2] = ACTIONS(281),
    [anon_sym_USE] = ACTIONS(283),
    [anon_sym_NS] = ACTIONS(283),
    [anon_sym_DB] = ACTIONS(283),
    [anon_sym_LET] = ACTIONS(283),
    [anon_sym_BEGIN] = ACTIONS(283),
    [anon_sym_TRANSACTION] = ACTIONS(283),
    [anon_sym_CANCEL] = ACTIONS(283),
    [anon_sym_COMMIT] = ACTIONS(283),
    [anon_sym_IF] = ACTIONS(283),
    [anon_sym_ELSE] = ACTIONS(283),
    [anon_sym_THEN] = ACTIONS(283),
    [anon_sym_END] = ACTIONS(283),
    [anon_sym_SELECT] = ACTIONS(283),
    [anon_sym_FROM] = ACTIONS(283),
    [anon_sym_WHERE] = ACTIONS(283),
    [anon_sym_SPLIT] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_GROUP] = ACTIONS(283),
    [anon_sym_BY] = ACTIONS(283),
    [anon_sym_ORDER] = ACTIONS(283),
    [anon_sym_COLLATE] = ACTIONS(283),
    [anon_sym_NUMERIC] = ACTIONS(283),
    [anon_sym_ASC] = ACTIONS(283),
    [anon_sym_DESC] = ACTIONS(283),
    [anon_sym_LIMIT] = ACTIONS(283),
    [anon_sym_START] = ACTIONS(283),
    [anon_sym_FETCH] = ACTIONS(283),
    [anon_sym_TIMEOUT] = ACTIONS(283),
    [anon_sym_PARALLEL] = ACTIONS(283),
    [anon_sym_INSERT] = ACTIONS(283),
    [anon_sym_IGNORE] = ACTIONS(283),
    [anon_sym_INTO] = ACTIONS(283),
    [anon_sym_VALUES] = ACTIONS(283),
    [anon_sym_ON] = ACTIONS(283),
    [anon_sym_DUPLICATE] = ACTIONS(283),
    [anon_sym_KEY] = ACTIONS(283),
    [anon_sym_UPDATE] = ACTIONS(283),
    [anon_sym_CREATE] = ACTIONS(283),
    [anon_sym_CONTENT] = ACTIONS(283),
    [anon_sym_SET] = ACTIONS(283),
    [anon_sym_RETURN] = ACTIONS(283),
    [anon_sym_BEFORE] = ACTIONS(283),
    [anon_sym_AFTER] = ACTIONS(283),
    [anon_sym_DIFF] = ACTIONS(283),
    [anon_sym_MERGE] = ACTIONS(283),
    [anon_sym_PATCH] = ACTIONS(283),
    [anon_sym_RELATE] = ACTIONS(283),
    [anon_sym_DELETE] = ACTIONS(283),
    [anon_sym_DEFINE] = ACTIONS(283),
    [anon_sym_NAMESPACE] = ACTIONS(283),
    [anon_sym_DATABASE] = ACTIONS(283),
    [anon_sym_USER] = ACTIONS(283),
    [anon_sym_PASSWORD] = ACTIONS(283),
    [anon_sym_PASSHASH] = ACTIONS(283),
    [anon_sym_TOKEN] = ACTIONS(283),
    [anon_sym_SCOPE] = ACTIONS(283),
    [anon_sym_TYPE] = ACTIONS(283),
    [anon_sym_VALUE] = ACTIONS(283),
    [anon_sym_SESSION] = ACTIONS(283),
    [anon_sym_SIGNUP] = ACTIONS(283),
    [anon_sym_SIGNIN] = ACTIONS(283),
    [anon_sym_TABLE] = ACTIONS(283),
    [anon_sym_DROP] = ACTIONS(283),
    [anon_sym_SCHEMAFULL] = ACTIONS(283),
    [anon_sym_SCHEMALESS] = ACTIONS(283),
    [anon_sym_AS] = ACTIONS(283),
    [anon_sym_PERMISSIONS] = ACTIONS(283),
    [anon_sym_FULL] = ACTIONS(283),
    [anon_sym_FOR] = ACTIONS(283),
    [anon_sym_select] = ACTIONS(283),
    [anon_sym_update] = ACTIONS(283),
    [anon_sym_create] = ACTIONS(283),
    [anon_sym_delete] = ACTIONS(283),
    [anon_sym_EVENT] = ACTIONS(283),
    [anon_sym_WHEN] = ACTIONS(283),
    [anon_sym_ASSERT] = ACTIONS(283),
    [anon_sym_INDEX] = ACTIONS(283),
    [anon_sym_FIELD] = ACTIONS(283),
    [anon_sym_FIELDS] = ACTIONS(283),
    [anon_sym_COLUMNS] = ACTIONS(283),
    [anon_sym_UNIQUE] = ACTIONS(283),
    [anon_sym_DEFAULT] = ACTIONS(283),
    [anon_sym_READONLY] = ACTIONS(283),
    [anon_sym_REMOVE] = ACTIONS(283),
    [anon_sym_SLEEP] = ACTIONS(283),
    [anon_sym_INFO] = ACTIONS(283),
    [anon_sym_KV] = ACTIONS(283),
    [anon_sym_TO] = ACTIONS(283),
    [anon_sym_OUT] = ACTIONS(283),
    [anon_sym_IFNOT] = ACTIONS(281),
    [anon_sym_EXISTS] = ACTIONS(283),
    [anon_sym_FUNCTION] = ACTIONS(283),
    [anon_sym_PARAM] = ACTIONS(283),
    [anon_sym_LIVE] = ACTIONS(283),
    [anon_sym_ONLY] = ACTIONS(283),
    [anon_sym_OMIT] = ACTIONS(283),
    [anon_sym_OPTION] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_AND] = ACTIONS(283),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_OR] = ACTIONS(283),
    [anon_sym_QMARK_QMARK] = ACTIONS(281),
    [anon_sym_QMARK_COLON] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_IS] = ACTIONS(283),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_ISNOT] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_QMARK_EQ] = ACTIONS(281),
    [anon_sym_STAR_EQ] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_BANG_TILDE] = ACTIONS(281),
    [anon_sym_QMARK_TILDE] = ACTIONS(281),
    [anon_sym_STAR_TILDE] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(283),
    [anon_sym_x] = ACTIONS(283),
    [anon_sym_SLASH] = ACTIONS(281),
    [anon_sym_] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(281),
    [anon_sym_IN] = ACTIONS(283),
    [anon_sym_CONTAINS] = ACTIONS(283),
    [anon_sym_2] = ACTIONS(281),
    [anon_sym_CONTAINSNOT] = ACTIONS(283),
    [anon_sym_3] = ACTIONS(281),
    [anon_sym_CONTAINSALL] = ACTIONS(283),
    [anon_sym_4] = ACTIONS(281),
    [anon_sym_CONTAINSANY] = ACTIONS(283),
    [anon_sym_5] = ACTIONS(281),
    [anon_sym_CONTAINSNONE] = ACTIONS(283),
    [anon_sym_6] = ACTIONS(281),
    [anon_sym_INSIDE] = ACTIONS(283),
    [anon_sym_7] = ACTIONS(281),
    [anon_sym_NOTINSIDE] = ACTIONS(283),
    [anon_sym_NOTIN] = ACTIONS(281),
    [anon_sym_8] = ACTIONS(281),
    [anon_sym_ALLINSIDE] = ACTIONS(283),
    [anon_sym_9] = ACTIONS(281),
    [anon_sym_ANYINSIDE] = ACTIONS(283),
    [anon_sym_10] = ACTIONS(281),
    [anon_sym_NONEINSIDE] = ACTIONS(283),
    [anon_sym_11] = ACTIONS(281),
    [anon_sym_OUTSIDE] = ACTIONS(283),
    [anon_sym_INTERSECTS] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_DASH_GT] = ACTIONS(281),
    [anon_sym_LT_DASH] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [aux_sym_function_token1] = ACTIONS(281),
    [aux_sym_function_token2] = ACTIONS(281),
    [aux_sym_function_token3] = ACTIONS(281),
    [anon_sym_count] = ACTIONS(283),
    [aux_sym_function_token4] = ACTIONS(281),
    [aux_sym_function_token5] = ACTIONS(281),
    [aux_sym_function_token6] = ACTIONS(281),
    [aux_sym_function_token7] = ACTIONS(281),
    [aux_sym_function_token8] = ACTIONS(281),
    [aux_sym_function_token9] = ACTIONS(281),
    [aux_sym_function_token10] = ACTIONS(281),
    [aux_sym_function_token11] = ACTIONS(283),
    [aux_sym_function_token12] = ACTIONS(281),
    [aux_sym_function_token13] = ACTIONS(283),
    [aux_sym_function_token14] = ACTIONS(281),
    [aux_sym_function_token15] = ACTIONS(281),
    [aux_sym_function_token16] = ACTIONS(281),
    [aux_sym_function_token17] = ACTIONS(283),
    [anon_sym_any] = ACTIONS(283),
    [anon_sym_array] = ACTIONS(283),
    [anon_sym_bool] = ACTIONS(283),
    [anon_sym_datetime] = ACTIONS(283),
    [anon_sym_decimal] = ACTIONS(283),
    [anon_sym_duration] = ACTIONS(283),
    [anon_sym_float] = ACTIONS(283),
    [anon_sym_int] = ACTIONS(283),
    [anon_sym_number] = ACTIONS(283),
    [anon_sym_object] = ACTIONS(283),
    [anon_sym_string] = ACTIONS(283),
    [anon_sym_record] = ACTIONS(283),
    [anon_sym_option] = ACTIONS(283),
    [anon_sym_geometry] = ACTIONS(283),
    [anon_sym_EDDSA] = ACTIONS(283),
    [anon_sym_ES256] = ACTIONS(283),
    [anon_sym_ES384] = ACTIONS(283),
    [anon_sym_ES512] = ACTIONS(283),
    [anon_sym_HS256] = ACTIONS(283),
    [anon_sym_HS384] = ACTIONS(283),
    [anon_sym_HS512] = ACTIONS(283),
    [anon_sym_PS256] = ACTIONS(283),
    [anon_sym_PS384] = ACTIONS(283),
    [anon_sym_PS512] = ACTIONS(283),
    [anon_sym_RS256] = ACTIONS(283),
    [anon_sym_RS384] = ACTIONS(283),
    [anon_sym_RS512] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_TRUE] = ACTIONS(283),
    [anon_sym_FALSE] = ACTIONS(283),
    [anon_sym_null] = ACTIONS(283),
    [anon_sym_NULL] = ACTIONS(283),
    [anon_sym_none] = ACTIONS(283),
    [anon_sym_NONE] = ACTIONS(283),
    [sym_variable] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
  },
  [46] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE_SEMI] = ACTIONS(285),
    [anon_sym_RBRACE_COMMA] = ACTIONS(285),
    [aux_sym_future_token1] = ACTIONS(285),
    [aux_sym_casting_token1] = ACTIONS(285),
    [aux_sym_property_token1] = ACTIONS(287),
    [aux_sym_identifier_token1] = ACTIONS(287),
    [aux_sym_duration_token1] = ACTIONS(287),
    [aux_sym_constant_token1] = ACTIONS(285),
    [aux_sym_number_token1] = ACTIONS(287),
    [aux_sym_record_token1] = ACTIONS(285),
    [aux_sym_record_token2] = ACTIONS(285),
    [anon_sym_USE] = ACTIONS(287),
    [anon_sym_NS] = ACTIONS(287),
    [anon_sym_DB] = ACTIONS(287),
    [anon_sym_LET] = ACTIONS(287),
    [anon_sym_BEGIN] = ACTIONS(287),
    [anon_sym_TRANSACTION] = ACTIONS(287),
    [anon_sym_CANCEL] = ACTIONS(287),
    [anon_sym_COMMIT] = ACTIONS(287),
    [anon_sym_IF] = ACTIONS(287),
    [anon_sym_ELSE] = ACTIONS(287),
    [anon_sym_THEN] = ACTIONS(287),
    [anon_sym_END] = ACTIONS(287),
    [anon_sym_SELECT] = ACTIONS(287),
    [anon_sym_FROM] = ACTIONS(287),
    [anon_sym_WHERE] = ACTIONS(287),
    [anon_sym_SPLIT] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_GROUP] = ACTIONS(287),
    [anon_sym_BY] = ACTIONS(287),
    [anon_sym_ORDER] = ACTIONS(287),
    [anon_sym_COLLATE] = ACTIONS(287),
    [anon_sym_NUMERIC] = ACTIONS(287),
    [anon_sym_ASC] = ACTIONS(287),
    [anon_sym_DESC] = ACTIONS(287),
    [anon_sym_LIMIT] = ACTIONS(287),
    [anon_sym_START] = ACTIONS(287),
    [anon_sym_FETCH] = ACTIONS(287),
    [anon_sym_TIMEOUT] = ACTIONS(287),
    [anon_sym_PARALLEL] = ACTIONS(287),
    [anon_sym_INSERT] = ACTIONS(287),
    [anon_sym_IGNORE] = ACTIONS(287),
    [anon_sym_INTO] = ACTIONS(287),
    [anon_sym_VALUES] = ACTIONS(287),
    [anon_sym_ON] = ACTIONS(287),
    [anon_sym_DUPLICATE] = ACTIONS(287),
    [anon_sym_KEY] = ACTIONS(287),
    [anon_sym_UPDATE] = ACTIONS(287),
    [anon_sym_CREATE] = ACTIONS(287),
    [anon_sym_CONTENT] = ACTIONS(287),
    [anon_sym_SET] = ACTIONS(287),
    [anon_sym_RETURN] = ACTIONS(287),
    [anon_sym_BEFORE] = ACTIONS(287),
    [anon_sym_AFTER] = ACTIONS(287),
    [anon_sym_DIFF] = ACTIONS(287),
    [anon_sym_MERGE] = ACTIONS(287),
    [anon_sym_PATCH] = ACTIONS(287),
    [anon_sym_RELATE] = ACTIONS(287),
    [anon_sym_DELETE] = ACTIONS(287),
    [anon_sym_DEFINE] = ACTIONS(287),
    [anon_sym_NAMESPACE] = ACTIONS(287),
    [anon_sym_DATABASE] = ACTIONS(287),
    [anon_sym_USER] = ACTIONS(287),
    [anon_sym_PASSWORD] = ACTIONS(287),
    [anon_sym_PASSHASH] = ACTIONS(287),
    [anon_sym_TOKEN] = ACTIONS(287),
    [anon_sym_SCOPE] = ACTIONS(287),
    [anon_sym_TYPE] = ACTIONS(287),
    [anon_sym_VALUE] = ACTIONS(287),
    [anon_sym_SESSION] = ACTIONS(287),
    [anon_sym_SIGNUP] = ACTIONS(287),
    [anon_sym_SIGNIN] = ACTIONS(287),
    [anon_sym_TABLE] = ACTIONS(287),
    [anon_sym_DROP] = ACTIONS(287),
    [anon_sym_SCHEMAFULL] = ACTIONS(287),
    [anon_sym_SCHEMALESS] = ACTIONS(287),
    [anon_sym_AS] = ACTIONS(287),
    [anon_sym_PERMISSIONS] = ACTIONS(287),
    [anon_sym_FULL] = ACTIONS(287),
    [anon_sym_FOR] = ACTIONS(287),
    [anon_sym_select] = ACTIONS(287),
    [anon_sym_update] = ACTIONS(287),
    [anon_sym_create] = ACTIONS(287),
    [anon_sym_delete] = ACTIONS(287),
    [anon_sym_EVENT] = ACTIONS(287),
    [anon_sym_WHEN] = ACTIONS(287),
    [anon_sym_ASSERT] = ACTIONS(287),
    [anon_sym_INDEX] = ACTIONS(287),
    [anon_sym_FIELD] = ACTIONS(287),
    [anon_sym_FIELDS] = ACTIONS(287),
    [anon_sym_COLUMNS] = ACTIONS(287),
    [anon_sym_UNIQUE] = ACTIONS(287),
    [anon_sym_DEFAULT] = ACTIONS(287),
    [anon_sym_READONLY] = ACTIONS(287),
    [anon_sym_REMOVE] = ACTIONS(287),
    [anon_sym_SLEEP] = ACTIONS(287),
    [anon_sym_INFO] = ACTIONS(287),
    [anon_sym_KV] = ACTIONS(287),
    [anon_sym_TO] = ACTIONS(287),
    [anon_sym_OUT] = ACTIONS(287),
    [anon_sym_IFNOT] = ACTIONS(285),
    [anon_sym_EXISTS] = ACTIONS(287),
    [anon_sym_FUNCTION] = ACTIONS(287),
    [anon_sym_PARAM] = ACTIONS(287),
    [anon_sym_LIVE] = ACTIONS(287),
    [anon_sym_ONLY] = ACTIONS(287),
    [anon_sym_OMIT] = ACTIONS(287),
    [anon_sym_OPTION] = ACTIONS(287),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_AND] = ACTIONS(287),
    [anon_sym_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_OR] = ACTIONS(287),
    [anon_sym_QMARK_QMARK] = ACTIONS(285),
    [anon_sym_QMARK_COLON] = ACTIONS(285),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_IS] = ACTIONS(287),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_ISNOT] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_QMARK_EQ] = ACTIONS(285),
    [anon_sym_STAR_EQ] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(285),
    [anon_sym_BANG_TILDE] = ACTIONS(285),
    [anon_sym_QMARK_TILDE] = ACTIONS(285),
    [anon_sym_STAR_TILDE] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(287),
    [anon_sym_STAR] = ACTIONS(287),
    [anon_sym_x] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(285),
    [anon_sym_IN] = ACTIONS(287),
    [anon_sym_CONTAINS] = ACTIONS(287),
    [anon_sym_2] = ACTIONS(285),
    [anon_sym_CONTAINSNOT] = ACTIONS(287),
    [anon_sym_3] = ACTIONS(285),
    [anon_sym_CONTAINSALL] = ACTIONS(287),
    [anon_sym_4] = ACTIONS(285),
    [anon_sym_CONTAINSANY] = ACTIONS(287),
    [anon_sym_5] = ACTIONS(285),
    [anon_sym_CONTAINSNONE] = ACTIONS(287),
    [anon_sym_6] = ACTIONS(285),
    [anon_sym_INSIDE] = ACTIONS(287),
    [anon_sym_7] = ACTIONS(285),
    [anon_sym_NOTINSIDE] = ACTIONS(287),
    [anon_sym_NOTIN] = ACTIONS(285),
    [anon_sym_8] = ACTIONS(285),
    [anon_sym_ALLINSIDE] = ACTIONS(287),
    [anon_sym_9] = ACTIONS(285),
    [anon_sym_ANYINSIDE] = ACTIONS(287),
    [anon_sym_10] = ACTIONS(285),
    [anon_sym_NONEINSIDE] = ACTIONS(287),
    [anon_sym_11] = ACTIONS(285),
    [anon_sym_OUTSIDE] = ACTIONS(287),
    [anon_sym_INTERSECTS] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_DASH_GT] = ACTIONS(285),
    [anon_sym_LT_DASH] = ACTIONS(285),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [aux_sym_function_token1] = ACTIONS(285),
    [aux_sym_function_token2] = ACTIONS(285),
    [aux_sym_function_token3] = ACTIONS(285),
    [anon_sym_count] = ACTIONS(287),
    [aux_sym_function_token4] = ACTIONS(285),
    [aux_sym_function_token5] = ACTIONS(285),
    [aux_sym_function_token6] = ACTIONS(285),
    [aux_sym_function_token7] = ACTIONS(285),
    [aux_sym_function_token8] = ACTIONS(285),
    [aux_sym_function_token9] = ACTIONS(285),
    [aux_sym_function_token10] = ACTIONS(285),
    [aux_sym_function_token11] = ACTIONS(287),
    [aux_sym_function_token12] = ACTIONS(285),
    [aux_sym_function_token13] = ACTIONS(287),
    [aux_sym_function_token14] = ACTIONS(285),
    [aux_sym_function_token15] = ACTIONS(285),
    [aux_sym_function_token16] = ACTIONS(285),
    [aux_sym_function_token17] = ACTIONS(287),
    [anon_sym_any] = ACTIONS(287),
    [anon_sym_array] = ACTIONS(287),
    [anon_sym_bool] = ACTIONS(287),
    [anon_sym_datetime] = ACTIONS(287),
    [anon_sym_decimal] = ACTIONS(287),
    [anon_sym_duration] = ACTIONS(287),
    [anon_sym_float] = ACTIONS(287),
    [anon_sym_int] = ACTIONS(287),
    [anon_sym_number] = ACTIONS(287),
    [anon_sym_object] = ACTIONS(287),
    [anon_sym_string] = ACTIONS(287),
    [anon_sym_record] = ACTIONS(287),
    [anon_sym_option] = ACTIONS(287),
    [anon_sym_geometry] = ACTIONS(287),
    [anon_sym_EDDSA] = ACTIONS(287),
    [anon_sym_ES256] = ACTIONS(287),
    [anon_sym_ES384] = ACTIONS(287),
    [anon_sym_ES512] = ACTIONS(287),
    [anon_sym_HS256] = ACTIONS(287),
    [anon_sym_HS384] = ACTIONS(287),
    [anon_sym_HS512] = ACTIONS(287),
    [anon_sym_PS256] = ACTIONS(287),
    [anon_sym_PS384] = ACTIONS(287),
    [anon_sym_PS512] = ACTIONS(287),
    [anon_sym_RS256] = ACTIONS(287),
    [anon_sym_RS384] = ACTIONS(287),
    [anon_sym_RS512] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_TRUE] = ACTIONS(287),
    [anon_sym_FALSE] = ACTIONS(287),
    [anon_sym_null] = ACTIONS(287),
    [anon_sym_NULL] = ACTIONS(287),
    [anon_sym_none] = ACTIONS(287),
    [anon_sym_NONE] = ACTIONS(287),
    [sym_variable] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
  },
  [47] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE_SEMI] = ACTIONS(289),
    [anon_sym_RBRACE_COMMA] = ACTIONS(289),
    [aux_sym_future_token1] = ACTIONS(289),
    [aux_sym_casting_token1] = ACTIONS(289),
    [aux_sym_property_token1] = ACTIONS(291),
    [aux_sym_identifier_token1] = ACTIONS(291),
    [aux_sym_duration_token1] = ACTIONS(291),
    [aux_sym_constant_token1] = ACTIONS(289),
    [aux_sym_number_token1] = ACTIONS(291),
    [aux_sym_record_token1] = ACTIONS(289),
    [aux_sym_record_token2] = ACTIONS(289),
    [anon_sym_USE] = ACTIONS(291),
    [anon_sym_NS] = ACTIONS(291),
    [anon_sym_DB] = ACTIONS(291),
    [anon_sym_LET] = ACTIONS(291),
    [anon_sym_BEGIN] = ACTIONS(291),
    [anon_sym_TRANSACTION] = ACTIONS(291),
    [anon_sym_CANCEL] = ACTIONS(291),
    [anon_sym_COMMIT] = ACTIONS(291),
    [anon_sym_IF] = ACTIONS(291),
    [anon_sym_ELSE] = ACTIONS(291),
    [anon_sym_THEN] = ACTIONS(291),
    [anon_sym_END] = ACTIONS(291),
    [anon_sym_SELECT] = ACTIONS(291),
    [anon_sym_FROM] = ACTIONS(291),
    [anon_sym_WHERE] = ACTIONS(291),
    [anon_sym_SPLIT] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_GROUP] = ACTIONS(291),
    [anon_sym_BY] = ACTIONS(291),
    [anon_sym_ORDER] = ACTIONS(291),
    [anon_sym_COLLATE] = ACTIONS(291),
    [anon_sym_NUMERIC] = ACTIONS(291),
    [anon_sym_ASC] = ACTIONS(291),
    [anon_sym_DESC] = ACTIONS(291),
    [anon_sym_LIMIT] = ACTIONS(291),
    [anon_sym_START] = ACTIONS(291),
    [anon_sym_FETCH] = ACTIONS(291),
    [anon_sym_TIMEOUT] = ACTIONS(291),
    [anon_sym_PARALLEL] = ACTIONS(291),
    [anon_sym_INSERT] = ACTIONS(291),
    [anon_sym_IGNORE] = ACTIONS(291),
    [anon_sym_INTO] = ACTIONS(291),
    [anon_sym_VALUES] = ACTIONS(291),
    [anon_sym_ON] = ACTIONS(291),
    [anon_sym_DUPLICATE] = ACTIONS(291),
    [anon_sym_KEY] = ACTIONS(291),
    [anon_sym_UPDATE] = ACTIONS(291),
    [anon_sym_CREATE] = ACTIONS(291),
    [anon_sym_CONTENT] = ACTIONS(291),
    [anon_sym_SET] = ACTIONS(291),
    [anon_sym_RETURN] = ACTIONS(291),
    [anon_sym_BEFORE] = ACTIONS(291),
    [anon_sym_AFTER] = ACTIONS(291),
    [anon_sym_DIFF] = ACTIONS(291),
    [anon_sym_MERGE] = ACTIONS(291),
    [anon_sym_PATCH] = ACTIONS(291),
    [anon_sym_RELATE] = ACTIONS(291),
    [anon_sym_DELETE] = ACTIONS(291),
    [anon_sym_DEFINE] = ACTIONS(291),
    [anon_sym_NAMESPACE] = ACTIONS(291),
    [anon_sym_DATABASE] = ACTIONS(291),
    [anon_sym_USER] = ACTIONS(291),
    [anon_sym_PASSWORD] = ACTIONS(291),
    [anon_sym_PASSHASH] = ACTIONS(291),
    [anon_sym_TOKEN] = ACTIONS(291),
    [anon_sym_SCOPE] = ACTIONS(291),
    [anon_sym_TYPE] = ACTIONS(291),
    [anon_sym_VALUE] = ACTIONS(291),
    [anon_sym_SESSION] = ACTIONS(291),
    [anon_sym_SIGNUP] = ACTIONS(291),
    [anon_sym_SIGNIN] = ACTIONS(291),
    [anon_sym_TABLE] = ACTIONS(291),
    [anon_sym_DROP] = ACTIONS(291),
    [anon_sym_SCHEMAFULL] = ACTIONS(291),
    [anon_sym_SCHEMALESS] = ACTIONS(291),
    [anon_sym_AS] = ACTIONS(291),
    [anon_sym_PERMISSIONS] = ACTIONS(291),
    [anon_sym_FULL] = ACTIONS(291),
    [anon_sym_FOR] = ACTIONS(291),
    [anon_sym_select] = ACTIONS(291),
    [anon_sym_update] = ACTIONS(291),
    [anon_sym_create] = ACTIONS(291),
    [anon_sym_delete] = ACTIONS(291),
    [anon_sym_EVENT] = ACTIONS(291),
    [anon_sym_WHEN] = ACTIONS(291),
    [anon_sym_ASSERT] = ACTIONS(291),
    [anon_sym_INDEX] = ACTIONS(291),
    [anon_sym_FIELD] = ACTIONS(291),
    [anon_sym_FIELDS] = ACTIONS(291),
    [anon_sym_COLUMNS] = ACTIONS(291),
    [anon_sym_UNIQUE] = ACTIONS(291),
    [anon_sym_DEFAULT] = ACTIONS(291),
    [anon_sym_READONLY] = ACTIONS(291),
    [anon_sym_REMOVE] = ACTIONS(291),
    [anon_sym_SLEEP] = ACTIONS(291),
    [anon_sym_INFO] = ACTIONS(291),
    [anon_sym_KV] = ACTIONS(291),
    [anon_sym_TO] = ACTIONS(291),
    [anon_sym_OUT] = ACTIONS(291),
    [anon_sym_IFNOT] = ACTIONS(289),
    [anon_sym_EXISTS] = ACTIONS(291),
    [anon_sym_FUNCTION] = ACTIONS(291),
    [anon_sym_PARAM] = ACTIONS(291),
    [anon_sym_LIVE] = ACTIONS(291),
    [anon_sym_ONLY] = ACTIONS(291),
    [anon_sym_OMIT] = ACTIONS(291),
    [anon_sym_OPTION] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_AND] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_OR] = ACTIONS(291),
    [anon_sym_QMARK_QMARK] = ACTIONS(289),
    [anon_sym_QMARK_COLON] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_IS] = ACTIONS(291),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_ISNOT] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_QMARK_EQ] = ACTIONS(289),
    [anon_sym_STAR_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_BANG_TILDE] = ACTIONS(289),
    [anon_sym_QMARK_TILDE] = ACTIONS(289),
    [anon_sym_STAR_TILDE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_x] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_] = ACTIONS(289),
    [anon_sym_STAR_STAR] = ACTIONS(289),
    [anon_sym_IN] = ACTIONS(291),
    [anon_sym_CONTAINS] = ACTIONS(291),
    [anon_sym_2] = ACTIONS(289),
    [anon_sym_CONTAINSNOT] = ACTIONS(291),
    [anon_sym_3] = ACTIONS(289),
    [anon_sym_CONTAINSALL] = ACTIONS(291),
    [anon_sym_4] = ACTIONS(289),
    [anon_sym_CONTAINSANY] = ACTIONS(291),
    [anon_sym_5] = ACTIONS(289),
    [anon_sym_CONTAINSNONE] = ACTIONS(291),
    [anon_sym_6] = ACTIONS(289),
    [anon_sym_INSIDE] = ACTIONS(291),
    [anon_sym_7] = ACTIONS(289),
    [anon_sym_NOTINSIDE] = ACTIONS(291),
    [anon_sym_NOTIN] = ACTIONS(289),
    [anon_sym_8] = ACTIONS(289),
    [anon_sym_ALLINSIDE] = ACTIONS(291),
    [anon_sym_9] = ACTIONS(289),
    [anon_sym_ANYINSIDE] = ACTIONS(291),
    [anon_sym_10] = ACTIONS(289),
    [anon_sym_NONEINSIDE] = ACTIONS(291),
    [anon_sym_11] = ACTIONS(289),
    [anon_sym_OUTSIDE] = ACTIONS(291),
    [anon_sym_INTERSECTS] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_DASH_GT] = ACTIONS(289),
    [anon_sym_LT_DASH] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [aux_sym_function_token1] = ACTIONS(289),
    [aux_sym_function_token2] = ACTIONS(289),
    [aux_sym_function_token3] = ACTIONS(289),
    [anon_sym_count] = ACTIONS(291),
    [aux_sym_function_token4] = ACTIONS(289),
    [aux_sym_function_token5] = ACTIONS(289),
    [aux_sym_function_token6] = ACTIONS(289),
    [aux_sym_function_token7] = ACTIONS(289),
    [aux_sym_function_token8] = ACTIONS(289),
    [aux_sym_function_token9] = ACTIONS(289),
    [aux_sym_function_token10] = ACTIONS(289),
    [aux_sym_function_token11] = ACTIONS(291),
    [aux_sym_function_token12] = ACTIONS(289),
    [aux_sym_function_token13] = ACTIONS(291),
    [aux_sym_function_token14] = ACTIONS(289),
    [aux_sym_function_token15] = ACTIONS(289),
    [aux_sym_function_token16] = ACTIONS(289),
    [aux_sym_function_token17] = ACTIONS(291),
    [anon_sym_any] = ACTIONS(291),
    [anon_sym_array] = ACTIONS(291),
    [anon_sym_bool] = ACTIONS(291),
    [anon_sym_datetime] = ACTIONS(291),
    [anon_sym_decimal] = ACTIONS(291),
    [anon_sym_duration] = ACTIONS(291),
    [anon_sym_float] = ACTIONS(291),
    [anon_sym_int] = ACTIONS(291),
    [anon_sym_number] = ACTIONS(291),
    [anon_sym_object] = ACTIONS(291),
    [anon_sym_string] = ACTIONS(291),
    [anon_sym_record] = ACTIONS(291),
    [anon_sym_option] = ACTIONS(291),
    [anon_sym_geometry] = ACTIONS(291),
    [anon_sym_EDDSA] = ACTIONS(291),
    [anon_sym_ES256] = ACTIONS(291),
    [anon_sym_ES384] = ACTIONS(291),
    [anon_sym_ES512] = ACTIONS(291),
    [anon_sym_HS256] = ACTIONS(291),
    [anon_sym_HS384] = ACTIONS(291),
    [anon_sym_HS512] = ACTIONS(291),
    [anon_sym_PS256] = ACTIONS(291),
    [anon_sym_PS384] = ACTIONS(291),
    [anon_sym_PS512] = ACTIONS(291),
    [anon_sym_RS256] = ACTIONS(291),
    [anon_sym_RS384] = ACTIONS(291),
    [anon_sym_RS512] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_TRUE] = ACTIONS(291),
    [anon_sym_FALSE] = ACTIONS(291),
    [anon_sym_null] = ACTIONS(291),
    [anon_sym_NULL] = ACTIONS(291),
    [anon_sym_none] = ACTIONS(291),
    [anon_sym_NONE] = ACTIONS(291),
    [sym_variable] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
  },
  [48] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE_SEMI] = ACTIONS(293),
    [anon_sym_RBRACE_COMMA] = ACTIONS(293),
    [aux_sym_future_token1] = ACTIONS(293),
    [aux_sym_casting_token1] = ACTIONS(293),
    [aux_sym_property_token1] = ACTIONS(295),
    [aux_sym_identifier_token1] = ACTIONS(295),
    [aux_sym_duration_token1] = ACTIONS(295),
    [aux_sym_constant_token1] = ACTIONS(293),
    [aux_sym_number_token1] = ACTIONS(295),
    [aux_sym_record_token1] = ACTIONS(293),
    [aux_sym_record_token2] = ACTIONS(293),
    [anon_sym_USE] = ACTIONS(295),
    [anon_sym_NS] = ACTIONS(295),
    [anon_sym_DB] = ACTIONS(295),
    [anon_sym_LET] = ACTIONS(295),
    [anon_sym_BEGIN] = ACTIONS(295),
    [anon_sym_TRANSACTION] = ACTIONS(295),
    [anon_sym_CANCEL] = ACTIONS(295),
    [anon_sym_COMMIT] = ACTIONS(295),
    [anon_sym_IF] = ACTIONS(295),
    [anon_sym_ELSE] = ACTIONS(295),
    [anon_sym_THEN] = ACTIONS(295),
    [anon_sym_END] = ACTIONS(295),
    [anon_sym_SELECT] = ACTIONS(295),
    [anon_sym_FROM] = ACTIONS(295),
    [anon_sym_WHERE] = ACTIONS(295),
    [anon_sym_SPLIT] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_GROUP] = ACTIONS(295),
    [anon_sym_BY] = ACTIONS(295),
    [anon_sym_ORDER] = ACTIONS(295),
    [anon_sym_COLLATE] = ACTIONS(295),
    [anon_sym_NUMERIC] = ACTIONS(295),
    [anon_sym_ASC] = ACTIONS(295),
    [anon_sym_DESC] = ACTIONS(295),
    [anon_sym_LIMIT] = ACTIONS(295),
    [anon_sym_START] = ACTIONS(295),
    [anon_sym_FETCH] = ACTIONS(295),
    [anon_sym_TIMEOUT] = ACTIONS(295),
    [anon_sym_PARALLEL] = ACTIONS(295),
    [anon_sym_INSERT] = ACTIONS(295),
    [anon_sym_IGNORE] = ACTIONS(295),
    [anon_sym_INTO] = ACTIONS(295),
    [anon_sym_VALUES] = ACTIONS(295),
    [anon_sym_ON] = ACTIONS(295),
    [anon_sym_DUPLICATE] = ACTIONS(295),
    [anon_sym_KEY] = ACTIONS(295),
    [anon_sym_UPDATE] = ACTIONS(295),
    [anon_sym_CREATE] = ACTIONS(295),
    [anon_sym_CONTENT] = ACTIONS(295),
    [anon_sym_SET] = ACTIONS(295),
    [anon_sym_RETURN] = ACTIONS(295),
    [anon_sym_BEFORE] = ACTIONS(295),
    [anon_sym_AFTER] = ACTIONS(295),
    [anon_sym_DIFF] = ACTIONS(295),
    [anon_sym_MERGE] = ACTIONS(295),
    [anon_sym_PATCH] = ACTIONS(295),
    [anon_sym_RELATE] = ACTIONS(295),
    [anon_sym_DELETE] = ACTIONS(295),
    [anon_sym_DEFINE] = ACTIONS(295),
    [anon_sym_NAMESPACE] = ACTIONS(295),
    [anon_sym_DATABASE] = ACTIONS(295),
    [anon_sym_USER] = ACTIONS(295),
    [anon_sym_PASSWORD] = ACTIONS(295),
    [anon_sym_PASSHASH] = ACTIONS(295),
    [anon_sym_TOKEN] = ACTIONS(295),
    [anon_sym_SCOPE] = ACTIONS(295),
    [anon_sym_TYPE] = ACTIONS(295),
    [anon_sym_VALUE] = ACTIONS(295),
    [anon_sym_SESSION] = ACTIONS(295),
    [anon_sym_SIGNUP] = ACTIONS(295),
    [anon_sym_SIGNIN] = ACTIONS(295),
    [anon_sym_TABLE] = ACTIONS(295),
    [anon_sym_DROP] = ACTIONS(295),
    [anon_sym_SCHEMAFULL] = ACTIONS(295),
    [anon_sym_SCHEMALESS] = ACTIONS(295),
    [anon_sym_AS] = ACTIONS(295),
    [anon_sym_PERMISSIONS] = ACTIONS(295),
    [anon_sym_FULL] = ACTIONS(295),
    [anon_sym_FOR] = ACTIONS(295),
    [anon_sym_select] = ACTIONS(295),
    [anon_sym_update] = ACTIONS(295),
    [anon_sym_create] = ACTIONS(295),
    [anon_sym_delete] = ACTIONS(295),
    [anon_sym_EVENT] = ACTIONS(295),
    [anon_sym_WHEN] = ACTIONS(295),
    [anon_sym_ASSERT] = ACTIONS(295),
    [anon_sym_INDEX] = ACTIONS(295),
    [anon_sym_FIELD] = ACTIONS(295),
    [anon_sym_FIELDS] = ACTIONS(295),
    [anon_sym_COLUMNS] = ACTIONS(295),
    [anon_sym_UNIQUE] = ACTIONS(295),
    [anon_sym_DEFAULT] = ACTIONS(295),
    [anon_sym_READONLY] = ACTIONS(295),
    [anon_sym_REMOVE] = ACTIONS(295),
    [anon_sym_SLEEP] = ACTIONS(295),
    [anon_sym_INFO] = ACTIONS(295),
    [anon_sym_KV] = ACTIONS(295),
    [anon_sym_TO] = ACTIONS(295),
    [anon_sym_OUT] = ACTIONS(295),
    [anon_sym_IFNOT] = ACTIONS(293),
    [anon_sym_EXISTS] = ACTIONS(295),
    [anon_sym_FUNCTION] = ACTIONS(295),
    [anon_sym_PARAM] = ACTIONS(295),
    [anon_sym_LIVE] = ACTIONS(295),
    [anon_sym_ONLY] = ACTIONS(295),
    [anon_sym_OMIT] = ACTIONS(295),
    [anon_sym_OPTION] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_AND] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_OR] = ACTIONS(295),
    [anon_sym_QMARK_QMARK] = ACTIONS(293),
    [anon_sym_QMARK_COLON] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_IS] = ACTIONS(295),
    [anon_sym_BANG_EQ] = ACTIONS(293),
    [anon_sym_ISNOT] = ACTIONS(293),
    [anon_sym_EQ_EQ] = ACTIONS(293),
    [anon_sym_QMARK_EQ] = ACTIONS(293),
    [anon_sym_STAR_EQ] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_BANG_TILDE] = ACTIONS(293),
    [anon_sym_QMARK_TILDE] = ACTIONS(293),
    [anon_sym_STAR_TILDE] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_LT_EQ] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_GT_EQ] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_STAR] = ACTIONS(295),
    [anon_sym_x] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_] = ACTIONS(293),
    [anon_sym_STAR_STAR] = ACTIONS(293),
    [anon_sym_IN] = ACTIONS(295),
    [anon_sym_CONTAINS] = ACTIONS(295),
    [anon_sym_2] = ACTIONS(293),
    [anon_sym_CONTAINSNOT] = ACTIONS(295),
    [anon_sym_3] = ACTIONS(293),
    [anon_sym_CONTAINSALL] = ACTIONS(295),
    [anon_sym_4] = ACTIONS(293),
    [anon_sym_CONTAINSANY] = ACTIONS(295),
    [anon_sym_5] = ACTIONS(293),
    [anon_sym_CONTAINSNONE] = ACTIONS(295),
    [anon_sym_6] = ACTIONS(293),
    [anon_sym_INSIDE] = ACTIONS(295),
    [anon_sym_7] = ACTIONS(293),
    [anon_sym_NOTINSIDE] = ACTIONS(295),
    [anon_sym_NOTIN] = ACTIONS(293),
    [anon_sym_8] = ACTIONS(293),
    [anon_sym_ALLINSIDE] = ACTIONS(295),
    [anon_sym_9] = ACTIONS(293),
    [anon_sym_ANYINSIDE] = ACTIONS(295),
    [anon_sym_10] = ACTIONS(293),
    [anon_sym_NONEINSIDE] = ACTIONS(295),
    [anon_sym_11] = ACTIONS(293),
    [anon_sym_OUTSIDE] = ACTIONS(295),
    [anon_sym_INTERSECTS] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_DASH_GT] = ACTIONS(293),
    [anon_sym_LT_DASH] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [aux_sym_function_token1] = ACTIONS(293),
    [aux_sym_function_token2] = ACTIONS(293),
    [aux_sym_function_token3] = ACTIONS(293),
    [anon_sym_count] = ACTIONS(295),
    [aux_sym_function_token4] = ACTIONS(293),
    [aux_sym_function_token5] = ACTIONS(293),
    [aux_sym_function_token6] = ACTIONS(293),
    [aux_sym_function_token7] = ACTIONS(293),
    [aux_sym_function_token8] = ACTIONS(293),
    [aux_sym_function_token9] = ACTIONS(293),
    [aux_sym_function_token10] = ACTIONS(293),
    [aux_sym_function_token11] = ACTIONS(295),
    [aux_sym_function_token12] = ACTIONS(293),
    [aux_sym_function_token13] = ACTIONS(295),
    [aux_sym_function_token14] = ACTIONS(293),
    [aux_sym_function_token15] = ACTIONS(293),
    [aux_sym_function_token16] = ACTIONS(293),
    [aux_sym_function_token17] = ACTIONS(295),
    [anon_sym_any] = ACTIONS(295),
    [anon_sym_array] = ACTIONS(295),
    [anon_sym_bool] = ACTIONS(295),
    [anon_sym_datetime] = ACTIONS(295),
    [anon_sym_decimal] = ACTIONS(295),
    [anon_sym_duration] = ACTIONS(295),
    [anon_sym_float] = ACTIONS(295),
    [anon_sym_int] = ACTIONS(295),
    [anon_sym_number] = ACTIONS(295),
    [anon_sym_object] = ACTIONS(295),
    [anon_sym_string] = ACTIONS(295),
    [anon_sym_record] = ACTIONS(295),
    [anon_sym_option] = ACTIONS(295),
    [anon_sym_geometry] = ACTIONS(295),
    [anon_sym_EDDSA] = ACTIONS(295),
    [anon_sym_ES256] = ACTIONS(295),
    [anon_sym_ES384] = ACTIONS(295),
    [anon_sym_ES512] = ACTIONS(295),
    [anon_sym_HS256] = ACTIONS(295),
    [anon_sym_HS384] = ACTIONS(295),
    [anon_sym_HS512] = ACTIONS(295),
    [anon_sym_PS256] = ACTIONS(295),
    [anon_sym_PS384] = ACTIONS(295),
    [anon_sym_PS512] = ACTIONS(295),
    [anon_sym_RS256] = ACTIONS(295),
    [anon_sym_RS384] = ACTIONS(295),
    [anon_sym_RS512] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_TRUE] = ACTIONS(295),
    [anon_sym_FALSE] = ACTIONS(295),
    [anon_sym_null] = ACTIONS(295),
    [anon_sym_NULL] = ACTIONS(295),
    [anon_sym_none] = ACTIONS(295),
    [anon_sym_NONE] = ACTIONS(295),
    [sym_variable] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
  },
  [49] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE_SEMI] = ACTIONS(297),
    [anon_sym_RBRACE_COMMA] = ACTIONS(297),
    [aux_sym_future_token1] = ACTIONS(297),
    [aux_sym_casting_token1] = ACTIONS(297),
    [aux_sym_property_token1] = ACTIONS(299),
    [aux_sym_identifier_token1] = ACTIONS(299),
    [aux_sym_duration_token1] = ACTIONS(299),
    [aux_sym_constant_token1] = ACTIONS(297),
    [aux_sym_number_token1] = ACTIONS(299),
    [aux_sym_record_token1] = ACTIONS(297),
    [aux_sym_record_token2] = ACTIONS(297),
    [anon_sym_USE] = ACTIONS(299),
    [anon_sym_NS] = ACTIONS(299),
    [anon_sym_DB] = ACTIONS(299),
    [anon_sym_LET] = ACTIONS(299),
    [anon_sym_BEGIN] = ACTIONS(299),
    [anon_sym_TRANSACTION] = ACTIONS(299),
    [anon_sym_CANCEL] = ACTIONS(299),
    [anon_sym_COMMIT] = ACTIONS(299),
    [anon_sym_IF] = ACTIONS(299),
    [anon_sym_ELSE] = ACTIONS(299),
    [anon_sym_THEN] = ACTIONS(299),
    [anon_sym_END] = ACTIONS(299),
    [anon_sym_SELECT] = ACTIONS(299),
    [anon_sym_FROM] = ACTIONS(299),
    [anon_sym_WHERE] = ACTIONS(299),
    [anon_sym_SPLIT] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [anon_sym_GROUP] = ACTIONS(299),
    [anon_sym_BY] = ACTIONS(299),
    [anon_sym_ORDER] = ACTIONS(299),
    [anon_sym_COLLATE] = ACTIONS(299),
    [anon_sym_NUMERIC] = ACTIONS(299),
    [anon_sym_ASC] = ACTIONS(299),
    [anon_sym_DESC] = ACTIONS(299),
    [anon_sym_LIMIT] = ACTIONS(299),
    [anon_sym_START] = ACTIONS(299),
    [anon_sym_FETCH] = ACTIONS(299),
    [anon_sym_TIMEOUT] = ACTIONS(299),
    [anon_sym_PARALLEL] = ACTIONS(299),
    [anon_sym_INSERT] = ACTIONS(299),
    [anon_sym_IGNORE] = ACTIONS(299),
    [anon_sym_INTO] = ACTIONS(299),
    [anon_sym_VALUES] = ACTIONS(299),
    [anon_sym_ON] = ACTIONS(299),
    [anon_sym_DUPLICATE] = ACTIONS(299),
    [anon_sym_KEY] = ACTIONS(299),
    [anon_sym_UPDATE] = ACTIONS(299),
    [anon_sym_CREATE] = ACTIONS(299),
    [anon_sym_CONTENT] = ACTIONS(299),
    [anon_sym_SET] = ACTIONS(299),
    [anon_sym_RETURN] = ACTIONS(299),
    [anon_sym_BEFORE] = ACTIONS(299),
    [anon_sym_AFTER] = ACTIONS(299),
    [anon_sym_DIFF] = ACTIONS(299),
    [anon_sym_MERGE] = ACTIONS(299),
    [anon_sym_PATCH] = ACTIONS(299),
    [anon_sym_RELATE] = ACTIONS(299),
    [anon_sym_DELETE] = ACTIONS(299),
    [anon_sym_DEFINE] = ACTIONS(299),
    [anon_sym_NAMESPACE] = ACTIONS(299),
    [anon_sym_DATABASE] = ACTIONS(299),
    [anon_sym_USER] = ACTIONS(299),
    [anon_sym_PASSWORD] = ACTIONS(299),
    [anon_sym_PASSHASH] = ACTIONS(299),
    [anon_sym_TOKEN] = ACTIONS(299),
    [anon_sym_SCOPE] = ACTIONS(299),
    [anon_sym_TYPE] = ACTIONS(299),
    [anon_sym_VALUE] = ACTIONS(299),
    [anon_sym_SESSION] = ACTIONS(299),
    [anon_sym_SIGNUP] = ACTIONS(299),
    [anon_sym_SIGNIN] = ACTIONS(299),
    [anon_sym_TABLE] = ACTIONS(299),
    [anon_sym_DROP] = ACTIONS(299),
    [anon_sym_SCHEMAFULL] = ACTIONS(299),
    [anon_sym_SCHEMALESS] = ACTIONS(299),
    [anon_sym_AS] = ACTIONS(299),
    [anon_sym_PERMISSIONS] = ACTIONS(299),
    [anon_sym_FULL] = ACTIONS(299),
    [anon_sym_FOR] = ACTIONS(299),
    [anon_sym_select] = ACTIONS(299),
    [anon_sym_update] = ACTIONS(299),
    [anon_sym_create] = ACTIONS(299),
    [anon_sym_delete] = ACTIONS(299),
    [anon_sym_EVENT] = ACTIONS(299),
    [anon_sym_WHEN] = ACTIONS(299),
    [anon_sym_ASSERT] = ACTIONS(299),
    [anon_sym_INDEX] = ACTIONS(299),
    [anon_sym_FIELD] = ACTIONS(299),
    [anon_sym_FIELDS] = ACTIONS(299),
    [anon_sym_COLUMNS] = ACTIONS(299),
    [anon_sym_UNIQUE] = ACTIONS(299),
    [anon_sym_DEFAULT] = ACTIONS(299),
    [anon_sym_READONLY] = ACTIONS(299),
    [anon_sym_REMOVE] = ACTIONS(299),
    [anon_sym_SLEEP] = ACTIONS(299),
    [anon_sym_INFO] = ACTIONS(299),
    [anon_sym_KV] = ACTIONS(299),
    [anon_sym_TO] = ACTIONS(299),
    [anon_sym_OUT] = ACTIONS(299),
    [anon_sym_IFNOT] = ACTIONS(297),
    [anon_sym_EXISTS] = ACTIONS(299),
    [anon_sym_FUNCTION] = ACTIONS(299),
    [anon_sym_PARAM] = ACTIONS(299),
    [anon_sym_LIVE] = ACTIONS(299),
    [anon_sym_ONLY] = ACTIONS(299),
    [anon_sym_OMIT] = ACTIONS(299),
    [anon_sym_OPTION] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(297),
    [anon_sym_AND] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_OR] = ACTIONS(299),
    [anon_sym_QMARK_QMARK] = ACTIONS(297),
    [anon_sym_QMARK_COLON] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_IS] = ACTIONS(299),
    [anon_sym_BANG_EQ] = ACTIONS(297),
    [anon_sym_ISNOT] = ACTIONS(297),
    [anon_sym_EQ_EQ] = ACTIONS(297),
    [anon_sym_QMARK_EQ] = ACTIONS(297),
    [anon_sym_STAR_EQ] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
    [anon_sym_BANG_TILDE] = ACTIONS(297),
    [anon_sym_QMARK_TILDE] = ACTIONS(297),
    [anon_sym_STAR_TILDE] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_LT_EQ] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym_STAR] = ACTIONS(299),
    [anon_sym_x] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_] = ACTIONS(297),
    [anon_sym_STAR_STAR] = ACTIONS(297),
    [anon_sym_IN] = ACTIONS(299),
    [anon_sym_CONTAINS] = ACTIONS(299),
    [anon_sym_2] = ACTIONS(297),
    [anon_sym_CONTAINSNOT] = ACTIONS(299),
    [anon_sym_3] = ACTIONS(297),
    [anon_sym_CONTAINSALL] = ACTIONS(299),
    [anon_sym_4] = ACTIONS(297),
    [anon_sym_CONTAINSANY] = ACTIONS(299),
    [anon_sym_5] = ACTIONS(297),
    [anon_sym_CONTAINSNONE] = ACTIONS(299),
    [anon_sym_6] = ACTIONS(297),
    [anon_sym_INSIDE] = ACTIONS(299),
    [anon_sym_7] = ACTIONS(297),
    [anon_sym_NOTINSIDE] = ACTIONS(299),
    [anon_sym_NOTIN] = ACTIONS(297),
    [anon_sym_8] = ACTIONS(297),
    [anon_sym_ALLINSIDE] = ACTIONS(299),
    [anon_sym_9] = ACTIONS(297),
    [anon_sym_ANYINSIDE] = ACTIONS(299),
    [anon_sym_10] = ACTIONS(297),
    [anon_sym_NONEINSIDE] = ACTIONS(299),
    [anon_sym_11] = ACTIONS(297),
    [anon_sym_OUTSIDE] = ACTIONS(299),
    [anon_sym_INTERSECTS] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [aux_sym_function_token1] = ACTIONS(297),
    [aux_sym_function_token2] = ACTIONS(297),
    [aux_sym_function_token3] = ACTIONS(297),
    [anon_sym_count] = ACTIONS(299),
    [aux_sym_function_token4] = ACTIONS(297),
    [aux_sym_function_token5] = ACTIONS(297),
    [aux_sym_function_token6] = ACTIONS(297),
    [aux_sym_function_token7] = ACTIONS(297),
    [aux_sym_function_token8] = ACTIONS(297),
    [aux_sym_function_token9] = ACTIONS(297),
    [aux_sym_function_token10] = ACTIONS(297),
    [aux_sym_function_token11] = ACTIONS(299),
    [aux_sym_function_token12] = ACTIONS(297),
    [aux_sym_function_token13] = ACTIONS(299),
    [aux_sym_function_token14] = ACTIONS(297),
    [aux_sym_function_token15] = ACTIONS(297),
    [aux_sym_function_token16] = ACTIONS(297),
    [aux_sym_function_token17] = ACTIONS(299),
    [anon_sym_any] = ACTIONS(299),
    [anon_sym_array] = ACTIONS(299),
    [anon_sym_bool] = ACTIONS(299),
    [anon_sym_datetime] = ACTIONS(299),
    [anon_sym_decimal] = ACTIONS(299),
    [anon_sym_duration] = ACTIONS(299),
    [anon_sym_float] = ACTIONS(299),
    [anon_sym_int] = ACTIONS(299),
    [anon_sym_number] = ACTIONS(299),
    [anon_sym_object] = ACTIONS(299),
    [anon_sym_string] = ACTIONS(299),
    [anon_sym_record] = ACTIONS(299),
    [anon_sym_option] = ACTIONS(299),
    [anon_sym_geometry] = ACTIONS(299),
    [anon_sym_EDDSA] = ACTIONS(299),
    [anon_sym_ES256] = ACTIONS(299),
    [anon_sym_ES384] = ACTIONS(299),
    [anon_sym_ES512] = ACTIONS(299),
    [anon_sym_HS256] = ACTIONS(299),
    [anon_sym_HS384] = ACTIONS(299),
    [anon_sym_HS512] = ACTIONS(299),
    [anon_sym_PS256] = ACTIONS(299),
    [anon_sym_PS384] = ACTIONS(299),
    [anon_sym_PS512] = ACTIONS(299),
    [anon_sym_RS256] = ACTIONS(299),
    [anon_sym_RS384] = ACTIONS(299),
    [anon_sym_RS512] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_TRUE] = ACTIONS(299),
    [anon_sym_FALSE] = ACTIONS(299),
    [anon_sym_null] = ACTIONS(299),
    [anon_sym_NULL] = ACTIONS(299),
    [anon_sym_none] = ACTIONS(299),
    [anon_sym_NONE] = ACTIONS(299),
    [sym_variable] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
  },
  [50] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE_SEMI] = ACTIONS(301),
    [anon_sym_RBRACE_COMMA] = ACTIONS(301),
    [aux_sym_future_token1] = ACTIONS(301),
    [aux_sym_casting_token1] = ACTIONS(301),
    [aux_sym_property_token1] = ACTIONS(303),
    [aux_sym_identifier_token1] = ACTIONS(303),
    [aux_sym_duration_token1] = ACTIONS(303),
    [aux_sym_constant_token1] = ACTIONS(301),
    [aux_sym_number_token1] = ACTIONS(303),
    [aux_sym_record_token1] = ACTIONS(301),
    [aux_sym_record_token2] = ACTIONS(301),
    [anon_sym_USE] = ACTIONS(303),
    [anon_sym_NS] = ACTIONS(303),
    [anon_sym_DB] = ACTIONS(303),
    [anon_sym_LET] = ACTIONS(303),
    [anon_sym_BEGIN] = ACTIONS(303),
    [anon_sym_TRANSACTION] = ACTIONS(303),
    [anon_sym_CANCEL] = ACTIONS(303),
    [anon_sym_COMMIT] = ACTIONS(303),
    [anon_sym_IF] = ACTIONS(303),
    [anon_sym_ELSE] = ACTIONS(303),
    [anon_sym_THEN] = ACTIONS(303),
    [anon_sym_END] = ACTIONS(303),
    [anon_sym_SELECT] = ACTIONS(303),
    [anon_sym_FROM] = ACTIONS(303),
    [anon_sym_WHERE] = ACTIONS(303),
    [anon_sym_SPLIT] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_GROUP] = ACTIONS(303),
    [anon_sym_BY] = ACTIONS(303),
    [anon_sym_ORDER] = ACTIONS(303),
    [anon_sym_COLLATE] = ACTIONS(303),
    [anon_sym_NUMERIC] = ACTIONS(303),
    [anon_sym_ASC] = ACTIONS(303),
    [anon_sym_DESC] = ACTIONS(303),
    [anon_sym_LIMIT] = ACTIONS(303),
    [anon_sym_START] = ACTIONS(303),
    [anon_sym_FETCH] = ACTIONS(303),
    [anon_sym_TIMEOUT] = ACTIONS(303),
    [anon_sym_PARALLEL] = ACTIONS(303),
    [anon_sym_INSERT] = ACTIONS(303),
    [anon_sym_IGNORE] = ACTIONS(303),
    [anon_sym_INTO] = ACTIONS(303),
    [anon_sym_VALUES] = ACTIONS(303),
    [anon_sym_ON] = ACTIONS(303),
    [anon_sym_DUPLICATE] = ACTIONS(303),
    [anon_sym_KEY] = ACTIONS(303),
    [anon_sym_UPDATE] = ACTIONS(303),
    [anon_sym_CREATE] = ACTIONS(303),
    [anon_sym_CONTENT] = ACTIONS(303),
    [anon_sym_SET] = ACTIONS(303),
    [anon_sym_RETURN] = ACTIONS(303),
    [anon_sym_BEFORE] = ACTIONS(303),
    [anon_sym_AFTER] = ACTIONS(303),
    [anon_sym_DIFF] = ACTIONS(303),
    [anon_sym_MERGE] = ACTIONS(303),
    [anon_sym_PATCH] = ACTIONS(303),
    [anon_sym_RELATE] = ACTIONS(303),
    [anon_sym_DELETE] = ACTIONS(303),
    [anon_sym_DEFINE] = ACTIONS(303),
    [anon_sym_NAMESPACE] = ACTIONS(303),
    [anon_sym_DATABASE] = ACTIONS(303),
    [anon_sym_USER] = ACTIONS(303),
    [anon_sym_PASSWORD] = ACTIONS(303),
    [anon_sym_PASSHASH] = ACTIONS(303),
    [anon_sym_TOKEN] = ACTIONS(303),
    [anon_sym_SCOPE] = ACTIONS(303),
    [anon_sym_TYPE] = ACTIONS(303),
    [anon_sym_VALUE] = ACTIONS(303),
    [anon_sym_SESSION] = ACTIONS(303),
    [anon_sym_SIGNUP] = ACTIONS(303),
    [anon_sym_SIGNIN] = ACTIONS(303),
    [anon_sym_TABLE] = ACTIONS(303),
    [anon_sym_DROP] = ACTIONS(303),
    [anon_sym_SCHEMAFULL] = ACTIONS(303),
    [anon_sym_SCHEMALESS] = ACTIONS(303),
    [anon_sym_AS] = ACTIONS(303),
    [anon_sym_PERMISSIONS] = ACTIONS(303),
    [anon_sym_FULL] = ACTIONS(303),
    [anon_sym_FOR] = ACTIONS(303),
    [anon_sym_select] = ACTIONS(303),
    [anon_sym_update] = ACTIONS(303),
    [anon_sym_create] = ACTIONS(303),
    [anon_sym_delete] = ACTIONS(303),
    [anon_sym_EVENT] = ACTIONS(303),
    [anon_sym_WHEN] = ACTIONS(303),
    [anon_sym_ASSERT] = ACTIONS(303),
    [anon_sym_INDEX] = ACTIONS(303),
    [anon_sym_FIELD] = ACTIONS(303),
    [anon_sym_FIELDS] = ACTIONS(303),
    [anon_sym_COLUMNS] = ACTIONS(303),
    [anon_sym_UNIQUE] = ACTIONS(303),
    [anon_sym_DEFAULT] = ACTIONS(303),
    [anon_sym_READONLY] = ACTIONS(303),
    [anon_sym_REMOVE] = ACTIONS(303),
    [anon_sym_SLEEP] = ACTIONS(303),
    [anon_sym_INFO] = ACTIONS(303),
    [anon_sym_KV] = ACTIONS(303),
    [anon_sym_TO] = ACTIONS(303),
    [anon_sym_OUT] = ACTIONS(303),
    [anon_sym_IFNOT] = ACTIONS(301),
    [anon_sym_EXISTS] = ACTIONS(303),
    [anon_sym_FUNCTION] = ACTIONS(303),
    [anon_sym_PARAM] = ACTIONS(303),
    [anon_sym_LIVE] = ACTIONS(303),
    [anon_sym_ONLY] = ACTIONS(303),
    [anon_sym_OMIT] = ACTIONS(303),
    [anon_sym_OPTION] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_AND] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_OR] = ACTIONS(303),
    [anon_sym_QMARK_QMARK] = ACTIONS(301),
    [anon_sym_QMARK_COLON] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_IS] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_ISNOT] = ACTIONS(301),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_QMARK_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_BANG_TILDE] = ACTIONS(301),
    [anon_sym_QMARK_TILDE] = ACTIONS(301),
    [anon_sym_STAR_TILDE] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_x] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_] = ACTIONS(301),
    [anon_sym_STAR_STAR] = ACTIONS(301),
    [anon_sym_IN] = ACTIONS(303),
    [anon_sym_CONTAINS] = ACTIONS(303),
    [anon_sym_2] = ACTIONS(301),
    [anon_sym_CONTAINSNOT] = ACTIONS(303),
    [anon_sym_3] = ACTIONS(301),
    [anon_sym_CONTAINSALL] = ACTIONS(303),
    [anon_sym_4] = ACTIONS(301),
    [anon_sym_CONTAINSANY] = ACTIONS(303),
    [anon_sym_5] = ACTIONS(301),
    [anon_sym_CONTAINSNONE] = ACTIONS(303),
    [anon_sym_6] = ACTIONS(301),
    [anon_sym_INSIDE] = ACTIONS(303),
    [anon_sym_7] = ACTIONS(301),
    [anon_sym_NOTINSIDE] = ACTIONS(303),
    [anon_sym_NOTIN] = ACTIONS(301),
    [anon_sym_8] = ACTIONS(301),
    [anon_sym_ALLINSIDE] = ACTIONS(303),
    [anon_sym_9] = ACTIONS(301),
    [anon_sym_ANYINSIDE] = ACTIONS(303),
    [anon_sym_10] = ACTIONS(301),
    [anon_sym_NONEINSIDE] = ACTIONS(303),
    [anon_sym_11] = ACTIONS(301),
    [anon_sym_OUTSIDE] = ACTIONS(303),
    [anon_sym_INTERSECTS] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_DASH_GT] = ACTIONS(301),
    [anon_sym_LT_DASH] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [aux_sym_function_token1] = ACTIONS(301),
    [aux_sym_function_token2] = ACTIONS(301),
    [aux_sym_function_token3] = ACTIONS(301),
    [anon_sym_count] = ACTIONS(303),
    [aux_sym_function_token4] = ACTIONS(301),
    [aux_sym_function_token5] = ACTIONS(301),
    [aux_sym_function_token6] = ACTIONS(301),
    [aux_sym_function_token7] = ACTIONS(301),
    [aux_sym_function_token8] = ACTIONS(301),
    [aux_sym_function_token9] = ACTIONS(301),
    [aux_sym_function_token10] = ACTIONS(301),
    [aux_sym_function_token11] = ACTIONS(303),
    [aux_sym_function_token12] = ACTIONS(301),
    [aux_sym_function_token13] = ACTIONS(303),
    [aux_sym_function_token14] = ACTIONS(301),
    [aux_sym_function_token15] = ACTIONS(301),
    [aux_sym_function_token16] = ACTIONS(301),
    [aux_sym_function_token17] = ACTIONS(303),
    [anon_sym_any] = ACTIONS(303),
    [anon_sym_array] = ACTIONS(303),
    [anon_sym_bool] = ACTIONS(303),
    [anon_sym_datetime] = ACTIONS(303),
    [anon_sym_decimal] = ACTIONS(303),
    [anon_sym_duration] = ACTIONS(303),
    [anon_sym_float] = ACTIONS(303),
    [anon_sym_int] = ACTIONS(303),
    [anon_sym_number] = ACTIONS(303),
    [anon_sym_object] = ACTIONS(303),
    [anon_sym_string] = ACTIONS(303),
    [anon_sym_record] = ACTIONS(303),
    [anon_sym_option] = ACTIONS(303),
    [anon_sym_geometry] = ACTIONS(303),
    [anon_sym_EDDSA] = ACTIONS(303),
    [anon_sym_ES256] = ACTIONS(303),
    [anon_sym_ES384] = ACTIONS(303),
    [anon_sym_ES512] = ACTIONS(303),
    [anon_sym_HS256] = ACTIONS(303),
    [anon_sym_HS384] = ACTIONS(303),
    [anon_sym_HS512] = ACTIONS(303),
    [anon_sym_PS256] = ACTIONS(303),
    [anon_sym_PS384] = ACTIONS(303),
    [anon_sym_PS512] = ACTIONS(303),
    [anon_sym_RS256] = ACTIONS(303),
    [anon_sym_RS384] = ACTIONS(303),
    [anon_sym_RS512] = ACTIONS(303),
    [anon_sym_true] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(303),
    [anon_sym_TRUE] = ACTIONS(303),
    [anon_sym_FALSE] = ACTIONS(303),
    [anon_sym_null] = ACTIONS(303),
    [anon_sym_NULL] = ACTIONS(303),
    [anon_sym_none] = ACTIONS(303),
    [anon_sym_NONE] = ACTIONS(303),
    [sym_variable] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
  },
  [51] = {
    [anon_sym_function_LPAREN_RPAREN_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE_SEMI] = ACTIONS(305),
    [anon_sym_RBRACE_COMMA] = ACTIONS(305),
    [aux_sym_future_token1] = ACTIONS(305),
    [aux_sym_casting_token1] = ACTIONS(305),
    [aux_sym_property_token1] = ACTIONS(307),
    [aux_sym_identifier_token1] = ACTIONS(307),
    [aux_sym_duration_token1] = ACTIONS(307),
    [aux_sym_constant_token1] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [aux_sym_record_token1] = ACTIONS(305),
    [aux_sym_record_token2] = ACTIONS(305),
    [anon_sym_USE] = ACTIONS(307),
    [anon_sym_NS] = ACTIONS(307),
    [anon_sym_DB] = ACTIONS(307),
    [anon_sym_LET] = ACTIONS(307),
    [anon_sym_BEGIN] = ACTIONS(307),
    [anon_sym_TRANSACTION] = ACTIONS(307),
    [anon_sym_CANCEL] = ACTIONS(307),
    [anon_sym_COMMIT] = ACTIONS(307),
    [anon_sym_IF] = ACTIONS(307),
    [anon_sym_ELSE] = ACTIONS(307),
    [anon_sym_THEN] = ACTIONS(307),
    [anon_sym_END] = ACTIONS(307),
    [anon_sym_SELECT] = ACTIONS(307),
    [anon_sym_FROM] = ACTIONS(307),
    [anon_sym_WHERE] = ACTIONS(307),
    [anon_sym_SPLIT] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_GROUP] = ACTIONS(307),
    [anon_sym_BY] = ACTIONS(307),
    [anon_sym_ORDER] = ACTIONS(307),
    [anon_sym_COLLATE] = ACTIONS(307),
    [anon_sym_NUMERIC] = ACTIONS(307),
    [anon_sym_ASC] = ACTIONS(307),
    [anon_sym_DESC] = ACTIONS(307),
    [anon_sym_LIMIT] = ACTIONS(307),
    [anon_sym_START] = ACTIONS(307),
    [anon_sym_FETCH] = ACTIONS(307),
    [anon_sym_TIMEOUT] = ACTIONS(307),
    [anon_sym_PARALLEL] = ACTIONS(307),
    [anon_sym_INSERT] = ACTIONS(307),
    [anon_sym_IGNORE] = ACTIONS(307),
    [anon_sym_INTO] = ACTIONS(307),
    [anon_sym_VALUES] = ACTIONS(307),
    [anon_sym_ON] = ACTIONS(307),
    [anon_sym_DUPLICATE] = ACTIONS(307),
    [anon_sym_KEY] = ACTIONS(307),
    [anon_sym_UPDATE] = ACTIONS(307),
    [anon_sym_CREATE] = ACTIONS(307),
    [anon_sym_CONTENT] = ACTIONS(307),
    [anon_sym_SET] = ACTIONS(307),
    [anon_sym_RETURN] = ACTIONS(307),
    [anon_sym_BEFORE] = ACTIONS(307),
    [anon_sym_AFTER] = ACTIONS(307),
    [anon_sym_DIFF] = ACTIONS(307),
    [anon_sym_MERGE] = ACTIONS(307),
    [anon_sym_PATCH] = ACTIONS(307),
    [anon_sym_RELATE] = ACTIONS(307),
    [anon_sym_DELETE] = ACTIONS(307),
    [anon_sym_DEFINE] = ACTIONS(307),
    [anon_sym_NAMESPACE] = ACTIONS(307),
    [anon_sym_DATABASE] = ACTIONS(307),
    [anon_sym_USER] = ACTIONS(307),
    [anon_sym_PASSWORD] = ACTIONS(307),
    [anon_sym_PASSHASH] = ACTIONS(307),
    [anon_sym_TOKEN] = ACTIONS(307),
    [anon_sym_SCOPE] = ACTIONS(307),
    [anon_sym_TYPE] = ACTIONS(307),
    [anon_sym_VALUE] = ACTIONS(307),
    [anon_sym_SESSION] = ACTIONS(307),
    [anon_sym_SIGNUP] = ACTIONS(307),
    [anon_sym_SIGNIN] = ACTIONS(307),
    [anon_sym_TABLE] = ACTIONS(307),
    [anon_sym_DROP] = ACTIONS(307),
    [anon_sym_SCHEMAFULL] = ACTIONS(307),
    [anon_sym_SCHEMALESS] = ACTIONS(307),
    [anon_sym_AS] = ACTIONS(307),
    [anon_sym_PERMISSIONS] = ACTIONS(307),
    [anon_sym_FULL] = ACTIONS(307),
    [anon_sym_FOR] = ACTIONS(307),
    [anon_sym_select] = ACTIONS(307),
    [anon_sym_update] = ACTIONS(307),
    [anon_sym_create] = ACTIONS(307),
    [anon_sym_delete] = ACTIONS(307),
    [anon_sym_EVENT] = ACTIONS(307),
    [anon_sym_WHEN] = ACTIONS(307),
    [anon_sym_ASSERT] = ACTIONS(307),
    [anon_sym_INDEX] = ACTIONS(307),
    [anon_sym_FIELD] = ACTIONS(307),
    [anon_sym_FIELDS] = ACTIONS(307),
    [anon_sym_COLUMNS] = ACTIONS(307),
    [anon_sym_UNIQUE] = ACTIONS(307),
    [anon_sym_DEFAULT] = ACTIONS(307),
    [anon_sym_READONLY] = ACTIONS(307),
    [anon_sym_REMOVE] = ACTIONS(307),
    [anon_sym_SLEEP] = ACTIONS(307),
    [anon_sym_INFO] = ACTIONS(307),
    [anon_sym_KV] = ACTIONS(307),
    [anon_sym_TO] = ACTIONS(307),
    [anon_sym_OUT] = ACTIONS(307),
    [anon_sym_IFNOT] = ACTIONS(305),
    [anon_sym_EXISTS] = ACTIONS(307),
    [anon_sym_FUNCTION] = ACTIONS(307),
    [anon_sym_PARAM] = ACTIONS(307),
    [anon_sym_LIVE] = ACTIONS(307),
    [anon_sym_ONLY] = ACTIONS(307),
    [anon_sym_OMIT] = ACTIONS(307),
    [anon_sym_OPTION] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(305),
    [anon_sym_AND] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_OR] = ACTIONS(307),
    [anon_sym_QMARK_QMARK] = ACTIONS(305),
    [anon_sym_QMARK_COLON] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_IS] = ACTIONS(307),
    [anon_sym_BANG_EQ] = ACTIONS(305),
    [anon_sym_ISNOT] = ACTIONS(305),
    [anon_sym_EQ_EQ] = ACTIONS(305),
    [anon_sym_QMARK_EQ] = ACTIONS(305),
    [anon_sym_STAR_EQ] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
    [anon_sym_BANG_TILDE] = ACTIONS(305),
    [anon_sym_QMARK_TILDE] = ACTIONS(305),
    [anon_sym_STAR_TILDE] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_LT_EQ] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_GT_EQ] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_STAR] = ACTIONS(307),
    [anon_sym_x] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_] = ACTIONS(305),
    [anon_sym_STAR_STAR] = ACTIONS(305),
    [anon_sym_IN] = ACTIONS(307),
    [anon_sym_CONTAINS] = ACTIONS(307),
    [anon_sym_2] = ACTIONS(305),
    [anon_sym_CONTAINSNOT] = ACTIONS(307),
    [anon_sym_3] = ACTIONS(305),
    [anon_sym_CONTAINSALL] = ACTIONS(307),
    [anon_sym_4] = ACTIONS(305),
    [anon_sym_CONTAINSANY] = ACTIONS(307),
    [anon_sym_5] = ACTIONS(305),
    [anon_sym_CONTAINSNONE] = ACTIONS(307),
    [anon_sym_6] = ACTIONS(305),
    [anon_sym_INSIDE] = ACTIONS(307),
    [anon_sym_7] = ACTIONS(305),
    [anon_sym_NOTINSIDE] = ACTIONS(307),
    [anon_sym_NOTIN] = ACTIONS(305),
    [anon_sym_8] = ACTIONS(305),
    [anon_sym_ALLINSIDE] = ACTIONS(307),
    [anon_sym_9] = ACTIONS(305),
    [anon_sym_ANYINSIDE] = ACTIONS(307),
    [anon_sym_10] = ACTIONS(305),
    [anon_sym_NONEINSIDE] = ACTIONS(307),
    [anon_sym_11] = ACTIONS(305),
    [anon_sym_OUTSIDE] = ACTIONS(307),
    [anon_sym_INTERSECTS] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_DASH_GT] = ACTIONS(305),
    [anon_sym_LT_DASH] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(305),
    [aux_sym_function_token1] = ACTIONS(305),
    [aux_sym_function_token2] = ACTIONS(305),
    [aux_sym_function_token3] = ACTIONS(305),
    [anon_sym_count] = ACTIONS(307),
    [aux_sym_function_token4] = ACTIONS(305),
    [aux_sym_function_token5] = ACTIONS(305),
    [aux_sym_function_token6] = ACTIONS(305),
    [aux_sym_function_token7] = ACTIONS(305),
    [aux_sym_function_token8] = ACTIONS(305),
    [aux_sym_function_token9] = ACTIONS(305),
    [aux_sym_function_token10] = ACTIONS(305),
    [aux_sym_function_token11] = ACTIONS(307),
    [aux_sym_function_token12] = ACTIONS(305),
    [aux_sym_function_token13] = ACTIONS(307),
    [aux_sym_function_token14] = ACTIONS(305),
    [aux_sym_function_token15] = ACTIONS(305),
    [aux_sym_function_token16] = ACTIONS(305),
    [aux_sym_function_token17] = ACTIONS(307),
    [anon_sym_any] = ACTIONS(307),
    [anon_sym_array] = ACTIONS(307),
    [anon_sym_bool] = ACTIONS(307),
    [anon_sym_datetime] = ACTIONS(307),
    [anon_sym_decimal] = ACTIONS(307),
    [anon_sym_duration] = ACTIONS(307),
    [anon_sym_float] = ACTIONS(307),
    [anon_sym_int] = ACTIONS(307),
    [anon_sym_number] = ACTIONS(307),
    [anon_sym_object] = ACTIONS(307),
    [anon_sym_string] = ACTIONS(307),
    [anon_sym_record] = ACTIONS(307),
    [anon_sym_option] = ACTIONS(307),
    [anon_sym_geometry] = ACTIONS(307),
    [anon_sym_EDDSA] = ACTIONS(307),
    [anon_sym_ES256] = ACTIONS(307),
    [anon_sym_ES384] = ACTIONS(307),
    [anon_sym_ES512] = ACTIONS(307),
    [anon_sym_HS256] = ACTIONS(307),
    [anon_sym_HS384] = ACTIONS(307),
    [anon_sym_HS512] = ACTIONS(307),
    [anon_sym_PS256] = ACTIONS(307),
    [anon_sym_PS384] = ACTIONS(307),
    [anon_sym_PS512] = ACTIONS(307),
    [anon_sym_RS256] = ACTIONS(307),
    [anon_sym_RS384] = ACTIONS(307),
    [anon_sym_RS512] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_TRUE] = ACTIONS(307),
    [anon_sym_FALSE] = ACTIONS(307),
    [anon_sym_null] = ACTIONS(307),
    [anon_sym_NULL] = ACTIONS(307),
    [anon_sym_none] = ACTIONS(307),
    [anon_sym_NONE] = ACTIONS(307),
    [sym_variable] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(353), 1,
      anon_sym_BSLASH,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [13] = 4,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      aux_sym_string_token1,
    ACTIONS(366), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [26] = 4,
    ACTIONS(369), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_string_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [39] = 4,
    ACTIONS(371), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_token1,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [52] = 4,
    ACTIONS(369), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token3,
    STATE(54), 1,
      aux_sym_string_repeat2,
  [65] = 4,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    ACTIONS(385), 1,
      aux_sym_string_token1,
    STATE(59), 1,
      aux_sym_string_repeat1,
  [78] = 4,
    ACTIONS(369), 1,
      anon_sym_BSLASH,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      aux_sym_string_token3,
    STATE(60), 1,
      aux_sym_string_repeat2,
  [91] = 4,
    ACTIONS(375), 1,
      aux_sym_string_token1,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [104] = 4,
    ACTIONS(369), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      aux_sym_string_token3,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [117] = 4,
    ACTIONS(377), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    STATE(55), 1,
      aux_sym_string_repeat1,
  [130] = 2,
    ACTIONS(393), 1,
      aux_sym_string_token3,
    ACTIONS(356), 2,
      anon_sym_BSLASH,
      anon_sym_DQUOTE,
  [138] = 2,
    ACTIONS(395), 1,
      aux_sym_string_token1,
    ACTIONS(361), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
  [146] = 1,
    ACTIONS(397), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [151] = 1,
    ACTIONS(399), 2,
      anon_sym_RBRACE_SEMI,
      anon_sym_RBRACE_COMMA,
  [156] = 1,
    ACTIONS(401), 1,
      aux_sym_string_token2,
  [160] = 1,
    ACTIONS(403), 1,
      aux_sym_string_token2,
  [164] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 13,
  [SMALL_STATE(54)] = 26,
  [SMALL_STATE(55)] = 39,
  [SMALL_STATE(56)] = 52,
  [SMALL_STATE(57)] = 65,
  [SMALL_STATE(58)] = 78,
  [SMALL_STATE(59)] = 91,
  [SMALL_STATE(60)] = 104,
  [SMALL_STATE(61)] = 117,
  [SMALL_STATE(62)] = 130,
  [SMALL_STATE(63)] = 138,
  [SMALL_STATE(64)] = 146,
  [SMALL_STATE(65)] = 151,
  [SMALL_STATE(66)] = 156,
  [SMALL_STATE(67)] = 160,
  [SMALL_STATE(68)] = 164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_content, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(41),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(42),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(43),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(44),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(45),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(46),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(47),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(48),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(49),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(49),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(50),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(50),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(51),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(51),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(40),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(39),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(39),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(9),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(36),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(34),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(33),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(32),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(57),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_content_repeat1, 2), SHIFT_REPEAT(58),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_algotype, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_algotype, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_punctuation, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_punctuation, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nothing, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nothing, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_future, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_future, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting_function, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting_function, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_casting, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_casting, 1),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(66),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(52),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surrealdb(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
