#include "main.h"

/**
 * print_sign - check a spicific character
 *
 * @n: it should be as it should
 *
 * Return: 1 if it is greater than zero
 * and 0 if it is zero
 * and -1 if it is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

}
