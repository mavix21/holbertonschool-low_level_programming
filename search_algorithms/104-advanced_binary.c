#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	mid = (size - 1) / 2;
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
		result = advanced_binary(array, mid + 1, value);
		if (result != -1)
			return (result);
		else
			return (mid);
	}
	else if (size == 1)
	{
		return (-1);
	}
	else if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		else
			return (result + mid + 1);
	}
	else
	{
		return (advanced_binary(array, mid + 1, value));
	}
}
