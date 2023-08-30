#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *
 * @node: pointer to the node to find the sibling.
 *
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL.
 *
 * Return:  pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

binary_tree_t *a = NULL;
binary_tree_t *b = NULL;

if (node != NULL)
{
if (node->parent != NULL)
{

a = node->parent->left;
b = node->parent->right;
}
}

return (a == node ? b : a);
}
