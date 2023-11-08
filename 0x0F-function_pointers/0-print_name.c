#include "function_pointers.h"
/**
 * print_name - It is a function
 * @f: Variable from main
 * @name: Variable from main
 * Return: Return Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
