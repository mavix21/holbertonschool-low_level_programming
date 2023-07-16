#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found at index: %d\n\n", interpolation_search(array, size, 3));
	printf("Found at index: %d\n\n", interpolation_search(array, size, 7));
	printf("Found at index: %d\n\n", interpolation_search(array, size, 999));

	return (EXIT_SUCCESS);
}
