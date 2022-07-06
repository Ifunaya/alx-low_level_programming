#include "main.h"

/**
 * main - Entry point
 *
 * putchar - prints _putchar followed by new line
 *
 * Return: 0 success
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
