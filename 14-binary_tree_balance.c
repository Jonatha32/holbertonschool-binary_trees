#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the nodeto measure
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int depth_l = 0;
	int depth_r = 0;
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (tree == NULL || temp == NULL)
		return (0);
	if (tree->left != NULL)
	{
		for (temp = tree->left; temp != NULL; temp = temp->left)
			depth_l++;
	}
	if (tree->right != NULL)
	{
		for (temp = tree->right; temp != NULL; temp = temp->right)
			depth_r++;
	}
	return (depth_l - depth_r);
}
