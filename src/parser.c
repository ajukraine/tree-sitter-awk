#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_BEGIN = 3,
  anon_sym_END = 4,
  anon_sym_SLASH = 5,
  anon_sym_CARETTotalAverage = 6,
  anon_sym_LF = 7,
  anon_sym_SEMI = 8,
  anon_sym_exit = 9,
  anon_sym_if = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_print = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ = 15,
  anon_sym_GT = 16,
  sym_string_literal = 17,
  aux_sym_numeric_literal_token1 = 18,
  aux_sym_function_call_token1 = 19,
  sym_identifier = 20,
  anon_sym_DOLLAR = 21,
  sym_program = 22,
  sym__program_item = 23,
  sym_pattern_action_statement = 24,
  sym_pattern = 25,
  sym_action = 26,
  sym__statement = 27,
  sym_block_of_statements = 28,
  sym_exit_statement = 29,
  sym_if_cond = 30,
  sym__input_output_statement = 31,
  sym_print_statement = 32,
  sym__expression = 33,
  sym_string_concat = 34,
  sym_binary_expression = 35,
  sym_numeric_literal = 36,
  sym_function_call = 37,
  sym_field = 38,
  aux_sym_program_repeat1 = 39,
  aux_sym_action_repeat1 = 40,
  aux_sym_print_statement_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BEGIN] = "BEGIN",
  [anon_sym_END] = "END",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARETTotalAverage] = "^Total Average",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_exit] = "exit",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_print] = "print",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [sym_string_literal] = "string_literal",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [aux_sym_function_call_token1] = "function_call_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [sym_program] = "program",
  [sym__program_item] = "_program_item",
  [sym_pattern_action_statement] = "pattern_action_statement",
  [sym_pattern] = "pattern",
  [sym_action] = "action",
  [sym__statement] = "_statement",
  [sym_block_of_statements] = "block_of_statements",
  [sym_exit_statement] = "exit_statement",
  [sym_if_cond] = "if_cond",
  [sym__input_output_statement] = "_input_output_statement",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym_string_concat] = "string_concat",
  [sym_binary_expression] = "binary_expression",
  [sym_numeric_literal] = "numeric_literal",
  [sym_function_call] = "function_call",
  [sym_field] = "field",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BEGIN] = anon_sym_BEGIN,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARETTotalAverage] = anon_sym_CARETTotalAverage,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_program] = sym_program,
  [sym__program_item] = sym__program_item,
  [sym_pattern_action_statement] = sym_pattern_action_statement,
  [sym_pattern] = sym_pattern,
  [sym_action] = sym_action,
  [sym__statement] = sym__statement,
  [sym_block_of_statements] = sym_block_of_statements,
  [sym_exit_statement] = sym_exit_statement,
  [sym_if_cond] = sym_if_cond,
  [sym__input_output_statement] = sym__input_output_statement,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym_string_concat] = sym_string_concat,
  [sym_binary_expression] = sym_binary_expression,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym_function_call] = sym_function_call,
  [sym_field] = sym_field,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_print_statement_repeat1] = aux_sym_print_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEGIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARETTotalAverage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__program_item] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_action_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_block_of_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_cond] = {
    .visible = true,
    .named = true,
  },
  [sym__input_output_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string_concat] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_statement_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'B') ADVANCE(50);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'G') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(5);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == 'B') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BEGIN);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_END);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARETTotalAverage);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_print);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BEGIN] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARETTotalAverage] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(52),
    [sym__program_item] = STATE(32),
    [sym_pattern_action_statement] = STATE(32),
    [sym_pattern] = STATE(47),
    [aux_sym_program_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_BEGIN] = ACTIONS(7),
    [anon_sym_END] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(9),
  },
  [2] = {
    [sym_action] = STATE(54),
    [sym__statement] = STATE(21),
    [sym_block_of_statements] = STATE(21),
    [sym_exit_statement] = STATE(21),
    [sym_if_cond] = STATE(21),
    [sym__input_output_statement] = STATE(21),
    [sym_print_statement] = STATE(21),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_numeric_literal] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [3] = {
    [sym_action] = STATE(44),
    [sym__statement] = STATE(21),
    [sym_block_of_statements] = STATE(21),
    [sym_exit_statement] = STATE(21),
    [sym_if_cond] = STATE(21),
    [sym__input_output_statement] = STATE(21),
    [sym_print_statement] = STATE(21),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_numeric_literal] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [4] = {
    [sym__statement] = STATE(21),
    [sym_block_of_statements] = STATE(21),
    [sym_exit_statement] = STATE(21),
    [sym_if_cond] = STATE(21),
    [sym__input_output_statement] = STATE(21),
    [sym_print_statement] = STATE(21),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_numeric_literal] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_action_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_exit] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_print] = ACTIONS(42),
    [sym_string_literal] = ACTIONS(45),
    [aux_sym_numeric_literal_token1] = ACTIONS(48),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_DOLLAR] = ACTIONS(54),
  },
  [5] = {
    [sym_action] = STATE(49),
    [sym__statement] = STATE(21),
    [sym_block_of_statements] = STATE(21),
    [sym_exit_statement] = STATE(21),
    [sym_if_cond] = STATE(21),
    [sym__input_output_statement] = STATE(21),
    [sym_print_statement] = STATE(21),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_numeric_literal] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_action_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
  [6] = {
    [sym__statement] = STATE(21),
    [sym_block_of_statements] = STATE(21),
    [sym_exit_statement] = STATE(21),
    [sym_if_cond] = STATE(21),
    [sym__input_output_statement] = STATE(21),
    [sym_print_statement] = STATE(21),
    [sym__expression] = STATE(11),
    [sym_string_concat] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_numeric_literal] = STATE(11),
    [sym_function_call] = STATE(11),
    [sym_field] = STATE(11),
    [aux_sym_action_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_exit] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_print] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(21),
    [aux_sym_numeric_literal_token1] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_DOLLAR] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    STATE(15), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(59), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [38] = 3,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(71), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [63] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      anon_sym_LF,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(75), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
  [96] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
    ACTIONS(79), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
  [129] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(83), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [161] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_string_literal,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_LF,
    ACTIONS(87), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
    STATE(8), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [193] = 7,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(69), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_string_literal,
    ACTIONS(91), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
    STATE(12), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [225] = 4,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 2,
      anon_sym_EQ,
      anon_sym_GT,
    ACTIONS(97), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [249] = 4,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(105), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [271] = 4,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(75), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [293] = 2,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(112), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [310] = 2,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(116), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [327] = 2,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(120), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      anon_sym_COMMA,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [344] = 2,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(124), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [360] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(128), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [378] = 6,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      sym_string_literal,
    ACTIONS(138), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(25), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [402] = 6,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      sym_string_literal,
    ACTIONS(138), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    STATE(25), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [426] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(144), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [442] = 2,
    ACTIONS(73), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
    STATE(25), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [458] = 5,
    ACTIONS(23), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(148), 1,
      sym_string_literal,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(10), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [479] = 5,
    ACTIONS(23), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      sym_string_literal,
    STATE(9), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [500] = 5,
    ACTIONS(138), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      sym_string_literal,
    STATE(23), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [521] = 5,
    ACTIONS(138), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(156), 1,
      sym_string_literal,
    STATE(22), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [542] = 5,
    ACTIONS(23), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_string_literal,
    STATE(7), 6,
      sym__expression,
      sym_string_concat,
      sym_binary_expression,
      sym_numeric_literal,
      sym_function_call,
      sym_field,
  [563] = 2,
    ACTIONS(160), 4,
      anon_sym_exit,
      anon_sym_if,
      anon_sym_print,
      sym_identifier,
    ACTIONS(34), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      anon_sym_DOLLAR,
  [577] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_pattern,
    ACTIONS(7), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(33), 3,
      sym__program_item,
      sym_pattern_action_statement,
      aux_sym_program_repeat1,
  [599] = 6,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_pattern,
    ACTIONS(169), 2,
      anon_sym_BEGIN,
      anon_sym_END,
    STATE(33), 3,
      sym__program_item,
      sym_pattern_action_statement,
      aux_sym_program_repeat1,
  [621] = 3,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 2,
      anon_sym_EQ,
      anon_sym_GT,
    ACTIONS(99), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [636] = 1,
    ACTIONS(114), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [644] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [652] = 1,
    ACTIONS(118), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [660] = 1,
    ACTIONS(122), 5,
      anon_sym_RPAREN,
      sym_string_literal,
      aux_sym_numeric_literal_token1,
      sym_identifier,
      anon_sym_DOLLAR,
  [668] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [676] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BEGIN,
      anon_sym_END,
      anon_sym_SLASH,
  [684] = 2,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block_of_statements,
  [691] = 1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
  [695] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [699] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
  [703] = 1,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
  [707] = 1,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
  [711] = 1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [715] = 1,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
  [719] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
  [723] = 1,
    ACTIONS(201), 1,
      anon_sym_SLASH,
  [727] = 1,
    ACTIONS(203), 1,
      aux_sym_numeric_literal_token1,
  [731] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [735] = 1,
    ACTIONS(207), 1,
      anon_sym_CARETTotalAverage,
  [739] = 1,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
  [743] = 1,
    ACTIONS(209), 1,
      aux_sym_numeric_literal_token1,
  [747] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
  [751] = 1,
    ACTIONS(213), 1,
      aux_sym_function_call_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 360,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 442,
  [SMALL_STATE(26)] = 458,
  [SMALL_STATE(27)] = 479,
  [SMALL_STATE(28)] = 500,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 563,
  [SMALL_STATE(32)] = 577,
  [SMALL_STATE(33)] = 599,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 644,
  [SMALL_STATE(37)] = 652,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 668,
  [SMALL_STATE(40)] = 676,
  [SMALL_STATE(41)] = 684,
  [SMALL_STATE(42)] = 691,
  [SMALL_STATE(43)] = 695,
  [SMALL_STATE(44)] = 699,
  [SMALL_STATE(45)] = 703,
  [SMALL_STATE(46)] = 707,
  [SMALL_STATE(47)] = 711,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 719,
  [SMALL_STATE(50)] = 723,
  [SMALL_STATE(51)] = 727,
  [SMALL_STATE(52)] = 731,
  [SMALL_STATE(53)] = 735,
  [SMALL_STATE(54)] = 739,
  [SMALL_STATE(55)] = 743,
  [SMALL_STATE(56)] = 747,
  [SMALL_STATE(57)] = 751,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(45),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(30),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2), SHIFT_REPEAT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_concat, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_concat, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_of_statements, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_of_statements, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_cond, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_cond, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_action_statement, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_awk(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
