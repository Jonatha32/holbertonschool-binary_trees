#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: pointer to the node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}

	return (depth);
}
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the nodeto measure
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int depth_l = 0;
	int depth_r = 0;

	if (tree == NULL)
		return (0);
	depth_l = binary_tree_depth(tree->left);
	depth_r = binary_tree_depth(tree->right);
	return (depth_l - depth_r);
}
