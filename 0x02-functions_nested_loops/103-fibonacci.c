#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Return: Nothing!
  */
#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}

		c = a + b;
		a = b;
		b = c;
	}

	printf("%d\n", sum);

	return (0);
}
