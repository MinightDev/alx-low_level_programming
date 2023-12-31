#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: num.
 * @i: sqr root
 * Return: result.
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function that returns the natural square root of a number.
 * @n: num
 * @i: square root
 * Return: result.
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	} else if (i * i < n)
	{
		return (_sqrt(n, i + 1));
	}
	return (-1);
}
