#include "main.h"

/**
 * print_numbers - is a function
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
		_putchar(n);
		}
	}
	_putchar('\n');
}
