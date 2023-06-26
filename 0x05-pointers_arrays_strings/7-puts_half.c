#include "main.h"
/**
 * puts_half - functions that prints half of a string
 * @str: the string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	n = i / 2;

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
