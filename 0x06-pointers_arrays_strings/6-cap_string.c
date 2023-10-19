#include "main.h"
/**
 * cap_string - It is a function
 * @str: Variable from main
 * Return: Return str
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (ptr == str || (*(ptr - 1) == ' ' || *(ptr - 1) == '\t'))
			{
				*ptr -= 32;
			}
			else if (*(ptr - 1) == ',' || *(ptr - 1) == ';' || *(ptr - 1) == '.')
			{
				*ptr -= 32;	
			}
			else if (*(ptr - 1) == '!' || *(ptr - 1) == '?' || *(ptr - 1) == '"')
			{
				*ptr -= 32;
			}
			else if (*(ptr - 1) == '(' || *(ptr - 1) == ')' || *(ptr - 1) == '{')
			{
				*ptr -= 32;
			}
			else if (*(ptr - 1) == '}' || *(ptr - 1) == '\n')
			{
				*ptr -= 32;
			}
		}
		ptr++;
	}
	return (str);
}
