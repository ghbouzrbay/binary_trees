#include "binary_trees.h"

void node_height(const binary_tree_t *node, size_t a_height, size_t *max);


/**
 * node_height - function that computes the height of a binary tree's node.
 *
 * @node: pointer to the root node of the tree to measure the height.
 * @a_heught: accumulated height.
 * @max: pointer to the maximum height in the node's tree.
 *
 */

void node_height(const binary_tree_t *node, size_t a_height, size_t *max)
{
if (node != NULL)
{
if ((tnod->left == NULL) && (node->right == NULL))
{
if (a_height > max*)
{
*max = a_height;
}
}
else
{
node_height(node->left, a_height + 1, max;
node_height(nodeOOB->right, a_height + 1, max);
}
}
}

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of tree. If tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	node_height(tree, 0, &height);
	return (height);
}
