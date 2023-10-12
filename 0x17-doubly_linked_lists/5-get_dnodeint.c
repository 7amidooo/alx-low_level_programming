#include "lists.h"

/**
 * get_dnodeint_at_index - prints the index
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: address of the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
