#include "main.h"
/**
 * print_numbers - It is a function
 * Return: Return Void
 */
void print_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
}
