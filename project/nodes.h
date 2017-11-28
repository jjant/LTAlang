typedef enum {
  NODE_STRING = 0,
  NODE_NUMBER,
  NODE_IDENTIFIER,
  NODE_THIS,
  NODE_OBJECT_DECLARATION,
  NODE_FUNCTION_CALL,
  NODE_OPERATION,
  NODE_TERNARY_OPERATION,
  NODE_PARAMETER,
  NODE_OBJECT_ACCESSOR,
  NODE_IF,
  NODE_WHILE,
  NODE_RETURN,
  NODE_LAMDA_DECLARATION,
  NODE_KEY_VALUE_PAIR,
  NODE_INSTRUCTION,
  NODE_ARRAY_DECLARATION
} NodeType;

typedef struct Node {
  NodeType type;
} Node;

typedef struct NodeList {
  NodeType type;
  Node * node;
  struct NodeList * next;
} NodeList;

typedef struct NodeString {
  NodeType type;
  char * value;
} NodeString;

typedef struct NodeNumber {
  NodeType type;
  char * value;
} NodeNumber;

typedef struct NodeIdentifier {
  NodeType type;
  char * name;
} NodeIdentifier;

typedef struct NodeThis {
  NodeType type;
} NodeThis;

typedef struct NodeKeyValue {
  NodeType type;
  char * key;
  Node * value;
} NodeKeyValue;

typedef struct NodeObjectDeclaration {
  NodeType type;
  NodeList * body;
} NodeObjectDeclaration;

typedef struct NodeFunctionCall {
  NodeType type;
  Node * caller;
  NodeList * args;
} NodeFunctionCall;

typedef struct NodeOperation {
  NodeType type;
  Node * first;
  Node * second;
  char * operation;
} NodeOperation;

typedef struct NodeTernaryOperation {
  NodeType type;
  Node * first;
  Node * second;
  Node * third;
} NodeTernaryOperation;

typedef struct NodeParameter {
  NodeType type;
  char * name;
} NodeParameter;

typedef struct NodeArrayDeclaration {
  NodeType type;
  Node * element;
} NodeArrayDeclaration;

typedef struct NodeObjectAccessor {
  NodeType type;
  Node * left;
  Node * right;
} NodeObjectAccessor;

typedef struct NodeIf {
  NodeType type;
  Node * condition;
  Node * then;
  Node * elseBlock;
} NodeIf;

typedef struct NodeWhile {
  NodeType type;
  Node * condition;
  Node * block;
} NodeWhile;

typedef struct NodeReturn {
  NodeType type;
  Node * expression;
} NodeReturn;

typedef struct NodeLamdaDeclaration {
  NodeType type;
  int async;
  NodeList * params;
  Node * block;
} NodeLamdaDeclaration;
