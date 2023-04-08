#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignores argv*/
	printf("%d\n", argc - 1);

	return (0);
}
