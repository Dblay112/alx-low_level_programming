#include <stdio.h>

void selorm(void) __attribute__ ((constructor));

/**
 * selorm - prints a sentence before the main
 * function is executed
 *
 * Return: Nothing
 */

void selorm(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
