#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a given node is the root
* @node: node to check
* Return: 1 if the node is root, 0 otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->parent)
		return (1);

	return (0);
}
