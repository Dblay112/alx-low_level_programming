#include "main.h"

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
