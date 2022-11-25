#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a pointer to the linked list (head of the list)
 * @str: the string to be stored in the list
 *
 * Return: The address of the new element (updated list)
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* A new node to be added and temp pointer for it's address */
	list_t *new, *temp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL) /* Check for malloc*/
		return (NULL);

	new->str = strdup(str); /* Duplicate the string */

	/* Find the length of string stored in str */
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;

	new->next = NULL; /* Point to NULL */
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	*head = new;
	return (*head);
}
