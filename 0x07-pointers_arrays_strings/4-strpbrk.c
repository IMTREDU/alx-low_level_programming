#include "main.h"
/**
 * _strpbrk - It is a function
 * @s: Variable from main
 * @accept: Variable from main
 * Return: Return S/NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
