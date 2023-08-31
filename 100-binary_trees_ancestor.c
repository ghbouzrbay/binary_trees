#include "binary_trees.h"

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
	
size_t depth1 = 0;
size_t depth2 = 0;
binary_tree_t *ancestor;

if (first == NULL || second == NULL)
return (NULL);

while (first->parent != NULL)
{
depth1++;
first = first->parent;
}
return (depth1);
}

while (second->parent != NULL)
{
depth2++;
second = second->parent;
}

return (depth2);
}

while (depth1 > depth2)
{
first = first->parent;
depth1--;

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


