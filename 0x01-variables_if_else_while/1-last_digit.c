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
	int remain;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remain = n % 10;
	if (n > 0 && remain != 0)
	{
		if (remain > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, remain);
		} else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
		}
	} else if (n == 0 || remain == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, remain);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
	}
	return (0);
}
