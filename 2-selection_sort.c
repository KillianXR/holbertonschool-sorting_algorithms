#include "sort.h"
/**
 * Selection sort algorithm for an array of integers.
 *
 * @array: Pointer to the array to sort.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
	if (array == NULL || size < 2) /*Validate input.*/
	return;
			for (int current_position = 0; current_position < (int)size - 1; current_position++)
{
			int smallest_index = current_position;
			/*Tracks the smallest element's index.*/
					for (int next = current_position + 1; next < (int)size; next++)
{
					if (*(array + next) < *(array + smallest_index))
{
					smallest_index = next;
}
}
							/*Swap the values of the elements.*/
							int temporary = *(array + smallest_index);
							*(array + smallest_index) = *(array + current_position);
							*(array + current_position) = temporary;
								print_array(array, size); /*Print the array after each swap.*/
}
}
