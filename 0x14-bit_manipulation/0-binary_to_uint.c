#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int bullet;
	unsigned int bomb = 0;

	if (!b)
		return (0);

	for (bullet = 0; b[bullet]; bullet++)
	{
		if (b[bullet] < '0' || b[bullet] > '1')
			return (0);
		bomb = 2 * bomb + (b[bullet] - '0');
	}

	return (bomb);
}
