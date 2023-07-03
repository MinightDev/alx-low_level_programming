#include "main.h"
#include <stdbool.h>
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string
 * @accept: the character to locate
 * Return: the number of bytes in the initial segment of s
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;
	int len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (accept[len1] != '\0')
	{
		len1++;
	}

	for (i = 0; i < len; i++)
	{
		bool match = false;

		for (j = 0; j < len1; j++)
		{
			if (accept[j] == s[i])
			{
				match = true;
				break;
			}
		}
		if (!match) break;
		else i++;

	}
	return (i);


}
