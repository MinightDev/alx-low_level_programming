#include "main.h"
/**
 * binary_to_uint - converts a binary to an unsigned int
 * b - pointer to a string 0 & 1 chars
 * Return: the converted num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	for (unsigned int j = 0; j < i; j++)
	{
		n = n * 2 + (b[j] - '0');
	}

	return (n);
}
