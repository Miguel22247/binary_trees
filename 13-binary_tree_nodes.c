#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child
* @tree: is the binary tree
* Return: the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree || !tree->left || !tree->right)
		return (0);

	if (tree->left || tree->right)
		node_count++;
	else
		node_count = node_count + binary_tree_nodes(tree->left);
		node_count = node_count + binary_tree_nodes(tree->right);
		return (node_count);
}
