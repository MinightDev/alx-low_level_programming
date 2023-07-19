#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name:the name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

