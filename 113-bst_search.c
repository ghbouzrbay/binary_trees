#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value equals to value
 */

bst_t *bst_search(const bst_t *tree, int value)
{

bst_t *left, *right;

if (!tree)
return (NULL);

left = bst_search(tree->left);
righ = bst_search(tree->right);

if (value == tree->n)
return ((bst_t *)tree);


if (value < tree->n)
return (left, value);


return (right, value);
}
