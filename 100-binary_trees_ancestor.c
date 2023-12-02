#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest
 * common ancestor of two nodes
 * @first: ptr to the first node.
 * @second: ptr to the second node.
 *
 * Return:NULL if no common ancestor found else
 * common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *dana, *kwara;

	if (!first || !second)
		return (NULL);

	dana = first->parent, kwara = second->parent;
	if (first == kwara || !dana || (!dana->parent && kwara))
		return (binary_trees_ancestor(first, kwara));
	else if (dana == second || !kwara || (!kwara->parent && dana))
		return (binary_trees_ancestor(dana, second));
	return (binary_trees_ancestor(dana, kwara));
}
