#include "nodes.h"

struct TreeNode;

struct TreeNode {
  TreeNode * sibling;
  TreeNode * kid;
  LangNode * node;
};
