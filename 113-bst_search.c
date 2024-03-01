#include "binary_trees.h"

/**
 * bst_search - This will searche on the tree
 * @tree: Pointer to the root node
 * @value: which value tot seaerch
 * Return: will give a poiter that got the value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}

	return (NULL);
}
