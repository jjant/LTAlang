#include <stdio.h>
#include <stdlib.h>
#include "evaluator.h"
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"

#define NODE_TYPE(node) ((Node *)(node))->node_type
#define NODE_FUNCTION_CALL(node) ((NodeFunctionCall *)(node))
#define NODE_IF(node) ((NodeIf *) (node))

// TODO: check this, this should test if a value is truthy
#define TEST(value) ((value) == LTA_NIL)

VALUE evaluate(VALUE);
static VALUE evaluate_function_call(VALUE);

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
  }
  return 0;
}

VALUE evaluate_function_call(VALUE node) {
  VALUE caller = NODE_FUNCTION_CALL(node)->caller;
  VALUE arguments = NODE_FUNCTION_CALL(node)->arguments;
  VALUE method_identifier = NODE_FUNCTION_CALL(node)->method_identifier;

  VALUE method = look_up_method(caller, method_identifier); // TODO: implement this

  VALUE return_value = call_method(method, caller, arguments); // TODO: implement this

  return return_value;
}
