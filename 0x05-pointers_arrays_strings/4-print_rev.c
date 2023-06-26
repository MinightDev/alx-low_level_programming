#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = (i - 1); j >= 0; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
