#include "lists.h"
/**
 * list_len - Returns the number of elements
 * @h: A pointer to the head
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
