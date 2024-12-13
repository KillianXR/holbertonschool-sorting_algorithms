#include "sort.h"
#include <stddef.h>

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
    if (array == NULL || size < 2) /* Validate input */
        return;

    for (size_t current_index = 0; current_index < size - 1; current_index++)
    {
        size_t smallest_index = current_index; /* Assume current index holds the smallest value */

        for (size_t comparison_index = current_index + 1; comparison_index < size; comparison_index++)
        {
            if (array[comparison_index] < array[smallest_index])
            {
                smallest_index = comparison_index; /* Update the index of the smallest value */
            }
        }

        /* Swap the smallest element found with the current index */
        if (smallest_index != current_index)
        {
            int temp = array[smallest_index];
            array[smallest_index] = array[current_index];
            array[current_index] = temp;

            print_array(array, size); /* Print array after each swap */
        }
    }
}
