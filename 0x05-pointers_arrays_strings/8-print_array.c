#include "main.h"
#include <stdio.h>
/**
 * print_array - functions that prints n elements of array
 * @a: the array
 * @n: numbers of elements
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_array(int *a, int n)
{
	int *p;
	int num;

	num = n - 1;

	for (p = &a[0]; p <= &a[num]; p++)
	{
		if (p != &a[num])
		{
			printf("%d, ", *p);
		} else
		{
			printf("%d", *p);
		}
	}
}
