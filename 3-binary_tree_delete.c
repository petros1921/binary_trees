#include "binary_trees.h"

/**
 * binary_tree_delete - It deletes the binary tree.
 * @node: Is a pointer to the root node of the tree that is beaing delated.
 */
void binary_tree_delete(binary_tree_t *node)
{
	if (node != NULL)
	{
		binary_tree_delete(node->left);
		binary_tree_delete(node->right);
		free(node);
	}
}
