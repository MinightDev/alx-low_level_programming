#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to look for
 * @accept: pointer to char
 * Return: the number of bytes in the initial segment of s
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		i++;
		s++;
	}
	return ('\0');
}
