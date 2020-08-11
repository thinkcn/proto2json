
// Generated from Protobuf3.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  Protobuf3Parser : public antlr4::Parser {
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

  enum {
    RuleProto = 0, RuleSyntax = 1, RuleImportStatement = 2, RulePackageStatement = 3, 
    RuleOption = 4, RuleOptionName = 5, RuleOptionBody = 6, RuleOptionBodyVariable = 7, 
    RuleTopLevelDef = 8, RuleMessage = 9, RuleMessageBody = 10, RuleEnumDefinition = 11, 
    RuleEnumBody = 12, RuleEnumField = 13, RuleEnumValueOption = 14, RuleExtend = 15, 
    RuleService = 16, RuleRpc = 17, RuleReserved = 18, RuleRanges = 19, 
    RuleRangeRule = 20, RuleFieldNames = 21, RuleTypeRule = 22, RuleFieldNumber = 23, 
    RuleField = 24, RuleFieldOptions = 25, RuleFieldOption = 26, RuleOneof = 27, 
    RuleOneofField = 28, RuleMapField = 29, RuleKeyType = 30, RuleReservedWord = 31, 
    RuleFullIdent = 32, RuleMessageName = 33, RuleEnumName = 34, RuleMessageOrEnumName = 35, 
    RuleFieldName = 36, RuleOneofName = 37, RuleMapName = 38, RuleServiceName = 39, 
    RuleRpcName = 40, RuleMessageType = 41, RuleMessageOrEnumType = 42, 
    RuleEmptyStatement = 43, RuleConstant = 44
  };

  Protobuf3Parser(antlr4::TokenStream *input);
  ~Protobuf3Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProtoContext;
  class SyntaxContext;
  class ImportStatementContext;
  class PackageStatementContext;
  class OptionContext;
  class OptionNameContext;
  class OptionBodyContext;
  class OptionBodyVariableContext;
  class TopLevelDefContext;
  class MessageContext;
  class MessageBodyContext;
  class EnumDefinitionContext;
  class EnumBodyContext;
  class EnumFieldContext;
  class EnumValueOptionContext;
  class ExtendContext;
  class ServiceContext;
  class RpcContext;
  class ReservedContext;
  class RangesContext;
  class RangeRuleContext;
  class FieldNamesContext;
  class TypeRuleContext;
  class FieldNumberContext;
  class FieldContext;
  class FieldOptionsContext;
  class FieldOptionContext;
  class OneofContext;
  class OneofFieldContext;
  class MapFieldContext;
  class KeyTypeContext;
  class ReservedWordContext;
  class FullIdentContext;
  class MessageNameContext;
  class EnumNameContext;
  class MessageOrEnumNameContext;
  class FieldNameContext;
  class OneofNameContext;
  class MapNameContext;
  class ServiceNameContext;
  class RpcNameContext;
  class MessageTypeContext;
  class MessageOrEnumTypeContext;
  class EmptyStatementContext;
  class ConstantContext; 

  class  ProtoContext : public antlr4::ParserRuleContext {
  public:
    ProtoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SyntaxContext *syntax();
    antlr4::tree::TerminalNode *EOF();
    std::vector<ImportStatementContext *> importStatement();
    ImportStatementContext* importStatement(size_t i);
    std::vector<PackageStatementContext *> packageStatement();
    PackageStatementContext* packageStatement(size_t i);
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<TopLevelDefContext *> topLevelDef();
    TopLevelDefContext* topLevelDef(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProtoContext* proto();

  class  SyntaxContext : public antlr4::ParserRuleContext {
  public:
    SyntaxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SyntaxContext* syntax();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StrLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  PackageStatementContext : public antlr4::ParserRuleContext {
  public:
    PackageStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdentContext *fullIdent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageStatementContext* packageStatement();

  class  OptionContext : public antlr4::ParserRuleContext {
  public:
    OptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    ConstantContext *constant();
    OptionBodyContext *optionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionContext* option();

  class  OptionNameContext : public antlr4::ParserRuleContext {
  public:
    OptionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    FullIdentContext *fullIdent();
    std::vector<ReservedWordContext *> reservedWord();
    ReservedWordContext* reservedWord(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionNameContext* optionName();

  class  OptionBodyContext : public antlr4::ParserRuleContext {
  public:
    OptionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OptionBodyVariableContext *> optionBodyVariable();
    OptionBodyVariableContext* optionBodyVariable(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionBodyContext* optionBody();

  class  OptionBodyVariableContext : public antlr4::ParserRuleContext {
  public:
    OptionBodyVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionBodyVariableContext* optionBodyVariable();

  class  TopLevelDefContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageContext *message();
    EnumDefinitionContext *enumDefinition();
    ExtendContext *extend();
    ServiceContext *service();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopLevelDefContext* topLevelDef();

  class  MessageContext : public antlr4::ParserRuleContext {
  public:
    MessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageNameContext *messageName();
    MessageBodyContext *messageBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageContext* message();

  class  MessageBodyContext : public antlr4::ParserRuleContext {
  public:
    MessageBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<EnumDefinitionContext *> enumDefinition();
    EnumDefinitionContext* enumDefinition(size_t i);
    std::vector<MessageContext *> message();
    MessageContext* message(size_t i);
    std::vector<ExtendContext *> extend();
    ExtendContext* extend(size_t i);
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<OneofContext *> oneof();
    OneofContext* oneof(size_t i);
    std::vector<MapFieldContext *> mapField();
    MapFieldContext* mapField(size_t i);
    std::vector<ReservedContext *> reserved();
    ReservedContext* reserved(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageBodyContext* messageBody();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumNameContext *enumName();
    EnumBodyContext *enumBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<EnumFieldContext *> enumField();
    EnumFieldContext* enumField(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumFieldContext : public antlr4::ParserRuleContext {
  public:
    EnumFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();
    antlr4::tree::TerminalNode *IntLit();
    std::vector<EnumValueOptionContext *> enumValueOption();
    EnumValueOptionContext* enumValueOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumFieldContext* enumField();

  class  EnumValueOptionContext : public antlr4::ParserRuleContext {
  public:
    EnumValueOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValueOptionContext* enumValueOption();

  class  ExtendContext : public antlr4::ParserRuleContext {
  public:
    ExtendContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageTypeContext *messageType();
    FieldContext *field();
    EmptyStatementContext *emptyStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtendContext* extend();

  class  ServiceContext : public antlr4::ParserRuleContext {
  public:
    ServiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ServiceNameContext *serviceName();
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<RpcContext *> rpc();
    RpcContext* rpc(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServiceContext* service();

  class  RpcContext : public antlr4::ParserRuleContext {
  public:
    RpcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RpcNameContext *rpcName();
    std::vector<MessageTypeContext *> messageType();
    MessageTypeContext* messageType(size_t i);
    std::vector<OptionContext *> option();
    OptionContext* option(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpcContext* rpc();

  class  ReservedContext : public antlr4::ParserRuleContext {
  public:
    ReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangesContext *ranges();
    FieldNamesContext *fieldNames();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReservedContext* reserved();

  class  RangesContext : public antlr4::ParserRuleContext {
  public:
    RangesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RangeRuleContext *> rangeRule();
    RangeRuleContext* rangeRule(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangesContext* ranges();

  class  RangeRuleContext : public antlr4::ParserRuleContext {
  public:
    RangeRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IntLit();
    antlr4::tree::TerminalNode* IntLit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeRuleContext* rangeRule();

  class  FieldNamesContext : public antlr4::ParserRuleContext {
  public:
    FieldNamesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StrLit();
    antlr4::tree::TerminalNode* StrLit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldNamesContext* fieldNames();

  class  TypeRuleContext : public antlr4::ParserRuleContext {
  public:
    TypeRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageOrEnumTypeContext *messageOrEnumType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeRuleContext* typeRule();

  class  FieldNumberContext : public antlr4::ParserRuleContext {
  public:
    FieldNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldNumberContext* fieldNumber();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRuleContext *typeRule();
    FieldNameContext *fieldName();
    FieldNumberContext *fieldNumber();
    FieldOptionsContext *fieldOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  FieldOptionsContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldOptionContext *> fieldOption();
    FieldOptionContext* fieldOption(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOptionsContext* fieldOptions();

  class  FieldOptionContext : public antlr4::ParserRuleContext {
  public:
    FieldOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionNameContext *optionName();
    ConstantContext *constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldOptionContext* fieldOption();

  class  OneofContext : public antlr4::ParserRuleContext {
  public:
    OneofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OneofNameContext *oneofName();
    std::vector<OneofFieldContext *> oneofField();
    OneofFieldContext* oneofField(size_t i);
    std::vector<EmptyStatementContext *> emptyStatement();
    EmptyStatementContext* emptyStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneofContext* oneof();

  class  OneofFieldContext : public antlr4::ParserRuleContext {
  public:
    OneofFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeRuleContext *typeRule();
    FieldNameContext *fieldName();
    FieldNumberContext *fieldNumber();
    FieldOptionsContext *fieldOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneofFieldContext* oneofField();

  class  MapFieldContext : public antlr4::ParserRuleContext {
  public:
    MapFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeyTypeContext *keyType();
    TypeRuleContext *typeRule();
    MapNameContext *mapName();
    FieldNumberContext *fieldNumber();
    FieldOptionsContext *fieldOptions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapFieldContext* mapField();

  class  KeyTypeContext : public antlr4::ParserRuleContext {
  public:
    KeyTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyTypeContext* keyType();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTEND();
    antlr4::tree::TerminalNode *MESSAGE();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *PACKAGE();
    antlr4::tree::TerminalNode *RPC();
    antlr4::tree::TerminalNode *SERVICE();
    antlr4::tree::TerminalNode *STREAM();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *SYNTAX();
    antlr4::tree::TerminalNode *WEAK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReservedWordContext* reservedWord();

  class  FullIdentContext : public antlr4::ParserRuleContext {
  public:
    FullIdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullIdentContext* fullIdent();

  class  MessageNameContext : public antlr4::ParserRuleContext {
  public:
    MessageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageNameContext* messageName();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumNameContext* enumName();

  class  MessageOrEnumNameContext : public antlr4::ParserRuleContext {
  public:
    MessageOrEnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageOrEnumNameContext* messageOrEnumName();

  class  FieldNameContext : public antlr4::ParserRuleContext {
  public:
    FieldNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();
    ReservedWordContext *reservedWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldNameContext* fieldName();

  class  OneofNameContext : public antlr4::ParserRuleContext {
  public:
    OneofNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneofNameContext* oneofName();

  class  MapNameContext : public antlr4::ParserRuleContext {
  public:
    MapNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapNameContext* mapName();

  class  ServiceNameContext : public antlr4::ParserRuleContext {
  public:
    ServiceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ServiceNameContext* serviceName();

  class  RpcNameContext : public antlr4::ParserRuleContext {
  public:
    RpcNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ident();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RpcNameContext* rpcName();

  class  MessageTypeContext : public antlr4::ParserRuleContext {
  public:
    MessageTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageNameContext *messageName();
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageTypeContext* messageType();

  class  MessageOrEnumTypeContext : public antlr4::ParserRuleContext {
  public:
    MessageOrEnumTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MessageOrEnumNameContext *messageOrEnumName();
    std::vector<antlr4::tree::TerminalNode *> Ident();
    antlr4::tree::TerminalNode* Ident(size_t i);
    std::vector<ReservedWordContext *> reservedWord();
    ReservedWordContext* reservedWord(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MessageOrEnumTypeContext* messageOrEnumType();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullIdentContext *fullIdent();
    antlr4::tree::TerminalNode *IntLit();
    antlr4::tree::TerminalNode *FloatLit();
    antlr4::tree::TerminalNode *StrLit();
    antlr4::tree::TerminalNode *BoolLit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

