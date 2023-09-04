#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - 2 deimensional grid freed.
 * @height: the grid height
 * @grid: the grid
 * Return: NULL.
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
