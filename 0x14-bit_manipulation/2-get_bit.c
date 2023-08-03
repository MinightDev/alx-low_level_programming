#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int shift;
	int zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = (sizeof(n) * 8 - 1);

	while (shift >= 0)
	{
		unsigned long int bit = n >> shift;

		if (bit & 1)
		{
			_putchar('1');
			zero = 0;
		}
		else if (!zero)
		{
			_putchar('0');
		}

		shift--;
	}
}
