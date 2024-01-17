#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array + low, high - low + 1, value) + low);
}

