#include "main.h"
/**
 * print_sign - checks if its an alphabet
 *
 * @c: the number to check
 *
 * Return: (0) Success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);

	} else if (n == 0)
	{
		return (0);
		_putchar(48);
	} else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
}
