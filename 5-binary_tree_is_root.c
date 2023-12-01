#include "binary_trees.h"

/**
 * binary_tree_is_root - A function that checks if a node is a root
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is root 0 if otherwise or is NUll
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
