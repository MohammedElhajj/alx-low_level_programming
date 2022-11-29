#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: a pointer to the linked list (head of the list)
 * @n: the integer to be stored in the new added node
 *
 * Return: The address of the new element (updated list)
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* A new node to be added and temp pointer for it's address */
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL) /* Check for malloc*/
		return (NULL);

	new->n = n;

	new->next = NULL; /* Point to NULL */

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
