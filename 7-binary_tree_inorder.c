#include "binary_trees.h"
/**
* binary_tree_inorder - goes through a binary tree
* @tree: binary tree
* @func:
* Return: if tree or func is null, do nothing 
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	
	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
