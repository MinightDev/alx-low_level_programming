#include "function_pointers.h"
/**
 * int_index - function that executes a function given as a parameter
 * @array: arr
 * @size: size
 * @cmp: pointer to comparaison func
 * Return: Index of the matching element, else -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

		i++;
	}
	return (-1);
}

