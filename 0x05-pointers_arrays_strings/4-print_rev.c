#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int put = 0;
	int o;

	while (*s != '\0')
	{
		put++;
		s++;
	}
	s--;
	for (o = put; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
