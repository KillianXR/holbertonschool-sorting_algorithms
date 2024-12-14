#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{
    size_t current_position, comparison_position, index_of_minimum;
    int temporary_value;

    /* Validate input */
    if (array == NULL || size < 2)
        return;

    /* Traverse the array */
    for (current_position = 0; current_position < size - 1; current_position++)
    {
        index_of_minimum = current_position;

        /* Find the index of the smallest element */
        for (comparison_position = current_position + 1; comparison_position < size; comparison_position++)
        {
            if (array[comparison_position] < array[index_of_minimum])
                index_of_minimum = comparison_position;
        }

        /* Swap if a smaller element is found */
        if (index_of_minimum != current_position)
        {
            temporary_value = array[current_position];
            array[current_position] = array[index_of_minimum];
            array[index_of_minimum] = temporary_value;

            /* Print array after each swap */
            print_array(array, size);
        }
    }
}
