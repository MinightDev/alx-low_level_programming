#include "main.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1)

}
