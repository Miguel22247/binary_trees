#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of the node
* @node: node to find the sibling
* Return: the height of the binary tree
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return NULL;
	if (node->parent->right == node)
		return(node->parent->left);
	else
		return(node->parent->right);
}
