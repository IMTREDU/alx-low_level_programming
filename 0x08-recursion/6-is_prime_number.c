#include "main.h"

int AC(int n, int i);

/**
 * is_prime_number - It is a function
 * @n: Variable from main
 * Return: Return Void
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (AC(n, n - 1));
}

/**
 * AC - It is a function
 * @n: Variable from main
 * @i: Variable from main
 * Return: Return 1/0
 */
int AC(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (AC(n, i - 1));
}
