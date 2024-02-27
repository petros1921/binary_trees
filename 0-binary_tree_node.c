#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @node_parent: A pointer to the parent of the node to create.
 * @node_value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *node_parent, int node_value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = node_value;
    new_node->parent = node_parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
