#include "binary_trees.h"

/**
 * binary_tree_size - For thebinary tree this will measure the size.
 * @tree: A pointer to the tree.
 * Return: will return o if the size is null.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t given_size = 0;

	if (tree)
	{
		given_size += 1;
		given_size += binary_tree_size(tree->left);
		given_size += binary_tree_size(tree->right);
	}
	return (given_size);
}
