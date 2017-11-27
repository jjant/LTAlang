#include "structures.h"

#define NULL 0
#define TRUE 1
#define FALSE 0

// NODE TYPES
#define NODE_CONSTANT "CONSTANT"
#define NODE_IDENTIFIER "IDENTIFIER"
#define NODE_THIS "THIS"
#define NODE_OBJECT_DECLARATION "OBJECT DECLARATION"
#define NODE_FUNCTION_CALL "FUNCTION CALL"
#define NODE_OPERATION "OPERATION"
#define NODE_TERNARY_OPERATION "TERNARY OPERATION"
#define NODE_PARAMETER "PARAMETER"
#define NODE_OBJECT_ACCESSOR "OBJECT ACCESSOR"
#define NODE_IF "IF"
#define NODE_WHILE "WHILE"
#define NODE_RETURN "RETURN"

// NODELIST TYPES
#define NODE_KEY_VALUE_PAIR "KEY-VALUE PAIR"
#define NODE_INSTRUCTION "INSTRUCTION"

// CONSTANT TYPES
#define TYPE_STRING "STRING"
#define TYPE_NUM "NUMBER"

NodeConstant * newNodeConstant(const char * constant, const char * constant_type) {
  NodeConstant * node = malloc(sizeof(NodeConstant));
  node->type = NODE_CONSTANT;
  node->constant_type = TYPE_STRING;
  node->constant = constant;
  return node;
}

NodeIdentifier * newNodeIdentifier(const char * name) {
  NodeIdentifier * node = malloc(sizeof(NodeIdentifier));
  node->type = NODE_IDENTIFIER;
  node->name = name;
  return node;
}

NodeThis * newNodeThis() {
  NodeThis * node = malloc(sizeof(NodeThis));
  node->type = NODE_THIS;
  return node;
}

NodeKeyValue * newNodeKeyValue(const char * key, const Node * value) {
  NodeKeyValue * node = malloc(sizeof(NodeKeyValue));
  node->type = NODE_IDENTIFIER;
  node->key = key;
  node->value = value;
  return node;
}

NodeList * newKeyValueList(const NodeKeyValue * node) {
  NodeList * list = malloc(sizeof(NodeList));
  NodeList->type = NODE_KEY_VALUE_PAIR;
  NodeList->node = node;
  NodeList-> next = NULL;

  return list;
}

NodeList * addKeyValue(const NodeList * list, const NodeKeyValue * node) {
  NodeList * cnode = list;
  while (cnode->next != NULL) cnode = cnode->next;
  cnode->next = newKeyValuePairList(node)
  return list;
}

NodeObjectDeclaration * newNodeObjectDeclaration(const NodeList * body) {
  NodeObjectDeclaration * node = malloc(sizeof(NodeObjectDeclaration));
  node->type = NODE_OBJECT_DECLARATION;
  node->body = body;
  return node;
}

NodeFunctionCall * newNodeFunctionCall(const Node * caller, const NodeList * args) {
  NodeFunctionCall * node = malloc(sizeof(NodeFunctionCall));
  node->type = NODE_FUNCTION_CALL;
  node->caller = caller;
  node->args = args;
  return node;
}

NodeOperation * newNodeOperation(const Node * first, const Node * second, const char * operator) {
  NodeOperation * node = malloc(sizeof(NodeOperation));
  node->type = NODE_OPERATION;
  node->first = first;
  node->second = second;
  node->operator = operator;
  return node;
}

NodeTernaryOperation * newNodeTernaryOperation(const Node * first, const Node * second, const Node * third) {
  NodeTernaryOperation * node = malloc(sizeof(NodeTernaryOperation));
  node->type = NODE_TERNARY_OPERATION;
  node->first = first;
  node->second = second;
  node->third = second;
  return node;
}

NodeParameter * newNodeParameter(const char * name) {
  NodeParameter * node = malloc(sizeof(NodeParameter));
  node->type = NODE_PARAMETER;
  node->name = key;
  return node;
}

NodeList * newParameterList(const NodeParameter * node) {
  NodeList * list = malloc(sizeof(NodeList));
  NodeList->type = NODE_PARAMETER;
  NodeList->node = node;
  NodeList-> next = NULL;
  return list;
}

NodeList * addParameter(const NodeList * list, const Node * node) {
  NodeList * cnode = list;
  while (cnode->next != NULL) cnode = cnode->next;
  cnode->next = newParameterList(node)
  return list;
}

NodeArrayDeclaration * newNodeArrayDeclaration(const Node * element) {
  NodeArrayDeclaration * node = malloc(sizeof(NodeArrayDeclaration));
  node->type = NODE_PARAMETER;
  node->element = element;
  return node;
}

NodeList * newArrayElementList(const NodeArrayDeclaration * node) {
  NodeList * list = malloc(sizeof(NodeList));
  NodeList->type = NODE_ARRAY_DECLARATION;
  NodeList->node = node;
  NodeList-> next = NULL;
  return list;
}

NodeList * addArrayElement(const NodeList * list, const Node * node) {
  NodeList * cnode = list;
  while (cnode->next != NULL) cnode = cnode->next;
  cnode->next = newNodeArrayDeclaration(node)
  return list;
}

NodeObjectAccessor * newNodeObjectAccessor(const Node * left, const NodeIdentifier * right) {
  NodeObjectAccessor * node = malloc(sizeof(NodeObjectAccessor));
  node->type = NODE_OBJECT_ACCESSOR;
  node->left = left;
  node->right = right;
  return node;
}

NodeIf * newNodeIf(const Node * condition, const Node * then, const Node * elseObj) {
  NodeIf * node = malloc(sizeof(NodeIf));
  node->type = NODE_IF;
  node->condition = condition;
  node->then = then;
  node->else = elsObj;
}

NodeWhile * newNodeWhile(const Node * condition, const Node * block) {
  NodeWhile * node = malloc(sizeof(NodeWhile));
  node->type = NODE_WHILE;
  node->condition = condition;
  node->block = block;
}

NodeList * newInstructionsList(const Node * node) {
  NodeList * list = malloc(sizeof(NodeList));
  NodeList->type = NODE_INSTRUCTION;
  NodeList->node = node;
  NodeList-> next = NULL;
  return list;
}

NodeList * addInstructions(const NodeList * list, const Node * node) {
  NodeList * cnode = list;
  while (cnode->next != NULL) cnode = cnode->next;
  cnode->next = node;
  return list;
}

NodeReturn * newNodeReturn(const Node * expression) {
  NodeReturn * node = malloc(sizeof(NodeReturn));
  node->type = NODE_RETURN;
  node->expression = expression;
  return node;
}
