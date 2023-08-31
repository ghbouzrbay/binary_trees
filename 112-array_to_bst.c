#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array.
 * @array: pointer to the first element of the array to be converted.
 * @size: number of element in the array.
 *
 * If a value of the array is already present in the tree, this value must
 * be ignored.
 *
 * Return: pointer to the root node of the created BST, or NULL on failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{

bst_t *root = NULL;
size_t n;

if (!array)
return (NULL);


for (n = 0; n < size; n++)
{
bst_insert(&root, array[n]);
}

return (root);
}
