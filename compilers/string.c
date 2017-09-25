#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "builtin.h"
#include "types.h"
#include "hashtable.h"
#include "string.h"

#define STRING_TO_RAW(string) ((String *)(string))->raw_value

Basic STRING_PROTOTYPE = {
  .type = string,
  .properties = NULL, //TODO: change this
  .super = NULL //TODO: change this
};

VALUE create_string(VALUE raw_value) {
  String * string = malloc(sizeof(String));
  string->basic = &STRING_PROTOTYPE;
  string->length = strlen((char *)raw_value);
  string->raw_value = (char *)raw_value;

  return (VALUE)string;
}

VALUE string_print(VALUE string) {
  if(string == LTA_NIL)
    printf("nil");
  else
    printf("%s", STRING_TO_RAW(string));
  return string;
}
