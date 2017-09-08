#include "hashtable.h"
#include "types.h"

// All built in types are defined here.

typedef enum Type Type;

typedef struct Basic Basic;
typedef struct Number Number;
typedef struct String String;
typedef struct Array Array;
typedef struct Object Object;

enum Type {
  object,
  number,
  function
};

struct Basic {
  Type type;
  Basic * super; // Should this be here?
};

struct Number {
  Basic basic;
  int raw_value;
};

struct String {
  Basic basic;
  long length;
  char * raw_value;
};

struct Array {
  Basic basic;
  long length;
  VALUE * ptr;
};

// Perhaps this is unneeded.
struct Object {
  Basic basic;
};
