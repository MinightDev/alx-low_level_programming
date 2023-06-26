#include "main.h"
#include <stddef.h>
/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int len = 0;

	while(*s != NULL)
	{
		s++;
		len++;
	}

	return (len);
}
