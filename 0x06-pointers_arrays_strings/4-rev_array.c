#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b[c];

	i = 0;
	for (; i < c; i++)
	{
		*(b + i) = *(a + i);
	}

	i = 0;
	for (j = (c - 1); j >= 0; j--)
	{
		*(a + i) = *(b + j);
		i++;
	}
}
