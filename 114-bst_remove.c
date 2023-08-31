#include "binary_trees.h"
bst_t *bst_min(bst_t *min_node);

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: pointer to the root node of the tree where you will remove a node
 * @value: value to remove in the tree
 * Return: pointer to the new root node of the tree after removing the desired
 * value
 */

bst_t *bst_remove(bst_t *root, int value)
{
bst_t *left_root, *right_root, *p;
left_root = root->left;
right_root = root->right;
if (!root)
return (NULL);

if (value < root->n)
root->left = bst_remove(root->left, value);

else if (value > root->n)
root->right = bst_remove(root->right, value);
else
{
if (!left_root)
{
p = right_root;
free(root);
return (p);
}
else if (!right_root)
{
p = left_root;
free(root);
return (p);
}
p = bst_min(root->right);
root->n = p->n;
root->right = bst_remove(root->right, p->n);
}
return (root);
}

/**
 * bst_min - search the minimum node in a binary search tree.
 *
 * @min_node: pointer to the root node of the tree to traverse.
 *
 * Return: pointer to the minimum node
 */

bst_t *bst_min(bst_t *min_node)
{
do {
min_node = min_node->left;
} while (min_node->left != NULL);

return (min_node);
}

