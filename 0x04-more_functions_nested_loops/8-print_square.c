#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * @size: The size of a square
 */
void print_square(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('\n');
	}
}
