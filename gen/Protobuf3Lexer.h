
// Generated from Protobuf3.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Protobuf3Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, BOOL = 2, BYTES = 3, DOUBLE = 4, ENUM = 5, EXTEND = 6, FIXED32 = 7, 
    FIXED64 = 8, FLOAT = 9, IMPORT = 10, INT32 = 11, INT64 = 12, MAP = 13, 
    MESSAGE = 14, ONEOF = 15, OPTION = 16, PACKAGE = 17, PROTO3_DOUBLE = 18, 
    PROTO3_SINGLE = 19, PUBLIC = 20, REPEATED = 21, RESERVED = 22, RETURNS = 23, 
    RPC = 24, SERVICE = 25, SFIXED32 = 26, SFIXED64 = 27, SINT32 = 28, SINT64 = 29, 
    STREAM = 30, STRING = 31, SYNTAX = 32, TO = 33, UINT32 = 34, UINT64 = 35, 
    WEAK = 36, Ident = 37, IntLit = 38, FloatLit = 39, BoolLit = 40, StrLit = 41, 
    Quote = 42, LPAREN = 43, RPAREN = 44, LBRACE = 45, RBRACE = 46, LBRACK = 47, 
    RBRACK = 48, LCHEVR = 49, RCHEVR = 50, SEMI = 51, COMMA = 52, DOT = 53, 
    MINUS = 54, PLUS = 55, ASSIGN = 56, WS = 57, COMMENT = 58, LINE_COMMENT = 59
  };

  Protobuf3Lexer(antlr4::CharStream *input);
  ~Protobuf3Lexer();

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

