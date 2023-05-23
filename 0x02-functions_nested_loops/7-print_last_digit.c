#include "main.h"
/**
 *  print_last_digit - print last digit of a number
 *  @c: input to be received by function
 *  Return: returns the last digit of a number
 */
int print_last_digit(int c)
{
	int rem;

	if (c < 0)
	{
		c = c * -1;
	}
	rem = c % 10;
	_putchar(48 + rem);
	return (rem);
}
