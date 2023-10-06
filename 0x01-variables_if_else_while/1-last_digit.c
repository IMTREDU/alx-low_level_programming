#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - It is the entry point
 *
 * Return: It will always return 0
 */
int main(void)
{
	int n;
	int nl;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nl = n % 10;
	if (nl > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nl);
	}
	else if (nl == 0)
	{
		 printf("Last digit of %d is %d and is n\n", n, nl);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nl);
	}
	return (0);
}
