#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: the int to check
 *
 * Return: (0) Success
 */

int print_last_digit(int r)
{
	if (r < 0)
		r = -r;
	_putchar((r % 10) + '0');

	return (r % 10);
}
