#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = (len - 1);

	for (i = len; i >= 0; i--)
	{
		*s = s[j];
	}
	_putchar('\n');
}
