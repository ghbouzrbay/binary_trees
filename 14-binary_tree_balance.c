#include "binary_trees.h"

/**
 * _binary_tree_balance_ - function that computes
 * the height of a binary tree's node.
 *
 * @p: pointer to the root node of the tree to measure the height.
 * @a_height: accumulated height.
 * @max: pointer to the maximum height in the node's tree.
 *
 */

void _binary_tree_balance_(const binary_tree_t *p, int a_height, int *max)
{

if (p != NULL)
{

if ((p->left == NULL) && (p->right == NULL))
{

if (a_height > *max)
{
a_height = *max;
}
}

else
{
_binary_tree_balance_(p->left, a_height + 1, max);
_binary_tree_balance_(p->right, a_height + 1, max);
}

}
}


/**
 * binary_tree_balance - function that measures the balance factor of,
 * a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor of a binary tree. If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)

{

int balance_factor = 0, height_ = 0, _height = 0;

if (tree == NULL)
return (0);

_binary_tree_balance_(tree->left, 1, &height_);
_binary_tree_balance_(tree->right, 1, &_height);
balance_factor += height_ - _height;

return (balance_factor);
}
