#include "lists.h"
#include "stdlib.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: a pointer to the linked list (head of the list)
 * @index: the index of the node starting at 0
 *
 * Return: The nth node of a listint_t linked list and if the node does
 * not exist returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_r;

	for (node_r = 0; node_r < index; node_r++)
	{
		/* Return NULL if the node does not exist */
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
