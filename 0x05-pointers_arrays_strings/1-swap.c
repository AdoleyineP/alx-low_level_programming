#include "main.h"
/**
 * swap_int - function that swaps two integer numbers
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp  = *a;
	*a = *b;
	*b = temp;
}
