#include "binary_trees.h"

/**
 * levelorder - print the nodes by level
 *
 * @p_node: pointer to the node
 * @p_func: pointer to a functionn
 * @level: the level
 *
 */

void levelorder(binary_tree_t *p_node, void (*p_func)(int), int level)
{

if (p_node != NULL && p_func != NULL)
{

if (level == 1)
p_func(p_node->n);

if (level > 1)
{
levelorder(p_node->left, p_func, level - 1);
levelorder(p_node->right, p_func, level - 1);
}
}
}


/**
 * binary_tree_levelorder - level-order traversal
 *
 * @tree: pointer to the tree
 * @func: pointer to a function
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

size_t height = 0;
size_t count;

binary_tree_t *cp_tree = (binary_tree_t *)tree;

if (tree == NULL || func == NULL)
return;

height = binary_tree_height(tree);

for (count = 0; count <= height + 1; count++)
{
levelorder(cp_tree, func, count);
}

}

