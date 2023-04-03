#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sums1, sums2, y;

	sums1 = 0;
	sums2 = 0;

	for (b = 0; b < size; b++)
	{
		sums1 = sums1 + a[b * size + y];
	}

	for (b = size - 1; b >= 0; b--)
	{
		sums2 += a[b * size + (size - b - 1)];
	}

	printf("%d, %d\n", sums1, sums2);
}
