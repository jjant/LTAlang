#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "structures.h"

// This is a JS snippet to allow the program to work both in NodeJS and in the latest browsers.
// It defines the input/output operations
// It also sets some variables and some utility funcions, like `true`, `false`, String, and Math objects
char * stdlib = "var inputGlobal = {}; try{inputGlobal=require('prompt-sync')();}catch(e){try{inputGlobal=window.prompt;}catch(x){};};puts___ = console.log; read___ = inputGlobal;\nfalse___=false; true___=true;\nMath___=new Proxy(Math, { get: function(target, property, receiver) { return target[property.slice(0, -3)] } });\nNumber___=Number\nString.prototype.upper___=String.prototype.toUpperCase\nString.prototype.lower___=String.prototype.toLowerCase\nString.prototype.each___=String.prototype.forEach;\nArray.prototype.each___=Array.prototype.forEach;\nArray.prototype.map___=Array.prototype.map;\nArray.prototype.reduce___=Array.prototype.reduce;\n\n";

// A set of useful strings for debugging Node types.
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
  "NODE_NEGATION",
};

static char * iterateOverObjectBody(NodeList * body);
static char * eval(Node * node);
static char * iterateOverFunctionParams(NodeList * paramList);

// The next functions are AST node handlers.
// The idea is to let every node handle itself according to its type.
// For example, a String node will be handled by the `handleNodeString` function.
// We had set a handling function for every type of node in our AST.
// This pattern allows us to add and handle a new type of node really easily,
// By just adding it to the grammar, defining it's handling function, and adding its type
// to the handling functions array.

char * handleNodeString(Node * node) {
  char * raw_str = ((NodeString *)node)->value;

  const size_t punctuation_length = 0;
  const size_t buffer_length = strlen(raw_str) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "%s", raw_str);

  return buffer;
}

char * handleNodeNumber(Node * node) {
  char * raw_number = ((NodeNumber *)node)->value;
  return raw_number;
}

char * handleNodeIdentifier(Node * node) {
  char * identifier = ((NodeIdentifier *)node)->name;
  char * punctuation_length = "___";
  char * newIdentifier = calloc(strlen(identifier) + strlen(punctuation_length) + 1, sizeof(char));

  strcpy(newIdentifier, identifier);
  strcat(newIdentifier, "___");

  return newIdentifier;
}

char * handleNodeThis(Node * node) {
  char * code = "(arguments.callee)";

  const size_t buffer_length = strlen(code) + 1;
  char * buffer = malloc(buffer_length);
  strcpy(buffer, code);

  return buffer;
}

static char * iterateOverObjectBody(NodeList * body) {
  NodeList * current_list = body;

  size_t punctuation_length = strlen(",");
  char * compiledObjectBody = malloc(1); // Just the null terminator
  compiledObjectBody[0] = '\0';

  if(body == NULL) return compiledObjectBody;

  do {
    Node * keyValue = (Node *)current_list->node;
    if (keyValue == NULL) break;
    char * result = eval(keyValue);
    compiledObjectBody = realloc(compiledObjectBody, strlen(compiledObjectBody) + strlen(result) + punctuation_length + 1);

    strcat(compiledObjectBody, result);
    strcat(compiledObjectBody, ",");
  } while((current_list = current_list->next) != NULL);

  return compiledObjectBody;
}

char * handleNodeObjectDeclaration(Node * node) {
  NodeList * body = ((NodeObjectDeclaration *)node)->body;
  const char * keyValuePairsParsed = iterateOverObjectBody(body);

  const size_t punctuation_length = strlen("({})");
  const size_t buffer_length = punctuation_length + strlen(keyValuePairsParsed) + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "({%s})", keyValuePairsParsed);

  return buffer;
}

char * handleFunctionCall(Node * node) {
  NodeFunctionCall * node_posta = (NodeFunctionCall *)node;

  char * callerCode = eval(node_posta->caller);
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

  // If assigning a new variable, concat var to make variables scoped and not global
  if (node_posta->first->type == NODE_IDENTIFIER && strcmp(node_posta->operation, "=") == 0) {
    const size_t punctuation_length = strlen("var ");
    const size_t buffer_length = strlen(compiledFirst) + strlen(operation) + strlen(compiledSecond) + punctuation_length + 2;
    char * buffer = malloc(buffer_length);
    snprintf(buffer, buffer_length, "var %s%s%s",compiledFirst, operation, compiledSecond);
    return buffer;
  } else {
    const size_t punctuation_length = strlen("()");
    const size_t buffer_length = strlen(compiledFirst) + strlen(operation) + strlen(compiledSecond) + punctuation_length + 1;
    char * buffer = malloc(buffer_length);
    snprintf(buffer, buffer_length, "(%s%s%s)", compiledFirst, operation, compiledSecond);
    return buffer;
  }
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

char * handleNodeBlock(Node * node) {
  return eval(node);
}

char * handleNodeParameter(Node * node) {
  char * name = ((NodeParameter *)node)->name;

  char * punctuation_length = "___";
  char * newName = calloc(strlen(name) + strlen(punctuation_length) + 1, sizeof(char));

  strcpy(newName, name);
  strcat(newName, "___");

  return newName;
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

  const size_t punctuation_length = strlen("(()[\"\"])");
  const size_t buffer_length = strlen(compiledLeft) + strlen(compiledSecond) + punctuation_length + 2;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "((%s)[\"%s\"])", compiledLeft, compiledSecond);

  return buffer;
}

char * handleNodeIf(Node * node) {
  NodeIf * node_posta = (NodeIf *)node;

  char * compiledCondition = eval(node_posta->condition);
  char * compiledThen = eval(node_posta->then);
  char * compiledElseBlock = eval(node_posta->elseBlock);

  const size_t punctuation_length = strlen("if(){}else{}");
  const size_t buffer_length = strlen(compiledCondition) + strlen(compiledThen) + strlen(compiledElseBlock) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "if(%s){%s}else{%s}", compiledCondition, compiledThen, compiledElseBlock);

  return buffer;
}

// This function is necessary since it work as a placeholder for an extensible
// functionality
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

static char * iterateOverFunctionParams(NodeList * node) {
  if (node == NULL) return emptyString;

  NodeList * current_list = (NodeList *)node;

  char * buffer = malloc(1); // Just the null terminator
  buffer[0] = '\0';
  size_t punctuation_length = strlen(",");

  if(current_list == NULL) return buffer;

  do {
    Node * actual_node = (Node *)current_list->node;
    if (actual_node == NULL) break;

    char * result = eval(actual_node);
    buffer = realloc(buffer, strlen(result) + strlen(buffer) + punctuation_length + 1);
    strcat(buffer, result);
    strcat(buffer, ",");
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

char * handleNodeLamdaDeclaration(Node * node) {
  NodeLamdaDeclaration * node_posta = (NodeLamdaDeclaration *)node;

  char * asyncPrefix = node_posta->async ? "function(){setTimeout(" : "";
  char * asyncPostfix = node_posta->async ? ",0);return 0;}" : "";
  char * compiledParams = iterateOverFunctionParams(node_posta->params);
  char * compiledBody = eval((Node *)node_posta->block);

  const size_t punctuation_length = strlen("( function(){\nreturn 0;})");
  const size_t buffer_length = strlen(asyncPrefix) + strlen(asyncPostfix) + strlen(compiledParams) + strlen(compiledBody) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "(%sfunction(%s){%s\nreturn 0;}%s)", asyncPrefix, compiledParams, compiledBody, asyncPostfix);

  return buffer;
}

char * handleNodeKeyValuePair(Node * node) {
  NodeKeyValue * node_posta = (NodeKeyValue *)node;

  char * key = node_posta->key;
  char * compiledValue = eval(node_posta->value);

  // 2 for wrapping key in quotes, 1 for ':', 2 for wrapping value in parenthesis.
  const size_t punctuation_length = strlen("\"___\": ()");
  const size_t buffer_length = strlen(key) + strlen(compiledValue) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "\"%s___\": (%s)", key, compiledValue);

  return buffer;
}

// This function is necessary since it work as a placeholder for an extensible
// functionality
char * handleNodePlaceholder(Node * node) {
  return emptyString;
}

char * handleNodeListArguments(Node * node) {
  return handleNodeArrayDeclarationList(node);
}

char * handleNodeInstructionList(Node * node) {
  NodeList * current_list = (NodeList *)node;

  char * buffer = malloc(1); // Just the null terminator
  buffer[0] = '\0';
  size_t punctuation_length = 0;

  if(current_list == NULL) return buffer;

  do {
    Node * actual_node = (Node *)current_list->node;
    if (actual_node == NULL) break;

    char * result = eval(actual_node);
    buffer = realloc(buffer, strlen(result) + strlen(buffer) + punctuation_length + 1);
    strcat(buffer, result);
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

char * handleNodeArrayDeclaration(Node * node) {
  NodeArrayDeclaration * node_posta = (NodeArrayDeclaration *)node;

  char * compiledElements = eval((Node *)node_posta->elements);

  const size_t punctuation_length = strlen("[]");
  const size_t buffer_length =  strlen(compiledElements) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);

  snprintf(buffer, buffer_length, "[%s]", compiledElements);

  return buffer;
}

char * handleNodeArrayElement(Node * node) {
  return eval(node);
}

char * handleNodeArrayDeclarationList(Node * node) {
  NodeList * current_list = (NodeList *)node;

  char * buffer = malloc(1); // Just the null terminator
  buffer[0] = '\0';
  size_t punctuation_length = strlen("(),");

  if(current_list == NULL || current_list->node == NULL)
    return buffer;

  do {
    Node * current_node = (Node *)current_list->node;
    if (node == NULL) break;
    char * result = eval(current_node);
    buffer = realloc(buffer, strlen(result) + strlen(buffer) + punctuation_length + 1);
    strcat(buffer, "(");
    strcat(buffer, result);
    strcat(buffer, "),");
  } while((current_list = current_list->next) != NULL);

  return buffer;
}

char * handleNodeEndmarked(Node * node) {
  NodeEndmarked * node_posta = (NodeEndmarked *)node;

  char * compiledChild = eval(node_posta->child);

  const size_t punctuation_length = strlen(";");
  const size_t buffer_length = strlen(compiledChild) + punctuation_length + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "%s;", compiledChild);

  return buffer;
}

char * handleNodeNegation(Node * node) {
  NodeNegation * node_posta = (NodeNegation *)node;
  char * compiledChild = eval(node_posta->expression);

  const size_t punctuation_length = strlen("(!)");
  const size_t buffer_length = strlen(compiledChild) + punctuation_length + 1;
  char * buffer = calloc(buffer_length, sizeof(char));
  snprintf(buffer, buffer_length, "(!%s)", compiledChild);

  return buffer;
}

typedef char * (* handler)(Node *);

// A set of function pointers. Using this array, we are able to automatically
// index the type of node, triggering the correct handling function.
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
  handleNodeInstructionList,
  handleNodeArrayDeclaration,
  handleNodeArrayElement,
  handleNodeArrayDeclarationList,
  handleNodeEndmarked,
  handleNodeNegation,
};

// Dispatcher function. It lets every node handle itself.
static char * eval(Node * node) {
  if (node == NULL || handlers[node->type] == NULL)
    return emptyString;

  return handlers[node->type](node);
}

// Copies the JS snippet
static char * append_stdlib(char * code) {
  const size_t buffer_length = strlen(stdlib) + strlen(code) + 1;
  char * buffer = malloc(buffer_length);
  snprintf(buffer, buffer_length, "%s%s", stdlib, code);

  return buffer;
}

// Generates the final code
char * generate_code(Node * node) {
  char * code = append_stdlib(eval(node));

  return code;
}
