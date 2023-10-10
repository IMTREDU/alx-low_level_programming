#include "main.h"
/**
 * _abs - It is a function
 * @x: Variable from main
 * Return: Return int
 */
int _abs(int x)
{
	int abs;

	if (x < 0)
	{
		abs = x * -1;
		return (abs);
	}
	return (x);
}
