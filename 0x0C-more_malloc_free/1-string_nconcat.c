#include "main.h"
/**
 * string_nconcat - It is a function
 * @s1: Variable from main
 * @s2: Variable from main
 * @n: Variable from main
 * Return: Return str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *str;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	str = malloc(sizeof(char) * (len1 + (n >= len2 ? len2 : n) + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n && j < len2; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
