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

#line 37 "while.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "while.tab.hh"

// User implementation prologue.

#line 51 "while.tab.cc" // lalr1.cc:412


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
#line 137 "while.tab.cc" // lalr1.cc:479

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
      switch (other.type_get ())
    {
      case 28: // T_ID
        value.copy< std::string > (other.value);
        break;

      case 46: // expression
        value.copy< type > (other.value);
        break;

      default:
        break;
    }

  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {
    (void) v;
      switch (this->type_get ())
    {
      case 28: // T_ID
        value.copy< std::string > (v);
        break;

      case 46: // expression
        value.copy< type > (v);
        break;

      default:
        break;
    }
}


  // Implementation of basic_symbol constructor for each type.

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const std::string v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const type v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    // User destructor.
    symbol_number_type yytype = this->type_get ();
    basic_symbol<Base>& yysym = *this;
    (void) yysym;
    switch (yytype)
    {
   default:
      break;
    }

    // Type destructor.
    switch (yytype)
    {
      case 28: // T_ID
        value.template destroy< std::string > ();
        break;

      case 46: // expression
        value.template destroy< type > ();
        break;

      default:
        break;
    }

    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
      switch (this->type_get ())
    {
      case 28: // T_ID
        value.move< std::string > (s.value);
        break;

      case 46: // expression
        value.move< type > (s.value);
        break;

      default:
        break;
    }

    location = s.location;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }
  // Implementation of make_symbol for each symbol type.
  parser::symbol_type
  parser::make_T_PROGRAM (const location_type& l)
  {
    return symbol_type (token::T_PROGRAM, l);
  }

  parser::symbol_type
  parser::make_T_BEGIN (const location_type& l)
  {
    return symbol_type (token::T_BEGIN, l);
  }

  parser::symbol_type
  parser::make_T_END (const location_type& l)
  {
    return symbol_type (token::T_END, l);
  }

  parser::symbol_type
  parser::make_T_INTEGER (const location_type& l)
  {
    return symbol_type (token::T_INTEGER, l);
  }

  parser::symbol_type
  parser::make_T_BOOLEAN (const location_type& l)
  {
    return symbol_type (token::T_BOOLEAN, l);
  }

  parser::symbol_type
  parser::make_T_SKIP (const location_type& l)
  {
    return symbol_type (token::T_SKIP, l);
  }

  parser::symbol_type
  parser::make_T_IF (const location_type& l)
  {
    return symbol_type (token::T_IF, l);
  }

  parser::symbol_type
  parser::make_T_THEN (const location_type& l)
  {
    return symbol_type (token::T_THEN, l);
  }

  parser::symbol_type
  parser::make_T_ELSE (const location_type& l)
  {
    return symbol_type (token::T_ELSE, l);
  }

  parser::symbol_type
  parser::make_T_ENDIF (const location_type& l)
  {
    return symbol_type (token::T_ENDIF, l);
  }

  parser::symbol_type
  parser::make_T_WHILE (const location_type& l)
  {
    return symbol_type (token::T_WHILE, l);
  }

  parser::symbol_type
  parser::make_T_DO (const location_type& l)
  {
    return symbol_type (token::T_DO, l);
  }

  parser::symbol_type
  parser::make_T_DONE (const location_type& l)
  {
    return symbol_type (token::T_DONE, l);
  }

  parser::symbol_type
  parser::make_T_READ (const location_type& l)
  {
    return symbol_type (token::T_READ, l);
  }

  parser::symbol_type
  parser::make_T_WRITE (const location_type& l)
  {
    return symbol_type (token::T_WRITE, l);
  }

  parser::symbol_type
  parser::make_T_SEMICOLON (const location_type& l)
  {
    return symbol_type (token::T_SEMICOLON, l);
  }

  parser::symbol_type
  parser::make_T_ASSIGN (const location_type& l)
  {
    return symbol_type (token::T_ASSIGN, l);
  }

  parser::symbol_type
  parser::make_T_OPEN (const location_type& l)
  {
    return symbol_type (token::T_OPEN, l);
  }

  parser::symbol_type
  parser::make_T_CLOSE (const location_type& l)
  {
    return symbol_type (token::T_CLOSE, l);
  }

  parser::symbol_type
  parser::make_T_NUM (const location_type& l)
  {
    return symbol_type (token::T_NUM, l);
  }

  parser::symbol_type
  parser::make_T_TRUE (const location_type& l)
  {
    return symbol_type (token::T_TRUE, l);
  }

  parser::symbol_type
  parser::make_T_FALSE (const location_type& l)
  {
    return symbol_type (token::T_FALSE, l);
  }

  parser::symbol_type
  parser::make_T_POLY_LIT (const location_type& l)
  {
    return symbol_type (token::T_POLY_LIT, l);
  }

  parser::symbol_type
  parser::make_T_POLY (const location_type& l)
  {
    return symbol_type (token::T_POLY, l);
  }

  parser::symbol_type
  parser::make_T_EVAL (const location_type& l)
  {
    return symbol_type (token::T_EVAL, l);
  }

  parser::symbol_type
  parser::make_T_ID (const std::string& v, const location_type& l)
  {
    return symbol_type (token::T_ID, v, l);
  }

  parser::symbol_type
  parser::make_T_OR (const location_type& l)
  {
    return symbol_type (token::T_OR, l);
  }

  parser::symbol_type
  parser::make_T_AND (const location_type& l)
  {
    return symbol_type (token::T_AND, l);
  }

  parser::symbol_type
  parser::make_T_EQ (const location_type& l)
  {
    return symbol_type (token::T_EQ, l);
  }

  parser::symbol_type
  parser::make_T_LESS (const location_type& l)
  {
    return symbol_type (token::T_LESS, l);
  }

  parser::symbol_type
  parser::make_T_GR (const location_type& l)
  {
    return symbol_type (token::T_GR, l);
  }

  parser::symbol_type
  parser::make_T_ADD (const location_type& l)
  {
    return symbol_type (token::T_ADD, l);
  }

  parser::symbol_type
  parser::make_T_SUB (const location_type& l)
  {
    return symbol_type (token::T_SUB, l);
  }

  parser::symbol_type
  parser::make_T_MUL (const location_type& l)
  {
    return symbol_type (token::T_MUL, l);
  }

  parser::symbol_type
  parser::make_T_DIV (const location_type& l)
  {
    return symbol_type (token::T_DIV, l);
  }

  parser::symbol_type
  parser::make_T_MOD (const location_type& l)
  {
    return symbol_type (token::T_MOD, l);
  }

  parser::symbol_type
  parser::make_T_NOT (const location_type& l)
  {
    return symbol_type (token::T_NOT, l);
  }



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 28: // T_ID
        value.move< std::string > (that.value);
        break;

      case 46: // expression
        value.move< type > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 28: // T_ID
        value.copy< std::string > (that.value);
        break;

      case 46: // expression
        value.copy< type > (that.value);
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
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
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
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
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
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
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
      case 28: // T_ID
        yylhs.value.build< std::string > ();
        break;

      case 46: // expression
        yylhs.value.build< type > ();
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
#line 55 "while.y" // lalr1.cc:859
    {
    }
#line 912 "while.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 61 "while.y" // lalr1.cc:859
    {
    }
#line 919 "while.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 65 "while.y" // lalr1.cc:859
    {
    }
#line 926 "while.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 71 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[1].value.as< std::string > ()) > 0 )
		{
			semantic_error(yystack_[2].location.begin.line, "Re-declared variable: " + yystack_[1].value.as< std::string > ());
		}
		symbol_table[yystack_[1].value.as< std::string > ()] = integer;
    }
#line 938 "while.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 80 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[1].value.as< std::string > ()) > 0 )
		{
			semantic_error(yystack_[2].location.begin.line, "Re-declared variable: " + yystack_[1].value.as< std::string > ());
		}
		symbol_table[yystack_[1].value.as< std::string > ()] = boolean;
    }
#line 950 "while.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 89 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[1].value.as< std::string > ()) > 0 )
		{
			semantic_error(yystack_[2].location.begin.line, "Re-declared variable: " + yystack_[1].value.as< std::string > ());
		}
		symbol_table[yystack_[1].value.as< std::string > ()] = polynomial;
	}
#line 962 "while.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 100 "while.y" // lalr1.cc:859
    {
    }
#line 969 "while.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 104 "while.y" // lalr1.cc:859
    {
    }
#line 976 "while.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 110 "while.y" // lalr1.cc:859
    {
    }
#line 983 "while.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 114 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[3].value.as< std::string > ()) == 0 )
		{
			semantic_error(yystack_[3].location.begin.line, "Undeclared variable: " + yystack_[3].value.as< std::string > ());
		}
		if(symbol_table[yystack_[3].value.as< std::string > ()] != yystack_[1].value.as< type > ())
		{
		   semantic_error(yystack_[3].location.begin.line, "Type error.");
		}
    }
#line 998 "while.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 126 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[2].value.as< std::string > ()) == 0 )
		{
			semantic_error(yystack_[4].location.begin.line, "Undeclared variable: " + yystack_[2].value.as< std::string > ());
		}
    }
#line 1009 "while.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 134 "while.y" // lalr1.cc:859
    {
    }
#line 1016 "while.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 138 "while.y" // lalr1.cc:859
    {
		if(yystack_[3].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[4].location.begin.line, "Type error.");
		}
    }
#line 1027 "while.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 146 "while.y" // lalr1.cc:859
    {
		if(yystack_[5].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[6].location.begin.line, "Type error.");
		}
    }
#line 1038 "while.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 154 "while.y" // lalr1.cc:859
    {
		if(yystack_[3].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[4].location.begin.line, "Type error.");
		}
    }
#line 1049 "while.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 164 "while.y" // lalr1.cc:859
    {
		yylhs.value.as< type > () = integer;
    }
#line 1057 "while.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 169 "while.y" // lalr1.cc:859
    {
		yylhs.value.as< type > () = boolean;
    }
#line 1065 "while.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 174 "while.y" // lalr1.cc:859
    {
		yylhs.value.as< type > () = boolean;
    }
#line 1073 "while.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 179 "while.y" // lalr1.cc:859
    {
		yylhs.value.as< type > () = polynomial;
	}
#line 1081 "while.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 184 "while.y" // lalr1.cc:859
    {
		if( symbol_table.count(yystack_[0].value.as< std::string > ()) == 0 )
		{
			semantic_error(yystack_[0].location.begin.line, "Undeclared variable: " + yystack_[0].value.as< std::string > ());
		}
		yylhs.value.as< type > () = symbol_table[yystack_[0].value.as< std::string > ()];
    }
#line 1093 "while.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 193 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != boolean || yystack_[0].value.as< type > () != boolean || yystack_[2].value.as< type > () != yystack_[0].value.as< type > ())
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
           
		}
		if(yystack_[2].value.as< type > () == integer)
		{
			yylhs.value.as< type > () = integer;
		}

		if(yystack_[2].value.as< type > () == polynomial)
		{
			yylhs.value.as< type > () = polynomial;
		}


    }
#line 1116 "while.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 213 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = integer;
    }
#line 1128 "while.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 222 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = integer;
    }
#line 1140 "while.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 231 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = integer;
    }
#line 1152 "while.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 240 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = integer;
    }
#line 1164 "while.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 249 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1176 "while.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 258 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != integer || yystack_[0].value.as< type > () != integer)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1188 "while.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 267 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != yystack_[0].value.as< type > ())
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1200 "while.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 276 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != boolean || yystack_[0].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1212 "while.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 285 "while.y" // lalr1.cc:859
    {
		if(yystack_[2].value.as< type > () != boolean || yystack_[0].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[2].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1224 "while.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 294 "while.y" // lalr1.cc:859
    {
		if(yystack_[0].value.as< type > () != boolean)
		{
		   semantic_error(yystack_[1].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = boolean;
    }
#line 1236 "while.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 303 "while.y" // lalr1.cc:859
    {
		yylhs.value.as< type > () = yystack_[1].value.as< type > ();
    }
#line 1244 "while.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 308 "while.y" // lalr1.cc:859
    {
		if(yystack_[0].value.as< type > () != polynomial)
		{
		   semantic_error(yystack_[1].location.begin.line, "Type error.");
		}
		yylhs.value.as< type > () = integer;
	}
#line 1256 "while.tab.cc" // lalr1.cc:859
    break;


#line 1260 "while.tab.cc" // lalr1.cc:859
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
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -26;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
       2,   -22,    13,     3,   -26,    -6,    -4,    -1,    14,     3,
      10,    40,    41,    -5,   -26,   -26,   -26,   -26,    42,    83,
      83,    84,    89,    11,    27,    -5,   -26,    83,   -26,   -26,
     -26,   -26,    83,   -26,    83,    33,    43,    85,    83,    83,
     -26,   -26,    94,    54,   -26,    -5,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    -5,    91,   112,    64,
     -26,   -10,   120,   120,    12,    18,    18,   -21,   -21,   -26,
     -26,   -26,    46,    96,    98,   -26,    -5,   -26,   -26,   -26,
     -26,   105,   -26
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,     0,     0,     3,     1,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     4,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     0,     8,    10,     0,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
       2,     9,     0,    34,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,    31,    30,    29,    27,    28,    22,    23,    24,
      25,    26,     0,     0,     0,    11,     0,    14,    16,    12,
      13,     0,    15
  };

  const signed char
  parser::yypgoto_[] =
  {
     -26,   -26,   109,   -26,   -25,   -26,   -13
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     8,     9,    24,    25,    35
  };

  const unsigned char
  parser::yytable_[] =
  {
      41,    76,    77,    18,    19,     1,     3,    36,    20,     5,
       6,    21,    22,     4,    42,    53,    54,    55,    13,    43,
      61,    44,    10,    23,    11,    58,    59,    12,    15,     7,
      39,    72,    40,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    45,    49,    50,    51,    52,    53,    54,
      55,    81,    51,    52,    53,    54,    55,    56,    16,    17,
      26,    78,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    75,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    27,    37,    28,    29,    30,    31,    38,
      32,    33,    73,    57,    79,    60,    80,    82,    14,     0,
       0,     0,    34,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    74,     0,     0,     0,     0,     0,     0,
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    48,    49,    50,    51,    52,    53,    54,    55
  };

  const signed char
  parser::yycheck_[] =
  {
      25,    11,    12,     8,     9,     3,    28,    20,    13,     6,
       7,    16,    17,     0,    27,    36,    37,    38,     4,    32,
      45,    34,    28,    28,    28,    38,    39,    28,    18,    26,
      19,    56,     5,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    10,    32,    33,    34,    35,    36,    37,
      38,    76,    34,    35,    36,    37,    38,    14,    18,    18,
      18,    15,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    18,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    20,    20,    22,    23,    24,    25,    20,
      27,    28,    21,    28,    18,    21,    18,    12,     9,    -1,
      -1,    -1,    39,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    31,    32,    33,    34,    35,    36,    37,    38
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,    41,    28,     0,     6,     7,    26,    42,    43,
      28,    28,    28,     4,    42,    18,    18,    18,     8,     9,
      13,    16,    17,    28,    44,    45,    18,    20,    22,    23,
      24,    25,    27,    28,    39,    46,    46,    20,    20,    19,
       5,    44,    46,    46,    46,    10,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    14,    28,    46,    46,
      21,    44,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    44,    21,    21,    18,    11,    12,    15,    18,
      18,    44,    12
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    40,    41,    42,    42,    43,    43,    43,    44,    44,
      45,    45,    45,    45,    45,    45,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     6,     0,     2,     3,     3,     3,     1,     2,
       2,     4,     5,     5,     5,     7,     5,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     2
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "T_PROGRAM", "T_BEGIN", "T_END",
  "T_INTEGER", "T_BOOLEAN", "T_SKIP", "T_IF", "T_THEN", "T_ELSE",
  "T_ENDIF", "T_WHILE", "T_DO", "T_DONE", "T_READ", "T_WRITE",
  "T_SEMICOLON", "T_ASSIGN", "T_OPEN", "T_CLOSE", "T_NUM", "T_TRUE",
  "T_FALSE", "T_POLY_LIT", "T_POLY", "T_EVAL", "T_ID", "T_OR", "T_AND",
  "T_EQ", "T_LESS", "T_GR", "T_ADD", "T_SUB", "T_MUL", "T_DIV", "T_MOD",
  "T_NOT", "$accept", "start", "declarations", "declaration", "statements",
  "statement", "expression", YY_NULLPTR
  };


  const unsigned short int
  parser::yyrline_[] =
  {
       0,    54,    54,    61,    64,    70,    79,    88,    99,   103,
     109,   113,   125,   133,   137,   145,   153,   163,   168,   173,
     178,   183,   192,   212,   221,   230,   239,   248,   257,   266,
     275,   284,   293,   302,   307
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
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
  parser::yy_reduce_print_ (int yyrule)
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

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
    };
    const unsigned int user_token_number_max_ = 294;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 1653 "while.tab.cc" // lalr1.cc:1167
