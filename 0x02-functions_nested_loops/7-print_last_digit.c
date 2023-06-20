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
	int ld;

	if (r < 0)
		ld = -1 * (r % 10);
	else
		ld = r % 10;
	_putchar(ld + 48);
	_putchar(ld + 48);

	return (ld);
}
