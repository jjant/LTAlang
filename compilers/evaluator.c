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
#define PRINT(string) do { printf("# => "); string_print(string); } while(0)

static VALUE evaluate_function_call(VALUE);
static VALUE evaluate_node_constant(VALUE);

VALUE evaluate(VALUE node) {
  switch (NODE_TYPE(node)) {
    case ND_FUNCTION_CALL:
      return evaluate_function_call(node);
    case ND_IF:
      if(TEST(evaluate((VALUE)NODE_IF(node)->node_condition))) {
        return evaluate((VALUE)NODE_IF(node)->node_body);
      } else {
        return evaluate((VALUE)NODE_IF(node)->node_else);
      }
    case ND_CONSTANT:
      return evaluate_node_constant(node);
    case ND_EMPTY:
      ;
  }
  return 0;
}

// TODO: Implement this
static VALUE evaluate_function_call(VALUE node) {
  VALUE caller = NODE_FUNCTION_CALL(node)->caller;
  VALUE arguments = NODE_FUNCTION_CALL(node)->arguments;
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

static VALUE evaluate_node_constant(VALUE node) {
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
