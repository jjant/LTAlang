#include <stdio.h>
#include <stdlib.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"
#include "evaluator.h"

// Prints an object to screen. Uses the object's `to_string` method.
// Returns: The stringified object.
VALUE lta_puts(VALUE object) {
  VALUE to_string_method = look_up_method(object, (VALUE)"to_string");
  VALUE object_to_string = call_method(to_string_method, object, LTA_NIL);
  char * raw_string = STRING(object_to_string)->raw_value;

  printf("%s\n", raw_string);
  return object_to_string;
};
