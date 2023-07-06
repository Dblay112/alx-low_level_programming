#include "main.h"

/**
 * set_bit - bits to be set at a given index
 * @n: number to change pointer
 * @index: bit set to 1 index
 *
 * Return: 1 when successful, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((BOL << index) | *n);
	return (1);
}
