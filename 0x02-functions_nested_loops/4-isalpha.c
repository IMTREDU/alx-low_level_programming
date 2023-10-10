#include "main.h"
/**
 * Print_alphabet - It is a function
 *
 * Return: Return int
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
