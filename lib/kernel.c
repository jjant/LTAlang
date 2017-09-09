#include <stdio.h>
#include <stdlib.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "node.h"
#include "evaluator.h"

VALUE lta_puts(VALUE object) {
  VALUE to_string_method = look_up_method(object, (VALUE)"to_string");
  char * raw_string = STRING(call_method(to_string_method, object, LTA_NIL))->raw_value;

  printf("%s\n", raw_string);
};
