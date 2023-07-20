#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of parameters.
 * @n: number
 * Return: sum of parametres
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}
