#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - functions that copies the string pointed by src
 * @dest: buffer
 * @src: the string
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

	for (size = 0; size <= i; size++)
	{
		dest[size] = src[size];
	}
	return (dest);
}
