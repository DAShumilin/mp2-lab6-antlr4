
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammarParser.
 */
class  mygrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammarParser.
   */
    virtual std::any visitNUMBER(mygrammarParser::NUMBERContext *context) = 0;

    virtual std::any visitLexprR(mygrammarParser::LexprRContext *context) = 0;

    virtual std::any visitNAMEING(mygrammarParser::NAMEINGContext *context) = 0;

    virtual std::any visitExprSUMexpr(mygrammarParser::ExprSUMexprContext *context) = 0;

    virtual std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext *context) = 0;

    virtual std::any visitName_eq_expr_sep(mygrammarParser::Name_eq_expr_sepContext *context) = 0;

    virtual std::any visitPrint_expr_sep(mygrammarParser::Print_expr_sepContext *context) = 0;

    virtual std::any visitOneLineProg(mygrammarParser::OneLineProgContext *context) = 0;

    virtual std::any visitProg_row(mygrammarParser::Prog_rowContext *context) = 0;


};

