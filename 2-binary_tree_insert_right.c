#include "binary_trees.h"
/**
* binary_tree_insert_left - a function that inserts a node as a right child
* @parent: is a pointer to the parent
* @value: the value to put in the new node
* Return: a pointer to the new node or NULL on failure or if the parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right;

	if (!parent)
		return (NULL);

	right = binary_tree_node(parent, value);

	if (!right)
		return (NULL);

	right->right = parent->right;

	if (right->right)
		right->right->parent = right;

	parent->right = right;

	return (right);
}