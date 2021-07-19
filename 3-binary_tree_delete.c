#include "binary_trees.h"
/**
* binary_tree_delete- a function that deletes an entire binary tree
* @tree: the binary tree to be deleted
* Return: delete or if tree is NULL do nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}