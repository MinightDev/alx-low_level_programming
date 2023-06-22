#include "main.h"
/**
 * print_line - prints a straight line
 *
 * @n: number of times the character should be printed
 *
 * Return: a straight line else prints \n
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
