#include "main.h"

/**
 * print_binary - binary equivalent of a decimal number to be printed
 * @n: number printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, bright = 0;
	unsigned long int bells;

	for (i = 63; i >= 0; i--)
	{
		bells = n >> i;

		if (bells & 1)
		{
			_putchar('1');
			bright++;
		}
		else if (bright)
			_putchar('0');
	}
	if (!bright)
		_putchar('0');
}
