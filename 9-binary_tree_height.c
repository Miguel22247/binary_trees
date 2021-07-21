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
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
