#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{
	int put = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		put++;
	}
	t = put - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
