// Generated from c:\Users\antek\Desktop\Kompilatory\C++Script\Parser\CppScriptLexer.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class CppScriptLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NEWLINE=1, WS=2, PASTE=3, DEFINITION=4, IF=5, THEN=6, ELSE=7, ENDIF=8, 
		DO_BLOCK=9, END=10, UNLESS=11, SELECT=12, SWITCH=13, WHILE=14, FOR=15, 
		UNTIL=16, DO_WHILE=17, COMMENT=18, WHILE_DO=19, WHILE_DO_BLOCK=20, WHILE_END=21;
	public static final int
		dowhileloop=1, whileloop=2;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE", "dowhileloop", "whileloop"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"NEWLINE", "WS", "PASTE", "DEFINITION", "IF", "THEN", "ELSE", "ENDIF", 
			"DO_BLOCK", "END", "UNLESS", "SELECT", "SWITCH", "WHILE", "FOR", "UNTIL", 
			"DO_WHILE", "COMMENT", "WHILE_DO", "WHILE_DO_BLOCK", "WHILE_END"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'\n'", null, "'paste'", "'def'", "'if'", "'then'", "'else'", "'endif'", 
			null, null, "'unless'", "'select'", "'switch'", null, "'for'", "'until'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NEWLINE", "WS", "PASTE", "DEFINITION", "IF", "THEN", "ELSE", "ENDIF", 
			"DO_BLOCK", "END", "UNLESS", "SELECT", "SWITCH", "WHILE", "FOR", "UNTIL", 
			"DO_WHILE", "COMMENT", "WHILE_DO", "WHILE_DO_BLOCK", "WHILE_END"
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


	public CppScriptLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "CppScriptLexer.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\27\u00a8\b\1\b\1"+
		"\b\1\4\2\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4"+
		"\n\t\n\4\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t"+
		"\21\4\22\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\3\2\3\2\3\3\6\3"+
		"\63\n\3\r\3\16\3\64\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3"+
		"\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3"+
		"\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3"+
		"\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\5\23\u0096\n\23\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\2\2\27\5"+
		"\3\7\4\t\5\13\6\r\7\17\b\21\t\23\n\25\13\27\f\31\r\33\16\35\17\37\20!"+
		"\21#\22%\23\'\24)\25+\26-\27\5\2\3\4\4\5\2\13\13\17\17\"\"\4\2&&==\2\u00ab"+
		"\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2"+
		"\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2"+
		"\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2"+
		"\2\2\'\3\2\2\2\3)\3\2\2\2\4+\3\2\2\2\4-\3\2\2\2\5/\3\2\2\2\7\62\3\2\2"+
		"\2\t8\3\2\2\2\13>\3\2\2\2\rB\3\2\2\2\17E\3\2\2\2\21J\3\2\2\2\23O\3\2\2"+
		"\2\25U\3\2\2\2\27X\3\2\2\2\31\\\3\2\2\2\33c\3\2\2\2\35j\3\2\2\2\37q\3"+
		"\2\2\2!y\3\2\2\2#}\3\2\2\2%\u0083\3\2\2\2\'\u0095\3\2\2\2)\u0097\3\2\2"+
		"\2+\u009f\3\2\2\2-\u00a2\3\2\2\2/\60\7\f\2\2\60\6\3\2\2\2\61\63\t\2\2"+
		"\2\62\61\3\2\2\2\63\64\3\2\2\2\64\62\3\2\2\2\64\65\3\2\2\2\65\66\3\2\2"+
		"\2\66\67\b\3\2\2\67\b\3\2\2\289\7r\2\29:\7c\2\2:;\7u\2\2;<\7v\2\2<=\7"+
		"g\2\2=\n\3\2\2\2>?\7f\2\2?@\7g\2\2@A\7h\2\2A\f\3\2\2\2BC\7k\2\2CD\7h\2"+
		"\2D\16\3\2\2\2EF\7v\2\2FG\7j\2\2GH\7g\2\2HI\7p\2\2I\20\3\2\2\2JK\7g\2"+
		"\2KL\7n\2\2LM\7u\2\2MN\7g\2\2N\22\3\2\2\2OP\7g\2\2PQ\7p\2\2QR\7f\2\2R"+
		"S\7k\2\2ST\7h\2\2T\24\3\2\2\2UV\7f\2\2VW\7q\2\2W\26\3\2\2\2XY\7g\2\2Y"+
		"Z\7p\2\2Z[\7f\2\2[\30\3\2\2\2\\]\7w\2\2]^\7p\2\2^_\7n\2\2_`\7g\2\2`a\7"+
		"u\2\2ab\7u\2\2b\32\3\2\2\2cd\7u\2\2de\7g\2\2ef\7n\2\2fg\7g\2\2gh\7e\2"+
		"\2hi\7v\2\2i\34\3\2\2\2jk\7u\2\2kl\7y\2\2lm\7k\2\2mn\7v\2\2no\7e\2\2o"+
		"p\7j\2\2p\36\3\2\2\2qr\7y\2\2rs\7j\2\2st\7k\2\2tu\7n\2\2uv\7g\2\2vw\3"+
		"\2\2\2wx\b\17\3\2x \3\2\2\2yz\7h\2\2z{\7q\2\2{|\7t\2\2|\"\3\2\2\2}~\7"+
		"w\2\2~\177\7p\2\2\177\u0080\7v\2\2\u0080\u0081\7k\2\2\u0081\u0082\7n\2"+
		"\2\u0082$\3\2\2\2\u0083\u0084\5\5\2\2\u0084\u0085\7f\2\2\u0085\u0086\7"+
		"q\2\2\u0086\u0087\3\2\2\2\u0087\u0088\b\22\4\2\u0088&\3\2\2\2\u0089\u0096"+
		"\7%\2\2\u008a\u008b\7t\2\2\u008b\u008c\7g\2\2\u008c\u0096\7o\2\2\u008d"+
		"\u008e\7e\2\2\u008e\u008f\7q\2\2\u008f\u0096\7o\2\2\u0090\u0091\7/\2\2"+
		"\u0091\u0096\7/\2\2\u0092\u0093\7\61\2\2\u0093\u0096\7\61\2\2\u0094\u0096"+
		"\t\3\2\2\u0095\u0089\3\2\2\2\u0095\u008a\3\2\2\2\u0095\u008d\3\2\2\2\u0095"+
		"\u0090\3\2\2\2\u0095\u0092\3\2\2\2\u0095\u0094\3\2\2\2\u0096(\3\2\2\2"+
		"\u0097\u0098\7y\2\2\u0098\u0099\7j\2\2\u0099\u009a\7k\2\2\u009a\u009b"+
		"\7n\2\2\u009b\u009c\7g\2\2\u009c\u009d\3\2\2\2\u009d\u009e\b\24\5\2\u009e"+
		"*\3\2\2\2\u009f\u00a0\7f\2\2\u00a0\u00a1\7q\2\2\u00a1,\3\2\2\2\u00a2\u00a3"+
		"\7g\2\2\u00a3\u00a4\7p\2\2\u00a4\u00a5\7f\2\2\u00a5\u00a6\3\2\2\2\u00a6"+
		"\u00a7\b\26\5\2\u00a7.\3\2\2\2\7\2\3\4\64\u0095\6\b\2\2\7\4\2\7\3\2\6"+
		"\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}