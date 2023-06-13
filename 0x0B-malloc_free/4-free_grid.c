#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees grid previously created
 * @grid: grid created
 * @height: heigth of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
