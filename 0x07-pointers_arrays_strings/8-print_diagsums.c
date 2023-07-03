#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of ints.
 * @a: 2D Array
 * @size: the size
 * Return: the number of bytes in the initial segment of s
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
