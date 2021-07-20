#include "binary_trees.h"
/**
* binary_tree_is leaf - a function that deletes an entire binary tree
* @node: is a pointer to the node to be checked 
* Return: return 1 or 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left == NULL || node->right == NULL)
        return (0);
    return (1);
}