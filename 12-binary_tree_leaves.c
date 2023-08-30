#include "binary_trees.h"

/**
 * binary_tree_leaves - function that  counts the leaves in a binary tree.
 *
 * @tree: pointer to the root tree of the tree to count the no. of leaves.
 *
 * Return: number of leaves. If tree is NULL the function must return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t num1, num2;
size_t num = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

num1 = binary_tree_leaves(tree->left);
num2 = binary_tree_leaves(tree->right);
num += num1 + num2;

return (num);
}
