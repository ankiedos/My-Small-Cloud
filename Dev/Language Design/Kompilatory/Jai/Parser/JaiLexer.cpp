
// Generated from JaiLexer.g4 by ANTLR 4.9.1


#include "JaiLexer.h"


using namespace antlr4;


JaiLexer::JaiLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JaiLexer::~JaiLexer() {
  delete _interpreter;
}

std::string JaiLexer::getGrammarFileName() const {
  return "JaiLexer.g4";
}

const std::vector<std::string>& JaiLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& JaiLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& JaiLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& JaiLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& JaiLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> JaiLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& JaiLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> JaiLexer::_decisionToDFA;
atn::PredictionContextCache JaiLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JaiLexer::_atn;
std::vector<uint16_t> JaiLexer::_serializedATN;

std::vector<std::string> JaiLexer::_ruleNames = {
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

std::vector<std::string> JaiLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> JaiLexer::_modeNames = {
  "DEFAULT_MODE", "BLOCK", "STRUCT_DECL", "ENUM_DECL"
};

std::vector<std::string> JaiLexer::_literalNames = {
  "", "", "'('", "')'", "", "", "", "", "", "", "", "", "", "'+'", "'-'", 
  "'*'", "'/'", "'^'", "", "'int'", "", "", "'float'", "", "", "", "'{'", 
  "", "", "", "", "", "", "", "", "", "", "','", "'}'"
};

std::vector<std::string> JaiLexer::_symbolicNames = {
  "", "TERMINATOR", "LPAREN", "RPAREN", "VAR", "CONST", "SIMPLE", "ENUM_ID", 
  "STRUCT_ID", "ASSIGN", "CONST_DECL_OP", "VAR_DECL_OP", "DECL_OP", "PLUS", 
  "MINUS", "MULT", "DIV", "POW", "TYPE", "INT", "SIGNED", "UNSIGNED", "FLOAT", 
  "FLOAT64", "STRUCT", "ENUM", "BLOCK_BEGIN", "LITERAL", "INTLIT", "SIGNEDLIT", 
  "UNSIGNEDLIT", "FLOATLIT", "UNSIGNEDFLOATLIT", "SIGNEDFLOATLIT", "WS", 
  "NL", "ID", "COMMA", "BLOCK_END", "STRUCT_END", "STRUCT_MEMBER", "ENUM_END", 
  "ENUM_MEMBER"
};

dfa::Vocabulary JaiLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JaiLexer::_tokenNames;

JaiLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x2c, 0x1c3, 0x8, 0x1, 0x8, 0x1, 0x8, 0x1, 0x8, 0x1, 0x4, 0x2, 
    0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 
    0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 
    0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 
    0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 
    0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 
    0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 
    0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 
    0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
    0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 
    0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 
    0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 
    0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 
    0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 
    0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 
    0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 
    0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 
    0x9, 0x37, 0x3, 0x2, 0x6, 0x2, 0x74, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x75, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x7f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x84, 
    0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x8e, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x91, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x97, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x9a, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x9e, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xa2, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0xa5, 0xb, 0xb, 0x3, 0xb, 0x5, 0xb, 0xa8, 0xa, 0xb, 0x3, 0xb, 
    0x7, 0xb, 0xab, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xae, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb4, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0xb7, 0xb, 0xc, 0x3, 0xc, 0x5, 0xc, 0xba, 0xa, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xbe, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xd1, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0xee, 0xa, 0x19, 0xc, 
    0x19, 0xe, 0x19, 0xf1, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0xfe, 0xa, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x101, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x104, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x114, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x118, 0xa, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x11c, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x11f, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x129, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 
    0x22, 0x7, 0x22, 0x133, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x136, 0xb, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x140, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x6, 0x24, 0x145, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x146, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x7, 
    0x27, 0x14f, 0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x152, 0xb, 0x27, 0x3, 
    0x28, 0x7, 0x28, 0x155, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x158, 0xb, 
    0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x15d, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x160, 0xb, 0x29, 0x7, 0x29, 0x162, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x165, 0xb, 0x29, 0x3, 0x2a, 0x7, 0x2a, 0x168, 
    0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x16b, 0xb, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x7, 0x2b, 0x170, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x173, 
    0xb, 0x2b, 0x3, 0x2c, 0x7, 0x2c, 0x176, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 
    0x179, 0xb, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x185, 
    0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x18a, 0xa, 0x2f, 
    0x3, 0x30, 0x5, 0x30, 0x18d, 0xa, 0x30, 0x3, 0x31, 0x5, 0x31, 0x190, 
    0xa, 0x31, 0x3, 0x32, 0x5, 0x32, 0x193, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x19b, 0xa, 0x34, 
    0xc, 0x34, 0xe, 0x34, 0x19e, 0xb, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x1a7, 0xa, 0x35, 
    0xc, 0x35, 0xe, 0x35, 0x1aa, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 
    0x1ae, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x1b1, 0xb, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x5, 0x35, 0x1b5, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 
    0x1b9, 0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x1bc, 0xb, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x177, 0x2, 
    0x38, 0x6, 0x3, 0x8, 0x4, 0xa, 0x5, 0xc, 0x6, 0xe, 0x7, 0x10, 0x8, 0x12, 
    0x9, 0x14, 0xa, 0x16, 0xb, 0x18, 0xc, 0x1a, 0xd, 0x1c, 0xe, 0x1e, 0xf, 
    0x20, 0x10, 0x22, 0x11, 0x24, 0x12, 0x26, 0x13, 0x28, 0x14, 0x2a, 0x15, 
    0x2c, 0x16, 0x2e, 0x17, 0x30, 0x18, 0x32, 0x19, 0x34, 0x1a, 0x36, 0x1b, 
    0x38, 0x1c, 0x3a, 0x1d, 0x3c, 0x1e, 0x3e, 0x1f, 0x40, 0x20, 0x42, 0x21, 
    0x44, 0x22, 0x46, 0x23, 0x48, 0x24, 0x4a, 0x25, 0x4c, 0x2, 0x4e, 0x2, 
    0x50, 0x2, 0x52, 0x2, 0x54, 0x26, 0x56, 0x2, 0x58, 0x2, 0x5a, 0x2, 0x5c, 
    0x2, 0x5e, 0x27, 0x60, 0x2, 0x62, 0x2, 0x64, 0x2, 0x66, 0x2, 0x68, 0x28, 
    0x6a, 0x29, 0x6c, 0x2a, 0x6e, 0x2b, 0x70, 0x2c, 0x6, 0x2, 0x3, 0x4, 
    0x5, 0xc, 0x4, 0x2, 0xb, 0xb, 0x22, 0x22, 0x4, 0x2, 0xc, 0xc, 0xe, 0xf, 
    0x3, 0x2, 0x33, 0x3b, 0x3, 0x2, 0x32, 0x3b, 0x5, 0x2, 0x43, 0x5c, 0x61, 
    0x61, 0x63, 0x7c, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x4, 0x2, 0x57, 
    0x57, 0x77, 0x77, 0x4, 0x2, 0x55, 0x55, 0x75, 0x75, 0x4, 0x2, 0x48, 
    0x48, 0x68, 0x68, 0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x2, 0x1e9, 0x2, 
    0x6, 0x3, 0x2, 0x2, 0x2, 0x2, 0x8, 0x3, 0x2, 0x2, 0x2, 0x2, 0xa, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0xc, 0x3, 0x2, 0x2, 0x2, 0x2, 0xe, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x2, 0x12, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x14, 0x3, 0x2, 0x2, 0x2, 0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x2, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x2, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2, 0x24, 0x3, 0x2, 0x2, 0x2, 0x2, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2, 0x32, 0x3, 0x2, 0x2, 0x2, 0x2, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 0x2, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x2, 0x40, 0x3, 0x2, 0x2, 0x2, 0x2, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x44, 0x3, 0x2, 0x2, 0x2, 0x2, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x48, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x3, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x5, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x5, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x8, 0x77, 0x3, 0x2, 0x2, 0x2, 0xa, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x7e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x85, 0x3, 0x2, 0x2, 0x2, 0x12, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x89, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x30, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x34, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0x38, 0x109, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x117, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x123, 0x3, 0x2, 0x2, 0x2, 0x42, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x46, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x148, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x52, 0x156, 0x3, 0x2, 0x2, 0x2, 0x54, 0x159, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x169, 0x3, 0x2, 0x2, 0x2, 0x58, 0x171, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x177, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x186, 0x3, 0x2, 0x2, 0x2, 0x60, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x64, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x192, 0x3, 0x2, 0x2, 0x2, 0x68, 0x194, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x198, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1b6, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x72, 0x74, 0x7, 
    0x3d, 0x2, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x7, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x2a, 0x2, 0x2, 
    0x78, 0x9, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x2b, 0x2, 0x2, 0x7a, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7f, 0x5, 0x10, 0x7, 0x2, 0x7c, 0x7f, 
    0x5, 0x12, 0x8, 0x2, 0x7d, 0x7f, 0x5, 0x14, 0x9, 0x2, 0x7e, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x5, 0x10, 0x7, 
    0x2, 0x81, 0x84, 0x5, 0x12, 0x8, 0x2, 0x82, 0x84, 0x5, 0x14, 0x9, 0x2, 
    0x83, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0xf, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x5, 0x54, 0x29, 0x2, 0x86, 0x11, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 
    0x54, 0x29, 0x2, 0x88, 0x13, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x54, 
    0x29, 0x2, 0x8a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8f, 0x5, 0x1a, 0xc, 
    0x2, 0x8c, 0x8e, 0x5, 0x48, 0x23, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0x3f, 0x2, 0x2, 0x93, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x98, 0x5, 0x18, 0xb, 0x2, 0x95, 0x97, 0x5, 0x48, 
    0x23, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x7, 0x3f, 0x2, 0x2, 0x9c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x94, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0xa3, 0x7, 0x3c, 0x2, 0x2, 0xa0, 0xa2, 0x5, 0x48, 
    0x23, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa8, 0x5, 0x28, 0x13, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xac, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x5, 
    0x48, 0x23, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb0, 0x7, 0x3c, 0x2, 0x2, 0xb0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb5, 0x7, 0x3c, 0x2, 0x2, 0xb2, 0xb4, 0x5, 0x48, 0x23, 0x2, 0xb3, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x28, 0x13, 
    0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x5, 0x18, 0xb, 0x2, 0xbc, 
    0xbe, 0x5, 0x1a, 0xc, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 
    0x2d, 0x2, 0x2, 0xc0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x2f, 
    0x2, 0x2, 0xc2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x2c, 0x2, 
    0x2, 0xc4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x31, 0x2, 0x2, 
    0xc6, 0x25, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x60, 0x2, 0x2, 0xc8, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xd1, 0x5, 0x2a, 0x14, 0x2, 0xca, 0xd1, 
    0x5, 0x2c, 0x15, 0x2, 0xcb, 0xd1, 0x5, 0x2e, 0x16, 0x2, 0xcc, 0xd1, 
    0x5, 0x30, 0x17, 0x2, 0xcd, 0xd1, 0x5, 0x32, 0x18, 0x2, 0xce, 0xd1, 
    0x5, 0x34, 0x19, 0x2, 0xcf, 0xd1, 0x5, 0x36, 0x1a, 0x2, 0xd0, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x6b, 0x2, 0x2, 
    0xd3, 0xd4, 0x7, 0x70, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x76, 0x2, 0x2, 0xd5, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x75, 0x2, 0x2, 0xd7, 0xd8, 
    0x5, 0x5c, 0x2d, 0x2, 0xd8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 
    0x77, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x5c, 0x2d, 0x2, 0xdb, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xdc, 0xdd, 0x7, 0x68, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x6e, 0x2, 
    0x2, 0xde, 0xdf, 0x7, 0x71, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x63, 0x2, 0x2, 
    0xe0, 0xe1, 0x7, 0x76, 0x2, 0x2, 0xe1, 0x31, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xe3, 0x5, 0x30, 0x17, 0x2, 0xe3, 0xe4, 0x7, 0x38, 0x2, 0x2, 0xe4, 0xe5, 
    0x7, 0x36, 0x2, 0x2, 0xe5, 0x33, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x7, 
    0x75, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x76, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x77, 
    0x2, 0x2, 0xe9, 0xea, 0x7, 0x65, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x76, 0x2, 
    0x2, 0xeb, 0xef, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x5, 0x48, 0x23, 0x2, 
    0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 
    0x7d, 0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x8, 0x19, 
    0x2, 0x2, 0xf5, 0x35, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x67, 0x2, 
    0x2, 0xf7, 0xf8, 0x7, 0x70, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x77, 0x2, 0x2, 
    0xf9, 0xfa, 0x7, 0x6f, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfe, 0x5, 0x2e, 0x16, 0x2, 0xfc, 0xfe, 0x5, 0x2c, 0x15, 0x2, 0xfd, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x5, 0x48, 0x23, 0x2, 0x100, 0xff, 
    0x3, 0x2, 0x2, 0x2, 0x101, 0x104, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 
    0x7, 0x7d, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 
    0x8, 0x1a, 0x3, 0x2, 0x108, 0x37, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x7, 0x7d, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 
    0x8, 0x1b, 0x4, 0x2, 0x10c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x114, 
    0x5, 0x3c, 0x1d, 0x2, 0x10e, 0x114, 0x5, 0x3e, 0x1e, 0x2, 0x10f, 0x114, 
    0x5, 0x40, 0x1f, 0x2, 0x110, 0x114, 0x5, 0x42, 0x20, 0x2, 0x111, 0x114, 
    0x5, 0x44, 0x21, 0x2, 0x112, 0x114, 0x5, 0x46, 0x22, 0x2, 0x113, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x113, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x118, 0x5, 0x40, 0x1f, 0x2, 0x116, 0x118, 0x5, 
    0x3e, 0x1e, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11d, 0x5, 0x66, 
    0x32, 0x2, 0x11a, 0x11c, 0x5, 0x48, 0x23, 0x2, 0x11b, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x50, 
    0x27, 0x2, 0x121, 0x122, 0x5, 0x62, 0x30, 0x2, 0x122, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x124, 0x5, 0x50, 0x27, 0x2, 0x124, 0x125, 0x5, 0x60, 
    0x2f, 0x2, 0x125, 0x41, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 0x5, 0x46, 
    0x22, 0x2, 0x127, 0x129, 0x5, 0x44, 0x21, 0x2, 0x128, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x12b, 0x5, 0x50, 0x27, 0x2, 0x12b, 0x12c, 0x7, 0x30, 0x2, 
    0x2, 0x12c, 0x12d, 0x5, 0x52, 0x28, 0x2, 0x12d, 0x12e, 0x5, 0x60, 0x2f, 
    0x2, 0x12e, 0x12f, 0x5, 0x64, 0x31, 0x2, 0x12f, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x130, 0x134, 0x5, 0x66, 0x32, 0x2, 0x131, 0x133, 0x5, 0x48, 0x23, 
    0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x137, 0x3, 0x2, 0x2, 0x2, 0x136, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x5, 0x50, 0x27, 0x2, 0x138, 0x139, 0x7, 0x30, 0x2, 
    0x2, 0x139, 0x13a, 0x5, 0x52, 0x28, 0x2, 0x13a, 0x13b, 0x5, 0x62, 0x30, 
    0x2, 0x13b, 0x13c, 0x5, 0x64, 0x31, 0x2, 0x13c, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x140, 0x5, 0x4a, 0x24, 0x2, 0x13e, 0x140, 0x9, 0x2, 0x2, 
    0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x8, 0x23, 0x5, 
    0x2, 0x142, 0x49, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x9, 0x3, 0x2, 0x2, 
    0x144, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x9, 0x4, 0x2, 0x2, 0x149, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x9, 0x5, 0x2, 0x2, 0x14b, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x14c, 0x150, 0x5, 0x4c, 0x25, 0x2, 0x14d, 0x14f, 
    0x5, 0x4e, 0x26, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x51, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x155, 0x5, 0x4e, 0x26, 0x2, 0x154, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x158, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x163, 0x9, 0x6, 
    0x2, 0x2, 0x15a, 0x15e, 0x5, 0x50, 0x27, 0x2, 0x15b, 0x15d, 0x9, 0x6, 
    0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x55, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x168, 0x9, 0x7, 0x2, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0x56, 0x2a, 0x2, 
    0x16d, 0x16e, 0x5, 0x4e, 0x26, 0x2, 0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x170, 0x173, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x172, 0x59, 0x3, 0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x176, 0xb, 0x2, 0x2, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x179, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x177, 
    0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 
    0x3, 0x2, 0x2, 0x2, 0x17a, 0x185, 0x7, 0x3a, 0x2, 0x2, 0x17b, 0x17c, 
    0x7, 0x33, 0x2, 0x2, 0x17c, 0x185, 0x7, 0x38, 0x2, 0x2, 0x17d, 0x17e, 
    0x7, 0x35, 0x2, 0x2, 0x17e, 0x185, 0x7, 0x34, 0x2, 0x2, 0x17f, 0x180, 
    0x7, 0x38, 0x2, 0x2, 0x180, 0x185, 0x7, 0x36, 0x2, 0x2, 0x181, 0x182, 
    0x7, 0x33, 0x2, 0x2, 0x182, 0x183, 0x7, 0x34, 0x2, 0x2, 0x183, 0x185, 
    0x7, 0x3a, 0x2, 0x2, 0x184, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x184, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x184, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x184, 0x17f, 
    0x3, 0x2, 0x2, 0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 0x2, 0x185, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x187, 0x7, 0x2e, 0x2, 0x2, 0x187, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x188, 0x18a, 0x9, 0x8, 0x2, 0x2, 0x189, 0x188, 0x3, 
    0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x18b, 0x18d, 0x9, 0x9, 0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x190, 0x9, 0xa, 0x2, 0x2, 0x18f, 0x18e, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x193, 0x9, 0xb, 0x2, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x67, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x195, 0x7, 0x7f, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 
    0x197, 0x8, 0x33, 0x6, 0x2, 0x197, 0x69, 0x3, 0x2, 0x2, 0x2, 0x198, 
    0x19c, 0x7, 0x7f, 0x2, 0x2, 0x199, 0x19b, 0x5, 0x48, 0x23, 0x2, 0x19a, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 
    0x19f, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x1a0, 0x5, 0x6, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x1a2, 0x8, 0x34, 0x6, 0x2, 0x1a2, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1b5, 0x5, 0x54, 0x29, 0x2, 0x1a4, 0x1a8, 0x5, 0x54, 0x29, 0x2, 0x1a5, 
    0x1a7, 0x5, 0x48, 0x23, 0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1af, 0x5, 0x16, 0xa, 0x2, 0x1ac, 
    0x1ae, 0x5, 0x48, 0x23, 0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 
    0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b1, 
    0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x3a, 0x1c, 0x2, 0x1b3, 
    0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1ba, 
    0x7, 0x7f, 0x2, 0x2, 0x1b7, 0x1b9, 0x5, 0x48, 0x23, 0x2, 0x1b8, 0x1b7, 
    0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bd, 
    0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 
    0x5, 0x6, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 
    0x8, 0x36, 0x6, 0x2, 0x1c0, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 
    0x5, 0x54, 0x29, 0x2, 0x1c2, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2, 0x3, 
    0x4, 0x5, 0x75, 0x7e, 0x83, 0x8f, 0x98, 0x9d, 0xa3, 0xa7, 0xac, 0xb5, 
    0xb9, 0xbd, 0xd0, 0xef, 0xfd, 0x102, 0x113, 0x117, 0x11d, 0x128, 0x134, 
    0x13f, 0x146, 0x150, 0x156, 0x15e, 0x163, 0x169, 0x171, 0x177, 0x184, 
    0x189, 0x18c, 0x18f, 0x192, 0x19c, 0x1a8, 0x1af, 0x1b4, 0x1ba, 0x7, 
    0x7, 0x4, 0x2, 0x7, 0x5, 0x2, 0x7, 0x3, 0x2, 0x8, 0x2, 0x2, 0x6, 0x2, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JaiLexer::Initializer JaiLexer::_init;
