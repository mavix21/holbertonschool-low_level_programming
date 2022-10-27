#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously created by
 * alloc_grid function
 * @grid: Pointer to the 2 dimensional grid
 * @height: Number of rows
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
