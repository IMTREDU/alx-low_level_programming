#include "main.h"
/**
 * str_concat - It is a function
 * @s1: Variable from main
 * @s2: Variable from main
 * Return: Return concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *concatenated;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		concatenated[len1 + i] = s2[i];
	}
	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
