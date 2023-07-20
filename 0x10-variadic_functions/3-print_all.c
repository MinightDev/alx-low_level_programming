#include "variadic_functions.h"
/**
 * print_all - Write a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: none.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	char c;
	int i;
	double f;
	const char *s;
	int j = 0;

	va_start(args, format);

	while (format && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", separator, i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				s = va_arg(args, const char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
		}

		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
