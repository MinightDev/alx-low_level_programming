#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: string
 * @c: the character to locate
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i)
		}
	}

	return ('\0');
}
