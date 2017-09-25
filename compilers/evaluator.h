#ifndef _EVALUATOR_H
#define _EVALUATOR_H

#include "types.h"
#include "node.h"
#include "numbers.h"
#include "builtin.h"

VALUE evaluate(Node *);
VALUE look_up_method(VALUE object, VALUE method_identifier);
VALUE call_method(VALUE method, VALUE caller, VALUE arguments);

#endif
