#include "binary_trees.h"

/**
 * print_two_d - Stores binary tree node values in a 2D array
 *
 * @tree: Pointer to the root node of the tree to store values
 * @off: Horizontal offset of the current node
 * @level: Current level of the binary tree
 * @s: 2D array to store node values
 * Return: the sum of the sizes.
 */
static int print_two_d(const binary_tree_t *tree, int off, int level, char **s)
{
	char b[6];
	int width, left, right, new_left, m;

	if (!tree)
		return (0);

	new_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_two_d(tree->left, off, level + 1, s);
	right = print_two_d(tree->right, off + left + width, level + 1, s);

	for (m = 0; m < width; m++)
		s[level][off + left + m] = b[m];
	if (level && new_left)
	{
		for (m = 0; m < width + right; m++)
			s[level - 1][off + left + width / 2 + m] = '-';
		s[level - 1][off + left + width / 2] = '.';
	}
	else if (level && !new_left)
	{
		for (m = 0; m < left + width; m++)
			s[level - 1][off - width / 2 + m] = '-';
		s[level - 1][off + left + width / 2] = '.';
	}
	return (left + width + right);
}
/**
 * mes_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree, or 0 if tree is NULL
 */

static int mes_height(const binary_tree_t *tree)
{
	size_t l_height, right_height;

	l_height = tree->left ? 1 + mes_height(tree->left) : 0;
	right_height = tree->right ? 1 + mes_height(tree->right) : 0;

	return (l_height > right_height ? l_height : right_height);
}
/**
 * binary_tree_print - Prints a binary tree horizontally
 * @tree: Pointer to the tree for the binary tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
	size_t height, m, k;
	char **size;

	if (!tree)
		return;
	height = mes_height(tree);
	size = malloc(sizeof(*size) * (height + 1));
	if (!size)
		return;
	for (m = 0; m < height + 1; m++)
	{
		size[m] = malloc(sizeof(**size) * 255);
		if (!size[m])
			return;
		memset(size[m], 32, 255);
	}
	print_two_d(tree, 0, 0, size);
	for (m = 0; m < height + 1; m++)
	{
		for (k = 254; k > 1; --k)
		{
			if (size[m][k] != ' ')
				break;
			size[m][k] = '\0';
		}
		printf("%s\n", size[m]);
		free(size[m]);
	}

	free(size);
}
