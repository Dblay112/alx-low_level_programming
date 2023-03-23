#include "main.h"


/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int b)
{
	int len;

	if (b > 0)
	{
		for (len = 0; len <= b; len++)
			_putchar('_');
	}

	_putchar('\n');
}
