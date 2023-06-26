#include "main.h"
/**
 * swap_int - functions that swaps the values of two integers
 * @a: first value int
 * @b: second value int
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
