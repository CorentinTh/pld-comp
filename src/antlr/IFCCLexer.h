
// Generated from src/antlr/IFCCLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  IFCCLexer : public antlr4::Lexer {
public:
  enum {
    IF = 1, ELSE = 2, WHILE = 3, DO = 4, RETURN = 5, OPEN_PAR = 6, CLOSE_PAR = 7, 
    OPEN_BRACE = 8, CLOSE_BRACE = 9, OPEN_BRACKET = 10, CLOSE_BRACKET = 11, 
    SEMICOLON = 12, COMMA = 13, INT = 14, CHAR = 15, MULT = 16, DIV = 17, 
    PLUS = 18, MIN = 19, MOD = 20, EQ = 21, L_NOT = 22, B_NOT = 23, NEQ = 24, 
    DEQ = 25, GT = 26, LT = 27, GE = 28, LE = 29, B_AND = 30, L_AND = 31, 
    B_OR = 32, L_OR = 33, X_OR = 34, DPLUS = 35, DMIN = 36, MULT_EQ = 37, 
    DIV_EQ = 38, PLUS_EQ = 39, MIN_EQ = 40, CONST = 41, CHAR_LIT = 42, IDENTIFIER = 43, 
    OPERATOR = 44, COMMENT_BLOCK = 45, COMMENT_LINE = 46, DIRECTIVE = 47, 
    WS = 48
  };

  IFCCLexer(antlr4::CharStream *input);
  ~IFCCLexer();

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

