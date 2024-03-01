#include "binary_trees.h"

/**
 * array_to_bst - Array nuild search in the tree
 * @array: Pointer to which array it will converted
 * @size: the size the numbere of elem in the Array
 * Return: return the pointer array
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *ar_tree = NULL;
	size_t m, k;

	if (array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
	{
		for (k = 0; k < m; k++)
		{
			if (array[k] == array[m])
				break;
		}
		if (k == m)
		{
			if (bst_insert(&ar_tree, array[m]) == NULL)
				return (NULL);
		}
	}

	return (ar_tree);
}
