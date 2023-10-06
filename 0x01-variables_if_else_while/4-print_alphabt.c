#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z' ; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}

		putchar(n);
	}

	putchar('\n');

	return (0);
}
