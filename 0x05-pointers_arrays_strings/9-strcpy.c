#include "main.h"
/**
 * _strcpy - It is a function
 * @dest: Variable from main
 * @src: Variable from main
 * Return: Return char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
