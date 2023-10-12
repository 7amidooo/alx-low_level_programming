#include "lists.h"

/**
 * free_dlistint - frees the linked list
 * @head: pointer to the head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
