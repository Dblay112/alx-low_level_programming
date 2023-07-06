#include "main.h"

/**
 * flip_bits - number count of bits to be changed
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, value = 0;
	unsigned long int flipped;
	unsigned long int bits = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flipped = bits >> i;
		if (flipped & 1)
			value++;
	}

	return (value);
}
