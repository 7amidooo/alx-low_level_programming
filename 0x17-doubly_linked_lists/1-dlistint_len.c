#include "lists.h"

/**
 * dlistint_len - prints number of elements
 * @h: points to the head of the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->next;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
