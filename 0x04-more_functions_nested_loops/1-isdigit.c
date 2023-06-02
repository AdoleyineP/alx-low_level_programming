#include "main.h"
/**
 * _isdigit - function to check if character is a digit or not
 * @c: parameter
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
