#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the linked list (address of the head node)
 *
 * Returns: The head node’s data (n) or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n_data; /* For the node's data */

	/* Return 0 if the linked list is empty */
	if (*head == NULL)
		return (0);

	current = *head;
	n_data = (*head)->n;
	*head = (*head)->next;

	free(current);
	return (n_data);
}
