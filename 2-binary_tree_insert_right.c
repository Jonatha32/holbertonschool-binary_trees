#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;
       if (parent == NULL)
	       return (NULL);
	new_node_right= malloc(sizeof(binary_tree_t));
	if (new_node_right == NULL)
		return (NULL);
	new_node_right->n = value;
	new_node_right->parent = parent;
	new_node_right->left = NULL;
	if (parent->right != NULL)
	{
		new_node_right->right = parent->right;
		parent->right = new_node_right;
	}
	else
		parent->right = new_node_right;
	return (new_node_right);
}
