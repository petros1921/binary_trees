i#include "binary_trees.h"

size_t binary_he(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measure the balance factor
 * @tree: Pointer to which the balance factore is measured
 * Return: if there is no trade will return (0).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_he(tree->left) - binary_he(tree->right));

	return (0);
}

/**
 * binary_he - the hight of the binary tree will be measured.
 * @tree: A pointer to the node of the root
 * Return: null in the proccess od a tree is Null (0).
 */
size_t binary_he(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_he(tree->left) : 1;
		rig = tree->right ? 1 + binary_he(tree->right) : 1;

		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
