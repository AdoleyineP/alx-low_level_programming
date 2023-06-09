#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: char value
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
