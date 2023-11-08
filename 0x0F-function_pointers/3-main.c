#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - It is a main
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(op)(n1, n2);

	printf("%d\n", result);
	return (0);
}
