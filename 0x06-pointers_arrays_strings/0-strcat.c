#include "main.h"

/**
  * _strcat - Concatenates string pointed to by @src, including the terminating
  * null byte, to the end of the string pointed to by @dest.
  * @dest: destination string
  * @src: source string
  *
  * Return: A pointer to the resulting string dest
  */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
