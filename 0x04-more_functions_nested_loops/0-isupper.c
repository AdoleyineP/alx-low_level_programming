#include "main.h"
/**
 * _isupper - function to check the case of characters
 * @c: parameter
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
