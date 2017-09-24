#include <stdio.h>
#include <stdlib.h>
#include "evaluator.h"
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"

NodeConstant * create_constant_node(VALUE constant, ConstantType constant_type) {
  NodeConstant * node = malloc(sizeof(NodeConstant));
  node->node_type = ND_CONSTANT;
  node->constant_type = constant_type;
  node->constant = constant;
  return node;
}

NodeFunctionCall * create_function_call_node(VALUE method_identifier, VALUE caller, VALUE arguments) {
  NodeFunctionCall * node = malloc(sizeof(NodeFunctionCall));
  node->node_type = ND_FUNCTION_CALL;
  node->method_identifier = method_identifier;
  node->caller = caller;
  node->arguments = arguments;

  return node;
}

NodeIf * create_if_node(Node * node_condition, Node * node_body, Node * node_else) {
  NodeIf * node = malloc(sizeof(NodeIf));
  node->node_type = ND_IF;
  node->node_condition = node_condition;
  node->node_body = node_body;
  node->node_else = node_else;

  return node;
}

NodeEmpty * create_empty_node() {
  NodeEmpty * node = malloc(sizeof(NodeEmpty));
  node->node_type = ND_EMPTY;

  return node;
}
