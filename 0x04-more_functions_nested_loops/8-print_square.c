#include "main.h"
/**
 * print_triangle - prints a triangle follwoe by a new line
 *
 * @size: size of the triangle
 *
 * Return: 0 if success
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
