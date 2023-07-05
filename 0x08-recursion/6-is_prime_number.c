#include "main.h"
/**
 * is_prime_number - function that returns the natural square root of a number.
 * @n: num.
 * @i: iterator.
 * Return: 1 if prine else 0.
 */
int prime_check(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n - 1));
}
/**
 * prime_check - checks if number is prime
 * @n: num
 * @i: iterator
 * Return: 1 if n else 0
 */
int prime_check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	} else if (i > 0 && n % i == 0)
	{
		return (0);
	}
	return (prime_check(n, i - 1));
}
