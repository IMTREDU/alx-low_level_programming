#include "main.h"
/**
 * *_memcpy - It is a function
 * @dest: Variable from main
 * @src: Variable from main
 * @n: Variable from main
 * Return: Return Void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
