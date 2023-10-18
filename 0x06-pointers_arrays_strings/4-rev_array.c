#include "main.h"
/**
 * reverse_array - It is a function
 * @a: Variable from main
 * @n: Variable from main
 * Return: Return Void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
