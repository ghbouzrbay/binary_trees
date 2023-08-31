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

binary_tree_t *p_left = NULL;
binary_tree_t *p_right = NULL;
binary_tree_t *pop = (node != NULL ? node->parent : NULL);
binary_tree_t  *uncle;

if (pop != NULL)
{
if (pop->parent != NULL)
{
p_left = pop->parent->left;
p_right = pop->parent->right;
}
}

uncle = (p_left == pop ? p_right : p_left);
return (uncle);
}
