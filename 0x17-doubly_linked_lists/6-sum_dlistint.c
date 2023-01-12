#include "lists.h"

/**
 * sum_dlistint - returns the sum of data (n) of a dlistint_t
 * @head: pointer to dlistint_t doubly linked list
 * Return: sumation of the list's data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
