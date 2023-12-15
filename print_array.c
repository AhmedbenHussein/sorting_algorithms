#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Print the arrays an int
 *
 * @size: Num an elementt this @arrays
 * @array: an arrays too be prints
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
