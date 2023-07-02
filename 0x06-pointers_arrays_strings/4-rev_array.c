#include "main.h"
/**
 * reverse_array - function that reverses the content og an array of integers
 * @n: number of elements
 * @a: array of nums
 * Return: a pointer to the resulting string
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = a[i];
		a[i] =  a[n];
		a[n] = j;
		n--;
		i++;
	}

}
