#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, bri, d, digit;

	a = 0;
	b = 0;
	c = 0;
	bri = 0;
	d = 0;
	digit = 0;

	while (s[bri] != '\0')
		bri++;

	while (i < bri && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			b = 0;
		}
		i++;
	}

	if (b == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, digi1, digi2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digi1 = _atoi(argv[1]);
	digi2 = _atoi(argv[2]);
	result = digi1 * digi2;

	printf("%d\n", result);

	return (0);
}



