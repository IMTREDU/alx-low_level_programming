#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
