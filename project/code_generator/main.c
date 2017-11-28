#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "../structures.h"

// NODE_OBJECT_DECLARATION,
// NODE_FUNCTION_CALL,
// NODE_OPERATION,
// NODE_TERNARY_OPERATION,
// NODE_PARAMETER,
// NODE_OBJECT_ACCESSOR,
// NODE_IF,
// NODE_WHILE,
// NODE_RETURN,
// NODE_LAMDA_DECLARATION,
// NODE_KEY_VALUE_PAIR,
// NODE_INSTRUCTION,
// NODE_ARRAY_DECLARATION


char * handleNodeString(Node * node) {
  char * raw_str = ((NodeString *)node)->value;

  const size_t punctuation_length = 2;
  const size_t buffer_length = strlen(raw_str) + punctuation_length + 1;

  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "%c%s%c", '"', raw_str, '"');

  return buffer;
}

char * handleNodeNumber(Node * node) {
  char * raw_number = ((NodeNumber *)node)->value;
  //TODO: I guess this is safe...
  return raw_number;
};

char * handleNodeIdentifier(Node * node) {
  char * identifier = ((NodeIdentifier *)node)->name;
  //TODO: I guess this is safe...
  return identifier;
}

char * handleNodeThis(Node * node) {
  char * code = "this";
  char * ret = malloc(strlen(code) + 1);
  strcpy(ret, code);

  return ret;
}

char * handleNodeObjectDeclaration(Node * node) {
  NodeList * body = ((NodeObjectDeclaration *)node)->body;
  const char * keyValuePairsParsed = NULL;

  const size_t punctuation_length = 2; // "{" "}"
  const size_t buffer_length = punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "%c%s%c", '{', keyValuePairsParsed, '}');
};

//
char * handleFunctionCall(Node * node) {
  NodeFunctionCall * node_posta = (NodeFunctionCall *)node;

  char * callerCode = eval(node_posta->caller);
  char * argsCode   = eval((Node *)node_posta->args);

  const size_t punctuation_length = 4;
  size_t buffer_length = strlen(callerCode) + strlen(argsCode) +  punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "%s%s%s%s%s%s", "(", callerCode, ")", "(", argsCode, ")");

  return buffer;
}

typedef char * (* handler)(Node *);

// TODO: add this.
handler handlers[100] = {
  handleNodeString,
  handleNodeNumber,
  handleNodeThis,
  handleFunctionCall
};

char * eval(Node * node) {
  return handlers[node->type](node);
}

int main() {
  // char * source_code = "|x| => { return x + 1}";
  Node * ast = NULL; // TODO: = algo(source_code);
  char * compiled_code = eval(ast);

  printf("%s\n", compiled_code);
  return 0;
}
