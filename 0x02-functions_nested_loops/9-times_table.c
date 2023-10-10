#include "main.h"
/**
 * times_table - It is a function
 *
 * Return: Return Void
 */
void times_table(void)
{
	int i, j, R;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			R = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				if (R < 10)
				{
					_putchar(' ');
				}
				else
				{
				_putchar((R / 10) + '0');
			}
			_putchar((R % 10) + '0');
		}
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
