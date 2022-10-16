#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array containing the chessboard pieces
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
			if (j == 7)
				printf("\n");
		}
	}
}
