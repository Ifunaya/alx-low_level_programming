#include "main.h"

/**
 * print_numbers - Prints from 0 to 9, followed by a new line
* @c - the character to be printed
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
