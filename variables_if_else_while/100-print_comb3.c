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
	int a = 0;
	int b = 1;
	int ab;
	int ba;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			ab = 10 * a + b;
			ba = 10 * b + a;
			if (ab < ba)
			{
				putchar(i);
				putchar(j);
				if (ab != 89)
				{
					putchar(',');
					putchar(' ');
				};
			};
			b++;
		};
		a++;
		b = 1;
	}
	putchar('\n');

	return (0);
}
