#include "main.h"

/**
 * print_line - function
 */

void print_line(int n)
{
	int co;

	for (co = 0; co <= n; co++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		if (n == 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
