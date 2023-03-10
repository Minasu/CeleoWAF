// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 328 "seclang-parser.yy" // lalr1.cc:413

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (celeowaf::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 148: // "Accuracy"
      case 149: // "Allow"
      case 150: // "Append"
      case 151: // "AuditLog"
      case 152: // "Block"
      case 153: // "Capture"
      case 154: // "Chain"
      case 155: // "ACTION_CTL_AUDIT_ENGINE"
      case 156: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 157: // "ACTION_CTL_BDY_JSON"
      case 158: // "ACTION_CTL_BDY_XML"
      case 159: // "ACTION_CTL_BDY_URLENCODED"
      case 160: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 161: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 163: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 165: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 166: // "Deny"
      case 167: // "DeprecateVar"
      case 168: // "Drop"
      case 169: // "Exec"
      case 170: // "ExpireVar"
      case 171: // "Id"
      case 172: // "InitCol"
      case 173: // "Log"
      case 174: // "LogData"
      case 175: // "Maturity"
      case 176: // "Msg"
      case 177: // "MultiMatch"
      case 178: // "NoAuditLog"
      case 179: // "NoLog"
      case 180: // "Pass"
      case 181: // "Pause"
      case 182: // "Phase"
      case 183: // "Prepend"
      case 184: // "Proxy"
      case 185: // "Redirect"
      case 186: // "Rev"
      case 187: // "SanitiseArg"
      case 188: // "SanitiseMatched"
      case 189: // "SanitiseMatchedBytes"
      case 190: // "SanitiseRequestHeader"
      case 191: // "SanitiseResponseHeader"
      case 192: // "SetEnv"
      case 193: // "SetRsc"
      case 194: // "SetSid"
      case 195: // "SetUID"
      case 196: // "Severity"
      case 197: // "Skip"
      case 198: // "SkipAfter"
      case 199: // "Status"
      case 200: // "Tag"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 203: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 204: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 205: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 206: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 207: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 209: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 210: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 211: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 212: // "ACTION_TRANSFORMATION_LENGTH"
      case 213: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 214: // "ACTION_TRANSFORMATION_MD5"
      case 215: // "ACTION_TRANSFORMATION_NONE"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 217: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 218: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 224: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 226: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 227: // "ACTION_TRANSFORMATION_SHA1"
      case 228: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 229: // "ACTION_TRANSFORMATION_TRIM"
      case 230: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 231: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 232: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 233: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 235: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 236: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 237: // "Ver"
      case 238: // "xmlns"
      case 239: // "CONFIG_COMPONENT_SIG"
      case 240: // "CONFIG_CONN_ENGINE"
      case 241: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 242: // "CONFIG_SEC_WEB_APP_ID"
      case 243: // "CONFIG_SEC_SERVER_SIG"
      case 244: // "CONFIG_DIR_AUDIT_DIR"
      case 245: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 246: // "CONFIG_DIR_AUDIT_ENG"
      case 247: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 248: // "CONFIG_DIR_AUDIT_LOG"
      case 249: // "CONFIG_DIR_AUDIT_LOG2"
      case 250: // "CONFIG_DIR_AUDIT_LOG_P"
      case 251: // "CONFIG_DIR_AUDIT_STS"
      case 252: // "CONFIG_DIR_AUDIT_TPE"
      case 253: // "CONFIG_DIR_DEBUG_LOG"
      case 254: // "CONFIG_DIR_DEBUG_LVL"
      case 255: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 256: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 257: // "CONFIG_SEC_HASH_ENGINE"
      case 258: // "CONFIG_SEC_HASH_KEY"
      case 259: // "CONFIG_SEC_HASH_PARAM"
      case 260: // "CONFIG_SEC_HASH_METHOD_RX"
      case 261: // "CONFIG_SEC_HASH_METHOD_PM"
      case 262: // "CONFIG_SEC_CHROOT_DIR"
      case 263: // "CONFIG_DIR_GEO_DB"
      case 264: // "CONFIG_DIR_GSB_DB"
      case 265: // "CONFIG_SEC_GUARDIAN_LOG"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 267: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 268: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 269: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 270: // "CONFIG_SEC_SENSOR_ID"
      case 271: // "CONFIG_DIR_ARGS_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 273: // "CONFIG_DIR_REQ_BODY"
      case 274: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 276: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 277: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 278: // "CONFIG_DIR_RES_BODY"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 280: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 281: // "CONFIG_SEC_RULE_INHERITANCE"
      case 282: // "CONFIG_SEC_RULE_PERF_TIME"
      case 283: // "CONFIG_DIR_RULE_ENG"
      case 284: // "CONFIG_DIR_SEC_ACTION"
      case 285: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 286: // "CONFIG_DIR_SEC_MARKER"
      case 287: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 288: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 289: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 290: // "CONFIG_SEC_HTTP_BLKEY"
      case 291: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 292: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 295: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 298: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 299: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 300: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 301: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 302: // "CONFIG_UPLOAD_DIR"
      case 303: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 304: // "CONFIG_UPLOAD_FILE_MODE"
      case 305: // "CONFIG_VALUE_ABORT"
      case 306: // "CONFIG_VALUE_DETC"
      case 307: // "CONFIG_VALUE_HTTPS"
      case 308: // "CONFIG_VALUE_AMQP"
      case 309: // "CONFIG_VALUE_OFF"
      case 310: // "CONFIG_VALUE_ON"
      case 311: // "CONFIG_VALUE_PARALLEL"
      case 312: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 313: // "CONFIG_VALUE_REJECT"
      case 314: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 315: // "CONFIG_VALUE_SERIAL"
      case 316: // "CONFIG_VALUE_WARN"
      case 317: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 318: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 319: // "CONGIG_DIR_SEC_ARG_SEP"
      case 320: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 321: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 322: // "CONGIG_DIR_SEC_DATA_DIR"
      case 323: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 324: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 325: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 326: // "CONGIG_DIR_SEC_TMP_DIR"
      case 327: // "DIRECTIVE"
      case 328: // "DIRECTIVE_SECRULESCRIPT"
      case 329: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 330: // "QUOTATION_MARK"
      case 331: // "RUN_TIME_VAR_BLD"
      case 332: // "RUN_TIME_VAR_DUR"
      case 333: // "RUN_TIME_VAR_HSV"
      case 334: // "RUN_TIME_VAR_REMOTE_USER"
      case 335: // "RUN_TIME_VAR_TIME"
      case 336: // "RUN_TIME_VAR_TIME_DAY"
      case 337: // "RUN_TIME_VAR_TIME_EPOCH"
      case 338: // "RUN_TIME_VAR_TIME_HOUR"
      case 339: // "RUN_TIME_VAR_TIME_MIN"
      case 340: // "RUN_TIME_VAR_TIME_MON"
      case 341: // "RUN_TIME_VAR_TIME_SEC"
      case 342: // "RUN_TIME_VAR_TIME_WDAY"
      case 343: // "RUN_TIME_VAR_TIME_YEAR"
      case 344: // "VARIABLE"
      case 345: // "Dictionary element"
      case 346: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 353: // op
      case 354: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 362: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 359: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 360: // act
      case 361: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 356: // variables
      case 357: // variables_pre_process
      case 358: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 351: // actions
      case 352: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 148: // "Accuracy"
      case 149: // "Allow"
      case 150: // "Append"
      case 151: // "AuditLog"
      case 152: // "Block"
      case 153: // "Capture"
      case 154: // "Chain"
      case 155: // "ACTION_CTL_AUDIT_ENGINE"
      case 156: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 157: // "ACTION_CTL_BDY_JSON"
      case 158: // "ACTION_CTL_BDY_XML"
      case 159: // "ACTION_CTL_BDY_URLENCODED"
      case 160: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 161: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 163: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 165: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 166: // "Deny"
      case 167: // "DeprecateVar"
      case 168: // "Drop"
      case 169: // "Exec"
      case 170: // "ExpireVar"
      case 171: // "Id"
      case 172: // "InitCol"
      case 173: // "Log"
      case 174: // "LogData"
      case 175: // "Maturity"
      case 176: // "Msg"
      case 177: // "MultiMatch"
      case 178: // "NoAuditLog"
      case 179: // "NoLog"
      case 180: // "Pass"
      case 181: // "Pause"
      case 182: // "Phase"
      case 183: // "Prepend"
      case 184: // "Proxy"
      case 185: // "Redirect"
      case 186: // "Rev"
      case 187: // "SanitiseArg"
      case 188: // "SanitiseMatched"
      case 189: // "SanitiseMatchedBytes"
      case 190: // "SanitiseRequestHeader"
      case 191: // "SanitiseResponseHeader"
      case 192: // "SetEnv"
      case 193: // "SetRsc"
      case 194: // "SetSid"
      case 195: // "SetUID"
      case 196: // "Severity"
      case 197: // "Skip"
      case 198: // "SkipAfter"
      case 199: // "Status"
      case 200: // "Tag"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 203: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 204: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 205: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 206: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 207: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 209: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 210: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 211: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 212: // "ACTION_TRANSFORMATION_LENGTH"
      case 213: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 214: // "ACTION_TRANSFORMATION_MD5"
      case 215: // "ACTION_TRANSFORMATION_NONE"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 217: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 218: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 224: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 226: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 227: // "ACTION_TRANSFORMATION_SHA1"
      case 228: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 229: // "ACTION_TRANSFORMATION_TRIM"
      case 230: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 231: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 232: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 233: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 235: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 236: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 237: // "Ver"
      case 238: // "xmlns"
      case 239: // "CONFIG_COMPONENT_SIG"
      case 240: // "CONFIG_CONN_ENGINE"
      case 241: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 242: // "CONFIG_SEC_WEB_APP_ID"
      case 243: // "CONFIG_SEC_SERVER_SIG"
      case 244: // "CONFIG_DIR_AUDIT_DIR"
      case 245: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 246: // "CONFIG_DIR_AUDIT_ENG"
      case 247: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 248: // "CONFIG_DIR_AUDIT_LOG"
      case 249: // "CONFIG_DIR_AUDIT_LOG2"
      case 250: // "CONFIG_DIR_AUDIT_LOG_P"
      case 251: // "CONFIG_DIR_AUDIT_STS"
      case 252: // "CONFIG_DIR_AUDIT_TPE"
      case 253: // "CONFIG_DIR_DEBUG_LOG"
      case 254: // "CONFIG_DIR_DEBUG_LVL"
      case 255: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 256: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 257: // "CONFIG_SEC_HASH_ENGINE"
      case 258: // "CONFIG_SEC_HASH_KEY"
      case 259: // "CONFIG_SEC_HASH_PARAM"
      case 260: // "CONFIG_SEC_HASH_METHOD_RX"
      case 261: // "CONFIG_SEC_HASH_METHOD_PM"
      case 262: // "CONFIG_SEC_CHROOT_DIR"
      case 263: // "CONFIG_DIR_GEO_DB"
      case 264: // "CONFIG_DIR_GSB_DB"
      case 265: // "CONFIG_SEC_GUARDIAN_LOG"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 267: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 268: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 269: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 270: // "CONFIG_SEC_SENSOR_ID"
      case 271: // "CONFIG_DIR_ARGS_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 273: // "CONFIG_DIR_REQ_BODY"
      case 274: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 276: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 277: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 278: // "CONFIG_DIR_RES_BODY"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 280: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 281: // "CONFIG_SEC_RULE_INHERITANCE"
      case 282: // "CONFIG_SEC_RULE_PERF_TIME"
      case 283: // "CONFIG_DIR_RULE_ENG"
      case 284: // "CONFIG_DIR_SEC_ACTION"
      case 285: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 286: // "CONFIG_DIR_SEC_MARKER"
      case 287: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 288: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 289: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 290: // "CONFIG_SEC_HTTP_BLKEY"
      case 291: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 292: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 295: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 298: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 299: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 300: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 301: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 302: // "CONFIG_UPLOAD_DIR"
      case 303: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 304: // "CONFIG_UPLOAD_FILE_MODE"
      case 305: // "CONFIG_VALUE_ABORT"
      case 306: // "CONFIG_VALUE_DETC"
      case 307: // "CONFIG_VALUE_HTTPS"
      case 308: // "CONFIG_VALUE_AMQP"
      case 309: // "CONFIG_VALUE_OFF"
      case 310: // "CONFIG_VALUE_ON"
      case 311: // "CONFIG_VALUE_PARALLEL"
      case 312: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 313: // "CONFIG_VALUE_REJECT"
      case 314: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 315: // "CONFIG_VALUE_SERIAL"
      case 316: // "CONFIG_VALUE_WARN"
      case 317: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 318: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 319: // "CONGIG_DIR_SEC_ARG_SEP"
      case 320: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 321: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 322: // "CONGIG_DIR_SEC_DATA_DIR"
      case 323: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 324: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 325: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 326: // "CONGIG_DIR_SEC_TMP_DIR"
      case 327: // "DIRECTIVE"
      case 328: // "DIRECTIVE_SECRULESCRIPT"
      case 329: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 330: // "QUOTATION_MARK"
      case 331: // "RUN_TIME_VAR_BLD"
      case 332: // "RUN_TIME_VAR_DUR"
      case 333: // "RUN_TIME_VAR_HSV"
      case 334: // "RUN_TIME_VAR_REMOTE_USER"
      case 335: // "RUN_TIME_VAR_TIME"
      case 336: // "RUN_TIME_VAR_TIME_DAY"
      case 337: // "RUN_TIME_VAR_TIME_EPOCH"
      case 338: // "RUN_TIME_VAR_TIME_HOUR"
      case 339: // "RUN_TIME_VAR_TIME_MIN"
      case 340: // "RUN_TIME_VAR_TIME_MON"
      case 341: // "RUN_TIME_VAR_TIME_SEC"
      case 342: // "RUN_TIME_VAR_TIME_WDAY"
      case 343: // "RUN_TIME_VAR_TIME_YEAR"
      case 344: // "VARIABLE"
      case 345: // "Dictionary element"
      case 346: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 353: // op
      case 354: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 362: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 359: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 360: // act
      case 361: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 356: // variables
      case 357: // variables_pre_process
      case 358: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 351: // actions
      case 352: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 321 "/home/modsec/CeleoWAF/src/parser/seclang-parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = new std::string(driver.file);
}

#line 879 "seclang-parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 148: // "Accuracy"
      case 149: // "Allow"
      case 150: // "Append"
      case 151: // "AuditLog"
      case 152: // "Block"
      case 153: // "Capture"
      case 154: // "Chain"
      case 155: // "ACTION_CTL_AUDIT_ENGINE"
      case 156: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 157: // "ACTION_CTL_BDY_JSON"
      case 158: // "ACTION_CTL_BDY_XML"
      case 159: // "ACTION_CTL_BDY_URLENCODED"
      case 160: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 161: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 162: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 163: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 164: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 165: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 166: // "Deny"
      case 167: // "DeprecateVar"
      case 168: // "Drop"
      case 169: // "Exec"
      case 170: // "ExpireVar"
      case 171: // "Id"
      case 172: // "InitCol"
      case 173: // "Log"
      case 174: // "LogData"
      case 175: // "Maturity"
      case 176: // "Msg"
      case 177: // "MultiMatch"
      case 178: // "NoAuditLog"
      case 179: // "NoLog"
      case 180: // "Pass"
      case 181: // "Pause"
      case 182: // "Phase"
      case 183: // "Prepend"
      case 184: // "Proxy"
      case 185: // "Redirect"
      case 186: // "Rev"
      case 187: // "SanitiseArg"
      case 188: // "SanitiseMatched"
      case 189: // "SanitiseMatchedBytes"
      case 190: // "SanitiseRequestHeader"
      case 191: // "SanitiseResponseHeader"
      case 192: // "SetEnv"
      case 193: // "SetRsc"
      case 194: // "SetSid"
      case 195: // "SetUID"
      case 196: // "Severity"
      case 197: // "Skip"
      case 198: // "SkipAfter"
      case 199: // "Status"
      case 200: // "Tag"
      case 201: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 202: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 203: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 204: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 205: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 206: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 207: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 208: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 209: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 210: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 211: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 212: // "ACTION_TRANSFORMATION_LENGTH"
      case 213: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 214: // "ACTION_TRANSFORMATION_MD5"
      case 215: // "ACTION_TRANSFORMATION_NONE"
      case 216: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 217: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 218: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 219: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 220: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 221: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 223: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 224: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 225: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 226: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 227: // "ACTION_TRANSFORMATION_SHA1"
      case 228: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 229: // "ACTION_TRANSFORMATION_TRIM"
      case 230: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 231: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 232: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 233: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 234: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 235: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 236: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 237: // "Ver"
      case 238: // "xmlns"
      case 239: // "CONFIG_COMPONENT_SIG"
      case 240: // "CONFIG_CONN_ENGINE"
      case 241: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 242: // "CONFIG_SEC_WEB_APP_ID"
      case 243: // "CONFIG_SEC_SERVER_SIG"
      case 244: // "CONFIG_DIR_AUDIT_DIR"
      case 245: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 246: // "CONFIG_DIR_AUDIT_ENG"
      case 247: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 248: // "CONFIG_DIR_AUDIT_LOG"
      case 249: // "CONFIG_DIR_AUDIT_LOG2"
      case 250: // "CONFIG_DIR_AUDIT_LOG_P"
      case 251: // "CONFIG_DIR_AUDIT_STS"
      case 252: // "CONFIG_DIR_AUDIT_TPE"
      case 253: // "CONFIG_DIR_DEBUG_LOG"
      case 254: // "CONFIG_DIR_DEBUG_LVL"
      case 255: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 256: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 257: // "CONFIG_SEC_HASH_ENGINE"
      case 258: // "CONFIG_SEC_HASH_KEY"
      case 259: // "CONFIG_SEC_HASH_PARAM"
      case 260: // "CONFIG_SEC_HASH_METHOD_RX"
      case 261: // "CONFIG_SEC_HASH_METHOD_PM"
      case 262: // "CONFIG_SEC_CHROOT_DIR"
      case 263: // "CONFIG_DIR_GEO_DB"
      case 264: // "CONFIG_DIR_GSB_DB"
      case 265: // "CONFIG_SEC_GUARDIAN_LOG"
      case 266: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 267: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 268: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 269: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 270: // "CONFIG_SEC_SENSOR_ID"
      case 271: // "CONFIG_DIR_ARGS_LIMIT"
      case 272: // "CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT"
      case 273: // "CONFIG_DIR_REQ_BODY"
      case 274: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 275: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 276: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 277: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 278: // "CONFIG_DIR_RES_BODY"
      case 279: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 280: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 281: // "CONFIG_SEC_RULE_INHERITANCE"
      case 282: // "CONFIG_SEC_RULE_PERF_TIME"
      case 283: // "CONFIG_DIR_RULE_ENG"
      case 284: // "CONFIG_DIR_SEC_ACTION"
      case 285: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 286: // "CONFIG_DIR_SEC_MARKER"
      case 287: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 288: // "CONFIG_DIR_UNICODE_CODE_PAGE"
      case 289: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 290: // "CONFIG_SEC_HTTP_BLKEY"
      case 291: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 292: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 293: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 294: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 295: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 296: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 297: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 298: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 299: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 300: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 301: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 302: // "CONFIG_UPLOAD_DIR"
      case 303: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 304: // "CONFIG_UPLOAD_FILE_MODE"
      case 305: // "CONFIG_VALUE_ABORT"
      case 306: // "CONFIG_VALUE_DETC"
      case 307: // "CONFIG_VALUE_HTTPS"
      case 308: // "CONFIG_VALUE_AMQP"
      case 309: // "CONFIG_VALUE_OFF"
      case 310: // "CONFIG_VALUE_ON"
      case 311: // "CONFIG_VALUE_PARALLEL"
      case 312: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 313: // "CONFIG_VALUE_REJECT"
      case 314: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 315: // "CONFIG_VALUE_SERIAL"
      case 316: // "CONFIG_VALUE_WARN"
      case 317: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 318: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 319: // "CONGIG_DIR_SEC_ARG_SEP"
      case 320: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 321: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 322: // "CONGIG_DIR_SEC_DATA_DIR"
      case 323: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 324: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 325: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 326: // "CONGIG_DIR_SEC_TMP_DIR"
      case 327: // "DIRECTIVE"
      case 328: // "DIRECTIVE_SECRULESCRIPT"
      case 329: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 330: // "QUOTATION_MARK"
      case 331: // "RUN_TIME_VAR_BLD"
      case 332: // "RUN_TIME_VAR_DUR"
      case 333: // "RUN_TIME_VAR_HSV"
      case 334: // "RUN_TIME_VAR_REMOTE_USER"
      case 335: // "RUN_TIME_VAR_TIME"
      case 336: // "RUN_TIME_VAR_TIME_DAY"
      case 337: // "RUN_TIME_VAR_TIME_EPOCH"
      case 338: // "RUN_TIME_VAR_TIME_HOUR"
      case 339: // "RUN_TIME_VAR_TIME_MIN"
      case 340: // "RUN_TIME_VAR_TIME_MON"
      case 341: // "RUN_TIME_VAR_TIME_SEC"
      case 342: // "RUN_TIME_VAR_TIME_WDAY"
      case 343: // "RUN_TIME_VAR_TIME_YEAR"
      case 344: // "VARIABLE"
      case 345: // "Dictionary element"
      case 346: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 353: // op
      case 354: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 362: // run_time_string
        yylhs.value.build< std::unique_ptr<RunTimeString> > ();
        break;

      case 359: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 360: // act
      case 361: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 356: // variables
      case 357: // variables_pre_process
      case 358: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 351: // actions
      case 352: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 718 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 731 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1230 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 737 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1238 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 743 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1246 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 747 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 751 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(celeowaf::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1262 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 757 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1270 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 763 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1278 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 769 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1286 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 775 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1294 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 780 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1302 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 785 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFormat(celeowaf::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 791 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1319 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 798 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1327 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 802 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1335 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 806 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1343 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 810 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(celeowaf::audit_log::AuditLog::AMQPAuditLogType);
      }
#line 1351 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 816 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1359 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 820 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1367 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 824 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1376 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 829 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1385 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 834 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1394 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 839 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 844 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 1411 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 848 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 1419 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 855 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1427 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 859 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1435 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 866 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1445 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 872 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1456 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 882 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 891 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1483 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 901 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[0].location.end.filename, &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1496 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 910 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(*yystack_[1].location.end.filename, &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1510 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 923 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1518 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 927 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1526 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 931 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1534 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 935 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1542 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 939 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 943 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 947 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 951 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1574 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 955 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 959 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1591 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 964 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1599 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 968 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1607 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 972 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 976 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1623 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 980 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySVNR(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1631 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 984 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1640 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 989 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 994 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 998 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 1002 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 1006 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 1010 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1689 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 1014 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1697 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 1018 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 1022 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1713 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 1026 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1721 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 1030 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1729 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 1034 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1737 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 1038 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1745 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 1042 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1753 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 1046 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1761 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 69:
#line 1050 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1769 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1054 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::RxGlobal(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1777 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1058 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1062 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1793 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1066 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1801 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 74:
#line 1070 "seclang-parser.yy" // lalr1.cc:859
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of CeleoWAF was not compiled with GeoIP or MaxMind support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1816 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1085 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[3].location.end.filename)),
            /* line number */ yystack_[3].location.end.line
            ));

        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 1850 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1115 "seclang-parser.yy" // lalr1.cc:859
    {
        variables::Variables *v = new variables::Variables();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        std::unique_ptr<RuleWithOperator> rule(new RuleWithOperator(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* transformations */ NULL,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[2].location.end.filename)),
            /* line number */ yystack_[2].location.end.line
            ));
        if (driver.addSecRule(std::move(rule)) == false) {
            YYERROR;
        }
      }
#line 1873 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1134 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleUnconditional> rule(new RuleUnconditional(
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[1].location.end.filename)),
            /* line number */ yystack_[1].location.end.line
            ));
        driver.addSecAction(std::move(rule));
      }
#line 1896 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1153 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string err;
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        std::vector<actions::transformations::Transformation *> *t = new std::vector<actions::transformations::Transformation *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            if (dynamic_cast<actions::transformations::Transformation *>(i.get())) {
              t->push_back(dynamic_cast<actions::transformations::Transformation *>(i.release()));
            } else {
              a->push_back(i.release());
            }
        }
        std::unique_ptr<RuleScript> r(new RuleScript(
            /* path to script */ yystack_[1].value.as< std::string > (),
            /* actions */ a,
            /* transformations */ t,
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[1].location.end.filename)),
            /* line number */ yystack_[1].location.end.line
            ));

        if (r->init(&err) == false) {
            driver.error(yystack_[2].location, "Failed to load script: " + err);
            YYERROR;
        }
        if (driver.addSecRuleScript(std::move(r)) == false) {
            YYERROR;
        }
      }
#line 1928 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1181 "seclang-parser.yy" // lalr1.cc:859
    {
        bool hasDisruptive = false;
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (a->isDisruptive() == true && dynamic_cast<actions::Block *>(a) == NULL) {
                hasDisruptive = true;
            }
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + *a->m_name.get() + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = celeowaf::Phases::RequestHeadersPhase;
        }

        if (hasDisruptive == false) {
            driver.error(yystack_[2].location, "SecDefaultAction must specify a disruptive action.");
            YYERROR;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(
                std::unique_ptr<actions::Action>(a));
        }

        delete actions;
      }
#line 1989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1238 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(celeowaf::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()),
            /* file name */ std::unique_ptr<std::string>(new std::string(*yystack_[0].location.end.filename)),
            /* line number */ yystack_[0].location.end.line
        );
      }
#line 2000 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1245 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DisabledRuleEngine;
      }
#line 2008 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1249 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::EnabledRuleEngine;
      }
#line 2016 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1253 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = celeowaf::RulesSet::DetectionOnlyRuleEngine;
      }
#line 2024 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1257 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2032 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1261 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2040 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1265 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2048 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1269 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2056 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1273 "seclang-parser.yy" // lalr1.cc:859
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 2069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1282 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 2077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1286 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2086 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1291 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1294 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secWebAppId.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1299 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2111 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1304 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2120 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1309 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2129 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1314 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2136 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 98:
#line 1317 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2145 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 1322 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2152 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 1325 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2161 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 1330 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2170 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1335 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2177 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 1338 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 1343 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2195 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 105:
#line 1348 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2204 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 106:
#line 1353 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 107:
#line 1358 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 108:
#line 1363 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2231 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 109:
#line 1368 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2240 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 110:
#line 1373 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2247 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1376 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2256 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1381 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2265 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 113:
#line 1386 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2274 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 114:
#line 1391 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2283 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 1396 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2290 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 1399 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 1404 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2308 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 1409 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2317 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1414 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2334 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1427 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByTag(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByTag: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2351 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1440 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2368 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1453 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2385 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1466 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByMsg(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByMsg: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2402 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1479 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2432 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1505 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }


        if (driver.m_exceptions.loadUpdateActionById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2463 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1533 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2479 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1545 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2502 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1565 "seclang-parser.yy" // lalr1.cc:859
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        std::string err;
        std::string file = celeowaf::utils::find_resource(yystack_[0].value.as< std::string > (),
            *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (Utils::GeoLookup::getInstance().setDataBase(file, &err) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file << ". " << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of CeleoWAF was not compiled with GeoIP or MaxMind support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1592 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_argumentsLimit.m_set = true;
        driver.m_argumentsLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2542 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1597 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyJsonDepthLimit.m_set = true;
        driver.m_requestBodyJsonDepthLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2551 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1603 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1608 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2569 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1613 "seclang-parser.yy" // lalr1.cc:859
    {
        std::stringstream ss;
        ss << "As of CeleoWAF version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. CeleoWAF will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 2582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1622 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2591 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1627 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2599 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1631 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2607 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1635 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2615 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1639 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = celeowaf::RulesSet::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2623 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1643 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2631 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 1647 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = RulesSet::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2639 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1661 "seclang-parser.yy" // lalr1.cc:859
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 2655 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1673 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1679 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::FalseConfigBoolean;
      }
#line 2673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1683 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = celeowaf::RulesSetProperties::TrueConfigBoolean;
      }
#line 2681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 1687 "seclang-parser.yy" // lalr1.cc:859
    {
/* Parser error disabled to avoid breaking default installations with celeowaf.conf-recommended
        std::stringstream ss;
        ss << "As of CeleoWAF version 3.0, SecTmpDir is no longer supported.";
        ss << " Instead, you can use your web server configurations to control when";
        ss << "and where to swap. CeleoWAF will follow the web server decision.";
        driver.error(@0, ss.str());
        YYERROR;
*/
      }
#line 2696 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1708 "seclang-parser.yy" // lalr1.cc:859
    {
        if (atoi(yystack_[0].value.as< std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 2707 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 1715 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 2716 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1725 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        std::vector<std::string> param;
        double num = 0;
        std::string f;
        std::string file;
        std::string err;
        param = utils::string::ssplit(yystack_[0].value.as< std::string > (), ' ');
        if (param.size() <= 1) {
            std::stringstream ss;
            ss << "Failed to process unicode map, missing ";
            ss << "parameter: " << yystack_[0].value.as< std::string > () << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        try {
            num = std::stod(param.back());
        } catch (...) {
            std::stringstream ss;
            ss << "Failed to process unicode map, last parameter is ";
            ss << "expected to be a number: " << param.back() << " ";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        param.pop_back();

        while (param.size() > 0) {
            if (f.empty()) {
                f = param.back();
            } else {
                f = param.back() + " " + f;
            }
            param.pop_back();
        }

        file = celeowaf::utils::find_resource(f, *yystack_[0].location.end.filename, &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to locate the unicode map file from: " << f << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }

        ConfigUnicodeMap::loadConfig(file, num, &driver, &error);

        if (!error.empty()) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }

      }
#line 2774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1779 "seclang-parser.yy" // lalr1.cc:859
    {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 2785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1786 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2794 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1794 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable> > > originalList = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newNewList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> exclusionVars(new std::vector<std::unique_ptr<Variable>>());
        while (!originalList->empty()) {
            std::unique_ptr<Variable> var = std::move(originalList->back());
            originalList->pop_back();
            if (dynamic_cast<VariableModificatorExclusion*>(var.get())) {
                exclusionVars->push_back(std::move(var));
            } else {
                newList->push_back(std::move(var));
            }
        }

        while (!newList->empty()) {
            bool doNotAdd = false;
            std::unique_ptr<Variable> var = std::move(newList->back());
            newList->pop_back();
            for (auto &i : *exclusionVars) {
                if (*var == *i) {
                    doNotAdd = true;
                }
                if (i->belongsToCollection(var.get())) {
                    var->addsKeyExclusion(i.get());
                }
            }
            if (!doNotAdd) {
                newNewList->push_back(std::move(var));
            }
        }
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(newNewList);
      }
#line 2832 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1831 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2840 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1835 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2848 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1842 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2857 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1847 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2867 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1853 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1859 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1865 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2898 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1872 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1882 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1886 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1890 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Args_NoDictElement());
      }
#line 2933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1894 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1898 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2949 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1902 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPost_NoDictElement());
      }
#line 2957 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1906 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2965 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1910 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2973 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1914 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGet_NoDictElement());
      }
#line 2981 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1918 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1922 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1926 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesSizes_NoDictElement());
      }
#line 3005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1930 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1934 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1938 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesNames_NoDictElement());
      }
#line 3029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1942 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1946 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1950 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpContent_NoDictElement());
      }
#line 3053 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1954 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3061 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1958 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1962 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartFileName_NoDictElement());
      }
#line 3077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1966 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3085 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1970 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1974 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultiPartName_NoDictElement());
      }
#line 3101 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1978 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1982 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3117 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1986 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarsNames_NoDictElement());
      }
#line 3125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1990 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3133 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1994 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1998 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVars_NoDictElement());
      }
#line 3149 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 2002 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3157 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 2006 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3165 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 2010 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Files_NoDictElement());
      }
#line 3173 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 2014 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 2018 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 2022 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookies_NoDictElement());
      }
#line 3197 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 2026 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3205 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 2030 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 2034 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeaders_NoDictElement());
      }
#line 3221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 2038 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 2042 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3237 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 2046 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeaders_NoDictElement());
      }
#line 3245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 2050 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3253 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 2054 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3261 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 2058 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Geo_NoDictElement());
      }
#line 3269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 2062 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 2066 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 2070 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestCookiesNames_NoDictElement());
      }
#line 3293 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 2074 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3301 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 2078 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3309 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 2082 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartPartHeaders_NoDictElement());
      }
#line 3317 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 2086 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3325 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 2090 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3333 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 2094 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Rule_NoDictElement());
      }
#line 3341 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 2098 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3349 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 2102 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3357 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 2106 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Env("ENV"));
      }
#line 3365 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 2110 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3373 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 2114 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3381 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 2118 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::XML_NoDictElement());
      }
#line 3389 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 2122 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3397 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 2126 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3405 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 2130 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesTmpNames_NoDictElement());
      }
#line 3413 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 2134 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3421 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 2138 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 2142 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3437 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 2146 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Resource_NoDictElement());
      }
#line 3445 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 2150 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3453 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 2154 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3461 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 2158 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 2162 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Ip_NoDictElement());
      }
#line 3477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 2166 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqLimit_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 2170 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqLimit_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 2174 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqLimit_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3501 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 2178 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqLimit_NoDictElement());
      }
#line 3509 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 2182 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3517 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 2186 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 2190 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 2194 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Global_NoDictElement());
      }
#line 3541 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 2198 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3549 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 2202 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3557 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 2206 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3565 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 2210 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::User_NoDictElement());
      }
#line 3573 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 2214 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3581 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 2218 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3589 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 2222 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3597 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 2226 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Tx_NoDictElement());
      }
#line 3605 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 2230 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3613 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 2234 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3621 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 2238 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3629 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 2242 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Session_NoDictElement());
      }
#line 3637 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 2246 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3645 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 2250 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3653 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 2254 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsNames_NoDictElement());
      }
#line 3661 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 2258 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3669 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 2262 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3677 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 2266 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsGetNames_NoDictElement());
      }
#line 3685 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 2271 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3693 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 2275 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3701 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 2279 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsPostNames_NoDictElement());
      }
#line 3709 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 2284 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3717 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2288 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3725 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2292 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestHeadersNames_NoDictElement());
      }
#line 3733 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2297 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentType());
      }
#line 3741 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2302 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3749 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2306 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3757 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2310 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseHeadersNames_NoDictElement());
      }
#line 3765 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2314 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ArgsCombinedSize());
      }
#line 3773 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2318 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::AuthType());
      }
#line 3781 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2322 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FilesCombinedSize());
      }
#line 3789 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2326 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequest());
      }
#line 3797 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2330 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::FullRequestLength());
      }
#line 3805 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2334 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::InboundDataError());
      }
#line 3813 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2338 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVar());
      }
#line 3821 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2342 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MatchedVarName());
      }
#line 3829 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2346 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryQuoted());
      }
#line 3837 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2350 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartBoundaryWhiteSpace());
      }
#line 3845 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2354 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartCrlfLFLines());
      }
#line 3853 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2358 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateAfter());
      }
#line 3861 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2362 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartDateBefore());
      }
#line 3869 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2366 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartFileLimitExceeded());
      }
#line 3877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2370 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartHeaderFolding());
      }
#line 3885 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2374 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidHeaderFolding());
      }
#line 3893 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2378 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidPart());
      }
#line 3901 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2382 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartInvalidQuoting());
      }
#line 3909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2386 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartLFLine());
      }
#line 3917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2390 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2394 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartMissingSemicolon());
      }
#line 3933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2398 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartStrictError());
      }
#line 3941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2402 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::MultipartUnmatchedBoundary());
      }
#line 3949 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2406 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::OutboundDataError());
      }
#line 3957 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2410 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::PathInfo());
      }
#line 3965 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2414 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::QueryString());
      }
#line 3973 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2418 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteAddr());
      }
#line 3981 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2422 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemoteHost());
      }
#line 3989 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2426 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RemotePort());
      }
#line 3997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2430 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyError());
      }
#line 4005 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2434 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyErrorMsg());
      }
#line 4013 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2438 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessor());
      }
#line 4021 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2442 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorError());
      }
#line 4029 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2446 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ReqbodyProcessorErrorMsg());
      }
#line 4037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2450 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBasename());
      }
#line 4045 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2454 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBody());
      }
#line 4053 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2458 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestBodyLength());
      }
#line 4061 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2462 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestFilename());
      }
#line 4069 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2466 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestLine());
      }
#line 4077 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2470 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestMethod());
      }
#line 4085 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2474 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestProtocol());
      }
#line 4093 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2478 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURI());
      }
#line 4101 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2482 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::RequestURIRaw());
      }
#line 4109 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2486 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseBody());
      }
#line 4117 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2490 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseContentLength());
      }
#line 4125 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2494 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseProtocol());
      }
#line 4133 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2498 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ResponseStatus());
      }
#line 4141 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2502 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerAddr());
      }
#line 4149 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2506 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerName());
      }
#line 4157 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2510 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::ServerPort());
      }
#line 4165 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2514 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::SessionID());
      }
#line 4173 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2518 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UniqueID());
      }
#line 4181 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2522 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UrlEncodedError());
      }
#line 4189 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2526 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::UserID());
      }
#line 4197 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2530 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4205 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2534 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::Status());
      }
#line 4213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2538 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new variables::WebAppId());
      }
#line 4221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2542 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4232 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2550 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new CWafBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4243 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2557 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2564 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4265 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2571 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4276 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2578 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4287 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2585 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4298 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2592 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4309 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2599 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4320 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2606 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4331 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2613 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4342 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2620 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4353 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2627 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4364 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2637 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 4372 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2641 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 4380 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2645 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4388 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2649 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4396 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2653 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Block(yystack_[0].value.as< std::string > ()));
      }
#line 4404 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2657 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 4412 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2661 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 4420 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2665 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=on"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 2670 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=off"));
      }
#line 4437 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 351:
#line 2674 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditEngine("ctl:auditengine=relevantonly"));
        driver.m_auditLog->setCtlAuditEngineActive();
      }
#line 4446 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 352:
#line 2679 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 4454 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 2683 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 4462 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 2687 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 4470 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 2691 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorURLENCODED(yystack_[0].value.as< std::string > ()));
      }
#line 4478 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 2695 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4487 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 357:
#line 2700 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4496 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 358:
#line 2705 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 4504 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 359:
#line 2709 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 4512 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 360:
#line 2713 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4520 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 361:
#line 2717 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4528 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 362:
#line 2721 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 4536 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 363:
#line 2725 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 4544 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 364:
#line 2729 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4552 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 365:
#line 2733 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 4560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 366:
#line 2737 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4568 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 367:
#line 2741 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 4576 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 368:
#line 2745 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 4584 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 369:
#line 2749 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Drop(yystack_[0].value.as< std::string > ()));
      }
#line 4592 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 370:
#line 2753 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as< std::string > ()));
      }
#line 4600 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 371:
#line 2757 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4609 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 372:
#line 2762 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 4617 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 373:
#line 2766 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4625 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 374:
#line 2770 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4633 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 375:
#line 2774 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 4641 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 376:
#line 2778 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 4649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 377:
#line 2782 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 378:
#line 2786 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 4665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 379:
#line 2790 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 380:
#line 2794 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 4681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 381:
#line 2798 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 4689 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 382:
#line 2802 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 4697 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 383:
#line 2806 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 4705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 384:
#line 2810 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 4713 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 385:
#line 2814 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 4721 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 386:
#line 2818 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4729 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 387:
#line 2822 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 4737 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 388:
#line 2826 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseArg", yystack_[1].location);
      }
#line 4745 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 389:
#line 2830 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatched", yystack_[1].location);
      }
#line 4753 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 390:
#line 2834 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseMatchedBytes", yystack_[1].location);
      }
#line 4761 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 391:
#line 2838 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseRequestHeader", yystack_[1].location);
      }
#line 4769 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 392:
#line 2842 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanitiseResponseHeader", yystack_[1].location);
      }
#line 4777 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 393:
#line 2846 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetENV(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4785 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 394:
#line 2850 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4793 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 395:
#line 2854 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4801 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 396:
#line 2858 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4809 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 397:
#line 2862 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 4817 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 398:
#line 2866 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4825 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 399:
#line 2870 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4833 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 400:
#line 2874 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4841 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 401:
#line 2878 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4849 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 402:
#line 2882 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4857 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 403:
#line 2886 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4865 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 404:
#line 2890 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4873 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 405:
#line 2894 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4881 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 406:
#line 2898 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4889 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 407:
#line 2902 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4897 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 408:
#line 2906 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4905 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 409:
#line 2910 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as< std::string > ()));
      }
#line 4913 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 410:
#line 2914 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as< std::string > ()));
      }
#line 4921 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 411:
#line 2918 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as< std::string > ()));
      }
#line 4929 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 412:
#line 2922 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4937 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 413:
#line 2926 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4945 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 414:
#line 2930 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4953 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 415:
#line 2934 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::EscapeSeqDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4961 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 416:
#line 2938 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4969 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 417:
#line 2942 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4977 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 418:
#line 2946 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4985 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 419:
#line 2950 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4993 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 420:
#line 2954 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 5001 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 421:
#line 2958 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5009 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 422:
#line 2962 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlEncode(yystack_[0].value.as< std::string > ()));
      }
#line 5017 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 423:
#line 2966 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 5025 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 424:
#line 2970 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5033 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 425:
#line 2974 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5041 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 426:
#line 2978 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5049 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 427:
#line 2982 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5057 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 428:
#line 2986 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5065 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 429:
#line 2990 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5073 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 430:
#line 2994 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5081 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 431:
#line 2998 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 5089 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 432:
#line 3002 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimLeft(yystack_[0].value.as< std::string > ()));
      }
#line 5097 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 433:
#line 3006 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimRight(yystack_[0].value.as< std::string > ()));
      }
#line 5105 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 434:
#line 3010 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 5113 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 435:
#line 3014 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 5121 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 436:
#line 3018 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 5129 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 437:
#line 3022 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 5137 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 438:
#line 3026 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 5145 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 439:
#line 3030 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 5153 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 440:
#line 3034 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 5161 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 441:
#line 3041 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5169 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 442:
#line 3045 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5177 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 443:
#line 3049 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5185 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 444:
#line 3053 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5193 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 445:
#line 3057 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5201 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 446:
#line 3064 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5210 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 447:
#line 3069 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5219 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 448:
#line 3074 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 449:
#line 3080 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5239 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 5243 "seclang-parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -417;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
    3128,  -417,  -297,  -417,  -125,  -417,  -248,  -417,  -417,  -417,
    -417,  -417,  -272,  -417,  -417,  -417,  -417,  -417,  -279,  -417,
    -417,  -417,  -246,  -244,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -242,
    -417,  -417,  -243,  -417,  -238,  -417,  -239,  -234,  -417,  -258,
    3405,  3405,  -417,  -417,  -417,  -417,  -232,  -294,  -417,  -417,
    -417,  1596,  1596,  1596,  3405,  -270,  -230,  -417,  -417,  -417,
    -228,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    1596,  3405,  3218,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  2584,  -253,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -264,  -417,  -417,  -417,  -417,
    -226,  -224,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  2784,  -417,  2784,  -417,  2784,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  2784,  -417,  -417,  -417,  -417,
    -417,  -417,  2784,  2784,  2784,  2784,  -417,  -417,  -417,  -417,
    2784,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  2117,
    -417,     0,  -417,  -417,  -417,  -417,  -417,  -417,  3009,  3009,
    -257,  -255,  -252,  -250,  -247,  -245,  -241,  -237,  -235,  -233,
    -231,  -229,  -227,  -225,  -223,  -221,  -219,  -417,  -217,  -215,
    -213,  -211,  -417,  -417,  -209,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -207,  -417,  -417,  -417,  -417,  -417,   465,  -417,  -417,  -417,
    -205,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,   556,   647,   984,  1075,  1166,  1503,  -203,
    -201,  1689,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,     2,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  2116,  -417,
    -417,  -417,  -417,  3009,   -44,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  2918,  2918,
    2918,  2918,  2918,  2918,  2918,  2918,  2918,     3,  2117,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,
    -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  -417,  2918,
    -417,  -417,  -417,  -417,  2918,  -417,  -417,  2918,  -417,  -417,
    2918,  -417,  -417,  2918,  -417,  -417,  2918,  -417,  -417,  2918,
    -417,  -417,  -417,  -417,     8,  2025,  2450,  2784,  2784,  2784,
    -417,  -417,  2784,  2784,  2784,  -417,  2784,  2784,  2784,  2784,
    2784,  2784,  2784,  2784,  2784,  2784,  2784,  2784,  2784,  2784,
    2784,  2784,  -417,  2784,  2784,  2784,  2784,  -417,  -417,  2784,
    2784,  2784,  2784,  2784,  3405,  -417,  2918,  -417,  2784,  2784,
    2784,  -417,  -417,  -417,  -417,  -417,  3009,  3009,  -417,  -417,
    2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,
    2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,
    2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,  2918,
    2918,  2918,  -417,  2918,  2918,  2918,  -417,  -417
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   144,     0,    90,     0,    89,    93,    94,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   127,
     126,    95,     0,     0,   103,   104,   105,   106,   100,   128,
     107,   108,   142,   141,   111,   112,   113,   129,   130,     0,
     133,   131,     0,   132,     0,   134,     0,     0,   116,     0,
       0,     0,    81,   153,   154,   155,     0,     0,   119,   121,
     120,     0,     0,     0,     0,     0,     0,    27,    25,    26,
       0,   143,   149,   150,   151,   148,   152,   117,   118,   147,
       0,     0,     0,     4,    75,     5,    99,    98,    15,    16,
      92,    91,     9,    10,     8,    20,    21,    19,    18,    97,
      96,   102,   101,    86,    85,   135,   136,    88,    87,   137,
     138,   115,   114,    84,    82,    83,     0,     0,   342,   343,
     344,   345,   346,   347,   348,     0,   352,   353,   354,   355,
       0,     0,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,     0,   375,     0,   376,     0,   378,   379,   380,
     381,   382,   383,   384,   385,     0,   387,   388,   389,   390,
     391,   392,     0,     0,     0,     0,   398,   399,   400,   401,
       0,   409,   410,   411,   412,   424,   430,   415,   416,   417,
     428,   429,   436,   418,   414,   423,   435,   434,   407,   406,
     405,   439,   438,   427,   425,   440,   426,   413,   408,   431,
     432,   433,   419,   422,   421,   420,   437,   403,   404,     0,
      78,    31,    33,    80,   110,   109,   139,   140,     0,     0,
     167,   170,   173,   176,   179,   182,   185,   188,   191,   194,
     197,   200,   203,   206,   209,   212,   215,   272,   261,   218,
     258,   264,   273,   274,   227,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   302,   301,   305,   304,   303,   306,   308,   307,   309,
     267,   310,   311,   312,   314,   313,   231,   315,   316,   268,
     271,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     328,   326,   327,   235,   243,   251,   255,   247,   239,   221,
     224,     0,   330,   329,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   122,   157,   162,   123,   124,
     125,    23,    22,    24,    29,    28,   145,   146,     0,   156,
      79,     1,     3,     0,   442,   397,   362,   361,   360,   350,
     349,   351,   357,   356,   359,   358,   448,   449,   373,   374,
     377,   386,   393,   394,   395,   396,   402,     0,     0,   164,
     163,   165,   166,   168,   169,   171,   172,   174,   175,   177,
     178,   180,   181,   183,   184,   186,   187,   189,   190,   192,
     193,   195,   196,   198,   199,   201,   202,   204,   205,   207,
     208,   210,   211,   213,   214,   259,   260,   216,   217,   256,
     257,   262,   263,   225,   226,   265,   266,   229,   230,   228,
     269,   270,   233,   234,   232,   241,   242,   240,   249,   250,
     248,   253,   254,   252,   245,   246,   244,   237,   238,   236,
     219,   220,   222,   223,     0,     0,     0,     0,     0,     0,
      39,    40,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,    41,    42,     0,
       0,     0,     0,     0,    77,    34,    36,   441,     0,     0,
       0,   446,   447,    30,    32,   158,     0,     0,   159,    35,
      37,    73,    57,    56,    58,    59,    44,    60,    53,    61,
      43,    62,    63,    64,    65,    66,    67,    68,    54,    69,
      70,    71,    72,    45,    46,    47,    48,    49,    50,    51,
      52,    55,    76,   443,   444,   445,   161,   160
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -417,  -417,   -67,  -417,   -47,  -191,  -417,  -416,  -417,  -417,
     -53,  -278,   -61,  -333,  -417,  -139
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    82,    83,    84,   210,   211,   484,   485,    85,   338,
     325,   326,   357,   212,   345,   358
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     327,   327,   327,   368,   213,   359,   368,   360,   445,   328,
     329,   216,    86,    87,   445,   342,   361,   330,   367,   327,
      88,    89,   217,   362,   363,   364,   365,   339,    95,    96,
     499,   366,    97,   444,   340,   494,    98,    92,    93,   331,
     332,     0,    94,     0,   333,   349,   350,     0,   113,     0,
     351,   114,   115,   346,     0,   344,   347,   348,   488,   489,
     490,    90,    91,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   214,   215,   334,
     335,   336,   337,   352,   353,   354,   355,     0,   371,   372,
     373,   374,     0,   375,   376,   377,   378,     0,   379,   380,
     381,   382,     0,     0,   383,   384,     0,     0,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     420,   421,   440,   441,   442,   443,     0,   419,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   369,   370,     0,
       0,     0,     0,     0,   424,   427,   430,   433,   436,   439,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   487,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   492,   492,   492,
     492,   492,   492,   492,   492,   492,     0,   500,   501,   502,
     503,     0,     0,   504,   505,   506,     0,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   493,   523,   524,   525,   526,   495,     0,
     527,   528,   529,   530,   531,     0,     0,     0,     0,   533,
     534,   535,     0,     0,     0,     0,     0,     0,   492,     0,
       0,     0,     0,   492,     0,     0,   492,     0,     0,   492,
       0,     0,   492,     0,     0,   492,     0,     0,   492,     0,
       0,     0,     0,     0,   498,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   492,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   536,   537,   532,     0,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,     0,   492,   492,   492,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     417,   418,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,   422,   423,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   356,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,     0,   425,   426,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   356,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     0,   428,
     429,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
     431,   432,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,   434,   435,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   356,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,     0,   437,   438,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   496,   497,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,     0,   116,     0,
       0,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,     0,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
       0,     0,     0,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,     0,     0,     0,     0,     0,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,     0,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,     0,     0,     0,     0,   343,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
       0,     0,     0,   356,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,     1,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   341,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,     0,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   116,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      61,    62,    63,     3,    51,   144,     3,   146,     6,    62,
      63,   305,   309,   310,     6,    82,   155,    64,   209,    80,
     145,   146,   316,   162,   163,   164,   165,    80,   307,   308,
     446,   170,   311,   311,    81,   368,   315,   309,   310,   309,
     310,    -1,   314,    -1,   314,   309,   310,    -1,   306,    -1,
     314,   309,   310,   306,    -1,   116,   309,   310,   102,   103,
     104,   309,   310,   309,   310,   309,   310,   309,   310,   312,
     313,   309,   310,   312,   313,   309,   310,   309,   310,   309,
     310,   309,   310,   309,   310,   309,   310,    -1,   345,   346,
     345,   346,    -1,   345,   346,   345,   346,    -1,   345,   346,
     345,   346,    -1,    -1,   345,   346,    -1,    -1,   345,   346,
     345,   346,   345,   346,   345,   346,   345,   346,   345,   346,
     345,   346,   345,   346,   345,   346,   345,   346,   345,   346,
     345,   346,   345,   346,   345,   346,   345,   346,   345,   346,
     345,   346,   345,   346,   345,   346,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,    -1,
      -1,    -1,    -1,    -1,   303,   304,   305,   306,   307,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,   359,   360,
     361,   362,   363,   364,   365,   366,    -1,   446,   447,   448,
     449,    -1,    -1,   452,   453,   454,    -1,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   330,   473,   474,   475,   476,   330,    -1,
     479,   480,   481,   482,   483,    -1,    -1,    -1,    -1,   488,
     489,   490,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,    -1,   424,    -1,    -1,   427,    -1,    -1,   430,
      -1,    -1,   433,    -1,    -1,   436,    -1,    -1,   439,    -1,
      -1,    -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   496,   497,   484,    -1,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,    -1,   533,   534,   535,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     345,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,    -1,   345,   346,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    -1,   345,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
     345,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,   345,   346,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,   345,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    -1,   101,    -1,
      -1,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      -1,    -1,    -1,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,    -1,   329,    -1,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,     0,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   101,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,    -1,    -1,    -1,
      -1,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   330
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   144,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   348,   349,   350,   355,   309,   310,   145,   146,
     309,   310,   309,   310,   314,   307,   308,   311,   315,   309,
     310,   309,   310,   309,   310,   312,   313,   309,   310,   312,
     313,   309,   310,   306,   309,   310,   101,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   330,
     351,   352,   360,   351,   309,   310,   305,   316,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   357,   358,   359,   357,   357,
     351,   309,   310,   314,   309,   310,   309,   310,   356,   357,
     351,     0,   349,   105,   359,   361,   306,   309,   310,   309,
     310,   314,   309,   310,   309,   310,   329,   359,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   352,     3,   359,
     359,   345,   346,   345,   346,   345,   346,   345,   346,   345,
     346,   345,   346,   345,   346,   345,   346,   345,   346,   345,
     346,   345,   346,   345,   346,   345,   346,   345,   346,   345,
     346,   345,   346,   345,   346,   345,   346,   345,   346,   345,
     346,   345,   346,   345,   346,   345,   346,   345,   346,   362,
     345,   346,   345,   346,   362,   345,   346,   362,   345,   346,
     362,   345,   346,   362,   345,   346,   362,   345,   346,   362,
     345,   346,   345,   346,   358,     6,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   353,   354,   362,   359,   102,   103,
     104,   329,   359,   330,   360,   330,     8,     9,   359,   354,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   351,   362,   362,   362,   359,   359
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   347,   348,   348,   348,   349,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     351,   351,   352,   352,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   356,   357,   357,   358,
     358,   358,   358,   358,   358,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   361,   361,   361,   361,   361,   362,   362,   362,   362
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     2,     2,
       3,     1,     3,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     4,     3,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     3,     3,     2,     2,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_MULTIPART_PART_HEADERS",
  "VARIABLE_ARGS_COMBINED_SIZE", "VARIABLE_ARGS_GET_NAMES",
  "VARIABLE_RULE", "\"Variable ARGS_NAMES\"", "VARIABLE_ARGS_POST_NAMES",
  "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"", "\"FILES_TMPNAMES\"",
  "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"", "\"INBOUND_DATA_ERROR\"",
  "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "VARIABLE_MULTIPART_BOUNDARY_QUOTED",
  "VARIABLE_MULTIPART_BOUNDARY_WHITESPACE", "\"MULTIPART_CRLF_LF_LINES\"",
  "\"MULTIPART_DATA_AFTER\"", "VARIABLE_MULTIPART_DATA_BEFORE",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"",
  "VARIABLE_MULTIPART_INVALID_PART", "\"MULTIPART_INVALID_QUOTING\"",
  "VARIABLE_MULTIPART_LF_LINE", "VARIABLE_MULTIPART_MISSING_SEMICOLON",
  "VARIABLE_MULTIPART_SEMICOLON_MISSING", "\"MULTIPART_STRICT_ERROR\"",
  "\"MULTIPART_UNMATCHED_BOUNDARY\"", "\"OUTBOUND_DATA_ERROR\"",
  "\"PATH_INFO\"", "\"QUERY_STRING\"", "\"REMOTE_ADDR\"",
  "\"REMOTE_HOST\"", "\"REMOTE_PORT\"", "\"REQBODY_ERROR_MSG\"",
  "\"REQBODY_ERROR\"", "\"REQBODY_PROCESSOR_ERROR_MSG\"",
  "\"REQBODY_PROCESSOR_ERROR\"", "\"REQBODY_PROCESSOR\"",
  "\"REQUEST_BASENAME\"", "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"",
  "\"REQUEST_FILENAME\"", "VARIABLE_REQUEST_HEADERS_NAMES",
  "\"REQUEST_LINE\"", "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"",
  "\"REQUEST_URI_RAW\"", "\"REQUEST_URI\"", "\"RESOURCE\"",
  "\"RESPONSE_BODY\"", "\"RESPONSE_CONTENT_LENGTH\"",
  "VARIABLE_RESPONSE_CONTENT_TYPE", "VARIABLE_RESPONSE_HEADERS_NAMES",
  "\"RESPONSE_PROTOCOL\"", "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"",
  "\"SERVER_NAME\"", "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"WEBAPPID\"",
  "\"VARIABLE_STATUS\"", "\"VARIABLE_STATUS_LINE\"", "\"VARIABLE_IP\"",
  "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"", "\"VARIABLE_SESSION\"",
  "\"VARIABLE_USER\"", "\"VARIABLE_REQLIMIT\"", "\"RUN_TIME_VAR_ENV\"",
  "\"RUN_TIME_VAR_XML\"", "\"SetVar\"", "SETVAR_OPERATION_EQUALS",
  "SETVAR_OPERATION_EQUALS_PLUS", "SETVAR_OPERATION_EQUALS_MINUS",
  "\"NOT\"", "\"OPERATOR_BEGINS_WITH\"", "\"OPERATOR_CONTAINS\"",
  "\"OPERATOR_CONTAINS_WORD\"", "\"OPERATOR_DETECT_SQLI\"",
  "\"OPERATOR_DETECT_XSS\"", "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"",
  "\"OPERATOR_FUZZY_HASH\"", "\"OPERATOR_GEOLOOKUP\"", "\"OPERATOR_GE\"",
  "\"OPERATOR_GSB_LOOKUP\"", "\"OPERATOR_GT\"",
  "\"OPERATOR_INSPECT_FILE\"", "\"OPERATOR_IP_MATCH_FROM_FILE\"",
  "\"OPERATOR_IP_MATCH\"", "\"OPERATOR_LE\"", "\"OPERATOR_LT\"",
  "\"OPERATOR_PM_FROM_FILE\"", "\"OPERATOR_PM\"", "\"OPERATOR_RBL\"",
  "\"OPERATOR_RSUB\"", "\"Operator RX (content only)\"", "\"OPERATOR_RX\"",
  "\"OPERATOR_RX_GLOBAL\"", "\"OPERATOR_STR_EQ\"",
  "\"OPERATOR_STR_MATCH\"", "\"OPERATOR_UNCONDITIONAL_MATCH\"",
  "\"OPERATOR_VALIDATE_BYTE_RANGE\"", "\"OPERATOR_VALIDATE_DTD\"",
  "\"OPERATOR_VALIDATE_HASH\"", "\"OPERATOR_VALIDATE_SCHEMA\"",
  "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_VERIFY_SVNR\"", "\"OPERATOR_WITHIN\"",
  "CONFIG_DIR_AUDIT_LOG_FMT", "JSON", "NATIVE",
  "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"",
  "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_BDY_URLENCODED\"", "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_BY_TAG\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanitiseArg\"", "\"SanitiseMatched\"", "\"SanitiseMatchedBytes\"",
  "\"SanitiseRequestHeader\"", "\"SanitiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_BASE_64_ENCODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE_EXT\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_TRIM_LEFT\"",
  "\"ACTION_TRANSFORMATION_TRIM_RIGHT\"",
  "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_ENCODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_CONN_ENGINE\"",
  "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"", "\"CONFIG_SEC_WEB_APP_ID\"",
  "\"CONFIG_SEC_SERVER_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_SEC_DISABLE_BACKEND_COMPRESS\"", "\"CONFIG_SEC_HASH_ENGINE\"",
  "\"CONFIG_SEC_HASH_KEY\"", "\"CONFIG_SEC_HASH_PARAM\"",
  "\"CONFIG_SEC_HASH_METHOD_RX\"", "\"CONFIG_SEC_HASH_METHOD_PM\"",
  "\"CONFIG_SEC_CHROOT_DIR\"", "\"CONFIG_DIR_GEO_DB\"",
  "\"CONFIG_DIR_GSB_DB\"", "\"CONFIG_SEC_GUARDIAN_LOG\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"",
  "\"CONFIG_SEC_CONN_R_STATE_LIMIT\"", "\"CONFIG_SEC_CONN_W_STATE_LIMIT\"",
  "\"CONFIG_SEC_SENSOR_ID\"", "\"CONFIG_DIR_ARGS_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_JSON_DEPTH_LIMIT\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_SEC_RULE_INHERITANCE\"", "\"CONFIG_SEC_RULE_PERF_TIME\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_DIR_UNICODE_CODE_PAGE\"",
  "\"CONFIG_SEC_COLLECTION_TIMEOUT\"", "\"CONFIG_SEC_HTTP_BLKEY\"",
  "\"CONFIG_SEC_INTERCEPT_ON_ERROR\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_AMQP\"", "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONFIG_SEC_COOKIEV0_SEPARATOR\"", "\"CONGIG_DIR_SEC_DATA_DIR\"",
  "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONFIG_SEC_STREAM_IN_BODY_INSPECTION\"",
  "\"CONFIG_SEC_STREAM_OUT_BODY_INSPECTION\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT_QUOTE_MACRO_EXPANSION\"",
  "\"QUOTATION_MARK\"", "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"",
  "\"RUN_TIME_VAR_HSV\"", "\"RUN_TIME_VAR_REMOTE_USER\"",
  "\"RUN_TIME_VAR_TIME\"", "\"RUN_TIME_VAR_TIME_DAY\"",
  "\"RUN_TIME_VAR_TIME_EPOCH\"", "\"RUN_TIME_VAR_TIME_HOUR\"",
  "\"RUN_TIME_VAR_TIME_MIN\"", "\"RUN_TIME_VAR_TIME_MON\"",
  "\"RUN_TIME_VAR_TIME_SEC\"", "\"RUN_TIME_VAR_TIME_WDAY\"",
  "\"RUN_TIME_VAR_TIME_YEAR\"", "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_pre_process",
  "variables_may_be_quoted", "var", "act", "setvar_action",
  "run_time_string", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   717,   717,   721,   722,   725,   730,   736,   742,   746,
     750,   756,   762,   768,   774,   779,   784,   790,   797,   801,
     805,   809,   815,   819,   823,   828,   833,   838,   843,   847,
     854,   858,   865,   871,   881,   890,   900,   909,   922,   926,
     930,   934,   938,   942,   946,   950,   954,   958,   963,   967,
     971,   975,   979,   983,   988,   993,   997,  1001,  1005,  1009,
    1013,  1017,  1021,  1025,  1029,  1033,  1037,  1041,  1045,  1049,
    1053,  1057,  1061,  1065,  1069,  1083,  1084,  1114,  1133,  1152,
    1180,  1237,  1244,  1248,  1252,  1256,  1260,  1264,  1268,  1272,
    1281,  1285,  1290,  1293,  1298,  1303,  1308,  1313,  1316,  1321,
    1324,  1329,  1334,  1337,  1342,  1347,  1352,  1357,  1362,  1367,
    1372,  1375,  1380,  1385,  1390,  1395,  1398,  1403,  1408,  1413,
    1426,  1439,  1452,  1465,  1478,  1504,  1532,  1544,  1564,  1591,
    1596,  1602,  1607,  1612,  1621,  1626,  1630,  1634,  1638,  1642,
    1646,  1650,  1655,  1660,  1672,  1678,  1682,  1686,  1697,  1706,
    1707,  1714,  1719,  1724,  1778,  1785,  1793,  1830,  1834,  1841,
    1846,  1852,  1858,  1864,  1871,  1881,  1885,  1889,  1893,  1897,
    1901,  1905,  1909,  1913,  1917,  1921,  1925,  1929,  1933,  1937,
    1941,  1945,  1949,  1953,  1957,  1961,  1965,  1969,  1973,  1977,
    1981,  1985,  1989,  1993,  1997,  2001,  2005,  2009,  2013,  2017,
    2021,  2025,  2029,  2033,  2037,  2041,  2045,  2049,  2053,  2057,
    2061,  2065,  2069,  2073,  2077,  2081,  2085,  2089,  2093,  2097,
    2101,  2105,  2109,  2113,  2117,  2121,  2125,  2129,  2133,  2137,
    2141,  2145,  2149,  2153,  2157,  2161,  2165,  2169,  2173,  2177,
    2181,  2185,  2189,  2193,  2197,  2201,  2205,  2209,  2213,  2217,
    2221,  2225,  2229,  2233,  2237,  2241,  2245,  2249,  2253,  2257,
    2261,  2265,  2270,  2274,  2278,  2283,  2287,  2291,  2296,  2301,
    2305,  2309,  2313,  2317,  2321,  2325,  2329,  2333,  2337,  2341,
    2345,  2349,  2353,  2357,  2361,  2365,  2369,  2373,  2377,  2381,
    2385,  2389,  2393,  2397,  2401,  2405,  2409,  2413,  2417,  2421,
    2425,  2429,  2433,  2437,  2441,  2445,  2449,  2453,  2457,  2461,
    2465,  2469,  2473,  2477,  2481,  2485,  2489,  2493,  2497,  2501,
    2505,  2509,  2513,  2517,  2521,  2525,  2529,  2533,  2537,  2541,
    2549,  2556,  2563,  2570,  2577,  2584,  2591,  2598,  2605,  2612,
    2619,  2626,  2636,  2640,  2644,  2648,  2652,  2656,  2660,  2664,
    2669,  2673,  2678,  2682,  2686,  2690,  2694,  2699,  2704,  2708,
    2712,  2716,  2720,  2724,  2728,  2732,  2736,  2740,  2744,  2748,
    2752,  2756,  2761,  2765,  2769,  2773,  2777,  2781,  2785,  2789,
    2793,  2797,  2801,  2805,  2809,  2813,  2817,  2821,  2825,  2829,
    2833,  2837,  2841,  2845,  2849,  2853,  2857,  2861,  2865,  2869,
    2873,  2877,  2881,  2885,  2889,  2893,  2897,  2901,  2905,  2909,
    2913,  2917,  2921,  2925,  2929,  2933,  2937,  2941,  2945,  2949,
    2953,  2957,  2961,  2965,  2969,  2973,  2977,  2981,  2985,  2989,
    2993,  2997,  3001,  3005,  3009,  3013,  3017,  3021,  3025,  3029,
    3033,  3040,  3044,  3048,  3052,  3056,  3063,  3068,  3073,  3079
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 6818 "seclang-parser.cc" // lalr1.cc:1167
#line 3086 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
