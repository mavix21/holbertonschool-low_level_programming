#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 1, n, stderr);
	return (1);
}
