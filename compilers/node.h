#ifndef _NODE_H
#define _NODE_H

#include "types.h"

typedef enum NodeType {
  ND_CONSTANT,
  ND_FUNCTION_CALL,
  ND_IF,
  ND_EMPTY,
  ND_FUNC_PARAMETERS,
  ND_FUNC_PARAMETER_DECLARATION
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
  struct Node * caller;
  struct Node * arguments;
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

struct NodeFunctionParameterDeclaration {
  NodeType node_type;
  char * identifier;
  struct NodeFunctionParameterDeclaration * next;
};

struct NodeFunctionParameters {
  NodeType node_type;
  int length;
  struct NodeFunctionParameterDeclaration * head;
};

typedef struct Node Node;
typedef struct NodeConstant NodeConstant;
typedef struct NodeFunctionCall NodeFunctionCall;
typedef struct NodeIf NodeIf;
typedef struct NodeEmpty NodeEmpty;
typedef struct NodeFunctionParameters NodeFunctionParameters;
typedef struct NodeFunctionParameterDeclaration NodeFunctionParameterDeclaration;

NodeConstant * create_constant_node(VALUE, ConstantType);
NodeFunctionCall * create_function_call_node(VALUE, Node *, Node *);
NodeIf * create_if_node(Node *, Node *, Node *);
NodeEmpty * create_empty_node();
NodeFunctionParameters * create_node_function_parameters(NodeFunctionParameterDeclaration *);
NodeFunctionParameterDeclaration * create_node_function_parameter_declaration(NodeFunctionParameterDeclaration *, char *);

#endif
