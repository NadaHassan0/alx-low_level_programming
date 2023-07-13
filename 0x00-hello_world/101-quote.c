#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the specified message.
 *
 * Return: Always 1 (failure)
 */

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quo, 59);
return (1);
}
