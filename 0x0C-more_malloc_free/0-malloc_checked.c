#include "main.h"
/**
 * malloc_checked - It is a function
 * @b: Variable from main
 * Return: Return ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
