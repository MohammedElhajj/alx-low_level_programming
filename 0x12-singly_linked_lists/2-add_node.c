#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the linked list (head of the list)
 * @str: the string to be stored in the list
 *
 * Return: The address of the new element (new head)
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new; /* A pointer to the node to be added */
	size_t i; /* Index */

	new = malloc(sizeof(list_t));
	if (new == NULL) /* Check for malloc*/
		return (NULL);

	/* Duplicate the string */
	new->str = strdup(str);

	/* Find the length of string stored in str */
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;

	/* Update the link part and the head pointer */
	new->next = *head;
	*head = new;

	return (*head);
}
