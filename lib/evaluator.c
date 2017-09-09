#include <stdio.h>
#include <stdlib.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"

#define NODE_TYPE(node) ((Node *)(node))->node_type
#define NODE_FUNCTION_CALL(node) ((NodeFunctionCall *)(node))

VALUE evaluate(VALUE);
static VALUE evaluate_function_call(VALUE);

VALUE evaluate(VALUE node) {
  switch (NODE_TYPE(node)) {
    case function_call:
      return evaluate_function_call(node);
  }
}

VALUE evaluate_function_call(VALUE node) {
  VALUE caller = NODE_FUNCTION_CALL(node)->caller;
  VALUE arguments = NODE_FUNCTION_CALL(node)->arguments;
  VALUE method_identifier = NODE_FUNCTION_CALL(node)->method_identifier;

  VALUE method = look_up_method(caller, method_identifier); // TODO: implement this

  VALUE return_value = call_method(method, caller, arguments); // TODO: implement this

  return return_value;
}
