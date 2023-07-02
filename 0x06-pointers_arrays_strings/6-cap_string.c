#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: targeted string
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) &&
				(str[i - 1] == ' ' || str[i - 1] == ','
				 || str[i - 1] == ';' || str[i - 1] == '.'
				 || str[i - 1] == '(' || str[i - 1] == ')'
				 || str[i - 1] == '{' || str[i - 1] == '}'
				 || str[i - 1] == '"' || str[i - 1] == '?'
				 || str[i - 1] == '!' || str[i - 1] == '\t'
				 || str[i - 1] == '\n'))
		{
			str[i] = str[i] - 32;

		} else if ((str[i] >= 97 && str[i] <= 122))
		{
			str[0] = str[0] - 32;
		} else
		{
			str[i] = str[i];
		}

	}

	return (str);
}
