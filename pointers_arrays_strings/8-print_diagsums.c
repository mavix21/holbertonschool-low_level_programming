#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: Square matrix
 * @size: Matrix size
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sumMainDiag = 0;
	int sumScndDiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumMainDiag += *a;
			if ((i + j) == size - 1)
				sumScndDiag += *a;
			if ((i + j) != ((size - 1) * 2))
				a++;
		}
	}
	printf("%d, %d\n", sumMainDiag, sumScndDiag);
}
