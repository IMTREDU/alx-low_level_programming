#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1
 * @n: Pointer to the number
 * @index: The index of the bit
 *
 * Return: 1 if it worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
