#include "binary_trees.h"

/**
* binary_tree_height - Returns the height of the binary tree
* @tree: the binary tree
* Return: the height of the binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_left++;
	height_right = binary_tree_height(tree->right);
	height_right++;

	if (height_left < height_right)
		return (height_right);
	else
		return (height_left);
}

/**
* binary_tree_is_perfect - Checks if the binary tree is perfect
* @tree: the binary tree
* Return: the perfection of the binary tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->right) &&
		    binary_tree_is_perfect(tree->left))
				return (1);
	}
	return (0);
}
