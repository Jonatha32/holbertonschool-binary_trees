#include "binary_trees.h"
/**
 * binary_tree_nodes - nodes
 * @tree: parameter
 * Return: a or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
size_t a = 0;
if (tree->left != NULL || tree->right != NULL)
a = 1;
a += binary_tree_nodes(tree->left);
a += binary_tree_nodes(tree->right);
return (a);
}
