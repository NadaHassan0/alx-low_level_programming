#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int c)
{
	int n;

	n = c % 10;

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n);
	return (n);
}
