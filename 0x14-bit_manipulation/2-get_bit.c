#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @n: The number checking
 * @index: The index of the bit
 *
 * Return: The value of the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
