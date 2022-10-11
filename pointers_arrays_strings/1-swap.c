#include "main.h"
/**
 * swap_int - Takes two integers (addresses) and
 * swap their values
 * @a: Address of the first argument
 * @b: Address of the first argument
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
