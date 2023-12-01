#include "binary_trees.h"

/**
 * binary_tree_delete - A function that Deletes entire binary tree.
 * @tree: A ptr to the root node of the tree to delete.
 * do nothing if tree is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
