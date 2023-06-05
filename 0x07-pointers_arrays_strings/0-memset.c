#include "main.h"

/**
 * _memset - function that fills the memory with constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0, j = n;

	for (; i < j; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
