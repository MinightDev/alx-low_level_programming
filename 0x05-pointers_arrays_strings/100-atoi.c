#include "main.h"

/**
 * _atoi - function that converts a string into an integer
 * @s: the string to convert
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	unsigned int n;
	signed int sign = 1;

	n = 0;

	do {
		if (*s == 45)
		{
			sign = -1 * sign;
		} else if ((*s >= 48) && (*s <= 57))
		{
			n = (*s - 48) + (n * 10);
		} else if (n > 0)
		{
			break;
		}
	} while (*s = *s + 1);

	return (n * sign);

}
