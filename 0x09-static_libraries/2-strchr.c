#include "main.h"
/**
 * *_strchr - It is a function
 * @s: Variable from main
 * @c: Variable from main
 * Return: Return S/Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
