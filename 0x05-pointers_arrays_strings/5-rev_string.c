#include"main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, x;
	char *a, z;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (x = 1; x < c; x++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		z = s[i];
		s[i] = *a;
		*a = z;
		a--;
	}
}
