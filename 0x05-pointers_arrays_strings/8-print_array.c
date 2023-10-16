#include "main.h"
/**
 * print_array - It is a function
 * @a: Variable from main
 * @n: Variable from main
 * Return: Return Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
