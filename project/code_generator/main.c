#include <string.h>
#include <stdio.h>
#include "main.h"


char * handleNodeThis(Node * node) {
  #define code "this"
  char * ret = malloc(strlen(code) + 1);
  strcpy(ret, code);

  return ret;
}

//
char * handleFunctionCall(Node * node) {
  NodeFunctionCall * node_posta = (NodeFunctionCall *)node;

  char * callerCode = eval(node_posta->caller);
  char * argsCode   = eval(node_posta->args);

  #define punctuation_length 4
  size_t buffer_length = strlen(callerCode) + strlen(argsCode) +  punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "(", callerCode, ")", "(", argsCode, ")");

  return buffer;
}

typedef char * (* handler)(Node *);

// TODO: add this.
handler handlers[100] = {
  handleNodeThis,
  handleFunctionCall
};

char * eval(Node * node) {
  return handlers[node->node_type](node);
}

int main() {
  // char * source_code = "|x| => { return x + 1}";
  Node * ast; // TODO: = algo(source_code);
  char * compiled_code = eval(ast);

  printf("%s\n", compiled_code);
  return 0;
}
