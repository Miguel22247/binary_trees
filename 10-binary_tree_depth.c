#include "binary_trees.h"
/**
* binary_tree_depth - a function that measures the depth of the tree
* @tree:tree
* Return: 0 if the tree is null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_right = 0;
	size_t depth_left = 0;

	if (!tree)
		return (0);
	
	if (!tree->parent)
		return (0);

	depth_right = binary_tree_depth(tree->parent);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);		
}
