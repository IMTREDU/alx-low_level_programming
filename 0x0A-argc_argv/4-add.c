#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - It is the main
 * @argc: Num of argument
 * @argv: char of argument(Array)
 * Return: Return Void
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
