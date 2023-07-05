#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @s: string
 * Return: result factorial of given num.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	} else if (n < 1)
	{
		return (-1);
	}
	
	return (n * factorial(n - 1));
}
