#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: targeted string
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 65 || str[i] == 97)
		{
			str[i] = 52;
		} else if (str[i] == 69 || str[i] == 101)
		{
			str[i] = 51;
		} else if (str[i] == 79 || str[i] == 111)
		{
			str[i] = 48;
		} else if (str[i] == 84 || str[i] == 116)
		{
			str[i] = 55;
		} else if (str[i] == 76 || str[i] == 108)
		{
			str[i] = 49;
		} else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
