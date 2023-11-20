#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: Pointer to a pointer to the head
 * Return: The data (n) of the deleted head node otherwise 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
