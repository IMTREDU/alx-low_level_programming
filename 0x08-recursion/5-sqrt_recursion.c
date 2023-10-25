#include "main.h"
/**
 * _sqrt_recursion - It is a function
 * @n: Variable from main
 * Return: Return Void
 */
int _sqrt_recursion(int n)
{
	int find_sqrt(int n, int i);

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - It is a function
 * @n: Variable from main
 * @i: Variable from main
 * Return: Return Void
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (find_sqrt(n, i + 1));
}
