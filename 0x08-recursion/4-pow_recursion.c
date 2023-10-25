#include "main.h"
/**
 * _pow_recursion - It is a function
 * @x: Variable from main
 * @y: Variable from main
 * Return: Return Void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
