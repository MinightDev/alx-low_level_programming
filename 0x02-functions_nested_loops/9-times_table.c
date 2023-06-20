#include "main.h"
/**
 * times_table - computes the absolute value of an int
 *
 * Return: (0) Success
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			int k = i * j;

			_putchar(',');
			_putchar(' ');

			if (k <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}

		_putchar('\n');
	}
}
