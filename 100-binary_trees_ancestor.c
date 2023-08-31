#include "binary_trees.h"

/**
 * returns - measures the depth of a node in a binary tree
 *
 * @p: pointer to the node to measure the depth
 *
 * Return: ancestor of the node
 */

size_t returns(const binary_tree_t *p)
{
size_t ancestor = 0;

if (p == NULL)
return (0);

while (p->parent != NULL)
{
ancestor++;
p = p->parent;
}

return (ancestor);
}


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 *
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				 const binary_tree_t *second)
{

size_t depth1, depth2;
binary_tree_t *ancestor;

depth1 = 0;
depth2 = 0;

if (first == NULL || second == NULL)
return (NULL);

depth1 = returns(first);
depth2 = returns(second);

while (depth1 > depth2)
{
first = first->parent;
depth1--;
}

while (depth2 > depth1)
{
second = second->parent;
depth2--;
}

while (first != second)
{
first = first->parent;
second = second->parent;
}

ancestor = ((binary_tree_t *)first);
return (ancestor);
}


