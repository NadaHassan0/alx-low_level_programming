#include <stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - print 10 times
 *
 */

void print_alphabet_x10(void)
{
	int l, x;

	for (l = 0; l < 10; l++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}
}
