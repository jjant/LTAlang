#include "structures.h"

#define NULL 0
#define TRUE 1
#define FALSE 0

// NODE TYPES
#define NODE_CONSTANT "CONSTANT"
#define NODE_IDENTIFIER "IDENTIFIER"
#define NODE_THIS "THIS"

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

NodeList * newKeyValuePairList(const NodeKeyValue * node) {
  NodeList * list = malloc(sizeof(NodeList));
  NodeList->type = NODE_KEY_VALUE_PAIR;
  NodeList->node = node;
  NodeList-> next = NULL;

  return list;
}

NodeKeyValue * addKeyValuePair(const NodeList * list, const NodeKeyValue * node) {
  NodeList * cnode = list;
  while (cnode->next != NULL) cnode = cnode->next;
  cnode->next = newKeyValuePairList(node)
  return list;
}
