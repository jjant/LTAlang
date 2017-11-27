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

// NODELIST TYPES
#define NODE_KEY_VALUE_PAIR "KEY-VALUE PAIR"


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
