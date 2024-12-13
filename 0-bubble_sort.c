#include "sort.h"
/**
* bubble_sort - Sorts an array of integers using the Bubble Sort algorithm
* @array: Table of integers to sort
* @size: Table size
*
* Description:
* - The algorithm compares each element of the table with the next.
* - If one element is larger than the next, they are exchanged.
* - This process is repeated until the table is fully sorted.
* - The function prints the table at each exchange by calling print_array.
*
* Notes:
* - If NULL table or has less than 2 elements, return foction
*/
void bubble_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	return;/*It returns if empty table or that 1 element*/
	size_t index, comparator;
	int tmp;

		for (index = 0; index < size - 1; index++)
{
		for (comparator = 0; comparator < size - index - 1; comparator++)
{
		if (array[comparator] > array[comparator + 1])
{
	tmp = array[comparator];
	array[comparator] = array[comparator + 1];
	array[comparator + 1] = tmp;
print_array(array, size);
}
}
}
}
