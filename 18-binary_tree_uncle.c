#include "binary_trees.h"

/**
 * binary_tree_uncle - This will find the uncle of the tree
 * @node: This will point to the which uncle
 * Return: Will give or return a Null (0) if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
