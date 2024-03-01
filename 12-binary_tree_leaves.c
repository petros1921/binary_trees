#include "binary_trees.h"

/**
 * binary_tree_leaves - Binary tree counter.
 * @tree: pointer to the root node tree to count the number lvl.
 * Return: if the tree is Null it will give Zero(0).
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree)
	{
		tree_leaves += (!tree->left && !tree->right) ? 1 : 0;
		tree_leaves += binary_tree_leaves(tree->left);
		tree_leaves += binary_tree_leaves(tree->right);
	}
	return (tree_leaves);
}
