#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number
 *
 *
 * Return: 0 if success
 */

int main(void)
{
	long long int num = 612852475143, i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			n = n / i;
			i = i - 1;
		}
	}
	printf("%lld\n", i);
	return (0);
}
