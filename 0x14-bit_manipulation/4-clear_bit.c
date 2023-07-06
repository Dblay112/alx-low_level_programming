#include "main.h"

/**
 * clear_bit - bit value to be set to zero
 * @n: number to be changed pointer
 * @index: bit to clear index
 *
 * Return: 1 when success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
