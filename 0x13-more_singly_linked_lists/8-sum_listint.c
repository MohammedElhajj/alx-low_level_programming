#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the data (n) of
 * a listint_t linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: The sum of all the data (n) of the list and 0 if
 * the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
	/* If the list is empty it retuns the initial value of sum which is 0 */
}
