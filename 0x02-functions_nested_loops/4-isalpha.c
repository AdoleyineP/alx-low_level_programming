#include "main.h"
/**
 * _isalpha - checks if input is uppercase
 * @c: input to be received bt function
 * Return: return 1 if uppercase 0 otherwisw
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
