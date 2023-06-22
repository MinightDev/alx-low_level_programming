#include "main.h"
/**
 * print_triangle - function that draws a triangle
 *
 * @size: the size of the triangle
 *
 * Return: if size > 0 prints triangle on terminal else prints a '\n'
 */

void print_triangle(int size)
{
	int i, j, k;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
