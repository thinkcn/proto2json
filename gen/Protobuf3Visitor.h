
// Generated from Protobuf3.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "Protobuf3Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Protobuf3Parser.
 */
class  Protobuf3Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Protobuf3Parser.
   */
    virtual antlrcpp::Any visitProto(Protobuf3Parser::ProtoContext *context) = 0;

    virtual antlrcpp::Any visitSyntax(Protobuf3Parser::SyntaxContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(Protobuf3Parser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitPackageStatement(Protobuf3Parser::PackageStatementContext *context) = 0;

    virtual antlrcpp::Any visitOption(Protobuf3Parser::OptionContext *context) = 0;

    virtual antlrcpp::Any visitOptionName(Protobuf3Parser::OptionNameContext *context) = 0;

    virtual antlrcpp::Any visitOptionBody(Protobuf3Parser::OptionBodyContext *context) = 0;

    virtual antlrcpp::Any visitOptionBodyVariable(Protobuf3Parser::OptionBodyVariableContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelDef(Protobuf3Parser::TopLevelDefContext *context) = 0;

    virtual antlrcpp::Any visitMessage(Protobuf3Parser::MessageContext *context) = 0;

    virtual antlrcpp::Any visitMessageBody(Protobuf3Parser::MessageBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumDefinition(Protobuf3Parser::EnumDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(Protobuf3Parser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumField(Protobuf3Parser::EnumFieldContext *context) = 0;

    virtual antlrcpp::Any visitEnumValueOption(Protobuf3Parser::EnumValueOptionContext *context) = 0;

    virtual antlrcpp::Any visitExtend(Protobuf3Parser::ExtendContext *context) = 0;

    virtual antlrcpp::Any visitService(Protobuf3Parser::ServiceContext *context) = 0;

    virtual antlrcpp::Any visitRpc(Protobuf3Parser::RpcContext *context) = 0;

    virtual antlrcpp::Any visitReserved(Protobuf3Parser::ReservedContext *context) = 0;

    virtual antlrcpp::Any visitRanges(Protobuf3Parser::RangesContext *context) = 0;

    virtual antlrcpp::Any visitRangeRule(Protobuf3Parser::RangeRuleContext *context) = 0;

    virtual antlrcpp::Any visitFieldNames(Protobuf3Parser::FieldNamesContext *context) = 0;

    virtual antlrcpp::Any visitTypeRule(Protobuf3Parser::TypeRuleContext *context) = 0;

    virtual antlrcpp::Any visitFieldNumber(Protobuf3Parser::FieldNumberContext *context) = 0;

    virtual antlrcpp::Any visitField(Protobuf3Parser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitFieldOptions(Protobuf3Parser::FieldOptionsContext *context) = 0;

    virtual antlrcpp::Any visitFieldOption(Protobuf3Parser::FieldOptionContext *context) = 0;

    virtual antlrcpp::Any visitOneof(Protobuf3Parser::OneofContext *context) = 0;

    virtual antlrcpp::Any visitOneofField(Protobuf3Parser::OneofFieldContext *context) = 0;

    virtual antlrcpp::Any visitMapField(Protobuf3Parser::MapFieldContext *context) = 0;

    virtual antlrcpp::Any visitKeyType(Protobuf3Parser::KeyTypeContext *context) = 0;

    virtual antlrcpp::Any visitReservedWord(Protobuf3Parser::ReservedWordContext *context) = 0;

    virtual antlrcpp::Any visitFullIdent(Protobuf3Parser::FullIdentContext *context) = 0;

    virtual antlrcpp::Any visitMessageName(Protobuf3Parser::MessageNameContext *context) = 0;

    virtual antlrcpp::Any visitEnumName(Protobuf3Parser::EnumNameContext *context) = 0;

    virtual antlrcpp::Any visitMessageOrEnumName(Protobuf3Parser::MessageOrEnumNameContext *context) = 0;

    virtual antlrcpp::Any visitFieldName(Protobuf3Parser::FieldNameContext *context) = 0;

    virtual antlrcpp::Any visitOneofName(Protobuf3Parser::OneofNameContext *context) = 0;

    virtual antlrcpp::Any visitMapName(Protobuf3Parser::MapNameContext *context) = 0;

    virtual antlrcpp::Any visitServiceName(Protobuf3Parser::ServiceNameContext *context) = 0;

    virtual antlrcpp::Any visitRpcName(Protobuf3Parser::RpcNameContext *context) = 0;

    virtual antlrcpp::Any visitMessageType(Protobuf3Parser::MessageTypeContext *context) = 0;

    virtual antlrcpp::Any visitMessageOrEnumType(Protobuf3Parser::MessageOrEnumTypeContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(Protobuf3Parser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitConstant(Protobuf3Parser::ConstantContext *context) = 0;


};

