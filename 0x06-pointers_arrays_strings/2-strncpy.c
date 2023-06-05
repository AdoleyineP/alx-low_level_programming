#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (; j < n && *(src + j) != '\0' ; j++)
	{
		*(dest + j) = *(src + j);
	}

	for (; j < n; j++)
	{
		*(dest + j) = '\0';
	}
	return (dest);
}
