#include "lists.h"

/**
 * free_dlistint - it frees a doubly linked list
 * @head: the pointer to the list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
