#ifndef _EVALUATOR_H
#define _EVALUATOR_H

#include "types.h"

VALUE look_up_method(VALUE object, VALUE method_identifier);
VALUE call_method(VALUE method, VALUE caller, VALUE arguments);

#endif
