#include "binary_trees.h"

int full_recursive(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Full binary tree checker if it is full or not.
 * @tree: pointer to the root node.
 * Return: if the tree is null it will return a 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_recursive(tree));
}

/**
 * full_recursive - This will check if the tree is full recursively
 * @tree: This is a  pointer to the root node.
 * Return: 0 if the node is null
 */
int full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    full_recursive(tree->left) == 0 ||
		    full_recursive(tree->right) == 0)

			return (0);
	}

	return (1);
}
