#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: A pointer to the list (head of the list)
 * to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current; /* The current node */

	while (head) /* head != NULL */
	{
		current = head->next;
		free(head);
		head = current;
	}
}
