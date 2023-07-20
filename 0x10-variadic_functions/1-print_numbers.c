#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number
 * @separator: is the string to be printed between numbers
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int num;

	va_start(args, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			num = va_arg(args, int);
			printf("%d", num);
			i++;
		}
		printf("\n");
	} else
	{
		while (i < n)
		{
			num = va_arg(args, int);

			if (i == (n - 1))
			{
				printf("%d", num);
			} else
			{
				printf("%d%c ", num, *separator);
			}
			i++;
		}
		printf("\n");
	}
	va_end(args);
}
