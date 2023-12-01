#include "binary_trees.h"

/**
 * binary_tree_height -function that measures the height of a binary tree.
 * @tree: A ptr to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL otherwise height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, h = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > h) ? l : h);
	}
	return (0);
}
