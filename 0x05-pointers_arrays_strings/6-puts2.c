#include "main.h"
/**
 * puts2 - It is a function
 * @str: Variable from main
 * Return: Return Void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}