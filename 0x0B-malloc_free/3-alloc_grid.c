#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: parameter
 * @height: parameter
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **display;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	display = malloc(height * sizeof(int *));
	if (display == NULL)
	{
		free(display);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		display[i] = malloc(width * sizeof(int));
		if (display[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(display[i]);
			free(display);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			display[i][j] = 0;

	return (display);
}
