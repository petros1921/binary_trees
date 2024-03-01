#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);
int recursion_p(int a, int b);
size_t tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - This will check the perfection of the tree
 * @tree: This is the pointer for the chedker
 * Return: This will give us a 1for perfection
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_h = 0, tree_s = 0, rec_power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	tree_h = tree_height(tree);
	tree_s = tree_size(tree);

	rec_power = (size_t)recursion_p(2, tree_h + 1);
	return (rec_power - 1 == tree_s);
}

/**
 * recursion_p - a the power of b
 * @a: Exponente value for the recurision
 * @b: The power which is rais to a given a
 * Return: for nagative it will give a -1 and it will also a give a value
 */
int recursion_p(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * recursion_p(a, b - 1));
}

/**
 * tree_size - Size of the tree will be measured
 * @tree: pointer to which tree the measure is
 * Return: Tree size for the binasry
 */

size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}

/**
 * tree_height - Highet of the binary_tree will be measured
 * @tree: Pointer to which tree to be measured
 * Return: the highet of the tree will highet
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + tree_height(tree->right) : 0;
	return (left_h > right_h ? left_h : right_h);
}
