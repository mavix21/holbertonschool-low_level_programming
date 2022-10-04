#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int lastDigit;
	char *conclusion;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		conclusion = "and is greater than 5\n";
	}
	else if (lastDigit == 0)
	{
		conclusion = "and is 0\n";
	}
	else
	{
		conclusion = "and is less than 6 and not 0\n";
	}

	printf("Last digit of %d is %d %s", n, lastDigit, conclusion);

	return (0);
}
