#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - binary tree insert
 * @parent: parameter
 * @value: parameter
 * Return: a or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *a;
if (parent == NULL)
return (NULL);
a = malloc(sizeof(binary_tree_t));
if (a == NULL)
return (NULL);
a->n = value;
a->parent = parent;
a->left = parent->left;
a->right = NULL;
if (parent->left != NULL)
parent->left->parent = a;
parent->left = a;
return (a);
}
