// Generated from /home/corentin/cours/pld-comp/pld-comp/src/antlr/IFCCLexer.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class IFCCLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		IF=1, ELSE=2, WHILE=3, RETURN=4, OPEN_PAR=5, CLOSE_PAR=6, OPEN_BRACE=7, 
		CLOSE_BRACE=8, OPEN_BRACKET=9, CLOSE_BRACKET=10, SEMICOLON=11, COMMA=12, 
		INT=13, CHAR=14, MULT=15, DIV=16, PLUS=17, MIN=18, MOD=19, EQ=20, NEQ=21, 
		DEQ=22, GT=23, LT=24, GE=25, LE=26, CONST=27, IDENTIFIER=28, OPERATOR=29, 
		COMMENT=30, DIRECTIVE=31, WS=32;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"IF", "ELSE", "WHILE", "RETURN", "OPEN_PAR", "CLOSE_PAR", "OPEN_BRACE", 
			"CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", "SEMICOLON", "COMMA", 
			"INT", "CHAR", "MULT", "DIV", "PLUS", "MIN", "MOD", "EQ", "NEQ", "DEQ", 
			"GT", "LT", "GE", "LE", "CONST", "IDENTIFIER", "OPERATOR", "COMMENT", 
			"DIRECTIVE", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'if'", "'else'", "'while'", "'return'", "'('", "')'", "'{'", "'}'", 
			"'['", "']'", "';'", "','", "'int'", "'char'", "'*'", "'/'", "'+'", "'-'", 
			"'%'", "'='", "'!='", "'=='", "'>'", "'<'", "'>='", "'<='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "IF", "ELSE", "WHILE", "RETURN", "OPEN_PAR", "CLOSE_PAR", "OPEN_BRACE", 
			"CLOSE_BRACE", "OPEN_BRACKET", "CLOSE_BRACKET", "SEMICOLON", "COMMA", 
			"INT", "CHAR", "MULT", "DIV", "PLUS", "MIN", "MOD", "EQ", "NEQ", "DEQ", 
			"GT", "LT", "GE", "LE", "CONST", "IDENTIFIER", "OPERATOR", "COMMENT", 
			"DIRECTIVE", "WS"
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


	public IFCCLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "IFCCLexer.g4"; }

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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\"\u00b8\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3"+
		"\f\3\f\3\r\3\r\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\20\3\20"+
		"\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\27"+
		"\3\27\3\27\3\30\3\30\3\31\3\31\3\32\3\32\3\32\3\33\3\33\3\33\3\34\6\34"+
		"\u008f\n\34\r\34\16\34\u0090\3\35\3\35\7\35\u0095\n\35\f\35\16\35\u0098"+
		"\13\35\3\36\3\36\3\37\3\37\3\37\3\37\7\37\u00a0\n\37\f\37\16\37\u00a3"+
		"\13\37\3\37\3\37\3\37\3\37\3\37\3 \3 \7 \u00ac\n \f \16 \u00af\13 \3 "+
		"\3 \3 \3 \3!\3!\3!\3!\4\u00a1\u00ad\2\"\3\3\5\4\7\5\t\6\13\7\r\b\17\t"+
		"\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27"+
		"-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"\3\2\7\3\2\62;\5\2C\\a"+
		"ac|\6\2\62;C\\aac|\5\2,-//\61\61\5\2\13\f\17\17\"\"\2\u00bb\2\3\3\2\2"+
		"\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3"+
		"\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2"+
		"\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2"+
		"\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2"+
		"\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3"+
		"\2\2\2\2?\3\2\2\2\2A\3\2\2\2\3C\3\2\2\2\5F\3\2\2\2\7K\3\2\2\2\tQ\3\2\2"+
		"\2\13X\3\2\2\2\rZ\3\2\2\2\17\\\3\2\2\2\21^\3\2\2\2\23`\3\2\2\2\25b\3\2"+
		"\2\2\27d\3\2\2\2\31f\3\2\2\2\33h\3\2\2\2\35l\3\2\2\2\37q\3\2\2\2!s\3\2"+
		"\2\2#u\3\2\2\2%w\3\2\2\2\'y\3\2\2\2){\3\2\2\2+}\3\2\2\2-\u0080\3\2\2\2"+
		"/\u0083\3\2\2\2\61\u0085\3\2\2\2\63\u0087\3\2\2\2\65\u008a\3\2\2\2\67"+
		"\u008e\3\2\2\29\u0092\3\2\2\2;\u0099\3\2\2\2=\u009b\3\2\2\2?\u00a9\3\2"+
		"\2\2A\u00b4\3\2\2\2CD\7k\2\2DE\7h\2\2E\4\3\2\2\2FG\7g\2\2GH\7n\2\2HI\7"+
		"u\2\2IJ\7g\2\2J\6\3\2\2\2KL\7y\2\2LM\7j\2\2MN\7k\2\2NO\7n\2\2OP\7g\2\2"+
		"P\b\3\2\2\2QR\7t\2\2RS\7g\2\2ST\7v\2\2TU\7w\2\2UV\7t\2\2VW\7p\2\2W\n\3"+
		"\2\2\2XY\7*\2\2Y\f\3\2\2\2Z[\7+\2\2[\16\3\2\2\2\\]\7}\2\2]\20\3\2\2\2"+
		"^_\7\177\2\2_\22\3\2\2\2`a\7]\2\2a\24\3\2\2\2bc\7_\2\2c\26\3\2\2\2de\7"+
		"=\2\2e\30\3\2\2\2fg\7.\2\2g\32\3\2\2\2hi\7k\2\2ij\7p\2\2jk\7v\2\2k\34"+
		"\3\2\2\2lm\7e\2\2mn\7j\2\2no\7c\2\2op\7t\2\2p\36\3\2\2\2qr\7,\2\2r \3"+
		"\2\2\2st\7\61\2\2t\"\3\2\2\2uv\7-\2\2v$\3\2\2\2wx\7/\2\2x&\3\2\2\2yz\7"+
		"\'\2\2z(\3\2\2\2{|\7?\2\2|*\3\2\2\2}~\7#\2\2~\177\7?\2\2\177,\3\2\2\2"+
		"\u0080\u0081\7?\2\2\u0081\u0082\7?\2\2\u0082.\3\2\2\2\u0083\u0084\7@\2"+
		"\2\u0084\60\3\2\2\2\u0085\u0086\7>\2\2\u0086\62\3\2\2\2\u0087\u0088\7"+
		"@\2\2\u0088\u0089\7?\2\2\u0089\64\3\2\2\2\u008a\u008b\7>\2\2\u008b\u008c"+
		"\7?\2\2\u008c\66\3\2\2\2\u008d\u008f\t\2\2\2\u008e\u008d\3\2\2\2\u008f"+
		"\u0090\3\2\2\2\u0090\u008e\3\2\2\2\u0090\u0091\3\2\2\2\u00918\3\2\2\2"+
		"\u0092\u0096\t\3\2\2\u0093\u0095\t\4\2\2\u0094\u0093\3\2\2\2\u0095\u0098"+
		"\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097:\3\2\2\2\u0098"+
		"\u0096\3\2\2\2\u0099\u009a\t\5\2\2\u009a<\3\2\2\2\u009b\u009c\7\61\2\2"+
		"\u009c\u009d\7,\2\2\u009d\u00a1\3\2\2\2\u009e\u00a0\13\2\2\2\u009f\u009e"+
		"\3\2\2\2\u00a0\u00a3\3\2\2\2\u00a1\u00a2\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2"+
		"\u00a4\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a4\u00a5\7,\2\2\u00a5\u00a6\7\61"+
		"\2\2\u00a6\u00a7\3\2\2\2\u00a7\u00a8\b\37\2\2\u00a8>\3\2\2\2\u00a9\u00ad"+
		"\7%\2\2\u00aa\u00ac\13\2\2\2\u00ab\u00aa\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad"+
		"\u00ae\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ae\u00b0\3\2\2\2\u00af\u00ad\3\2"+
		"\2\2\u00b0\u00b1\7\f\2\2\u00b1\u00b2\3\2\2\2\u00b2\u00b3\b \2\2\u00b3"+
		"@\3\2\2\2\u00b4\u00b5\t\6\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b7\b!\3\2\u00b7"+
		"B\3\2\2\2\7\2\u0090\u0096\u00a1\u00ad\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}