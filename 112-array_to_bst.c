#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: A ptr to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A prt to the root node of the created BST, or NULL upon failure.
 * Description:If a value of the array is already present in the tree,
 * this value must be ignored
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t k, m;

	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		for (m = 0; m < k; m++)
		{
			if (array[m] == array[k])
				break;
		}
		if (m == k)
		{
			if (bst_insert(&tree, array[k]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
