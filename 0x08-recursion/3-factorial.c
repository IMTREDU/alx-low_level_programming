#include "main.h"
/**
 * factorial - It is a function
 * @n: Variable from main
 * Return: Return Void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
