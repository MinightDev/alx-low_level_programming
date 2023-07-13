#include "main.h"
#include <stdlib.h>
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
/**
 * _realloc - function that reallocates a memory block using malloc & free
 *
 * @ptr: pointer to meme prev allocated
 * @old_size: old size.
 * @new_size: new size.
 * Return: pointer to new realloc block of mem.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		if (new_size > old_size)
		{
			_memcpy(p, ptr, old_size);
		} else
		{
			_memcpy(p, ptr, new_size);
		}
		free(ptr);
	}
	return (p);
}
