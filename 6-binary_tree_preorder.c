#include "binary_trees.h"
/**
* binary_tree_preorder - goes through a binary tree in preorder.
* @tree: tree
* @func: function
* Return: 1 if the node is root, 0 otherwise
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree) {
		return;
	}
	else {
		func(tree->n);

		if (tree->left)
			binary_tree_preorder(tree->left, func);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
