#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @tree_node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *tree_node)
{
    if (tree_node == NULL || tree_node->left != NULL || tree_node->right != NULL)
        return (0);

    return (1);
}
