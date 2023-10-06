#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	char L, U;
	
	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);
	}

	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}
	putchar('\n');
	return (0);
}
