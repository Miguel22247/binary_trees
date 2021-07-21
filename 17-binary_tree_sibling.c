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
	if (node->parent->left == node)
	{
		if (node->parent->right)
		{
			return (node->parent->right);
		}
		else
		{
			return (NULL);
		}	
	}
	else
	{
		if (node->parent->left)
		{
			if (node->parent->left == node)
			{
				return (node->parent->left);
			}
			else
			{
				return (NULL);
			}
		}
	}
}
