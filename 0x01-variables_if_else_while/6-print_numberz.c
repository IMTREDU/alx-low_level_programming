#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
	}

	putchar('\n');

	return (0);
}
