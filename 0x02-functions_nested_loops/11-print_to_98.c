print_to_98#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: takes a integer
 *
 * Return: (0) Success
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else
	{
		for (; n > 99; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
