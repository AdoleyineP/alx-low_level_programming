#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array with size provided by the user
 * @size: size of the array
 * @c: initializer of array
 * Return: Null if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;
	int sz = (int) size;

	array = malloc(size * sizeof(char));
	for (i = 0; i < sz; i++)
	{

		array[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (array);
}
