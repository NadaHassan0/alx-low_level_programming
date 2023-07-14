#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
		printf("Last digit of %d is", n);

	if (x > 5)
		printf(" %d and is greater than 5", x);
	else if (x < 6 && x != 0)
		printf(" %d and is less than 6 and not 0", x);
	else
		printf(" %d and is 0", x);
		retrn (0);
}
