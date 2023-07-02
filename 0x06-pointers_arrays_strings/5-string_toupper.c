#include "main.h"
/**
 * string_toupper - function that changes lowercase to uppercase.
 * @str: targeted string
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
