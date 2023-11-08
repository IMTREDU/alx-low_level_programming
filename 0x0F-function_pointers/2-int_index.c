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

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
