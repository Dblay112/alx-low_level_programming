#include <stdio.h>

/**
 * main - prints the size of various types on
 * the computer it is compiled and run on
 * Return: Always0
 */
int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}

