#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees previously created 2D array
 *
 * @grid: 2D grid
 * @height: height of grid
 */



void free_grid(int **grid, int height)
{
int r;

for (r = 0; r < height; r++)
{
	free(grid[r]);
}
free(grid);


}
