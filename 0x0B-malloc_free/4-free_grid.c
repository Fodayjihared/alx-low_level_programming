#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid
 *
 * @grid: The grid to free
 *
 * @height: Height of arr
 *
 * Return: viod
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}
