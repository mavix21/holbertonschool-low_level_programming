#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	/* Find the middle index */
	mid = (size - 1) / 2;

	/* Print the array being searched */
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		return (binary_search(array, mid, value));
	}
	else
	{
		result = binary_search(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		else
			return (result + mid + 1);
	}
}
