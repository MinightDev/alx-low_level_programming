#include "main.h"
/**
 * _isalpha - checks if its an alphabet
 *
 * @c: the character to check
 *
 * Return: (0) Success
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
