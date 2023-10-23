#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - It is a function
 * @a: Variable from main
 * @size: Variable from main
 * Return: Return Void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1_s = 0;
	int d2_s = 0;

	for (i = 0; i < size; i++)
	{
		d1_s += a[i * size + i];
		d2_s += a[i * size + (size - 1 - i)];
	}
	 printf("%d, %d\n", d1_s, d2_s);
}
