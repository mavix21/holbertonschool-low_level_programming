#include "main.h"
/**
 * reverse_array - Reverses the contetn of an array of integers
 * @a: Pointer pointing to the first element of the array a[]
 * @n: Number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int *begin;
	int *end;
	int num;

	/* begin and end pointers point to start of the array */
	begin = a;
	end = a;

	/* end pointer points to the last element */
	for (i = 0; i < n - 1; i++)
		end++;

	/* Swap the char from start and end index using begin and end pointers */
	for (i = 0; i < n / 2; i++)
	{
		num = *end;
		*end = *begin;
		*begin = num;
		begin++;
		end--;
	}
}
