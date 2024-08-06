#include "binary_trees.h"
/**
 * binary_tree_size - size
 * @tree: parameter
 * Return: 0 or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node to check
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;
	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_size = (1 << (height + 1)) - 1;

	if (size == expected_size)
		return (1);
	else 
		return (0);
}
