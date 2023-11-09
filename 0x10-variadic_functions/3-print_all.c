#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - It is a function
 * @format: Variable from main
 *
 * Return: Return pointer
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, c;
	float f;
	int num;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", (str != NULL) ? (i ? "" : "") : "(nil)", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
