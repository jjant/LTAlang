#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "evaluator.h"
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"
#include "string.h"

#define NODE_TYPE(node) ((Node *)(node))->node_type
#define NODE_FUNCTION_CALL(node) ((NodeFunctionCall *)(node))
#define NODE_CONSTANT(node) ((NodeConstant *)(node))
#define NODE_IF(node) ((NodeIf *) (node))

// TODO: check this, this should test if a value is truthy
#define TEST(value) ((value) == LTA_NIL)

// TODO: Use inspect method on object called instead of expecting a string
#define PRINT(string) do { printf("# => "); string_print((string)); printf("\n"); } while (0)

static VALUE evaluate_function_call(Node *);
static VALUE evaluate_node_constant(Node *);

VALUE evaluate(Node * node) {
  switch (NODE_TYPE(node)) {
    case ND_FUNCTION_CALL:
      return evaluate_function_call(node);
    case ND_IF: {
      VALUE cond = evaluate(NODE_IF(node)->node_condition);
      if(TEST(cond)) {
        return evaluate(NODE_IF(node)->node_body);
      } else {
        return evaluate(NODE_IF(node)->node_else);
      }
    }
    case ND_CONSTANT:
      return evaluate_node_constant(node);
    case ND_EMPTY:
    case ND_FUNC_PARAMETER_DECLARATION:
    case ND_FUNC_PARAMETERS:
      ;
  }
  return 0;
}

// TODO: Implement this
static VALUE evaluate_function_call(Node * node) {
  VALUE caller = evaluate(NODE_FUNCTION_CALL(node)->caller);
  VALUE arguments = evaluate(NODE_FUNCTION_CALL(node)->arguments);
  VALUE method_identifier = NODE_FUNCTION_CALL(node)->method_identifier;

  // TODO: remove this
  if(strcmp((char *)method_identifier, "+") == 0) {
    VALUE new_number = number_opt_plus(caller, arguments);
    VALUE string = number_to_string(new_number);
    PRINT(string);
    return new_number;
  }
  //
  // VALUE method = look_up_method(caller, method_identifier); // TODO: implement this
  //
  // VALUE return_value = call_method(method, caller, arguments); // TODO: implement this
  //
  // return return_value;
  return LTA_NIL;
}

#define CONSTANT_TYPE(node) NODE_CONSTANT(node)->constant_type

static VALUE evaluate_node_constant(Node * node) {
  // TODO: other types
  switch(CONSTANT_TYPE(node)) {
    case CONST_NUMBER:
      return create_number(NODE_CONSTANT(node)->constant);
    case CONST_FUNC:
    case CONST_ARRAY:
    case CONST_STRING:
      ;
  }

  return LTA_NIL;
}
