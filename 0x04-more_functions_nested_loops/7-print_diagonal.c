#include "main.h"

/**
 * print_diagonal - Draws a diagonal line as output
 * @n: Length of the line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	j = 0;
	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}

	if (j < 1)
		_putchar('\n');
}
