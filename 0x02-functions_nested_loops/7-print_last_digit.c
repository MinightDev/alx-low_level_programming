#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: the int to check
 *
 * Return: (0) Success
 */

int print_last_digit(int)
{
	int ld = r % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	} else
	{
		return (ld);
	}
	_putchar(ld + 48);
	return (ld);
}
