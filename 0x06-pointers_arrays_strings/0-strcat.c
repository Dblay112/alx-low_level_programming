#include "main.h"

/**
 * strcat - Concatenates string pointed to by @src, including terminating
 *          null byte, to end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src);
{
	int b;
	int d;

	int b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[b] = src[d];
		b++;
		d++;
	}
	dest[b] = '\0';
	return (dest);
}

