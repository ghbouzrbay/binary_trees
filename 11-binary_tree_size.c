#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: size of a binary tree. If tree is NULL,
 * your function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

size_t size_left, size_right;
size_t size = 0;

if (tree == NULL)
{
return (0);
}

size_left = binary_tree_size(tree->left);
size_right = binary_tree_size(tree->right);
size += size_right + size_left;

return (size + 1)
}
