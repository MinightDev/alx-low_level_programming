#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: n bytes of mem
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
