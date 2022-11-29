#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the listint_t list
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0; /* Counter */

	while (h != NULL)
	{
		printf("%d\n", h->n);

		nodes_num++;
		h = h->next;
	}

	return (nodes_num);
}
