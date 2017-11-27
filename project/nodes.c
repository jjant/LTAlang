Node {
  char * type;
}

ProgramNode {
  NodeList * instructions;
}

ConstantNode {
  char * type;
  char * valueType;
  char * value;
}

IdentifierNode {
  char * type;
  char * name;
}

// "|" eval(args) "|" "=>" eval(ctx_body)
FunctionNode {
  char * type;
  Node * args;
  Node ctx_body;
}

// "{"  eval(NodeList) "}"
CodeBlockNode {
  char * type;
  Node[] NodeList;
}

OperationNode {
  char * type;
  Node left;
  Node right;
  char * operator;
}

IfNode {
  char * type;
  Node condition;
  Node * body;
}

ForNode {
  char * type;
  Node condition;
  Node * body;
}

TernaryOperationNode {
  char * type;
  Node condition;
  Node else;
  Node ifHappened;
}

MethodCallNode {
  char * type;
  Node * params;
}

// "[" eval(list) "]"
ArrayNode {
    char * type;
    // TODO:
    // Lista * list;
}


//  "{" eval(keyValueNodeList) "}"
ObjectNode {
  char * type;
  KeyValueNode  ** keyValueNodeList;
}

// "\"" key "\"" ":" eval(value) ","
KeyValueNode {
  char * type;
  char * key;
  Node value;
}
