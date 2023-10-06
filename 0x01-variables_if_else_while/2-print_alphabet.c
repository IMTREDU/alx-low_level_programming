#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);
		putchar('\n');
	}
	return (0);
}
