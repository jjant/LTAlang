#ifndef _NUMBERS_H
#define _NUMBERS_H

#include "types.h"

VALUE create_number(int);
VALUE number_opt_plus(VALUE, VALUE);
VALUE number_to_string(VALUE);

#endif
