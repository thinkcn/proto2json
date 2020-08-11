
// Generated from Protobuf3.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Protobuf3Visitor.h"


/**
 * This class provides an empty implementation of Protobuf3Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Protobuf3BaseVisitor : public Protobuf3Visitor {
public:

  virtual antlrcpp::Any visitProto(Protobuf3Parser::ProtoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSyntax(Protobuf3Parser::SyntaxContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(Protobuf3Parser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageStatement(Protobuf3Parser::PackageStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOption(Protobuf3Parser::OptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionName(Protobuf3Parser::OptionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionBody(Protobuf3Parser::OptionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionBodyVariable(Protobuf3Parser::OptionBodyVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopLevelDef(Protobuf3Parser::TopLevelDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessage(Protobuf3Parser::MessageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageBody(Protobuf3Parser::MessageBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumDefinition(Protobuf3Parser::EnumDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBody(Protobuf3Parser::EnumBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumField(Protobuf3Parser::EnumFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumValueOption(Protobuf3Parser::EnumValueOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExtend(Protobuf3Parser::ExtendContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitService(Protobuf3Parser::ServiceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpc(Protobuf3Parser::RpcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReserved(Protobuf3Parser::ReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRanges(Protobuf3Parser::RangesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeRule(Protobuf3Parser::RangeRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldNames(Protobuf3Parser::FieldNamesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeRule(Protobuf3Parser::TypeRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldNumber(Protobuf3Parser::FieldNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(Protobuf3Parser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOptions(Protobuf3Parser::FieldOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldOption(Protobuf3Parser::FieldOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneof(Protobuf3Parser::OneofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneofField(Protobuf3Parser::OneofFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapField(Protobuf3Parser::MapFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyType(Protobuf3Parser::KeyTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReservedWord(Protobuf3Parser::ReservedWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFullIdent(Protobuf3Parser::FullIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageName(Protobuf3Parser::MessageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumName(Protobuf3Parser::EnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageOrEnumName(Protobuf3Parser::MessageOrEnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldName(Protobuf3Parser::FieldNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOneofName(Protobuf3Parser::OneofNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapName(Protobuf3Parser::MapNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitServiceName(Protobuf3Parser::ServiceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRpcName(Protobuf3Parser::RpcNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageType(Protobuf3Parser::MessageTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMessageOrEnumType(Protobuf3Parser::MessageOrEnumTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(Protobuf3Parser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(Protobuf3Parser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

