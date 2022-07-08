#include "main.h"
#include <stdio.h>

/**
 * isdigit - checks for a digit, (0 - 9)
 * @c - the variable to be tested
 * Return: 1 if its a digit else return 0
 */

int _isdigit(int c)
{
	if (isdigit (c))
		return (1);
	return (0);
}
