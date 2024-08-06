#include "binary_trees.h"
/**
 * binary_tree_is_full - tree is full
 * @tree: parameter
 * Return: 1 and ...
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int a, b;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left != NULL && tree->right != NULL)
{
a = binary_tree_is_full(tree->left);
b = binary_tree_is_full(tree->right);
return (a && b);
}
return (0);
}
