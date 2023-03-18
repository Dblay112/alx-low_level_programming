#include <stdio.h>
/**
 * main - Entry point
 * *description: 'prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
