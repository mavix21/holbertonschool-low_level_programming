#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found at index: %d\n\n", exponential_search(array, size, 62));
	printf("Found at index: %d\n\n", exponential_search(array, size, 3));
	printf("Found at index: %d\n\n", exponential_search(array, size, 999));

	return (EXIT_SUCCESS);
}
