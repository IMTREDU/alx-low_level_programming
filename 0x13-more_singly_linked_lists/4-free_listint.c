#include "lists.h"
/**
 * free_listint - Frees a listint_t
 * @head: Pointer to a pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
