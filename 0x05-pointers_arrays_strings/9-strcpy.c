#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - funtion that copes the string pointed to by src
 * @dest: the copied string
 * @src: the string to copy
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int size;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (size = 0; size <= i; i++)
	{
		dest[size] = src[size];
	}

	return (dest);
}
