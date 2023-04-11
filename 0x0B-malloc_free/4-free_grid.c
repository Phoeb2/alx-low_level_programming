#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Major entry
 * @grid: Input
 * @height: Input
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
