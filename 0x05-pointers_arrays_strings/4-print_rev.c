#include "main.h"
/**
 * print_rev - It is a function
 * @s: Variable from main
 * Return: Return Void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}

	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
