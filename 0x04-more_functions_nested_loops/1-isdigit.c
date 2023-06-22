#include "main.h"
/**
 * _isupper - checks if the character is uppercase
 * @c: The character to check
 *
 * Return: On success 1.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
