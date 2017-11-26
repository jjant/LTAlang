Node {
  char * type;
}

ConstantNode {
  char * type;
  char * valueType;
  char * value;
}

IdentifierNode {
  char * type;
  char * name;
  Node * assignment;
}

FunctionNode {
  char * type;
  Node * args;
  Node ctx_body;
}

OperationNode {
  char * type;
  Node left;
  Node right;
  char * operator;
}

MethodCallNode {
  char * type;
  Node * params;
}

ArrayNode {
    char * type;
    Node * params;
}

ObjectNode {
  char * type;
  Node * KeyValueNode;
}

KeyValueNode {
  char * type;
  char * key;
  Node value;
}
