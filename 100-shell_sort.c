#include "sort.h"

/**
 * swap_ints - Swaps twoo int ann arrays.
 * @b: The second integer to swap.
 * @a: The first integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sorts aan arrays off int an ascendings
 * Description: Use this Knuths interv sequences.
 * @size: the sizes an arrays.
 * orders used a shelll sorts algorithms.
 * @array: the arrays an int.
 *
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
