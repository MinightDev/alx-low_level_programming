#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: the number of times the character \' should be printed
 *
 * Return: if n > 0 prints diagonal on terminal else prints a '\n'
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
