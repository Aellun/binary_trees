#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs
 * a left-rotation on a binary tree.
 * @tree: A ptr to the root node of the tree to rotate.
 *
 * Return:new root ptr node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pin, *cache;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pin = tree->right;
	cache = pin->left;
	pin->left = tree;
	tree->right = cache;
	if (cache != NULL)
		cache->parent = tree;
	cache = tree->parent;
	tree->parent = pin;
	pin->parent = cache;
	if (cache != NULL)
	{
		if (cache->left == tree)
			cache->left = pin;
		else
			cache->right = pin;
	}

	return (pin);
}
