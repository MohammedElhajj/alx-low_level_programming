#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer of first node of dlistint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new->prev = current
		current->next = new;
	}

	return (new);
}
