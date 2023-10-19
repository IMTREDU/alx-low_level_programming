#include "main.h"
/**
 * leet - It is a function
 * @str : Variable from main
 * Return: Return str
 */
char *leet(char *str)
{
	int i;
	char *ptr = str;
	char leet_replace[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};
	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == leet_replace[i][0] || *ptr == leet_replace[i][0] - 32)
			{
				*ptr = leet_replace[i][1];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
