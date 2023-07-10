#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly alloc space
 * @str: str
 * Return: a pointer to the array, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));

	while (j < i)
	{
		s[j] = str[j];
	}

	s[j] = '\0';

	return (s);
}
