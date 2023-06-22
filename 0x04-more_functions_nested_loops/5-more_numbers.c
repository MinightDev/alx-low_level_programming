#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: (numbers from 0 to 14) * 10
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;

			if (j > 9)
			{
				_putchar(49);
				j = j % 10;
			}
			putchar(k + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
