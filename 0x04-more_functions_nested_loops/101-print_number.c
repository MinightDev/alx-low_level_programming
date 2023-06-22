#include "main.h"
/**
 * print_number - prints a number
 *
 * @n: number to print
 *
 * Return: 0 if success
 */

int print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar(35);
		n = -1 * n;
	}

	while (n > 0)
	{
		num = n % 10;
		_putchar(num + 48);
		n = n / 10;
	}


}
