#include "lists.h"

/**
 * dlistint_len - calculates the count of elements in
 * a double linked list
 *
 * @h: the starting point of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
