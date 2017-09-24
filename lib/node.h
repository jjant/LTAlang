#ifndef _NODE_H
#define _NODE_H

#include "types.h"

typedef enum NodeType {
  ND_CONSTANT,
  ND_FUNCTION_CALL,
  ND_IF,
  ND_EMPTY
} NodeType;

struct Node {
  NodeType node_type;
};

typedef enum ConstantType {
  CONST_FUNC,
  CONST_NUMBER,
  CONST_STRING,
  CONST_ARRAY
} ConstantType;

struct NodeConstant {
  NodeType node_type;
  ConstantType constant_type;
  VALUE constant;
};

struct NodeFunctionCall {
  NodeType node_type;
  VALUE method_identifier;
  VALUE caller;
  VALUE arguments;
};

struct NodeIf {
  NodeType node_type;
  struct Node * node_condition;
  struct Node * node_body;
  struct Node * node_else;
};

struct NodeEmpty {
  NodeType node_type;
};

typedef struct Node Node;
typedef struct NodeConstant NodeConstant;
typedef struct NodeFunctionCall NodeFunctionCall;
typedef struct NodeIf NodeIf;
typedef struct NodeEmpty NodeEmpty;

NodeFunctionCall * create_function_call_node(VALUE, VALUE, VALUE);
NodeIf * create_if_node(Node *, Node *, Node *);
NodeEmpty * create_empty_node();

#endif
