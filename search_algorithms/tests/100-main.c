#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 23, 47, 89, 160
	};
	/* size_t size = sizeof(array) / sizeof(array[0]); */

	printf("Found at index: %d\n\n", jump_search(array, 15, 123456789));
	/* printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1)); */
	/* printf("Found %d at index: %d\n\n", 999, jump_search(array, size, 999)); */

	return (EXIT_SUCCESS);
}
