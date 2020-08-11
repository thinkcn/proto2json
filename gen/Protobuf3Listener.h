
// Generated from Protobuf3.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Protobuf3Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Protobuf3Parser.
 */
class  Protobuf3Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProto(Protobuf3Parser::ProtoContext *ctx) = 0;
  virtual void exitProto(Protobuf3Parser::ProtoContext *ctx) = 0;

  virtual void enterSyntax(Protobuf3Parser::SyntaxContext *ctx) = 0;
  virtual void exitSyntax(Protobuf3Parser::SyntaxContext *ctx) = 0;

  virtual void enterImportStatement(Protobuf3Parser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(Protobuf3Parser::ImportStatementContext *ctx) = 0;

  virtual void enterPackageStatement(Protobuf3Parser::PackageStatementContext *ctx) = 0;
  virtual void exitPackageStatement(Protobuf3Parser::PackageStatementContext *ctx) = 0;

  virtual void enterOption(Protobuf3Parser::OptionContext *ctx) = 0;
  virtual void exitOption(Protobuf3Parser::OptionContext *ctx) = 0;

  virtual void enterOptionName(Protobuf3Parser::OptionNameContext *ctx) = 0;
  virtual void exitOptionName(Protobuf3Parser::OptionNameContext *ctx) = 0;

  virtual void enterOptionBody(Protobuf3Parser::OptionBodyContext *ctx) = 0;
  virtual void exitOptionBody(Protobuf3Parser::OptionBodyContext *ctx) = 0;

  virtual void enterOptionBodyVariable(Protobuf3Parser::OptionBodyVariableContext *ctx) = 0;
  virtual void exitOptionBodyVariable(Protobuf3Parser::OptionBodyVariableContext *ctx) = 0;

  virtual void enterTopLevelDef(Protobuf3Parser::TopLevelDefContext *ctx) = 0;
  virtual void exitTopLevelDef(Protobuf3Parser::TopLevelDefContext *ctx) = 0;

  virtual void enterMessage(Protobuf3Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(Protobuf3Parser::MessageContext *ctx) = 0;

  virtual void enterMessageBody(Protobuf3Parser::MessageBodyContext *ctx) = 0;
  virtual void exitMessageBody(Protobuf3Parser::MessageBodyContext *ctx) = 0;

  virtual void enterEnumDefinition(Protobuf3Parser::EnumDefinitionContext *ctx) = 0;
  virtual void exitEnumDefinition(Protobuf3Parser::EnumDefinitionContext *ctx) = 0;

  virtual void enterEnumBody(Protobuf3Parser::EnumBodyContext *ctx) = 0;
  virtual void exitEnumBody(Protobuf3Parser::EnumBodyContext *ctx) = 0;

  virtual void enterEnumField(Protobuf3Parser::EnumFieldContext *ctx) = 0;
  virtual void exitEnumField(Protobuf3Parser::EnumFieldContext *ctx) = 0;

  virtual void enterEnumValueOption(Protobuf3Parser::EnumValueOptionContext *ctx) = 0;
  virtual void exitEnumValueOption(Protobuf3Parser::EnumValueOptionContext *ctx) = 0;

  virtual void enterExtend(Protobuf3Parser::ExtendContext *ctx) = 0;
  virtual void exitExtend(Protobuf3Parser::ExtendContext *ctx) = 0;

  virtual void enterService(Protobuf3Parser::ServiceContext *ctx) = 0;
  virtual void exitService(Protobuf3Parser::ServiceContext *ctx) = 0;

  virtual void enterRpc(Protobuf3Parser::RpcContext *ctx) = 0;
  virtual void exitRpc(Protobuf3Parser::RpcContext *ctx) = 0;

  virtual void enterReserved(Protobuf3Parser::ReservedContext *ctx) = 0;
  virtual void exitReserved(Protobuf3Parser::ReservedContext *ctx) = 0;

  virtual void enterRanges(Protobuf3Parser::RangesContext *ctx) = 0;
  virtual void exitRanges(Protobuf3Parser::RangesContext *ctx) = 0;

  virtual void enterRangeRule(Protobuf3Parser::RangeRuleContext *ctx) = 0;
  virtual void exitRangeRule(Protobuf3Parser::RangeRuleContext *ctx) = 0;

  virtual void enterFieldNames(Protobuf3Parser::FieldNamesContext *ctx) = 0;
  virtual void exitFieldNames(Protobuf3Parser::FieldNamesContext *ctx) = 0;

  virtual void enterTypeRule(Protobuf3Parser::TypeRuleContext *ctx) = 0;
  virtual void exitTypeRule(Protobuf3Parser::TypeRuleContext *ctx) = 0;

  virtual void enterFieldNumber(Protobuf3Parser::FieldNumberContext *ctx) = 0;
  virtual void exitFieldNumber(Protobuf3Parser::FieldNumberContext *ctx) = 0;

  virtual void enterField(Protobuf3Parser::FieldContext *ctx) = 0;
  virtual void exitField(Protobuf3Parser::FieldContext *ctx) = 0;

  virtual void enterFieldOptions(Protobuf3Parser::FieldOptionsContext *ctx) = 0;
  virtual void exitFieldOptions(Protobuf3Parser::FieldOptionsContext *ctx) = 0;

  virtual void enterFieldOption(Protobuf3Parser::FieldOptionContext *ctx) = 0;
  virtual void exitFieldOption(Protobuf3Parser::FieldOptionContext *ctx) = 0;

  virtual void enterOneof(Protobuf3Parser::OneofContext *ctx) = 0;
  virtual void exitOneof(Protobuf3Parser::OneofContext *ctx) = 0;

  virtual void enterOneofField(Protobuf3Parser::OneofFieldContext *ctx) = 0;
  virtual void exitOneofField(Protobuf3Parser::OneofFieldContext *ctx) = 0;

  virtual void enterMapField(Protobuf3Parser::MapFieldContext *ctx) = 0;
  virtual void exitMapField(Protobuf3Parser::MapFieldContext *ctx) = 0;

  virtual void enterKeyType(Protobuf3Parser::KeyTypeContext *ctx) = 0;
  virtual void exitKeyType(Protobuf3Parser::KeyTypeContext *ctx) = 0;

  virtual void enterReservedWord(Protobuf3Parser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(Protobuf3Parser::ReservedWordContext *ctx) = 0;

  virtual void enterFullIdent(Protobuf3Parser::FullIdentContext *ctx) = 0;
  virtual void exitFullIdent(Protobuf3Parser::FullIdentContext *ctx) = 0;

  virtual void enterMessageName(Protobuf3Parser::MessageNameContext *ctx) = 0;
  virtual void exitMessageName(Protobuf3Parser::MessageNameContext *ctx) = 0;

  virtual void enterEnumName(Protobuf3Parser::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(Protobuf3Parser::EnumNameContext *ctx) = 0;

  virtual void enterMessageOrEnumName(Protobuf3Parser::MessageOrEnumNameContext *ctx) = 0;
  virtual void exitMessageOrEnumName(Protobuf3Parser::MessageOrEnumNameContext *ctx) = 0;

  virtual void enterFieldName(Protobuf3Parser::FieldNameContext *ctx) = 0;
  virtual void exitFieldName(Protobuf3Parser::FieldNameContext *ctx) = 0;

  virtual void enterOneofName(Protobuf3Parser::OneofNameContext *ctx) = 0;
  virtual void exitOneofName(Protobuf3Parser::OneofNameContext *ctx) = 0;

  virtual void enterMapName(Protobuf3Parser::MapNameContext *ctx) = 0;
  virtual void exitMapName(Protobuf3Parser::MapNameContext *ctx) = 0;

  virtual void enterServiceName(Protobuf3Parser::ServiceNameContext *ctx) = 0;
  virtual void exitServiceName(Protobuf3Parser::ServiceNameContext *ctx) = 0;

  virtual void enterRpcName(Protobuf3Parser::RpcNameContext *ctx) = 0;
  virtual void exitRpcName(Protobuf3Parser::RpcNameContext *ctx) = 0;

  virtual void enterMessageType(Protobuf3Parser::MessageTypeContext *ctx) = 0;
  virtual void exitMessageType(Protobuf3Parser::MessageTypeContext *ctx) = 0;

  virtual void enterMessageOrEnumType(Protobuf3Parser::MessageOrEnumTypeContext *ctx) = 0;
  virtual void exitMessageOrEnumType(Protobuf3Parser::MessageOrEnumTypeContext *ctx) = 0;

  virtual void enterEmptyStatement(Protobuf3Parser::EmptyStatementContext *ctx) = 0;
  virtual void exitEmptyStatement(Protobuf3Parser::EmptyStatementContext *ctx) = 0;

  virtual void enterConstant(Protobuf3Parser::ConstantContext *ctx) = 0;
  virtual void exitConstant(Protobuf3Parser::ConstantContext *ctx) = 0;


};

