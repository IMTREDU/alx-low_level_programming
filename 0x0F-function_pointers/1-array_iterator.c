#include "function_pointers.h"
/**
 * array_iterator - It is a function
 * @array: Variable from main
 * @size: Variable from main
 * @action: Variable from main
 * Return: Return Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end;

	end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
