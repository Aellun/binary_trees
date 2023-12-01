#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * of another
 * @parent: A ptr to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: NULL If parent is NULL or an error occurs
 * otherwise ptr to the new node
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
