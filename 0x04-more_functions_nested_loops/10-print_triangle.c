#include "main.h"
/**
 * print_triangle - It is a function
 * @size: Variable from main
 * Return: Return void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
