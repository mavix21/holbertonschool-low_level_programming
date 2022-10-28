#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - Print all the of arguments passed into it
 * @ac: Number of command line arguments
 * @av: An array containing the program command line arguments
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *cat;
	int i;
	unsigned long int j, k, counter, nBytes;

	if (ac == 0 || av == NULL)
		return (NULL);

	counter = 0;
	for (i = 0; i < ac; i++)
		counter = counter + strlen(av[i]) + 1;

	counter++;
	nBytes = counter * sizeof(char);
	cat = malloc(nBytes);

	if (cat == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			cat[k] = av[i][j];
			if (j == (strlen(av[i]) - 1))
				cat[k + 1] = '\n';
			k++;
		}
		k++;
	}
	cat[counter - 1] = '\0';

	return (cat);
}
