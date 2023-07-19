#include "main.h"
/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
			printf("%d, ", x);
	}
	else
	{
		for (x = n; x <= 98; x++)
			printf("%d, ", x);
	}
	printf("\n");
}
