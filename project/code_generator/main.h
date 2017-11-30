#ifndef __MAIN_H
#define __MAIN_H

#include "structures.h"

char * handleNodeString(Node * node);
char * handleNodeNumber(Node * node);
char * handleNodeIdentifier(Node * node);
char * handleNodeThis(Node * node);
char * handleNodeObjectDeclaration(Node * node);
char * handleFunctionCall(Node * node);
char * handleNodeOperation(Node * node);
char * handleNodeTernaryOperation(Node * node);
char * handleNodeParameter(Node * node);
char * handleNodeObjectAccessor(Node * node);
char * handleNodeIf(Node * node);
char * handleNodeWhile(Node * node);
char * handleNodeReturn(Node * node);
char * handleNodeLamdaDeclaration(Node * node);
char * handleNodeKeyValuePair(Node * node);
char * handleNodeInstruction(Node * node);
char * handleNodeArrayDeclaration(Node * node);
char * handleNodeListArrayElements(Node * node);
char * handleNodeBlock(Node * node);
char * handleNodeIgnore(Node * node);
char * handleNodeArrayWrapDeclaration(Node * node);
char * handleNodePlaceholder(Node * node);
char * handleNodeListArguments(Node * node);
char * handleNodeArrayElement(Node * node);
char * handleNodeArrayDeclarationList(Node * node);
char * generate_code(Node * node);

#endif
