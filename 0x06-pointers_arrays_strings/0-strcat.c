#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
