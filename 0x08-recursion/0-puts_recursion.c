#include "main.h"
/**
 * _puts_recursion - It is a function
 * @s: Variable from main
 * Return: Return Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
