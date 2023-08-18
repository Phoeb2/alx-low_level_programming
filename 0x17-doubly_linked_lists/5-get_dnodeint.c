#include "lists.h"

/**
 * get_dnodeint_at_index - it gets the nth node of a doubly linked list
 * @head: the pointer to the list
 * @index: the index of the node to return
 *
 * Return: the address of the node, or if it does not exist, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
