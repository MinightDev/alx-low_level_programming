#include "main.h"
/**
 * puts2 - functions that prints every other character of a string
 * @str: the string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);

		}
	}
	_putchar('\n');
}
