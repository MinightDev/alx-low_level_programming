#include "main.h"
/**
 * rot13 - write a function that encodes a string using rot13
 * @str: targeted string
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *rot13(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		for (; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] = s[i] - 13;

			} else
			{
				s[i] = s[i] - 13;
			}

		}
	}
	return (str);
}
