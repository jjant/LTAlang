#ifndef __STRUCTURES_H
#define __STRUCTURES_H

#include "nodes.h"

NodeString * newNodeString(const char * constant);
NodeNumber * newNodeNumber(const char * constant);
NodeIdentifier * newNodeIdentifier(const char * name);
NodeThis * newNodeThis();
NodeKeyValue * newNodeKeyValue(const char * key, const Node * value);
NodeList * newKeyValueList(const NodeKeyValue * node);
NodeList * addKeyValue(const NodeList * list, const NodeKeyValue * node);
NodeObjectDeclaration * newNodeObjectDeclaration(const NodeList * body);
NodeFunctionCall * newNodeFunctionCall(const Node * caller, const NodeList * args);
NodeOperation * newNodeOperation(const Node * first, const Node * second, const char * operator);
NodeTernaryOperation * newNodeTernaryOperation(const Node * first, const Node * second, const Node * third);
NodeParameter * newNodeParameter(const char * name);
NodeList * newParameterList(const NodeParameter * node);
NodeList * addParameter(const NodeList * list, const Node * node);
NodeArrayDeclaration * newNodeArrayDeclaration(const Node * element);
NodeList * newArrayElementList(const NodeArrayDeclaration * node);
NodeList * addArrayElement(const NodeList * list, const Node * node);
NodeObjectAccessor * newNodeObjectAccessor(const Node * left, const NodeIdentifier * right);
NodeIf * newNodeIf(const Node * condition, const Node * then, const Node * elseObj);
NodeWhile * newNodeWhile(const Node * condition, const Node * block);
NodeList * newInstructionsList(const Node * node);
NodeList * addInstructions(const NodeList * list, const Node * node);
NodeReturn * newNodeReturn(const Node * expression);
NodeLamdaDeclaration * newNodeLamdaDeclaration(const int async, const NodeList * parameters, const NodeList * block);

#endif
