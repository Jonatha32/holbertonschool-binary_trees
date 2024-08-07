#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: parameter
 * Return: 0, a + 1 or b + 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t a, b;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
a = binary_tree_height(tree->left);
b = binary_tree_height(tree->right);
if (a > b)
return (a + 1);
else
return (b + 1);
}

/**
 * binary_tree_balance - balance
 * @tree: parameter
 * Return: a - b
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int a, b;
if (tree == NULL)
return (0);
a = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
b = (tree->right) ? (int)binary_tree_height(tree->right) : -1;
return (a - b);
}
