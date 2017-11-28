#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "../structures.h"

char * emptyString = "";
char *(strings)[] = {
  "NODE_STRING",
  "NODE_NUMBER",
  "NODE_IDENTIFIER",
  "NODE_THIS",
  "NODE_OBJECT_DECLARATION",
  "NODE_FUNCTION_CALL",
  "NODE_OPERATION",
  "NODE_TERNARY_OPERATION",
  "NODE_BLOCK",
  "NODE_PARAMETER",
  "NODE_IGNORE",
  "NODE_OBJECT_ACCESSOR",
  "NODE_IF",
  "NODE_ARRAY_WRAP_DECLARATION",
  "NODE_WHILE",
  "NODE_RETURN",
  "NODE_LAMDA_DECLARATION",
  "NODE_KEY_VALUE_PAIR",
  "NODE_PLACEHOLDER",
  "LIST_ARGUMENTS",
  "NODE_INSTRUCTION",
  "NODE_ARRAY_DECLARATION",
  "NODE_ARRAY_ELEMENT",
  "NODE_ARRAY_DECLARATION_LIST",
};

static char * iterateOverObjectBody(NodeList * body);

// TODO: ver el tema de los semicolons

char * handleNodeString(Node * node) {
  char * raw_str = ((NodeString *)node)->value;

  const size_t punctuation_length = 0;
  const size_t buffer_length = strlen(raw_str) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "%s", raw_str);

  return buffer;

  // Old version lol
  // char * raw_str = ((NodeString *)node)->value;
  //
  // const size_t punctuation_length = strlen("\"\"");
  // const size_t buffer_length = strlen(raw_str) + punctuation_length + 1;
  // char * buffer = malloc(buffer_length);
  // snprintf(buffer, buffer_length, "\"%s\"", raw_str);
  //
  // return buffer;
}

char * handleNodeNumber(Node * node) {
  char * raw_number = ((NodeNumber *)node)->value;
  //TODO: I guess this is safe...
  return raw_number;
}

char * handleNodeIdentifier(Node * node) {
  char * identifier = ((NodeIdentifier *)node)->name;
  //TODO: I guess this is safe...
  return identifier;
}

char * handleNodeThis(Node * node) {
  char * code = "(arguments.callee)";

  const size_t buffer_length = strlen(code) + 1;
  char * buffer = malloc(buffer_length);
  strcpy(buffer, code);

  return buffer;
}

// TODO: No idea if this is correct lol
// TODO: Do something about the size thing
static char * iterateOverObjectBody(NodeList * body) {
  NodeList * current_list = body;

  const size_t maxObjectSize = 1000; // idk lol
  char * compiledObjectBody = malloc(maxObjectSize);
  compiledObjectBody[0] = '\0';

  if(body == NULL) return compiledObjectBody;

  do {
    Node * keyValue = (Node *)current_list->node;
    if (keyValue == NULL) break;

    strcat(compiledObjectBody, eval(keyValue));
    strcat(compiledObjectBody, ",");
  } while((current_list = current_list->next) != NULL);

  return compiledObjectBody;
}

char * handleNodeObjectDeclaration(Node * node) {
  NodeList * body = ((NodeObjectDeclaration *)node)->body;
  const char * keyValuePairsParsed = iterateOverObjectBody(body);

  const size_t punctuation_length = strlen("({})"); // 2 for wrapping in parens and 2 for "{" "}"
  const size_t buffer_length = punctuation_length + strlen(keyValuePairsParsed) + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "({%s})", keyValuePairsParsed);

  return buffer;
}

//
char * handleFunctionCall(Node * node) {
  NodeFunctionCall * node_posta = (NodeFunctionCall *)node;

  char * callerCode = eval(node_posta->caller);
  // printf("%d\n", *((uint32_t *)node_posta->args));
  // printf("%p\n", node_posta->args);

  // char * callerCode = emptyString;
  // char * argsCode   = emptyString;
  // node_posta->args;
  char * argsCode   = eval((Node *)node_posta->args);

  const size_t punctuation_length = strlen("()()");
  size_t buffer_length = strlen(callerCode) + strlen(argsCode) +  punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "(%s)(%s)",  callerCode, argsCode);

  return buffer;
}

char * handleNodeOperation(Node * node) {
  NodeOperation * node_posta = (NodeOperation *)node;

  char * compiledFirst = eval(node_posta->first);
  char * compiledSecond = eval(node_posta->second);
  char * operation = node_posta->operation;

  const size_t punctuation_length = strlen("()"); // for wrapping in parenthesis
  const size_t buffer_length = strlen(compiledFirst) + strlen(operation) + strlen(compiledSecond) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "(%s%s%s)", compiledFirst, operation, compiledSecond);

  return buffer;
}

char * handleNodeTernaryOperation(Node * node) {
  NodeTernaryOperation * node_posta = (NodeTernaryOperation *)node;

  char * compiledFirst = eval(node_posta->first);
  char * compiledSecond = eval(node_posta->second);
  char * compiledThird = eval(node_posta->third);

  const size_t punctuation_length = 2 + 3 + 3; // 2 for parens, 3 for " ? ", 3 for " : "
  const size_t buffer_length = strlen(compiledFirst) + strlen(compiledSecond) + strlen(compiledThird) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "(%s ? %s : %s)", compiledFirst, compiledSecond, compiledThird);

  return buffer;
}

// TODO:
char * handleNodeBlock(Node * node) {
  return eval(node);
}

char * handleNodeParameter(Node * node) {
  char * name = ((NodeParameter *)node)->name;

  return name;
}

char * handleNodeIgnore(Node * node) {
  const char * delimiter = ";";

  const size_t buffer_length = strlen(delimiter) + 1;
  char * buffer = malloc(buffer_length);
  strcpy(buffer, delimiter);

  return buffer;
}

char * handleNodeObjectAccessor(Node * node) {
  NodeObjectAccessor * node_posta = (NodeObjectAccessor *)node;

  char * compiledLeft = eval(node_posta->left);
  char * compiledSecond = eval(node_posta->right);

  const size_t punctuation_length = 2 + 2 + 2; // 2 for parens, 2 for parens on left, 1 for "[" "]".
  const size_t buffer_length = strlen(compiledLeft) + strlen(compiledSecond) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "((%s)[%s])", compiledLeft, compiledSecond);

  return buffer;
}

char * handleNodeIf(Node * node) {
  NodeIf * node_posta = (NodeIf *)node;

  char * compiledCondition = eval(node_posta->condition);
  char * compiledThen = eval(node_posta->then);
  char * compiledElseBlock = eval(node_posta->elseBlock);

  const size_t punctuation_length = 4 + 2 + 6; // "if()" "{}" "else{}"
  const size_t buffer_length = strlen(compiledCondition) + strlen(compiledThen) + strlen(compiledElseBlock) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "if(%s){%s}else{%s}", compiledCondition, compiledThen, compiledElseBlock);

  return buffer;
}

// TODO: no tocar
char * handleNodeArrayWrapDeclaration(Node * node) {
  return emptyString;
}

char * handleNodeWhile(Node * node) {
  NodeWhile * node_posta = (NodeWhile *)node;

  char * compiledCondition = eval(node_posta->condition);
  char * compiledBlock = eval(node_posta->block);

  const size_t punctuation_length = strlen("while()") + strlen("{}");
  const size_t buffer_length = strlen(compiledCondition) + strlen(compiledBlock) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "while(%s){%s}", compiledCondition, compiledBlock);

  return buffer;
}

char * handleNodeReturn(Node * node) {
  NodeReturn * node_posta = (NodeReturn *)node;

  char * compiledExpression = eval(node_posta->expression);

  const size_t punctuation_length = strlen("return ;");
  const size_t buffer_length = strlen(compiledExpression) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "return %s;", compiledExpression);

  return buffer;
}

static char * iterateOverFunctionParams(NodeList * paramList);

// TODO: esto debería volar cuando cambiemos nodelist y eso
// TODO: ver trailing commas
static char * iterateOverFunctionParams(NodeList * node) {
  if (node == NULL) return emptyString;

  NodeList * current_list = (NodeList *)node;

  const size_t buffer_length = 1000; // idk lol
  char * buffer = malloc(buffer_length);
  buffer[0] = '\0';

  if(current_list == NULL) return buffer;

  do {
    Node * actual_node = (Node *)current_list->node;
    if (actual_node == NULL) break;

    strcat(buffer, eval(actual_node));
    strcat(buffer, ",");
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

char * handleNodeLamdaDeclaration(Node * node) {
  NodeLamdaDeclaration * node_posta = (NodeLamdaDeclaration *)node;

  char * asyncPrefix = node_posta->async ? "async" : "";
  char * compiledParams = iterateOverFunctionParams(node_posta->params);
  char * compiledBody = eval((Node *)node_posta->block); // TODO compiled body...

  const size_t punctuation_length = strlen("(()=>{})");
  const size_t buffer_length = strlen(asyncPrefix) + strlen(compiledParams) + strlen(compiledBody) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "(%s(%s)=>{%s})", asyncPrefix, compiledParams, compiledBody);

  return buffer;
}

char * handleNodeKeyValuePair(Node * node) {
  NodeKeyValue * node_posta = (NodeKeyValue *)node;

  char * key = node_posta->key;
  char * compiledValue = eval(node_posta->value);

  // 2 for wrapping key in quotes, 1 for ':', 2 for wrapping value in parenthesis.
  const size_t punctuation_length = strlen("\"\": ()");
  const size_t buffer_length = strlen(key) + strlen(compiledValue) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "\"%s\": (%s)", key, compiledValue);

  return buffer;
}

//TODO:
char * handleNodePlaceholder(Node * node) {
  return emptyString;
}

//TODO:
char * handleNodeListArguments(Node * node) {
  return handleNodeArrayDeclarationList(node);
}

// TODO: ???
char * handleNodeInstructionList(Node * node) {
  NodeList * current_list = (NodeList *)node;

  const size_t buffer_length = 1000; // idk lol
  char * buffer = malloc(buffer_length);
  buffer[0] = '\0';

  if(current_list == NULL) return buffer;

  do {
    Node * actual_node = (Node *)current_list->node;
    if (actual_node == NULL) break;

    strcat(buffer, eval(actual_node));
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

// TODO: Check NodeArrayDeclaration struct. I don't think it is correct.
char * handleNodeArrayDeclaration(Node * node) {
  NodeArrayDeclaration * node_posta = (NodeArrayDeclaration *)node;

  // TODO: change this to iterate over list
  char * compiledElements = eval((Node *)node_posta->elements);

  // 2 for wrapping key in quotes, 1 for ':', 2 for wrapping value in parenthesis.
  const size_t punctuation_length = strlen("[]");
  const size_t buffer_length =  strlen(compiledElements) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "[%s]", compiledElements);

  return buffer;
}

// TODO: check
char * handleNodeArrayElement(Node * node) {
  return eval(node);
}

// TODO: ver trailing commas
char * handleNodeArrayDeclarationList(Node * node) {
  NodeList * current_list = (NodeList *)node;


  const size_t buffer_length = 1000; // TODO: idk lol
  char * buffer = malloc(buffer_length);
  buffer[0] = '\0';

  if(current_list == NULL || current_list->node == NULL)
    return buffer;

  do {
    Node * current_node = (Node *)current_list->node;
    if (node == NULL) break;

    // TODO: check this awful thing.
    strcat(buffer, "(");
    strcat(buffer, eval(current_node));
    strcat(buffer, ")");
    strcat(buffer, ",");
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

typedef char * (* handler)(Node *);

// TODO: add this.
handler handlers[] = {
  handleNodeString,
  handleNodeNumber,
  handleNodeIdentifier,
  handleNodeThis,
  handleNodeObjectDeclaration,
  handleFunctionCall,
  handleNodeOperation,
  handleNodeTernaryOperation,
  handleNodeBlock,
  handleNodeParameter,
  handleNodeIgnore,
  handleNodeObjectAccessor,
  handleNodeIf,
  handleNodeArrayWrapDeclaration,
  handleNodeWhile,
  handleNodeReturn,
  handleNodeLamdaDeclaration,
  handleNodeKeyValuePair,
  handleNodePlaceholder,
  handleNodeListArguments,
  handleNodeInstructionList, // TODO: ???
  handleNodeArrayDeclaration,
  handleNodeArrayElement,
  handleNodeArrayDeclarationList
};

char * eval(Node * node) {
  printf("pointer: %p\n", node);
  printf("type: %s\n", strings[node->type]);
  if (node == NULL || handlers[node->type] == NULL)
    return emptyString;

  return handlers[node->type](node);
}

// int main() {
//   // char * source_code = "|x| => { return x + 1}";
//   // Node * ast = NULL; // TODO: = algo(source_code);
//
//   NodeObjectDeclaration * node = malloc(sizeof(NodeObjectDeclaration));
//   node->type = NODE_OBJECT_DECLARATION;
//   node->body = NULL;
//
//   NodeObjectAccessor * node2 = malloc(sizeof(NodeObjectAccessor));
//   NodeIdentifier * left = malloc(sizeof(NodeIdentifier));
//   left->name = malloc(100);
//   strcpy(left->name, "Juan");
//
//   node2->type = NODE_OBJECT_ACCESSOR;
//   node2->left = (Node *)left;
//   node2->right = (Node *)left;
//
//   NodeIf * nodeIf = malloc(sizeof(NodeIf));
//   nodeIf->type = NODE_IF;
//   nodeIf->condition = (Node *)node2;
//   nodeIf->then = (Node *)node2;
//   nodeIf->elseBlock = NULL;
//
//   NodeNumber * nodeNumber = malloc(sizeof(NodeNumber));
//   nodeNumber->type = NODE_NUMBER;
//   nodeNumber->value = "1249";
//
//   NodeString * nodeString = malloc(sizeof(NodeString));
//   nodeString->type = NODE_STRING;
//   nodeString->value = "holis";
//
//   NodeReturn * nodeReturn = malloc(sizeof(NodeReturn));
//   nodeReturn->type = NODE_RETURN;
//   nodeReturn->expression = (Node *)nodeNumber;
//
//   NodeLamdaDeclaration * nodeLamda = malloc(sizeof(NodeLamdaDeclaration));
//   nodeLamda->type = NODE_LAMDA_DECLARATION;
//   nodeLamda->async = 1;
//   nodeLamda->params = NULL;
//   nodeLamda->block = NULL;
//
//   NodeList * nodeArrayList2 = malloc(sizeof(NodeList));
//   nodeArrayList2->type = NODE_ARRAY_DECLARATION_LIST;
//   nodeArrayList2->node = (Node *)nodeNumber;
//   nodeArrayList2->next = NULL;
//
//   NodeList * nodeArrayList = malloc(sizeof(NodeList));
//   nodeArrayList->type = NODE_ARRAY_DECLARATION_LIST;
//   nodeArrayList->node = (Node *)nodeString;
//   nodeArrayList->next = nodeArrayList2;
//
//   NodeArrayDeclaration * nodeArray = malloc(sizeof(NodeArrayDeclaration));
//   nodeArray->type = NODE_ARRAY_DECLARATION;
//   nodeArray->elements = (NodeList *)nodeArrayList;
//
//   char * compiled_code = eval((Node *)node);
//
//   printf("%s\n", compiled_code);
//   printf("%s\n", eval((Node *)node2));
//   printf("%s\n", eval((Node *)nodeIf));
//   printf("%s\n", eval((Node *)nodeReturn));
//   printf("%s\n", eval((Node *)nodeNumber));
//   printf("%s\n", eval((Node *)nodeLamda));
//   printf("%s\n", eval((Node *)nodeArray));
//
//   return 0;
// }
