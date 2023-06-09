#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: a char value
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k;

	while (*(needle + i) != '\0')
	{
		while (*(haystack + j) != '\0')
		{
			if (*(haystack + j) == *(needle + i))
			{
				if (*(needle + 0) == *(haystack + j))
					k = j;
				i++;
				j++;
			}
			else
			{
				i = 0;
				k = -1;
				j++;
			}
		}
	}
	if (k > -1)
	{
		return (haystack + k);
	}
	else
	{
		return (NULL);
	}
}
