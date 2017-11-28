#ifndef __MAIN_H
#define __MAIN_H

#include "../structures.h"

char * eval(Node * node);
char * handleNodeThis(Node * node);
char * handleFunctionCall(Node * node);

#endif
