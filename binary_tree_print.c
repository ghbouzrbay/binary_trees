#include "binary_trees.h"

/* Original code from http://stackoverflow.com/a/13755911/5184480 */

/**
 * _print_ - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @buffer: Buffer
 *
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **buffer)
{
	char bffer[6];
	int width, left, right, lefty, n;

	if (!tree)
		return (0);
	lefty = (tree->parent && tree->parent->left == tree);
	width = sprintf(bffer, "(%03d)", tree->n);
	left = _print_(tree->left, offset, depth + 1, buffer);
	right = _print_(tree->right, offset + left + width, depth + 1, buffer);
	for (n = 0; n < width; n++)
		buffer[depth][offset + left + n] = bffer[n];
	if (depth && lefty)
	{
		for (n = 0; n < width + right; n++)
			buffer[depth - 1][offset + left + width / 2 + n] = '-';
		buffer[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !lefty)
	{
		for (n = 0; n < left + width; n++)
			buffer[depth - 1][offset - width / 2 + n] = '-';
		buffer[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
}

/**
 * _height_ - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height_(const binary_tree_t *tree)
{
	size_t height1, height2;

	height1 = tree->left ? 1 + _height_(tree->left) : 0;
	height2 = tree->right ? 1 + _height_(tree->right) : 0;
	return (height1 > height2 ? height1 : height2);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **root;
	size_t height;
	size_t n, m;

	if (!tree)
		return;
	
	height = _height(tree);
	root = malloc(sizeof(*root) * (height + 1));
	if (!root)
		return;
	
	for (n = 0; n < height + 1; n++)
	{
		root[n] = malloc(sizeof(**root) * 255);
		if (!root[n])
			return;
		
		memset(root[i], 32, 255);
	}
	_print_(tree, 0, 0, root);
	
	for (n = 0; n < height + 1; n++)
	{
		for (m = 254; m > 1; --m)
		{
			if (root[n][m] != ' ')
				break;
			root[n][m] = '\0';
		}
		printf("%s\n", roo[n]);
		free(root[n]);
	}
	free(root);
}
