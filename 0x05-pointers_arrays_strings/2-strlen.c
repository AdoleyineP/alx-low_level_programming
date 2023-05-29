#include "main.h"
/**
 * _strlen - function to find length of strings
 * @s: pointer
 * Return: counter
 */
int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
