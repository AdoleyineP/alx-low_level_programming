#include <stdio.h>
/**
 * main - Entry point of code
 * @argc: the number of arguments
 * @argv: pointer to an array of strings
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

