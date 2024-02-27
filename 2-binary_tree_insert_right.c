#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child
 *                            of another node in a binary tree.
 * @node_parent: A pointer to the node to insert the right child in.
 * @node_value: The value to store in the new node.
 *
 * Return: If node_parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If node_parent already has a right child, the new node
 *              takes its place, and the old right child is set as
 *              the right child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *node_parent, int node_value)
{
    binary_tree_t *new_node;

    if (node_parent == NULL)
        return (NULL);

    new_node = binary_tree_node(node_parent, node_value);
    if (new_node == NULL)
        return (NULL);

    if (node_parent->right != NULL)
    {
        new_node->right = node_parent->right;
        node_parent->right->parent = new_node;
    }
    node_parent->right = new_node;

    return (new_node);
}
