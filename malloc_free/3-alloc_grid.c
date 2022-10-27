#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers. Each
 * element of the grid will be initialized to 0.
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return:
 *	Pointer to the 2 dimensional array of integers
 *	NULL, if insufficient memory was available
 */
int **alloc_grid(int width, int height)
{
	int **buffer;
	int i, j;

	buffer = malloc(height * sizeof(int *));

	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(width * sizeof(int));
		if (buffer[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(buffer[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}

	return (buffer);
}
