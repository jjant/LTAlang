#include <stdlib.h>
#include "builtin.h"

VALUE create_basic(Type type, st_table * properties, Basic * super) {
  Basic * basic = malloc(sizeof(basic));
  basic->type = type;
  basic->properties = properties;
  basic->super = super;

  return (VALUE)basic;
}
