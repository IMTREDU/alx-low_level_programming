#include "function_pointers.h"
/**
 * int_index - It is a function
 * @array: Variable from main
 * @size: Variable from main
 * @cmp: Variable from main
 * Return: Return Void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
				i++;
			}
		}
	}
	return (-1);
}
