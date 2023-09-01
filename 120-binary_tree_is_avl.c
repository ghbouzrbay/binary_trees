
#include "binary_trees.h"

/**
 * height_binary_tree - measures the height of a binary tree.
 *
 * @p: pointer to the root node of the tree to measure the height.
 *
 * Return: height of the tree.
 */

size_t height_binary_tree(const binary_tree_t *p)
{
size_t left_height, right_height;
right_height = 0;
left_height = 0;

if (!p)
return (0);

if (p->right)
right_height = height_binary_tree(p->right) + 1;

if (p->left)
left_height = height_binary_tree(p->left) + 1;

if (right_height > left_height)
return (right_height);

else
return (left_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @p: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *p)
{
int left_height, right_height, height;
right_height = 0;
left_height = 0;
height = 0;

if (!p)
return (0);

if (p->right)
right_height = height_binary_tree(p->right) + 1;

if (p->left)
left_height = height_binary_tree(p->left) + 1;

height += left_height - right_height;
return (left_height - right_height);
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise.
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
int avl = 0;

if (!tree)
return (0);

avl = binary_tree_balance(tree);
if (avl > 1 || avl < -1)
return (0);

if (tree->left && !binary_tree_is_avl(tree->left))
return (0);

if (tree->right && !binary_tree_is_avl(tree->right))
return (0);

return (1);
}


