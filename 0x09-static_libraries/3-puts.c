#include "main.h"
/**
 * _puts - It is a function
 * @str: Variable from main
 * Return: Return Void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
