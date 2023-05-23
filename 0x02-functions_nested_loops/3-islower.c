#include "main.h"
/**
 * _islower - Functions check if alphabet is lower case
 * @c: input to be received by the function
 * Return: 1 if input is lowercase and 0 for something else 
 */
int _islower(int c)
{
	if ( c > 96 && c < 123)
	{
		return (1);
	} else
	{
		return (0);
	}
}
