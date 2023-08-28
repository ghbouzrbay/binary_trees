#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the,
 * right-child of another node.
 *
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent,
 * is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node = NULL;

if (parent != NULL)
{
node = malloc(sizeof(binary_tree_t));
if (node != NULL)
{
node->left = NULL;
node->right = parent->right;
node->parent = parent;
node->n = value;
if (parent->right != NULL)
parent->right->parent = node;
parent->right = node;
}
}
return (node);
}
