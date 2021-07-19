#include "binary_trees.h"
/**
* binary_tree_node - a function that creates a binary tree
* @parent: is a pointer to the parent
* @value: the value to put in the new node
* Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
	binary_tree_t *new_node = malloc(sizeof(binary_tree));

	if (!new_node)
		return NULL;

		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;

		return (new_node); 
}