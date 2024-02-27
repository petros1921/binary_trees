#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another
 *                           node in a binary tree.
 * @node_parent: A pointer to the node to insert the left child in.
 * @node_value: The value to store in the new node.
 *
 * Return: If node_parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If node_parent already has a left child, the new node
 *              takes its place, and the old left child is set as
 *              the left child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *node_parent, int node_value)
{
    binary_tree_t *new_node;

    if (node_parent == NULL)
        return (NULL);

    new_node = binary_tree_node(node_parent, node_value);
    if (new_node == NULL)
        return (NULL);

    if (node_parent->left != NULL)
    {
        new_node->left = node_parent->left;
        node_parent->left->parent = new_node;
    }
    node_parent->left = new_node;

    return (new_node);
}
