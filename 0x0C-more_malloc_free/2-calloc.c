#include "main.h"
#include <stdlib.h>
/**
 *  _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: number
 * @size: sizeof
 *
 * Return: 0 if success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	char b = '0';
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = b;
	}

	return (p);
}
