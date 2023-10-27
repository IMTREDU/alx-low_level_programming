#include "main.h"
/**
 * _atoi - It is a function
 * @s: Variable from main
 * Return: Return Void
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	res *= sign;
	return (res);
}

/**
 * main - It is the main
 * @argc: Num of argument
 * @argv: Num of argument(Array)
 * Return: Return Void
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}
