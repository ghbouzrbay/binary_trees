#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in,
 * a binary tree.
 *
 * @tree: pointer to the node to measure the depth.
 *
 * Return: depth of a node in a binary tree. If tree is NULL,
 * your function must return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth_node = 0;
binary_tree_t *node = NULL;

if (tree != NULL)
{
node = tree->parent;

do {
depth_node++;
node = node->parent;
}while  (node != NULL)

}

return (depth_node);
}
