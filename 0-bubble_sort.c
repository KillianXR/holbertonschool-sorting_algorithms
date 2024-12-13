#include <stddef.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integer in ascending order using Bubble Sort
 * @array: Table of integers to sort
 * @size: Table size
 *
 * Description:
 * - Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
int index, comparator, tmp;
	if (array == NULL || size < 2)
	return;
for (index = 0; index < (int)size - 1; index++)
{
	for (comparator = 0; comparator < (int)size - index - 1; comparator++)
{
		if (array[comparator] > array[comparator + 1])
{
			tmp = array[comparator];
			array[comparator] = array[comparator + 1];
			array[comparator + 1] = tmp;
			print_array(array, size); /* Print after each swap */
}
}
}
}
