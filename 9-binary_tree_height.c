#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree. If tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t *height;
size_t n;
height = 0;
n = 0;

if (tree != NULL)
{
if ((tree->left == NULL) && (tree->right == NULL))
{
if (n > *height)
{
*height = n;
}
}
else
{
tree->left, n + 1, height;
tree->right, n + 1, height;
}
}

return (height);
}
