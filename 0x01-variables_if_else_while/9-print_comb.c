#include <stdio.h>

/**
 * main - print 0 through to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
