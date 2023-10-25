#include "main.h"
/**
 * _print_rev_recursion - It is a function
 * @s: Variable from main
 * Return: Return Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	putchar(*s);
}
