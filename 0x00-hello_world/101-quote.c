#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	write(2, "\n", 1);
	return (1);
}

