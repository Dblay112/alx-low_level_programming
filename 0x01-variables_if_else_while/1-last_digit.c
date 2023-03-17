#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * This program will assign a random number to the variable n
 * each time it is executed.
 * Complete the source code in order to print the last digit
 * of the number stored in the variable n.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int last_digit = n % 10;
	printf("Last digit of %d is ", n);
	if (last_digit > 5) {
		printf("greater than 5\n");
	}
	else if (last_digit == 0){
		printf(0\n");
	}
	else {
		printf("less than 6 and not 0\n");
	}

	return (0);
}
