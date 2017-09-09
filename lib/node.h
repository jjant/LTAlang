#ifndef _NODE_H
#define _NODE_H

#include "types.h"

typedef enum NodeType {
  function_call
} NodeType;

struct Node {
  NodeType node_type;
};

struct NodeFunctionCall {
  NodeType node_type;
  VALUE method_identifier;
  VALUE caller;
  VALUE arguments;
};

typedef struct Node Node;
typedef struct NodeFunctionCall NodeFunctionCall;

#endif
