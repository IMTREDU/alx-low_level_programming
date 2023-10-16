#include "main.h"
/**
 * swap_int - It is a function
 * @a: Variable from main
 * @b: Variable from main
 * Return: Return Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
