#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: len of the concatinated string
 * Return: a pointer to the array, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0, l = 0;
	int len = 0;
	char *b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	len = i + j;
	b = malloc(sizeof(char) * (len + 1 - (n < j ? j - n : 0)));
	if (b == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		b[k] = s1[k];
		k++;
	}
	while (l < (n < j ? n : j))
	{
		b[i + l] = s2[l];
		l++;
	}
	b[len - (n < j ? j - n : 0)] = '\0';
	return (b);
}
