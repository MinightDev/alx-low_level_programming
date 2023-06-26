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
	int len2 = 0, len = 0;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	len2 = (len - 1);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2 = len2 - 1] = tmp;
	}
	_putchar('\n');
}
