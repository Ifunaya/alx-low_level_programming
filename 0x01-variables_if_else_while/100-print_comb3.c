#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= 'q'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

