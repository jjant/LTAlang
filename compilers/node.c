#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "evaluator.h"
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"

#ifdef VERBOSE_NODE
  #define LOG_NODE(...) printf(__VA_ARGS__)
#else
  #define LOG_NODE(...) ;
#endif

NodeConstant * create_constant_node(VALUE constant, ConstantType constant_type) {
  if(constant_type == CONST_NUMBER)
    LOG_NODE("CREATE CONSTANT_NODE FOR CONSTANT: %d\n", (int) constant);

  NodeConstant * node = malloc(sizeof(NodeConstant));
  node->node_type = ND_CONSTANT;
  node->constant_type = constant_type;
  node->constant = constant;
  return node;
}

NodeFunctionCall * create_function_call_node(VALUE method_identifier, Node * caller, Node * arguments) {
  LOG_NODE("CREATE CONSTANT_NODE FOR METHOD_ID: %s\n", (char *)method_identifier);

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

NodeFunctionParameters * create_node_function_parameters(NodeFunctionParameterDeclaration * head) {
  NodeFunctionParameters * node = malloc(sizeof(NodeFunctionParameters));
  node->node_type = ND_FUNC_PARAMETERS;
  node->head = head;
  node->length = 1; // TODO: calculate length;
  return node;
}

NodeFunctionParameterDeclaration * create_node_function_parameter_declaration(NodeFunctionParameterDeclaration * previous, char * identifier) {
  if (identifier == NULL) return NULL;
  NodeFunctionParameterDeclaration * node = malloc(sizeof(NodeFunctionParameterDeclaration));
  node->node_type = ND_FUNC_PARAMETER_DECLARATION;
  node->identifier = identifier;
  node->next = NULL;

  if (previous != NULL) {
    previous->next = node;
  }

  return node;
}
