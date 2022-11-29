#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: A pointer to the list (head of the list)
 * to be freed
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current; /* The current node */

	if (head == NULL)
		return;

	/* Free the list */
	while (*head) /* *head != NULL */
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	/* Set the head to NULL */
	head = NULL;
}
