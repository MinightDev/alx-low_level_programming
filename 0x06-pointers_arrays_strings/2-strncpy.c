#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source the string to cpy
 * @n: number
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
