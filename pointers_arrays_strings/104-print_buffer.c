#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: Pointer to buffer to be printed
 * @size: Size (in bytes) of the buffer
 */
void print_buffer(char *buffer, int size)
{
	int i;
	int j;

	for (i = 0; i < size; i += 10)
	{
		if (!(i % 10))
			printf("%08x: ", i);
		for (j = i; (j < i + 10) && (j < size); j++)
		{
			if (!(j % 2) && (j - i))
				printf(" ");

			printf("%02x", buffer[j]);
			if (j == size - 1)
			{
				for ( ; j < i + 9; j++)
				{
					if (!(j % 2) && (j - i))
						printf(" ");
					printf("  ");
				}
		
			}

		}
		printf(" ");

		for (j = i; (j < i + 10) && (j < size) ; j++)
			if (buffer[j] >= 32)
				printf("%c", buffer[j]);
			else
				printf(".");
		printf("\n");
	}
}
