#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: A pointer to the list to be freed
 */
void free_list(list_t *head)
{
	list_t *current; /* The current node */

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
