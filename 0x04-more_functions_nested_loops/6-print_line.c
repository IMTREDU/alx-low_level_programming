#include "main.h"
/**
 * print_line - It is a function
 * @n: Variable from main
 * Return: Return int
 */
void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			putchar('_');
			n--;
		}
		putchar('\n');
	}
}
