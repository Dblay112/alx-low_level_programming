#include "main.h"

/**
 * get_bit - value of a bit at an index in a decimal number to be returned
 * @n: searched number
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bells_cola;

	if (index > 63)
		return (-1);

	bells_cola = (n >> index) & 1;

	return (bells_cola);
}
