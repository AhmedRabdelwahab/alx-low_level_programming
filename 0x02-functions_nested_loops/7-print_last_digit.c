#include "main.h"

/**
 * print_last_digit - it is the function name
 *
 * @n: it is the intger
 *
 * Return: always 0
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
	x = -1 * (n % 10);
	}
	else
	{
	x = n % 10;
	}
	_putchar(x + '0');
	return (x);
}
