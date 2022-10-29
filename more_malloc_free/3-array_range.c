#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers, containing all the values
 * from min (included) to max (included), ordered from min to max
 * @min: First number of the array
 * @max: Last number of the array
 *
 * Return: Pointer to the first element of the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = min, j = 0; i < (max - min + 1); i++, j++)
		array[j] = i;

	return (array);
}
