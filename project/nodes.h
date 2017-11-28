// Don't change the order of this, it will break EVERYTHING.
// If you want to add more, add them at the end.
typedef enum {
  NODE_STRING = 0,
  NODE_NUMBER,
  NODE_IDENTIFIER,
  NODE_THIS,
  NODE_OBJECT_DECLARATION,
  NODE_FUNCTION_CALL,
  NODE_OPERATION,
  NODE_TERNARY_OPERATION,
  NODE_BLOCK,
  NODE_PARAMETER,
  NODE_IGNORE,
  NODE_OBJECT_ACCESSOR,
  NODE_IF,
  NODE_ARRAY_WRAP_DECLARATION,
  NODE_WHILE,
  NODE_RETURN,
  NODE_LAMDA_DECLARATION,
  NODE_KEY_VALUE_PAIR,
  NODE_PLACEHOLDER,
  LIST_ARGUMENTS,
  NODE_INSTRUCTION,
  NODE_ARRAY_DECLARATION,
  NODE_ARRAY_ELEMENT,
  NODE_ARRAY_DECLARATION_LIST,
  NODE_ENDMARKED,
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

typedef struct NodeArrayDeclarationElement {
  NodeType type;
  Node * element;
} NodeArrayDeclarationElement;

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
  NodeList * block;
} NodeLamdaDeclaration;

typedef struct NodePlaceholder {
  NodeType type;
} NodePlaceholder;

typedef struct NodeBlock {
  NodeType type;
  NodeList * instructions;
} NodeBlock;

typedef struct NodeArrayDeclaration {
  NodeType type;
  NodeList * elements;
} NodeArrayDeclaration;

typedef struct NodeEndmarked {
  NodeType type;
  Node * child;
} NodeEndmarked;
