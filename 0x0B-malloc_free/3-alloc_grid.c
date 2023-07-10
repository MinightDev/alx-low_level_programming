#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array
 * @height: grid height
 * @width: grid width
 * Return: a pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr =  malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
