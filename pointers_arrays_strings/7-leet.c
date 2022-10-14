#include "main.h"
/**
 * *leet - Encodes string into 1337
 * @txt: Pointer pointing to the first element of the String
 *
 * Return: Pointer to char
 */
char *leet(char *txt)
{
	int i;
	int j;

	char find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; txt[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (txt[i] == find[j])
				txt[i] = replace[j / 2];
		}
	}
	return (txt);
}
