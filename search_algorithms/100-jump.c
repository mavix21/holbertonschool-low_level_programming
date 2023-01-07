#include "search_algos.h"

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
 * jump_search - searches for a value in an array of integers using
 * the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, low, high, jump;

	if (array == NULL || size == 0)
		return (-1);

	/* Find the size of the sublists */
	jump = (int)sqrt(size);

	/* Leftmost and rightmost element of the sublist */
	low = 0;
	high = jump;

	for (step = 0; value > array[step] && step <= size - 1; step += jump)
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);

	if (step > 0)
	{
		low = step - jump;
		high = step;
	}

	printf("Value found between indexes ");
	printf("[%lu] and ", low);
	printf("[%lu]\n", high);

	while (low < min(high + 1, size))
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		low++;
	}

	return (-1);
}
