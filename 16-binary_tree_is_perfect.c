#include "binary_trees.h"



/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full. 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

size_t leaves_ = 0;
size_t height = 0;
size_t current = 0;

if (tree != NULL)
{

if ((tree->left == NULL) && (tree->right == NULL))
{

if (leaves != NULL)
(*leaves)++;

if ((height != NULL) && (n > *height))
*height = n;
}

else
{
binary_tree_is_perfect(tree->left);
binary_tree_is_perfect(tree->right);
return (current + 1);
}
}


return ((int)leaves == (1 << height) ? 1 : 0);
}
