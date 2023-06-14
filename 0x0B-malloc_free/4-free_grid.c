#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid previously
 * @grid: s.all.s
 * @height: heigth of 2d array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
