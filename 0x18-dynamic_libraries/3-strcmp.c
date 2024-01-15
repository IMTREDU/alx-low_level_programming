#include "main.h"
/**
 * _strcmp - It is a function
 * @s1: Variable from main
 * @s2: Variable from main
 * Return: Return s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
