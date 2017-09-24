#include <stdio.h>
#include <stdlib.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"

#define NUMBER_TO_INT(value) (*((Number **)(value)))->raw_value

Basic NUMBER_PROTOTYPE = {
  .type = number,
  .properties = NULL, //TODO: change this
  .super = NULL //TODO: change this
};

VALUE create_number(int raw_value) {
  Number * number = malloc(sizeof(Number));
  number->basic = &NUMBER_PROTOTYPE;
  number->raw_value = raw_value;

  return (VALUE)number;
}

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
