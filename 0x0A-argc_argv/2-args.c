#include "main.h"
/**
 * main - It is the main
 * @argc: Num of argument
 * @argv: char of argument(Array)
 * Return: Return Void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
