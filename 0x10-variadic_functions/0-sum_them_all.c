#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - It is a function
 * @n: Variable from main
 * Return: Return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
