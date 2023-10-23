#include "main.h"
/**
 * _strspn - It is a function
 * @s: Variable from main
 * @accept: Variable from main
 * Return: Return c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
		{
			return (c);
		}
		c++;
	}

		return (c);
}
