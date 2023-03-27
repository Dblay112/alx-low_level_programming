#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int bri = *a;
	*a = *b;
	*b = bri;
}
