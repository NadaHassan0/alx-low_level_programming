#include"main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length(x)
  */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
