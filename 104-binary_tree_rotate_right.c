#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs
 * a right-rotation on a binary tree
 * @tree: A ptr to the root node of the tree to rotate.
 *
 * Return:new root node ptr after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pin, *cache;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	pin = tree->left;
	cache = pin->right;
	pin->right = tree;
	tree->left = cache;
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
