#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of the
 * listint_t list
 * @head: a pointer to the linked list (head of the list)
 * @n: the integer stored in the new added node
 *
 * Return: The address of the new element (new head)
 * or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new; /* A pointer to the new node to be added */

	new = malloc(sizeof(listint_t));
	if (new == NULL) /* Check for malloc*/
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
