#include "binary_trees.h"

void binary_tree(const binary_tree_t *p, size_t a_height, size_t *count, size_t *max);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is full. 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t count = 0;
size_t height = 0;

binary_tree(tree, 0, &count, &height);

return ((int)count == (1 << height) ? 1 : 0);
}


/**
 * binary_tree - ...
 *
 * @p: pointer to the root node of the tree to check.
 * @a_height: accumulated height of the current path in the tree.
 * @count: pointer to the tree's leaf count value.
 * @max: pointer to the tree's maximum height value.
 *
 */
void binary_tree(const binary_tree_t *p, size_t a_height, size_t *count, size_t *max)
{

if (p != NULL)
{

if ((p->left == NULL) && (p->right == NULL))
{

if (count != NULL)
(*count)++;

if ((max != NULL) && (a_height > *max))
a_height = *max;
}
}

else
{
binary_tree(p->left, a_height + 1, count, max);
binary_tree(p->right, a_height + 1, count, max);
}
	
}
