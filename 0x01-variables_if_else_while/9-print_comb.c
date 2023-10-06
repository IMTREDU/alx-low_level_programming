#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
