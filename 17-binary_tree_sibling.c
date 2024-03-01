#include "binary_trees.h"

/**
 * binary_tree_sibling - Node sibiling of the tree will be finded
 * @node: Node pointer to which the sibiling is
 * Return: No sibiling or Null for Null sibiling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
