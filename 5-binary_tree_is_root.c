#include "binary_trees.h"

/**
 * binary_tree_is_root - It checks if the node is the root of the tree.
 * @tree_node: Is the pointer to the node to be checked.
 * Return: If the node is a root - 1.
 */
int binary_tree_is_root(const binary_tree_t *tree_node)
{
	if (tree_node == NULL || tree_node->parent != NULL)
		return (0);

	return (1);
}
