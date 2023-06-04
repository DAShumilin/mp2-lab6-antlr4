#include "gtest/gtest.h"

#include <string>
#include <sstream>
#include "antlr4-runtime.h"
#include "mygrammarBaseVisitor.h"
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarVisitor.h"
#include "MyVisitor.h"

int main(int argc, char** argv) {
	std::string tmp = "a=7;b=5*a*a;<<b;";
	std::stringstream stream(tmp);
}