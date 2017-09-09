#include <stdio.h>
#include <stdlib.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"

#define NUMBER_TO_INT(value) (*((Number **)(value)))->raw_value

VALUE number_opt_plus(VALUE caller, VALUE other) {
  VALUE new_number;
  int new_raw_value = NUMBER_TO_INT(caller) + NUMBER_TO_INT(other);

  new_number = create_number(new_raw_value);
  return new_number;
}

VALUE number_opt_minus(VALUE caller, VALUE other) {
  VALUE new_number;
  int new_raw_value = NUMBER_TO_INT(caller) - NUMBER_TO_INT(other);

  new_number = create_number(new_raw_value);
  return new_number;
}
