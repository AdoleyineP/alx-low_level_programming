#include "main.h"
/**
 * rev_string - reverse string
 * @s: pointer
 */
void rev_string(char *s)
{
	char *a = s;
	int counter, i;

	counter = i = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}

	while (*(a + i) != '\0')
	{
		s[i] = a[counter];
		i++;
		counter--;
	}
}
