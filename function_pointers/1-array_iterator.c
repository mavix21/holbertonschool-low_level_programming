#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on
 * each element of an array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
