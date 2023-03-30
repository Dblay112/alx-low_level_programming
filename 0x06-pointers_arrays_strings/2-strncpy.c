#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: destination value
  * @src: source value
  * @n: copy limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{
	int b = 0, d = 0;

	while (src[d])
	{
		d++;
	}

	while (b < n && src[d])
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
		return (dest);
}
