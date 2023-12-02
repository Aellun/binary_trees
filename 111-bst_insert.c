#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: A double ptr to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A ptr to the created node, or NULL on failure.
 *
 * Description:If the address stored in tree is NULL,
 * the created node must become the root node.
 * If the value is already present in the tree, it must be ignored
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *old_node, *new_node;

	if (tree != NULL)
	{
		old_node = *tree;

		if (old_node == NULL)
		{
			new_node = binary_tree_node(old_node, value);
			if (new_node == NULL)
				return (NULL);
			return (*tree = new_node);
		}

		if (value < old_node->n) /* insert in left subtree */
		{
			if (old_node->left != NULL)
				return (bst_insert(&old_node->left, value));

			new_node = binary_tree_node(old_node, value);
			if (new_node == NULL)
				return (NULL);
			return (old_node->left = new_node);
		}
		if (value > old_node->n) /* insert in right subtree */
		{
			if (old_node->right != NULL)
				return (bst_insert(&old_node->right, value));

			new_node = binary_tree_node(old_node, value);
			if (new_node == NULL)
				return (NULL);
			return (old_node->right = new_node);
		}
	}
	return (NULL);
}
