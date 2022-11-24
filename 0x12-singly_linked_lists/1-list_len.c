#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list
 * @h: the linked list_t list
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t elements_num = 0; /* Counter */

	while (h)
	{
		elements_num++;
		h = h->next;
	}

	return (elements_num);
}
