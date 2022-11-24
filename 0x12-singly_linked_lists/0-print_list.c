#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_num = 0; /* Counter */

	while (h)
	{
		/* If str is NULL */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes_num++;
		h = h->next;
	}

	return (nodes_num);
}
