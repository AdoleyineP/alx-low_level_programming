#include "main.h"
/**
 * _puts - function that prints strings and newline
 * @str: pointer
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
