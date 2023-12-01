#include "binary_trees.h"

/**
 * binary_tree_uncle - fnction that finds the uncle of a node
 * @node: A ptr to the node to find the uncle of.
 *
 * Return: NULL if the node has no uncle otherwise
 * a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
			node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
