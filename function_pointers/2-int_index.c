#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer that satisfies a certain condition
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to the function that contains the condition(s) the searched
 * integer must satisfies
 *
 * Return: Index of the first element that satisfies the condition(s)
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
