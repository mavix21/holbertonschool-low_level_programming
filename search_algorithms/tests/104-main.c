#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {
		3, 4, 5, 7, 7, 7, 8, 9, 10, 11, 21, 33, 33, 33, 35, 44, 51
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 33, advanced_binary(array, size, 33));

	return (EXIT_SUCCESS);
}
