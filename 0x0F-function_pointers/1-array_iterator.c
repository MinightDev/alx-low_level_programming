#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: arr
 * @size: size
 * @action: pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

