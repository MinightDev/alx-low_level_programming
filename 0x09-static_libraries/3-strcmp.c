#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int value = 0;

	while (s1[i] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}

	if (s1 != s2)
	{
		value = s1[i] - s2[j];
	}
	return (value);
}
