#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - It is a function
 * @format: Variable from main
 * Return: Return pointer
 */
void print_all(const char * const format, ...)
{
	char *s, *sep = "";
	int i = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
