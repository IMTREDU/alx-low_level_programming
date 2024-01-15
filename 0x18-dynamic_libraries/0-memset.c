#include "main.h"
/**
 * _memset - It is a function
 * @s: Variable from main
 * @b: Variable from main
 * @n: Variable from main
 * Return: Return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
