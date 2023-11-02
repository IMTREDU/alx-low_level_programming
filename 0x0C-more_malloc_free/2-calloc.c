#include "main.h"
/**
 * _calloc - It is a function
 * @nmemb: Variable from main
 * @size: Variable from main
 * Return: Return ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	byte_ptr = ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
