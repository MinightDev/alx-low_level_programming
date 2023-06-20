#include "main.h"
/**
 * _abs - computes the absolute value of an int
 *
 * @r: the number to compute
 *
 * Return: (0) Success
 */

int _abs(int r)
{
	if (r < 0)
	{
		_putchar(-r);
	} else
	{
		_putchar(r);
	}

	return (r);
}
