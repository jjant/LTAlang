#include "types.h"
#include "builtin.h"

// Returns the basic member of an object
#define BASIC(value) (*((Basic **)(value)))

// Looks up a property for a given object.
VALUE look_up(VALUE object, char * identifier) {
  return st_lookup(BASIC(object)->properties, identifier);
}
