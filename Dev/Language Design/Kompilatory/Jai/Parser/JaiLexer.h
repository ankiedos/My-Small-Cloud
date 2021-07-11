
// Generated from JaiLexer.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"




class  JaiLexer : public antlr4::Lexer {
public:
  enum {
    TERMINATOR = 1, LPAREN = 2, RPAREN = 3, VAR = 4, CONST = 5, SIMPLE = 6, 
    ENUM_ID = 7, STRUCT_ID = 8, ASSIGN = 9, CONST_DECL_OP = 10, VAR_DECL_OP = 11, 
    DECL_OP = 12, PLUS = 13, MINUS = 14, MULT = 15, DIV = 16, POW = 17, 
    TYPE = 18, INT = 19, SIGNED = 20, UNSIGNED = 21, FLOAT = 22, FLOAT64 = 23, 
    STRUCT = 24, ENUM = 25, BLOCK_BEGIN = 26, LITERAL = 27, INTLIT = 28, 
    SIGNEDLIT = 29, UNSIGNEDLIT = 30, FLOATLIT = 31, UNSIGNEDFLOATLIT = 32, 
    SIGNEDFLOATLIT = 33, WS = 34, NL = 35, ID = 36, COMMA = 37, BLOCK_END = 38, 
    STRUCT_END = 39, STRUCT_MEMBER = 40, ENUM_END = 41, ENUM_MEMBER = 42
  };

  enum {
    BLOCK = 1, STRUCT_DECL = 2, ENUM_DECL = 3
  };

  explicit JaiLexer(antlr4::CharStream *input);
  ~JaiLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

