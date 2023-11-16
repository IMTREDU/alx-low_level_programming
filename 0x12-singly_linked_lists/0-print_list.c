#include "lists.h"
/**
 * print_list - Prints all the elements
 * @h: A pointer to the head
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
