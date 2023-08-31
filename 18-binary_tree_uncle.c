#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: pointer to the node to find the uncle.
 *
 * If node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL.
 *
 * Return:  pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

binary_tree_t *p_left, *p_right;
binary_tree_t *pop;

*p_left = NULL;
*p_right = NULL;
*pop = (node != NULL ? node->parent : NULL);

if (pop != NULL)
{
if (pop->parent != NULL)
{
p_left = pop->parent->left;
p_right = pop->parent->right;
}
}

return (p_left == pop ? p_right : p_left);
}
