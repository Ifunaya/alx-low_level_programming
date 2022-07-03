#include <stdio.h>

/**
 * main - Entry point
 *
 * printf - to display output integer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = sizeof(char);
	int int_type = sizeof(int);
	int float_type = sizeof(float);
	int long_int = sizeof(long);
	int ll_int = sizeof(long long);
		printf("Size of a char: %d byte(s)\n", ch);
		printf("Size of a int: %d byte(s)\n", int_type);
		printf("Size of a long: %i byte(s)\n", long_int);
		printf("Size of a long long: %d byte(s)\n", ll_int);
		printf("Size of a float: %d byte(s)\n", float_type);
		return (0);
}
