#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 *
 * @min: min number.
 * @max: max number.
 *
 * Return: arr range between min and max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	while (min <= max)
	{
		i++;
		max--;
	}
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
	{
		return (NULL);
	}

	max = max + i;

	while (min <= max)
	{
		arr[j] = min;
		j++;
		min++;
	}

	return (arr);
}
