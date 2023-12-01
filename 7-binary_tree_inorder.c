#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes thru
 * a binary tree using in-order traversal.
 * @tree: A ptr to the root node of the tree to traverse.
 * @func: A ptr to a function to call for each node.
 * do nothing if tree of func is NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
