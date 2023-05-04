#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, bullet = 1;
	int bomb;

	if (b == '\0')
		return (0);

	for (bomb = 0; b[bomb];)
		bomb++;

	for (bomb -= 1; bomb >= 0; bomb--)
	{
		if (b[bomb] != '0' && b[bomb] != '1')
			return (0);

		num += (b[bomb] - '0') * bullet;
		bullet *= 2;
	}

	return (num);
}
