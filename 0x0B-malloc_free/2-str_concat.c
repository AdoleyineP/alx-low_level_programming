#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: paramater
 * @s2: parameter
 *
 * Return: value
 */
char *str_concat(char *s1, char *s2)
{
	char *display;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	display = malloc(sizeof(char) * (i + j + 1));

	if (display == NULL)
	{
		free(display);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		display[k] = s1[k];

	l = j;
	for (j = 0; j <= l; k++, j++)
		display[k] = s2[j];

	return (display);
}
