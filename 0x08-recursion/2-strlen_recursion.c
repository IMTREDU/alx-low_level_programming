#include "main.h"
/**
 * _strlen_recursion - It is a function
 * @s: Variable from main
 * Return: Return Void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
