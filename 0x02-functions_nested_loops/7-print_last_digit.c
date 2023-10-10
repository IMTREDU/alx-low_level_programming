#include "main.h"
/**
 * print_last_digit - It is a function
 * @x: Variable from main
 * Return: Return Void
 */
int print_last_digit(int x)
{
	int L = x % 10;

	if (L < 0)
	{
		L = L * -1;
	}
	_putchar(L + '0');
	return (L);
}
