#include <stdio.h>
/**
 * main - Entry point
 * Des: 'prints all the numbers of base 16 in lowercase'
 * Return: Always 0
 */
int main(void)
{
	int b;


	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
