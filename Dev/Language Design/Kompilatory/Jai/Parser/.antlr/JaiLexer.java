// Generated from c:\Users\antek\Desktop\Kompilatory\Jai\Parser\JaiLexer.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class JaiLexer extends Lexer {
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
		BLOCK=1, STRUCT_DECL=2, ENUM_DECL=3;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE", "BLOCK", "STRUCT_DECL", "ENUM_DECL"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"TERMINATOR", "LPAREN", "RPAREN", "VAR", "CONST", "SIMPLE", "ENUM_ID", 
			"STRUCT_ID", "ASSIGN", "CONST_DECL_OP", "VAR_DECL_OP", "DECL_OP", "PLUS", 
			"MINUS", "MULT", "DIV", "POW", "TYPE", "INT", "SIGNED", "UNSIGNED", "FLOAT", 
			"FLOAT64", "STRUCT", "ENUM", "BLOCK_BEGIN", "LITERAL", "INTLIT", "SIGNEDLIT", 
			"UNSIGNEDLIT", "FLOATLIT", "UNSIGNEDFLOATLIT", "SIGNEDFLOATLIT", "WS", 
			"NL", "DIGIT_NONZERO", "DIGIT", "DIGITS", "DIGITS_AFTER_DEC", "ID", "ALPHA", 
			"ALPHANUM", "STRING", "SIZE_IN_BYTES", "COMMA", "UNSIGNEDSUFFIX", "SIGNEDSUFFIX", 
			"FLOATSUFFIX", "SIGN", "BLOCK_END", "STRUCT_END", "STRUCT_MEMBER", "ENUM_END", 
			"ENUM_MEMBER"
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


	public JaiLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "JaiLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2,\u01c3\b\1\b\1\b"+
		"\1\b\1\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t"+
		"\4\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21"+
		"\t\21\4\22\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30"+
		"\t\30\4\31\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37"+
		"\t\37\4 \t \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)"+
		"\4*\t*\4+\t+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63"+
		"\t\63\4\64\t\64\4\65\t\65\4\66\t\66\4\67\t\67\3\2\6\2t\n\2\r\2\16\2u\3"+
		"\3\3\3\3\4\3\4\3\5\3\5\3\5\5\5\177\n\5\3\6\3\6\3\6\5\6\u0084\n\6\3\7\3"+
		"\7\3\b\3\b\3\t\3\t\3\n\3\n\7\n\u008e\n\n\f\n\16\n\u0091\13\n\3\n\3\n\3"+
		"\n\3\n\7\n\u0097\n\n\f\n\16\n\u009a\13\n\3\n\3\n\5\n\u009e\n\n\3\13\3"+
		"\13\7\13\u00a2\n\13\f\13\16\13\u00a5\13\13\3\13\5\13\u00a8\n\13\3\13\7"+
		"\13\u00ab\n\13\f\13\16\13\u00ae\13\13\3\13\3\13\3\f\3\f\7\f\u00b4\n\f"+
		"\f\f\16\f\u00b7\13\f\3\f\5\f\u00ba\n\f\3\r\3\r\5\r\u00be\n\r\3\16\3\16"+
		"\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\5\23\u00d1\n\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26"+
		"\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31"+
		"\3\31\3\31\3\31\7\31\u00ee\n\31\f\31\16\31\u00f1\13\31\3\31\3\31\3\31"+
		"\3\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u00fe\n\32\3\32\7\32\u0101"+
		"\n\32\f\32\16\32\u0104\13\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3"+
		"\34\3\34\3\34\3\34\3\34\3\34\5\34\u0114\n\34\3\35\3\35\5\35\u0118\n\35"+
		"\3\36\3\36\7\36\u011c\n\36\f\36\16\36\u011f\13\36\3\36\3\36\3\36\3\37"+
		"\3\37\3\37\3 \3 \5 \u0129\n \3!\3!\3!\3!\3!\3!\3\"\3\"\7\"\u0133\n\"\f"+
		"\"\16\"\u0136\13\"\3\"\3\"\3\"\3\"\3\"\3\"\3#\3#\5#\u0140\n#\3#\3#\3$"+
		"\6$\u0145\n$\r$\16$\u0146\3%\3%\3&\3&\3\'\3\'\7\'\u014f\n\'\f\'\16\'\u0152"+
		"\13\'\3(\7(\u0155\n(\f(\16(\u0158\13(\3)\3)\3)\7)\u015d\n)\f)\16)\u0160"+
		"\13)\7)\u0162\n)\f)\16)\u0165\13)\3*\7*\u0168\n*\f*\16*\u016b\13*\3+\3"+
		"+\3+\7+\u0170\n+\f+\16+\u0173\13+\3,\7,\u0176\n,\f,\16,\u0179\13,\3-\3"+
		"-\3-\3-\3-\3-\3-\3-\3-\3-\5-\u0185\n-\3.\3.\3/\5/\u018a\n/\3\60\5\60\u018d"+
		"\n\60\3\61\5\61\u0190\n\61\3\62\5\62\u0193\n\62\3\63\3\63\3\63\3\63\3"+
		"\64\3\64\7\64\u019b\n\64\f\64\16\64\u019e\13\64\3\64\3\64\3\64\3\64\3"+
		"\65\3\65\3\65\7\65\u01a7\n\65\f\65\16\65\u01aa\13\65\3\65\3\65\7\65\u01ae"+
		"\n\65\f\65\16\65\u01b1\13\65\3\65\3\65\5\65\u01b5\n\65\3\66\3\66\7\66"+
		"\u01b9\n\66\f\66\16\66\u01bc\13\66\3\66\3\66\3\66\3\66\3\67\3\67\3\u0177"+
		"\28\6\3\b\4\n\5\f\6\16\7\20\b\22\t\24\n\26\13\30\f\32\r\34\16\36\17 \20"+
		"\"\21$\22&\23(\24*\25,\26.\27\60\30\62\31\64\32\66\338\34:\35<\36>\37"+
		"@ B!D\"F#H$J%L\2N\2P\2R\2T&V\2X\2Z\2\\\2^\'`\2b\2d\2f\2h(j)l*n+p,\6\2"+
		"\3\4\5\f\4\2\13\13\"\"\4\2\f\f\16\17\3\2\63;\3\2\62;\5\2C\\aac|\4\2C\\"+
		"c|\4\2WWww\4\2UUuu\4\2HHhh\4\2--//\2\u01e9\2\6\3\2\2\2\2\b\3\2\2\2\2\n"+
		"\3\2\2\2\2\f\3\2\2\2\2\16\3\2\2\2\2\20\3\2\2\2\2\22\3\2\2\2\2\24\3\2\2"+
		"\2\2\26\3\2\2\2\2\30\3\2\2\2\2\32\3\2\2\2\2\34\3\2\2\2\2\36\3\2\2\2\2"+
		" \3\2\2\2\2\"\3\2\2\2\2$\3\2\2\2\2&\3\2\2\2\2(\3\2\2\2\2*\3\2\2\2\2,\3"+
		"\2\2\2\2.\3\2\2\2\2\60\3\2\2\2\2\62\3\2\2\2\2\64\3\2\2\2\2\66\3\2\2\2"+
		"\28\3\2\2\2\2:\3\2\2\2\2<\3\2\2\2\2>\3\2\2\2\2@\3\2\2\2\2B\3\2\2\2\2D"+
		"\3\2\2\2\2F\3\2\2\2\2H\3\2\2\2\2J\3\2\2\2\2T\3\2\2\2\2^\3\2\2\2\3h\3\2"+
		"\2\2\4j\3\2\2\2\4l\3\2\2\2\5n\3\2\2\2\5p\3\2\2\2\6s\3\2\2\2\bw\3\2\2\2"+
		"\ny\3\2\2\2\f~\3\2\2\2\16\u0083\3\2\2\2\20\u0085\3\2\2\2\22\u0087\3\2"+
		"\2\2\24\u0089\3\2\2\2\26\u009d\3\2\2\2\30\u009f\3\2\2\2\32\u00b1\3\2\2"+
		"\2\34\u00bd\3\2\2\2\36\u00bf\3\2\2\2 \u00c1\3\2\2\2\"\u00c3\3\2\2\2$\u00c5"+
		"\3\2\2\2&\u00c7\3\2\2\2(\u00d0\3\2\2\2*\u00d2\3\2\2\2,\u00d6\3\2\2\2."+
		"\u00d9\3\2\2\2\60\u00dc\3\2\2\2\62\u00e2\3\2\2\2\64\u00e6\3\2\2\2\66\u00f6"+
		"\3\2\2\28\u0109\3\2\2\2:\u0113\3\2\2\2<\u0117\3\2\2\2>\u0119\3\2\2\2@"+
		"\u0123\3\2\2\2B\u0128\3\2\2\2D\u012a\3\2\2\2F\u0130\3\2\2\2H\u013f\3\2"+
		"\2\2J\u0144\3\2\2\2L\u0148\3\2\2\2N\u014a\3\2\2\2P\u014c\3\2\2\2R\u0156"+
		"\3\2\2\2T\u0159\3\2\2\2V\u0169\3\2\2\2X\u0171\3\2\2\2Z\u0177\3\2\2\2\\"+
		"\u0184\3\2\2\2^\u0186\3\2\2\2`\u0189\3\2\2\2b\u018c\3\2\2\2d\u018f\3\2"+
		"\2\2f\u0192\3\2\2\2h\u0194\3\2\2\2j\u0198\3\2\2\2l\u01b4\3\2\2\2n\u01b6"+
		"\3\2\2\2p\u01c1\3\2\2\2rt\7=\2\2sr\3\2\2\2tu\3\2\2\2us\3\2\2\2uv\3\2\2"+
		"\2v\7\3\2\2\2wx\7*\2\2x\t\3\2\2\2yz\7+\2\2z\13\3\2\2\2{\177\5\20\7\2|"+
		"\177\5\22\b\2}\177\5\24\t\2~{\3\2\2\2~|\3\2\2\2~}\3\2\2\2\177\r\3\2\2"+
		"\2\u0080\u0084\5\20\7\2\u0081\u0084\5\22\b\2\u0082\u0084\5\24\t\2\u0083"+
		"\u0080\3\2\2\2\u0083\u0081\3\2\2\2\u0083\u0082\3\2\2\2\u0084\17\3\2\2"+
		"\2\u0085\u0086\5T)\2\u0086\21\3\2\2\2\u0087\u0088\5T)\2\u0088\23\3\2\2"+
		"\2\u0089\u008a\5T)\2\u008a\25\3\2\2\2\u008b\u008f\5\32\f\2\u008c\u008e"+
		"\5H#\2\u008d\u008c\3\2\2\2\u008e\u0091\3\2\2\2\u008f\u008d\3\2\2\2\u008f"+
		"\u0090\3\2\2\2\u0090\u0092\3\2\2\2\u0091\u008f\3\2\2\2\u0092\u0093\7?"+
		"\2\2\u0093\u009e\3\2\2\2\u0094\u0098\5\30\13\2\u0095\u0097\5H#\2\u0096"+
		"\u0095\3\2\2\2\u0097\u009a\3\2\2\2\u0098\u0096\3\2\2\2\u0098\u0099\3\2"+
		"\2\2\u0099\u009b\3\2\2\2\u009a\u0098\3\2\2\2\u009b\u009c\7?\2\2\u009c"+
		"\u009e\3\2\2\2\u009d\u008b\3\2\2\2\u009d\u0094\3\2\2\2\u009e\27\3\2\2"+
		"\2\u009f\u00a3\7<\2\2\u00a0\u00a2\5H#\2\u00a1\u00a0\3\2\2\2\u00a2\u00a5"+
		"\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\u00a7\3\2\2\2\u00a5"+
		"\u00a3\3\2\2\2\u00a6\u00a8\5(\23\2\u00a7\u00a6\3\2\2\2\u00a7\u00a8\3\2"+
		"\2\2\u00a8\u00ac\3\2\2\2\u00a9\u00ab\5H#\2\u00aa\u00a9\3\2\2\2\u00ab\u00ae"+
		"\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad\u00af\3\2\2\2\u00ae"+
		"\u00ac\3\2\2\2\u00af\u00b0\7<\2\2\u00b0\31\3\2\2\2\u00b1\u00b5\7<\2\2"+
		"\u00b2\u00b4\5H#\2\u00b3\u00b2\3\2\2\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3"+
		"\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b9\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8"+
		"\u00ba\5(\23\2\u00b9\u00b8\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\33\3\2\2"+
		"\2\u00bb\u00be\5\30\13\2\u00bc\u00be\5\32\f\2\u00bd\u00bb\3\2\2\2\u00bd"+
		"\u00bc\3\2\2\2\u00be\35\3\2\2\2\u00bf\u00c0\7-\2\2\u00c0\37\3\2\2\2\u00c1"+
		"\u00c2\7/\2\2\u00c2!\3\2\2\2\u00c3\u00c4\7,\2\2\u00c4#\3\2\2\2\u00c5\u00c6"+
		"\7\61\2\2\u00c6%\3\2\2\2\u00c7\u00c8\7`\2\2\u00c8\'\3\2\2\2\u00c9\u00d1"+
		"\5*\24\2\u00ca\u00d1\5,\25\2\u00cb\u00d1\5.\26\2\u00cc\u00d1\5\60\27\2"+
		"\u00cd\u00d1\5\62\30\2\u00ce\u00d1\5\64\31\2\u00cf\u00d1\5\66\32\2\u00d0"+
		"\u00c9\3\2\2\2\u00d0\u00ca\3\2\2\2\u00d0\u00cb\3\2\2\2\u00d0\u00cc\3\2"+
		"\2\2\u00d0\u00cd\3\2\2\2\u00d0\u00ce\3\2\2\2\u00d0\u00cf\3\2\2\2\u00d1"+
		")\3\2\2\2\u00d2\u00d3\7k\2\2\u00d3\u00d4\7p\2\2\u00d4\u00d5\7v\2\2\u00d5"+
		"+\3\2\2\2\u00d6\u00d7\7u\2\2\u00d7\u00d8\5\\-\2\u00d8-\3\2\2\2\u00d9\u00da"+
		"\7w\2\2\u00da\u00db\5\\-\2\u00db/\3\2\2\2\u00dc\u00dd\7h\2\2\u00dd\u00de"+
		"\7n\2\2\u00de\u00df\7q\2\2\u00df\u00e0\7c\2\2\u00e0\u00e1\7v\2\2\u00e1"+
		"\61\3\2\2\2\u00e2\u00e3\5\60\27\2\u00e3\u00e4\78\2\2\u00e4\u00e5\7\66"+
		"\2\2\u00e5\63\3\2\2\2\u00e6\u00e7\7u\2\2\u00e7\u00e8\7v\2\2\u00e8\u00e9"+
		"\7w\2\2\u00e9\u00ea\7e\2\2\u00ea\u00eb\7v\2\2\u00eb\u00ef\3\2\2\2\u00ec"+
		"\u00ee\5H#\2\u00ed\u00ec\3\2\2\2\u00ee\u00f1\3\2\2\2\u00ef\u00ed\3\2\2"+
		"\2\u00ef\u00f0\3\2\2\2\u00f0\u00f2\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f2\u00f3"+
		"\7}\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f5\b\31\2\2\u00f5\65\3\2\2\2\u00f6"+
		"\u00f7\7g\2\2\u00f7\u00f8\7p\2\2\u00f8\u00f9\7w\2\2\u00f9\u00fa\7o\2\2"+
		"\u00fa\u00fd\3\2\2\2\u00fb\u00fe\5.\26\2\u00fc\u00fe\5,\25\2\u00fd\u00fb"+
		"\3\2\2\2\u00fd\u00fc\3\2\2\2\u00fe\u0102\3\2\2\2\u00ff\u0101\5H#\2\u0100"+
		"\u00ff\3\2\2\2\u0101\u0104\3\2\2\2\u0102\u0100\3\2\2\2\u0102\u0103\3\2"+
		"\2\2\u0103\u0105\3\2\2\2\u0104\u0102\3\2\2\2\u0105\u0106\7}\2\2\u0106"+
		"\u0107\3\2\2\2\u0107\u0108\b\32\3\2\u0108\67\3\2\2\2\u0109\u010a\7}\2"+
		"\2\u010a\u010b\3\2\2\2\u010b\u010c\b\33\4\2\u010c9\3\2\2\2\u010d\u0114"+
		"\5<\35\2\u010e\u0114\5>\36\2\u010f\u0114\5@\37\2\u0110\u0114\5B \2\u0111"+
		"\u0114\5D!\2\u0112\u0114\5F\"\2\u0113\u010d\3\2\2\2\u0113\u010e\3\2\2"+
		"\2\u0113\u010f\3\2\2\2\u0113\u0110\3\2\2\2\u0113\u0111\3\2\2\2\u0113\u0112"+
		"\3\2\2\2\u0114;\3\2\2\2\u0115\u0118\5@\37\2\u0116\u0118\5>\36\2\u0117"+
		"\u0115\3\2\2\2\u0117\u0116\3\2\2\2\u0118=\3\2\2\2\u0119\u011d\5f\62\2"+
		"\u011a\u011c\5H#\2\u011b\u011a\3\2\2\2\u011c\u011f\3\2\2\2\u011d\u011b"+
		"\3\2\2\2\u011d\u011e\3\2\2\2\u011e\u0120\3\2\2\2\u011f\u011d\3\2\2\2\u0120"+
		"\u0121\5P\'\2\u0121\u0122\5b\60\2\u0122?\3\2\2\2\u0123\u0124\5P\'\2\u0124"+
		"\u0125\5`/\2\u0125A\3\2\2\2\u0126\u0129\5F\"\2\u0127\u0129\5D!\2\u0128"+
		"\u0126\3\2\2\2\u0128\u0127\3\2\2\2\u0129C\3\2\2\2\u012a\u012b\5P\'\2\u012b"+
		"\u012c\7\60\2\2\u012c\u012d\5R(\2\u012d\u012e\5`/\2\u012e\u012f\5d\61"+
		"\2\u012fE\3\2\2\2\u0130\u0134\5f\62\2\u0131\u0133\5H#\2\u0132\u0131\3"+
		"\2\2\2\u0133\u0136\3\2\2\2\u0134\u0132\3\2\2\2\u0134\u0135\3\2\2\2\u0135"+
		"\u0137\3\2\2\2\u0136\u0134\3\2\2\2\u0137\u0138\5P\'\2\u0138\u0139\7\60"+
		"\2\2\u0139\u013a\5R(\2\u013a\u013b\5b\60\2\u013b\u013c\5d\61\2\u013cG"+
		"\3\2\2\2\u013d\u0140\5J$\2\u013e\u0140\t\2\2\2\u013f\u013d\3\2\2\2\u013f"+
		"\u013e\3\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\b#\5\2\u0142I\3\2\2\2\u0143"+
		"\u0145\t\3\2\2\u0144\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u0144\3\2"+
		"\2\2\u0146\u0147\3\2\2\2\u0147K\3\2\2\2\u0148\u0149\t\4\2\2\u0149M\3\2"+
		"\2\2\u014a\u014b\t\5\2\2\u014bO\3\2\2\2\u014c\u0150\5L%\2\u014d\u014f"+
		"\5N&\2\u014e\u014d\3\2\2\2\u014f\u0152\3\2\2\2\u0150\u014e\3\2\2\2\u0150"+
		"\u0151\3\2\2\2\u0151Q\3\2\2\2\u0152\u0150\3\2\2\2\u0153\u0155\5N&\2\u0154"+
		"\u0153\3\2\2\2\u0155\u0158\3\2\2\2\u0156\u0154\3\2\2\2\u0156\u0157\3\2"+
		"\2\2\u0157S\3\2\2\2\u0158\u0156\3\2\2\2\u0159\u0163\t\6\2\2\u015a\u015e"+
		"\5P\'\2\u015b\u015d\t\6\2\2\u015c\u015b\3\2\2\2\u015d\u0160\3\2\2\2\u015e"+
		"\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0162\3\2\2\2\u0160\u015e\3\2"+
		"\2\2\u0161\u015a\3\2\2\2\u0162\u0165\3\2\2\2\u0163\u0161\3\2\2\2\u0163"+
		"\u0164\3\2\2\2\u0164U\3\2\2\2\u0165\u0163\3\2\2\2\u0166\u0168\t\7\2\2"+
		"\u0167\u0166\3\2\2\2\u0168\u016b\3\2\2\2\u0169\u0167\3\2\2\2\u0169\u016a"+
		"\3\2\2\2\u016aW\3\2\2\2\u016b\u0169\3\2\2\2\u016c\u016d\5V*\2\u016d\u016e"+
		"\5N&\2\u016e\u0170\3\2\2\2\u016f\u016c\3\2\2\2\u0170\u0173\3\2\2\2\u0171"+
		"\u016f\3\2\2\2\u0171\u0172\3\2\2\2\u0172Y\3\2\2\2\u0173\u0171\3\2\2\2"+
		"\u0174\u0176\13\2\2\2\u0175\u0174\3\2\2\2\u0176\u0179\3\2\2\2\u0177\u0178"+
		"\3\2\2\2\u0177\u0175\3\2\2\2\u0178[\3\2\2\2\u0179\u0177\3\2\2\2\u017a"+
		"\u0185\7:\2\2\u017b\u017c\7\63\2\2\u017c\u0185\78\2\2\u017d\u017e\7\65"+
		"\2\2\u017e\u0185\7\64\2\2\u017f\u0180\78\2\2\u0180\u0185\7\66\2\2\u0181"+
		"\u0182\7\63\2\2\u0182\u0183\7\64\2\2\u0183\u0185\7:\2\2\u0184\u017a\3"+
		"\2\2\2\u0184\u017b\3\2\2\2\u0184\u017d\3\2\2\2\u0184\u017f\3\2\2\2\u0184"+
		"\u0181\3\2\2\2\u0185]\3\2\2\2\u0186\u0187\7.\2\2\u0187_\3\2\2\2\u0188"+
		"\u018a\t\b\2\2\u0189\u0188\3\2\2\2\u0189\u018a\3\2\2\2\u018aa\3\2\2\2"+
		"\u018b\u018d\t\t\2\2\u018c\u018b\3\2\2\2\u018c\u018d\3\2\2\2\u018dc\3"+
		"\2\2\2\u018e\u0190\t\n\2\2\u018f\u018e\3\2\2\2\u018f\u0190\3\2\2\2\u0190"+
		"e\3\2\2\2\u0191\u0193\t\13\2\2\u0192\u0191\3\2\2\2\u0192\u0193\3\2\2\2"+
		"\u0193g\3\2\2\2\u0194\u0195\7\177\2\2\u0195\u0196\3\2\2\2\u0196\u0197"+
		"\b\63\6\2\u0197i\3\2\2\2\u0198\u019c\7\177\2\2\u0199\u019b\5H#\2\u019a"+
		"\u0199\3\2\2\2\u019b\u019e\3\2\2\2\u019c\u019a\3\2\2\2\u019c\u019d\3\2"+
		"\2\2\u019d\u019f\3\2\2\2\u019e\u019c\3\2\2\2\u019f\u01a0\5\6\2\2\u01a0"+
		"\u01a1\3\2\2\2\u01a1\u01a2\b\64\6\2\u01a2k\3\2\2\2\u01a3\u01b5\5T)\2\u01a4"+
		"\u01a8\5T)\2\u01a5\u01a7\5H#\2\u01a6\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2"+
		"\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01ab\3\2\2\2\u01aa\u01a8"+
		"\3\2\2\2\u01ab\u01af\5\26\n\2\u01ac\u01ae\5H#\2\u01ad\u01ac\3\2\2\2\u01ae"+
		"\u01b1\3\2\2\2\u01af\u01ad\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0\u01b2\3\2"+
		"\2\2\u01b1\u01af\3\2\2\2\u01b2\u01b3\5:\34\2\u01b3\u01b5\3\2\2\2\u01b4"+
		"\u01a3\3\2\2\2\u01b4\u01a4\3\2\2\2\u01b5m\3\2\2\2\u01b6\u01ba\7\177\2"+
		"\2\u01b7\u01b9\5H#\2\u01b8\u01b7\3\2\2\2\u01b9\u01bc\3\2\2\2\u01ba\u01b8"+
		"\3\2\2\2\u01ba\u01bb\3\2\2\2\u01bb\u01bd\3\2\2\2\u01bc\u01ba\3\2\2\2\u01bd"+
		"\u01be\5\6\2\2\u01be\u01bf\3\2\2\2\u01bf\u01c0\b\66\6\2\u01c0o\3\2\2\2"+
		"\u01c1\u01c2\5T)\2\u01c2q\3\2\2\2.\2\3\4\5u~\u0083\u008f\u0098\u009d\u00a3"+
		"\u00a7\u00ac\u00b5\u00b9\u00bd\u00d0\u00ef\u00fd\u0102\u0113\u0117\u011d"+
		"\u0128\u0134\u013f\u0146\u0150\u0156\u015e\u0163\u0169\u0171\u0177\u0184"+
		"\u0189\u018c\u018f\u0192\u019c\u01a8\u01af\u01b4\u01ba\7\7\4\2\7\5\2\7"+
		"\3\2\b\2\2\6\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}