#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int b;
	for(b=0; b<argc; b++)
		printf("argv[%2d]: %s\n",b,argv[b]);
	
	return 0;
}
