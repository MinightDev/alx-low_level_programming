#include "variadic_functions.h"
/**
 * print_all - Write a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: none.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	const char *separator = "";

	va_list list;
	va_start(list, format);

	if (format)
	{
		while (format[i] )
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 's':
					s = va_arg(list, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
