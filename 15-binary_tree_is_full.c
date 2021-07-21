#include "binary_trees.h"
/**
* binary_tree_is_full - Returns if a binary tree is full
* @tree: the binary tree
* Return: 0 if the tree is null
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (!tree)
		return (0);

	else if (!tree->left && !tree->right)
		return (1);


	else if (tree->left && tree->right)
	{
		x = binary_tree_is_full(tree->left);
		y = binary_tree_is_full(tree->right);

		if (x == 1 && y == 1)
			return (1);
	}
	return (0);
}