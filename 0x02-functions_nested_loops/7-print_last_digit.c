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
	int ld = r % 10;

	_putchar(ld + '0');

	return (ld);
}
