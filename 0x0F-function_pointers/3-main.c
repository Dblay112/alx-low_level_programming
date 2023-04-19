#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1;
        int num2;
	char *oprt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oprt = argv[2];
	num2 = atoi(argv[3]);

	if (get_oprt_func(oprt) == NULL || oprt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprt == '/' && num2 == 0) ||
	    (*oprt == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_oprt_func(oprt)(num1, num2));

	return (0);
}
