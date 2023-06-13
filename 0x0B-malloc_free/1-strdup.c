#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str: paramater
 * Return: value
 */
char *_strdup(char *str)
{
	char *display;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	display = (char *)malloc(sizeof(char) * (i + 1));

	if (display == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		display[j] = str[j];

	return (display);
}
