#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * to Standard Output, followed by a new line
 * @a: Pointer pointing to the first element of the given array
 * @n: Numbers of elements of the array to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
