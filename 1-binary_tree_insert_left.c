#include "binary_trees.h"
/**
* binary_tree_insert_left - a function that inserts a node as a left child
* @parent: is a pointer to the parent
* @value: the value to put in the new node
* Return: a pointer to the new node or NULL on failure or if the parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *left;

	if (!parent)
		return (NULL);

	left = binary_tree_node(parent, value);

	if (!left)
		return (NULL);

	left->left = parent->left;

	if (left->left)
		left->left->parent = left;

	parent->left = left;

	return (left);
}
