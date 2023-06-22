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
	int num;

	if (n < 0)
	{
		_putchar(45);
		n = -1 * n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + 48);


}
