#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - It is a function
 * @n: Is a variable from main
 * Return: Return Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n == 98)
	{
		printf("98\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
