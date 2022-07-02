#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * putchar - output char to screen
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
