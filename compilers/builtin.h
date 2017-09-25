#ifndef _BUILTIN_H
#define _BUILTIN_H

#include "hashtable.h"
#include "types.h"

#define LTA_NIL (VALUE)NULL

// All built in types are defined here.
typedef struct Basic Basic;
typedef struct Number Number;
typedef struct String String;
typedef struct Array Array;
typedef struct Object Object;

enum Type {
  object,
  number,
  string,
  function
};

typedef enum Type Type;

struct Basic {
  Type type;
  st_table * properties;
  Basic * super; // Should this be here?
};

struct Number {
  Basic * basic;
  int raw_value;
};

#define STRING(value) ((String *)(value))

struct String {
  Basic * basic;
  long length;
  char * raw_value;
};

struct Array {
  Basic * basic;
  long length;
  VALUE * ptr;
};

// Perhaps this is unneeded.
struct Object {
  Basic * basic;
};

#endif
