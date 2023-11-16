#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 * @head: A pointer to pointer of the head
 * @str: The string to be duplicated and added
 * Return: The address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
