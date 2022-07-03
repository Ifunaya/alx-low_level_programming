#include <stdio.h>

/**
 * main - prints a-z in reverse
 *
 * letters - variable name for char type
 *
 * while - statement
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
