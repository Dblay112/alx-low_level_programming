#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int b)
{
	if (b >= 'A' && b <= 'Z')
		return (1);

	else
		return (0);
