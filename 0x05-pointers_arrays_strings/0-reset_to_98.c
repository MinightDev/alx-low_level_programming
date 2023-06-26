#include "main.h"
/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: points to the address of an int
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar((*n / 10) + 48);
	_putchar((*n % 10) + 48);
}
