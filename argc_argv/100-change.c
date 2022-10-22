#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the minumun number of coins to make change for an
 * amount of money
 * @argc: Number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int money;
	int change;
	int rem;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	change = 0;
	if (money <= 0)
	{
		printf("%d\n", change);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (money >= coins[i])
		{
			change = money / coins[i];
			rem = money % coins[i];
			for (j = 2; j < 5; j++)
			{
				change += rem / coins[j];
				rem %= coins[j];
			}
			break;
		}
	}
	printf("%d\n", change);
	return (0);
}
