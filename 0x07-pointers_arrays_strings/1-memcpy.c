#include "main.h"

/**
 *_memcpy - copy memory area
 *@dest: dest memory area
 *@src: source memory area
 *@n: bytes from memory area to copy
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int l = n;

	for (; k < l; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
