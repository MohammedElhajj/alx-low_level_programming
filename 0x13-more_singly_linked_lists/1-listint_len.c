#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: a pointer to the linked listint_t list
 *
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements_num = 0; /* Counter */

	while (h) /* h != NULL */
	{
		elements_num++;
		h = h->next;
	}

	return (elements_num);
}
