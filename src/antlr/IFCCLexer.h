
// Generated from src/antlr/IFCCLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  IFCCLexer : public antlr4::Lexer {
public:
  enum {
    IF = 1, ELSE = 2, WHILE = 3, DO = 4, RETURN = 5, OPEN_PAR = 6, CLOSE_PAR = 7, 
    OPEN_BRACE = 8, CLOSE_BRACE = 9, OPEN_BRACKET = 10, CLOSE_BRACKET = 11, 
    SEMICOLON = 12, COMMA = 13, INT = 14, CHAR = 15, MULT = 16, DIV = 17, 
    PLUS = 18, MIN = 19, MOD = 20, EQ = 21, L_NOT = 22, NEQ = 23, DEQ = 24, 
    GT = 25, LT = 26, GE = 27, LE = 28, B_AND = 29, L_AND = 30, B_OR = 31, 
    L_OR = 32, DPLUS = 33, DMIN = 34, MULT_EQ = 35, DIV_EQ = 36, PLUS_EQ = 37, 
    MIN_EQ = 38, CONST = 39, IDENTIFIER = 40, OPERATOR = 41, COMMENT = 42, 
    DIRECTIVE = 43, WS = 44
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

