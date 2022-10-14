#include "main.h"
/**
 * cap_string - Changes all lowercase letters of a string to uppercase
 * @txt: Pointer pointing to the first element of the String
 *
 * Return: Pointer to char
 */
char *cap_string(char *txt)
{
	int i;
	int j;

	char f[] = {' ', '\t', '\n', ',', ';', '.', '\0'};
	char g[] = {'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; txt[i] != '\0'; i++)
	{
		if (i == 0 && txt[i] >= 'a' && txt[i] <= 'z')
			txt[i] -= 32;

		for (j = 0; j < 7; j++)
		{
			if (txt[i] == f[j] || txt[i] == g[j])
			{
				if (txt[i + 1] >= 'a' && txt[i + 1] <= 'z')
					txt[i + 1] -= 32;
			}
		}
	}
	return (txt);
}
