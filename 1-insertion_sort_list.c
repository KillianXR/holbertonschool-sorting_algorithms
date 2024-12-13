#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending,
	* order using the Insertion sort algorithm
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		key = current;
		while (key->prev && key->n < key->prev->n)
		{
			tmp = key->prev;
			if (tmp->prev)
			tmp->prev->next = key;
			if (key->next)
			key->next->prev = tmp;

			tmp->next = key->next;
			key->prev = tmp->prev;
			key->next = tmp;
			tmp->prev = key;

			if (!key->prev)
				*list = key;

			print_list(*list);
		}
		current = current->next;
	}
}
