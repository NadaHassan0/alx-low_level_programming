#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit = '0';

	while (digit <= 'f')
	{
	if (digit <= '9' || digit >= 'a')
	{
		putchar(digit);
	}
	digit++;
	}

	putchar('\n');
	return (0);
}
