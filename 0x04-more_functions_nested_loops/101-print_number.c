#include "main.h"
/**
 * print_number - prints a number
 *
 * @n: number to print
 *
 * Return: 0 if success
 */

void print_number(int n)
{

	if (n < 0)
	{
		n = -1 * n;
		_putchar(45);
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);

}
