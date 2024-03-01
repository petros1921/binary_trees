#include "binary_trees.h"

/**
 * binary_tree_is_leaf - It checks is the node is a leaf of a tree.
 * @tree_node: Is a pointer to the node to be checked.
 * Return: If the node is a leaf - 1.
 */
int binary_tree_is_leaf(const binary_tree_t *tree_node)
{
	if (tree_node == NULL || tree_node->left != NULL || tree_node->right != NULL)
		return (0);

	return (1);
}
