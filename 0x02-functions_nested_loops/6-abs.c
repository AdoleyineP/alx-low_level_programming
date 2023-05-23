#include "main.h"
/**
 * _abs- function to find the absolute value of integer
 * @c: input to be received by function
 * Return: return the absolute value
 */
int _abs(int c)
{	int abs;

	abs = c;
	if (c < 0)
	{
		abs = -1 * c;
	}
	return (abs);
}

