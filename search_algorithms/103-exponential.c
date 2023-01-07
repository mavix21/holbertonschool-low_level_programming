#include "search_algos.h"

/**
 * binarysearch - searches for a value in an array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int binarysearch(int *array, size_t size, int value)
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
		return (binarysearch(array, mid, value));
	}
	else
	{
		result = binarysearch(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		else
			return (result + mid + 1);
	}
}

/**
 * min - returns the minimun value of two integers
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: minimun value
 */
size_t min(int x, int y)
{
	return (x < y ? x : y);
}

/**
 * exponential_search - searches for a value in an array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	if (array[bound] >= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		return (array[bound] == value ? (int)bound : -1);
	}

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes ");
	printf("[%lu] and [%lu]\n", bound / 2, min(bound, size - 1));

	result = binarysearch(array + bound / 2, min(bound, size - 1) / 2 + 1, value);
	if (result == -1)
		return (-1);
	else
		return (result + bound / 2);
}
