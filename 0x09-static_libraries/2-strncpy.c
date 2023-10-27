#include "main.h"
/**
 * _strncpy - It is a function
 * @dest: Variable from main
 * @src: Variable from main
 * @n: Variable from main
 * Return: Return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
