#include "lists.h"

/**
 * sum_dlistint - it returns the sum of all the data in a doubly linked list
 * @head: the pointer to the list
 *
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
