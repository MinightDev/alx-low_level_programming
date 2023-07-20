#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number
 * @separator: is the string to be prnted between strings
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
