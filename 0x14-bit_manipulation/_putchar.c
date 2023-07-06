#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to standard output
 * @c: character to be printed
 *
 * Return: 1 on success
 * On error, -1 returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
