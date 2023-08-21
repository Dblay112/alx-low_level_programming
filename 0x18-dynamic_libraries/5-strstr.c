#include "main.h"

/**
 * _strstr - function finds the first occurrence
 * @haystack: input
 * @needle: the substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *l = needle;

		while (*k == *l && *l != '\0')
		{
			k++;
			l++;
		}

		if (*l == '\0')
			return (haystack);
	}

	return (0);
}
