#define NODE_STRING "STRING"
#define NODE_NUMBER "NUMBER"
#define NODE_IDENTIFIER "IDENTIFIER"
#define NODE_THIS "THIS"
#define NODE_OBJECT_DECLARATION "OBJECT DECLARATION"
#define NODE_FUNCTION_CALL "FUNCTION CALL"
#define NODE_OPERATION "OPERATION"
#define NODE_TERNARY_OPERATION "TERNARY OPERATION"
#define NODE_PARAMETER "PARAMETER"
#define NODE_OBJECT_ACCESSOR "OBJECT ACCESSOR"
#define NODE_IF "IF"
#define NODE_WHILE "WHILE"
#define NODE_RETURN "RETURN"
#define NODE_LAMDA_DECLARATION "NODE_LAMDA_DECLARATION"
#define NODE_KEY_VALUE_PAIR "KEY-VALUE PAIR"
#define NODE_INSTRUCTION "INSTRUCTION"

struct Node {
  char * type;
};

struct NodeList {
  char * type;
  Node * node;
  NodeList * next;
}

struct NodeString {
  char * type;
  char * value;
}

struct NodeNumber {
  char * type;
  char * value;
}

struct NodeIdentifier {
  char * type;
  char * name;
}

struct NodeThis {
  char * type;
}

struct NodeKeyValue {
  char * type;
  Node * key;
  Node * value;
}

struct NodeObjectDeclaration {
  char * type;
  NodeList * body;
}

struct NodeFunctionCall {
  char * type;
  Node * caller;
  NodeList * args;
}

struct NodeOperation {
  char * type;
  Node * first;
  Node * second;
  char * operation;
}

struct NodeTernaryOperation {
  char * type;
  Node * first;
  Node * second;
  Node * third;
}

struct NodeParameter {
  char * type;
  char * name;
}

struct NodeArrayDeclaration {
  char * type;
  Node * element;
}

struct NodeObjectAccessor {
  char * type;
  Node * left;
  Node * right;
}

struct NodeIf {
  char * type;
  Node * condition;
  Node * then;
  Node * elseBlock;
}

struct NodeWhile {
  char * type;
  Node * condition;
  Node * block;
}

struct NodeReturn {
  char * type;
  Node * expression;
}

struct NodeLamdaDeclaration {
  char * type;
  int async;
  NodeList * params;
  Node * block;
}
