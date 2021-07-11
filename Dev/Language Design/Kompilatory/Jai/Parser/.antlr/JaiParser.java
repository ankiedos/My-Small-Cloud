// Generated from c:\Users\antek\Desktop\Kompilatory\Jai\Parser\JaiParser.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class JaiParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		TERMINATOR=1, LPAREN=2, RPAREN=3, VAR=4, CONST=5, SIMPLE=6, ENUM_ID=7, 
		STRUCT_ID=8, ASSIGN=9, CONST_DECL_OP=10, VAR_DECL_OP=11, DECL_OP=12, PLUS=13, 
		MINUS=14, MULT=15, DIV=16, POW=17, TYPE=18, INT=19, SIGNED=20, UNSIGNED=21, 
		FLOAT=22, FLOAT64=23, STRUCT=24, ENUM=25, BLOCK_BEGIN=26, LITERAL=27, 
		INTLIT=28, SIGNEDLIT=29, UNSIGNEDLIT=30, FLOATLIT=31, UNSIGNEDFLOATLIT=32, 
		SIGNEDFLOATLIT=33, WS=34, NL=35, ID=36, COMMA=37, BLOCK_END=38, STRUCT_END=39, 
		STRUCT_MEMBER=40, ENUM_END=41, ENUM_MEMBER=42;
	public static final int
		RULE_file = 0, RULE_line = 1, RULE_stat = 2, RULE_enum_body = 3, RULE_struct_body = 4, 
		RULE_decl = 5, RULE_expr = 6, RULE_plus = 7, RULE_minus = 8, RULE_mult = 9, 
		RULE_div = 10, RULE_pow = 11;
	private static String[] makeRuleNames() {
		return new String[] {
			"file", "line", "stat", "enum_body", "struct_body", "decl", "expr", "plus", 
			"minus", "mult", "div", "pow"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, "'('", "')'", null, null, null, null, null, null, null, null, 
			null, "'+'", "'-'", "'*'", "'/'", "'^'", null, "'int'", null, null, "'float'", 
			null, null, null, "'{'", null, null, null, null, null, null, null, null, 
			null, null, "','", "'}'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "TERMINATOR", "LPAREN", "RPAREN", "VAR", "CONST", "SIMPLE", "ENUM_ID", 
			"STRUCT_ID", "ASSIGN", "CONST_DECL_OP", "VAR_DECL_OP", "DECL_OP", "PLUS", 
			"MINUS", "MULT", "DIV", "POW", "TYPE", "INT", "SIGNED", "UNSIGNED", "FLOAT", 
			"FLOAT64", "STRUCT", "ENUM", "BLOCK_BEGIN", "LITERAL", "INTLIT", "SIGNEDLIT", 
			"UNSIGNEDLIT", "FLOATLIT", "UNSIGNEDFLOATLIT", "SIGNEDFLOATLIT", "WS", 
			"NL", "ID", "COMMA", "BLOCK_END", "STRUCT_END", "STRUCT_MEMBER", "ENUM_END", 
			"ENUM_MEMBER"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "JaiParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public JaiParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class FileContext extends ParserRuleContext {
		public LineContext lines;
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(25); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(24);
				((FileContext)_localctx).lines = line();
				}
				}
				setState(27); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << LPAREN) | (1L << VAR) | (1L << CONST) | (1L << MINUS) | (1L << LITERAL) | (1L << ID))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LineContext extends ParserRuleContext {
		public StatContext stat() {
			return getRuleContext(StatContext.class,0);
		}
		public TerminalNode NL() { return getToken(JaiParser.NL, 0); }
		public TerminalNode EOF() { return getToken(JaiParser.EOF, 0); }
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_line);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			stat();
			setState(30);
			_la = _input.LA(1);
			if ( !(_la==EOF || _la==NL) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public DeclContext decl() {
			return getRuleContext(DeclContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_stat);
		try {
			setState(34);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				enterOuterAlt(_localctx, 1);
				{
				setState(32);
				decl();
				}
				break;
			case LPAREN:
			case VAR:
			case CONST:
			case MINUS:
			case LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(33);
				expr();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Enum_bodyContext extends ParserRuleContext {
		public TerminalNode ENUM() { return getToken(JaiParser.ENUM, 0); }
		public List<TerminalNode> ENUM_MEMBER() { return getTokens(JaiParser.ENUM_MEMBER); }
		public TerminalNode ENUM_MEMBER(int i) {
			return getToken(JaiParser.ENUM_MEMBER, i);
		}
		public TerminalNode ENUM_END() { return getToken(JaiParser.ENUM_END, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(JaiParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(JaiParser.COMMA, i);
		}
		public Enum_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enum_body; }
	}

	public final Enum_bodyContext enum_body() throws RecognitionException {
		Enum_bodyContext _localctx = new Enum_bodyContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_enum_body);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(36);
			match(ENUM);
			setState(40);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(37);
				match(WS);
				}
				}
				setState(42);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(53);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(43);
					match(ENUM_MEMBER);
					setState(44);
					match(COMMA);
					setState(48);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(45);
						match(WS);
						}
						}
						setState(50);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					} 
				}
				setState(55);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(56);
			match(ENUM_MEMBER);
			setState(60);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(57);
				match(WS);
				}
				}
				setState(62);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(63);
			match(ENUM_END);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Struct_bodyContext extends ParserRuleContext {
		public TerminalNode STRUCT() { return getToken(JaiParser.STRUCT, 0); }
		public List<TerminalNode> STRUCT_MEMBER() { return getTokens(JaiParser.STRUCT_MEMBER); }
		public TerminalNode STRUCT_MEMBER(int i) {
			return getToken(JaiParser.STRUCT_MEMBER, i);
		}
		public List<TerminalNode> TERMINATOR() { return getTokens(JaiParser.TERMINATOR); }
		public TerminalNode TERMINATOR(int i) {
			return getToken(JaiParser.TERMINATOR, i);
		}
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public Struct_bodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_struct_body; }
	}

	public final Struct_bodyContext struct_body() throws RecognitionException {
		Struct_bodyContext _localctx = new Struct_bodyContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_struct_body);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(STRUCT);
			setState(69);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(66);
				match(WS);
				}
				}
				setState(71);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(88);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(72);
					match(STRUCT_MEMBER);
					setState(76);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(73);
						match(WS);
						}
						}
						setState(78);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(79);
					match(TERMINATOR);
					setState(83);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(80);
						match(WS);
						}
						}
						setState(85);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					} 
				}
				setState(90);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			setState(91);
			match(STRUCT_MEMBER);
			setState(95);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(92);
				match(WS);
				}
				}
				setState(97);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(98);
			match(TERMINATOR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(JaiParser.ID, 0); }
		public TerminalNode DECL_OP() { return getToken(JaiParser.DECL_OP, 0); }
		public TerminalNode TERMINATOR() { return getToken(JaiParser.TERMINATOR, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public TerminalNode ASSIGN() { return getToken(JaiParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_decl; }
	}

	public final DeclContext decl() throws RecognitionException {
		DeclContext _localctx = new DeclContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_decl);
		int _la;
		try {
			setState(138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(100);
				match(ID);
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(101);
					match(WS);
					}
					}
					setState(106);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(107);
				match(DECL_OP);
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(108);
					match(WS);
					}
					}
					setState(113);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(114);
				match(TERMINATOR);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(115);
				match(ID);
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(116);
					match(WS);
					}
					}
					setState(121);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(122);
				match(ASSIGN);
				setState(126);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(123);
					match(WS);
					}
					}
					setState(128);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(129);
				expr();
				setState(133);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(130);
					match(WS);
					}
					}
					setState(135);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(136);
				match(TERMINATOR);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TerminalNode MINUS() { return getToken(JaiParser.MINUS, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(JaiParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(JaiParser.RPAREN, 0); }
		public TerminalNode VAR() { return getToken(JaiParser.VAR, 0); }
		public TerminalNode CONST() { return getToken(JaiParser.CONST, 0); }
		public TerminalNode LITERAL() { return getToken(JaiParser.LITERAL, 0); }
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_expr);
		try {
			setState(149);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case MINUS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(140);
				match(MINUS);
				setState(141);
				expr();
				}
				}
				break;
			case LPAREN:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(142);
				match(LPAREN);
				setState(143);
				expr();
				setState(144);
				match(RPAREN);
				}
				}
				break;
			case VAR:
				enterOuterAlt(_localctx, 3);
				{
				setState(146);
				match(VAR);
				}
				break;
			case CONST:
				enterOuterAlt(_localctx, 4);
				{
				setState(147);
				match(CONST);
				}
				break;
			case LITERAL:
				enterOuterAlt(_localctx, 5);
				{
				setState(148);
				match(LITERAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PlusContext extends ParserRuleContext {
		public ExprContext left;
		public Token operator;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(JaiParser.PLUS, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public PlusContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_plus; }
	}

	public final PlusContext plus() throws RecognitionException {
		PlusContext _localctx = new PlusContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_plus);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(151);
			((PlusContext)_localctx).left = expr();
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(152);
				match(WS);
				}
				}
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(158);
			((PlusContext)_localctx).operator = match(PLUS);
			setState(162);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(159);
				match(WS);
				}
				}
				setState(164);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(165);
			((PlusContext)_localctx).right = expr();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MinusContext extends ParserRuleContext {
		public ExprContext left;
		public Token operator;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MINUS() { return getToken(JaiParser.MINUS, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public MinusContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_minus; }
	}

	public final MinusContext minus() throws RecognitionException {
		MinusContext _localctx = new MinusContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_minus);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(167);
			((MinusContext)_localctx).left = expr();
			setState(171);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(168);
				match(WS);
				}
				}
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(174);
			((MinusContext)_localctx).operator = match(MINUS);
			setState(178);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(175);
				match(WS);
				}
				}
				setState(180);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(181);
			((MinusContext)_localctx).right = expr();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MultContext extends ParserRuleContext {
		public ExprContext left;
		public Token operator;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MULT() { return getToken(JaiParser.MULT, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public MultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mult; }
	}

	public final MultContext mult() throws RecognitionException {
		MultContext _localctx = new MultContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_mult);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(183);
			((MultContext)_localctx).left = expr();
			setState(187);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(184);
				match(WS);
				}
				}
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(190);
			((MultContext)_localctx).operator = match(MULT);
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(191);
				match(WS);
				}
				}
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(197);
			((MultContext)_localctx).right = expr();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DivContext extends ParserRuleContext {
		public ExprContext left;
		public Token operator;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode DIV() { return getToken(JaiParser.DIV, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public DivContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_div; }
	}

	public final DivContext div() throws RecognitionException {
		DivContext _localctx = new DivContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_div);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(199);
			((DivContext)_localctx).left = expr();
			setState(203);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(200);
				match(WS);
				}
				}
				setState(205);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(206);
			((DivContext)_localctx).operator = match(DIV);
			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(207);
				match(WS);
				}
				}
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(213);
			((DivContext)_localctx).right = expr();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PowContext extends ParserRuleContext {
		public ExprContext let;
		public Token operator;
		public ExprContext right;
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode POW() { return getToken(JaiParser.POW, 0); }
		public List<TerminalNode> WS() { return getTokens(JaiParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(JaiParser.WS, i);
		}
		public PowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pow; }
	}

	public final PowContext pow() throws RecognitionException {
		PowContext _localctx = new PowContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_pow);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(215);
			((PowContext)_localctx).let = expr();
			setState(219);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(216);
				match(WS);
				}
				}
				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(222);
			((PowContext)_localctx).operator = match(POW);
			setState(226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(223);
				match(WS);
				}
				}
				setState(228);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(229);
			((PowContext)_localctx).right = expr();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3,\u00ea\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\3\2\6\2\34\n\2\r\2\16\2\35\3\3\3\3\3\3\3\4\3\4\5\4"+
		"%\n\4\3\5\3\5\7\5)\n\5\f\5\16\5,\13\5\3\5\3\5\3\5\7\5\61\n\5\f\5\16\5"+
		"\64\13\5\7\5\66\n\5\f\5\16\59\13\5\3\5\3\5\7\5=\n\5\f\5\16\5@\13\5\3\5"+
		"\3\5\3\6\3\6\7\6F\n\6\f\6\16\6I\13\6\3\6\3\6\7\6M\n\6\f\6\16\6P\13\6\3"+
		"\6\3\6\7\6T\n\6\f\6\16\6W\13\6\7\6Y\n\6\f\6\16\6\\\13\6\3\6\3\6\7\6`\n"+
		"\6\f\6\16\6c\13\6\3\6\3\6\3\7\3\7\7\7i\n\7\f\7\16\7l\13\7\3\7\3\7\7\7"+
		"p\n\7\f\7\16\7s\13\7\3\7\3\7\3\7\7\7x\n\7\f\7\16\7{\13\7\3\7\3\7\7\7\177"+
		"\n\7\f\7\16\7\u0082\13\7\3\7\3\7\7\7\u0086\n\7\f\7\16\7\u0089\13\7\3\7"+
		"\3\7\5\7\u008d\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\b\u0098\n\b\3"+
		"\t\3\t\7\t\u009c\n\t\f\t\16\t\u009f\13\t\3\t\3\t\7\t\u00a3\n\t\f\t\16"+
		"\t\u00a6\13\t\3\t\3\t\3\n\3\n\7\n\u00ac\n\n\f\n\16\n\u00af\13\n\3\n\3"+
		"\n\7\n\u00b3\n\n\f\n\16\n\u00b6\13\n\3\n\3\n\3\13\3\13\7\13\u00bc\n\13"+
		"\f\13\16\13\u00bf\13\13\3\13\3\13\7\13\u00c3\n\13\f\13\16\13\u00c6\13"+
		"\13\3\13\3\13\3\f\3\f\7\f\u00cc\n\f\f\f\16\f\u00cf\13\f\3\f\3\f\7\f\u00d3"+
		"\n\f\f\f\16\f\u00d6\13\f\3\f\3\f\3\r\3\r\7\r\u00dc\n\r\f\r\16\r\u00df"+
		"\13\r\3\r\3\r\7\r\u00e3\n\r\f\r\16\r\u00e6\13\r\3\r\3\r\3\r\2\2\16\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\2\3\3\3%%\2\u00fc\2\33\3\2\2\2\4\37\3\2\2\2"+
		"\6$\3\2\2\2\b&\3\2\2\2\nC\3\2\2\2\f\u008c\3\2\2\2\16\u0097\3\2\2\2\20"+
		"\u0099\3\2\2\2\22\u00a9\3\2\2\2\24\u00b9\3\2\2\2\26\u00c9\3\2\2\2\30\u00d9"+
		"\3\2\2\2\32\34\5\4\3\2\33\32\3\2\2\2\34\35\3\2\2\2\35\33\3\2\2\2\35\36"+
		"\3\2\2\2\36\3\3\2\2\2\37 \5\6\4\2 !\t\2\2\2!\5\3\2\2\2\"%\5\f\7\2#%\5"+
		"\16\b\2$\"\3\2\2\2$#\3\2\2\2%\7\3\2\2\2&*\7\33\2\2\')\7$\2\2(\'\3\2\2"+
		"\2),\3\2\2\2*(\3\2\2\2*+\3\2\2\2+\67\3\2\2\2,*\3\2\2\2-.\7,\2\2.\62\7"+
		"\'\2\2/\61\7$\2\2\60/\3\2\2\2\61\64\3\2\2\2\62\60\3\2\2\2\62\63\3\2\2"+
		"\2\63\66\3\2\2\2\64\62\3\2\2\2\65-\3\2\2\2\669\3\2\2\2\67\65\3\2\2\2\67"+
		"8\3\2\2\28:\3\2\2\29\67\3\2\2\2:>\7,\2\2;=\7$\2\2<;\3\2\2\2=@\3\2\2\2"+
		"><\3\2\2\2>?\3\2\2\2?A\3\2\2\2@>\3\2\2\2AB\7+\2\2B\t\3\2\2\2CG\7\32\2"+
		"\2DF\7$\2\2ED\3\2\2\2FI\3\2\2\2GE\3\2\2\2GH\3\2\2\2HZ\3\2\2\2IG\3\2\2"+
		"\2JN\7*\2\2KM\7$\2\2LK\3\2\2\2MP\3\2\2\2NL\3\2\2\2NO\3\2\2\2OQ\3\2\2\2"+
		"PN\3\2\2\2QU\7\3\2\2RT\7$\2\2SR\3\2\2\2TW\3\2\2\2US\3\2\2\2UV\3\2\2\2"+
		"VY\3\2\2\2WU\3\2\2\2XJ\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2Z[\3\2\2\2[]\3\2\2"+
		"\2\\Z\3\2\2\2]a\7*\2\2^`\7$\2\2_^\3\2\2\2`c\3\2\2\2a_\3\2\2\2ab\3\2\2"+
		"\2bd\3\2\2\2ca\3\2\2\2de\7\3\2\2e\13\3\2\2\2fj\7&\2\2gi\7$\2\2hg\3\2\2"+
		"\2il\3\2\2\2jh\3\2\2\2jk\3\2\2\2km\3\2\2\2lj\3\2\2\2mq\7\16\2\2np\7$\2"+
		"\2on\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2rt\3\2\2\2sq\3\2\2\2t\u008d"+
		"\7\3\2\2uy\7&\2\2vx\7$\2\2wv\3\2\2\2x{\3\2\2\2yw\3\2\2\2yz\3\2\2\2z|\3"+
		"\2\2\2{y\3\2\2\2|\u0080\7\13\2\2}\177\7$\2\2~}\3\2\2\2\177\u0082\3\2\2"+
		"\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081\u0083\3\2\2\2\u0082\u0080"+
		"\3\2\2\2\u0083\u0087\5\16\b\2\u0084\u0086\7$\2\2\u0085\u0084\3\2\2\2\u0086"+
		"\u0089\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2\2\2\u0088\u008a\3\2"+
		"\2\2\u0089\u0087\3\2\2\2\u008a\u008b\7\3\2\2\u008b\u008d\3\2\2\2\u008c"+
		"f\3\2\2\2\u008cu\3\2\2\2\u008d\r\3\2\2\2\u008e\u008f\7\20\2\2\u008f\u0098"+
		"\5\16\b\2\u0090\u0091\7\4\2\2\u0091\u0092\5\16\b\2\u0092\u0093\7\5\2\2"+
		"\u0093\u0098\3\2\2\2\u0094\u0098\7\6\2\2\u0095\u0098\7\7\2\2\u0096\u0098"+
		"\7\35\2\2\u0097\u008e\3\2\2\2\u0097\u0090\3\2\2\2\u0097\u0094\3\2\2\2"+
		"\u0097\u0095\3\2\2\2\u0097\u0096\3\2\2\2\u0098\17\3\2\2\2\u0099\u009d"+
		"\5\16\b\2\u009a\u009c\7$\2\2\u009b\u009a\3\2\2\2\u009c\u009f\3\2\2\2\u009d"+
		"\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u00a0\3\2\2\2\u009f\u009d\3\2"+
		"\2\2\u00a0\u00a4\7\17\2\2\u00a1\u00a3\7$\2\2\u00a2\u00a1\3\2\2\2\u00a3"+
		"\u00a6\3\2\2\2\u00a4\u00a2\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5\u00a7\3\2"+
		"\2\2\u00a6\u00a4\3\2\2\2\u00a7\u00a8\5\16\b\2\u00a8\21\3\2\2\2\u00a9\u00ad"+
		"\5\16\b\2\u00aa\u00ac\7$\2\2\u00ab\u00aa\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad"+
		"\u00ab\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae\u00b0\3\2\2\2\u00af\u00ad\3\2"+
		"\2\2\u00b0\u00b4\7\20\2\2\u00b1\u00b3\7$\2\2\u00b2\u00b1\3\2\2\2\u00b3"+
		"\u00b6\3\2\2\2\u00b4\u00b2\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b5\u00b7\3\2"+
		"\2\2\u00b6\u00b4\3\2\2\2\u00b7\u00b8\5\16\b\2\u00b8\23\3\2\2\2\u00b9\u00bd"+
		"\5\16\b\2\u00ba\u00bc\7$\2\2\u00bb\u00ba\3\2\2\2\u00bc\u00bf\3\2\2\2\u00bd"+
		"\u00bb\3\2\2\2\u00bd\u00be\3\2\2\2\u00be\u00c0\3\2\2\2\u00bf\u00bd\3\2"+
		"\2\2\u00c0\u00c4\7\21\2\2\u00c1\u00c3\7$\2\2\u00c2\u00c1\3\2\2\2\u00c3"+
		"\u00c6\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00c7\3\2"+
		"\2\2\u00c6\u00c4\3\2\2\2\u00c7\u00c8\5\16\b\2\u00c8\25\3\2\2\2\u00c9\u00cd"+
		"\5\16\b\2\u00ca\u00cc\7$\2\2\u00cb\u00ca\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd"+
		"\u00cb\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00d0\3\2\2\2\u00cf\u00cd\3\2"+
		"\2\2\u00d0\u00d4\7\22\2\2\u00d1\u00d3\7$\2\2\u00d2\u00d1\3\2\2\2\u00d3"+
		"\u00d6\3\2\2\2\u00d4\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\u00d7\3\2"+
		"\2\2\u00d6\u00d4\3\2\2\2\u00d7\u00d8\5\16\b\2\u00d8\27\3\2\2\2\u00d9\u00dd"+
		"\5\16\b\2\u00da\u00dc\7$\2\2\u00db\u00da\3\2\2\2\u00dc\u00df\3\2\2\2\u00dd"+
		"\u00db\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00e0\3\2\2\2\u00df\u00dd\3\2"+
		"\2\2\u00e0\u00e4\7\23\2\2\u00e1\u00e3\7$\2\2\u00e2\u00e1\3\2\2\2\u00e3"+
		"\u00e6\3\2\2\2\u00e4\u00e2\3\2\2\2\u00e4\u00e5\3\2\2\2\u00e5\u00e7\3\2"+
		"\2\2\u00e6\u00e4\3\2\2\2\u00e7\u00e8\5\16\b\2\u00e8\31\3\2\2\2\36\35$"+
		"*\62\67>GNUZajqy\u0080\u0087\u008c\u0097\u009d\u00a4\u00ad\u00b4\u00bd"+
		"\u00c4\u00cd\u00d4\u00dd\u00e4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}