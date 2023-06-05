#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: char value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = n;

	for (; i < j; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
