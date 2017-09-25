#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "string.h"

#define NUMBER_TO_INT(value) ((Number *)(value))->raw_value
#define int_to_str(target_string, source_int) sprintf((target_string), "%d", (source_int))

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
  if (caller == LTA_NIL) { // TODO: Is all of this really necessary?
    if (other == LTA_NIL) {
      return create_number(0);
    }
    return other;
  } else if (other == LTA_NIL) {
    return caller;
  }
  int new_raw_value = NUMBER_TO_INT(caller) + NUMBER_TO_INT(other);
  VALUE new_number = create_number(new_raw_value);

  return new_number;
}

VALUE number_opt_minus(VALUE caller, VALUE other) {
  VALUE new_number;
  int new_raw_value = NUMBER_TO_INT(caller) - NUMBER_TO_INT(other);

  new_number = create_number(new_raw_value);
  return new_number;
}

#define MAX_INT_STRING_SIZE 30

VALUE number_to_string(VALUE caller) {
  char * raw_string = malloc(sizeof(char) * MAX_INT_STRING_SIZE);
  int raw_int = NUMBER_TO_INT(caller);
  if(caller == LTA_NIL)
    return LTA_NIL;
  int_to_str(raw_string, raw_int);
  VALUE string = create_string((VALUE)raw_string);

  return string;
}
