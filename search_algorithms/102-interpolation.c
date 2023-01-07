#include "search_algos.h"

/**
 * get_probe_position - returns the probe position of a given array
 *
 * @array: pointer to the first element of the array
 * @value: value to be searched
 * @low: lowest index
 * @high: highest index
 *
 * Return: probe position
 */
size_t get_probe_position(int *array, int value, size_t low, size_t high)
{
	size_t probe;
	double size;

	size = high - low;
	probe = low + (size / (array[high] - array[low])) * (value - array[low]);

	return (probe);
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
 * interpolation_search - searches for a value in an array of integers using
 * the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, probe;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{
		if (array[low] == array[high])
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			return (value == array[low] ? (int)low : -1);
		}

		probe = get_probe_position(array, value, low, high);

		if (probe > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", probe);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", probe, array[probe]);
		if (value == array[probe])
			return (probe);
		else if (value < array[probe])
			high = probe - 1;
		else
			low = probe + 1;
	}

	return (-1);
}
