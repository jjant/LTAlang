#ifndef __MAIN_H
#define __MAIN_H

typedef struct Node {
  char * type;
} Node;

char * eval(Node * node);
char * handleNodeThis(Node * node);
char * handleFunctionCall(Node * node);

#endif
