#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: a pointer to the array, or NULL if it fails
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
