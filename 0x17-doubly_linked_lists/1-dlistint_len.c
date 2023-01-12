#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a linked dlistint_t list
 * @h: pointer to head of doubly list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		current = current->next;
		n++;
	}

	return (n);
}
