Node {
  String type;
}

ConstantNode {
  String type;
  String valueType;
  String value;
}

IdentifierNode {
  String type;
  String name;
  Node value;
}

FunctionNode {
  String type;
  Node[] args;
  Node ctx_body;
}

OperationNode {
  String type;
  Node left;
  Node right;
  String operator;
}

MethodCallNode {
  String type;
  Node[] params;
}

ArrayNode {
  String type;
  Node[] values;
}

ObjectNode {
  String type;
  Node[] KeyValueNode;
}

KeyValueNode {
  String type;
  String key;
  Node value;
}
