#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - displays char to screen
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /* loops through lower cases a-z */
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z') /* loops through upper cases A-Z */
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
