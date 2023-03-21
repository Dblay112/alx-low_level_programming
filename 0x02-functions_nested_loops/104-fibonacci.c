#include <stdio.h>

/**
  * main - Prints the sum of even Fibonacci nums
  * less than 4000000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int m = 0;
	long n = 1, o = 2, sum = o;

	while (o + n < 4000000)
	{
		o += n;

		if (o % 2 == 0)
			sum += o;

		n = o - n;

		++m;
	}

	printf("%ld\n", sum);
	return (0);
}
