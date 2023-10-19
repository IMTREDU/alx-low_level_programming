#include "main.h"
/**
 * string_toupper - It is a function
 * @str: Variable from main
 * Return: Return str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}

	return (str);
}
