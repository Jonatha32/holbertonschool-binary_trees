#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_uncle - finds the uncle of a node
 * @node: node to find the uncle
 * Return: a pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = node->parent;

	if (temp == NULL || node == NULL || node->parent->parent == NULL)
		return (NULL);

	node = node->parent->parent;
	if (node->left == temp)
	       return (node->right);
	else 
		return (node->left);	
}
