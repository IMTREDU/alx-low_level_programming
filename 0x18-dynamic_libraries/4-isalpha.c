#include "main.h"
/**
 * _isalpha - It is a function
 * @c: variable from main
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
