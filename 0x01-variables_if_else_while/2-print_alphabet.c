#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
