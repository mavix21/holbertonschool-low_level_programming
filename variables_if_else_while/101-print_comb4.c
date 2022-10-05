#include <stdio.h>
#include <string.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	int j;
	int k;
	int a = 0;
	int b = 1;
	int c = 2;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (a != 7 && b != 8 && c != 9)
				{
					putchar(',');
					putchar(' ');
				};
				c++;
			};
			b++;
			c = 2;
		};
		a++;
		b = 1;
	};
	putchar('\n');

	return (0);
}
