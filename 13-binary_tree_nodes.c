#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts 1 child node in the binary tree
 * @tree: Apointer needed to count the number of nodes
 * Return: a value return to 0 if the tree is Null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child_node = 0;

	if (tree)
	{
		child_node += (tree->left || tree->right) ? 1 : 0;
		child_node += binary_tree_nodes(tree->left);
		child_node += binary_tree_nodes(tree->right);
	}
	return (child_node);
}
