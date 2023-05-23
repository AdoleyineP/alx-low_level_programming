#include "main.h"
/**
 * print_sign - function t print + if n is greater than 0, print 0
 * if n equals zero and print - if n is less than zero
 * @n: input to be receivedby function
 * Return: return 1, 0 or -1 for certain conditions
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
