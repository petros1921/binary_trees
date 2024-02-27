#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @node: A pointer to the root node of the tree to delete.
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
