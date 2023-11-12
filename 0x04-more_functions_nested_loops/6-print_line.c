#include "main.h"

/**
 * print_line - function
 *
 * @n: variable
 * @co: variable
 */

void print_line(int n)
{
	int co;

	for (co = 1; co <= n; co++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}	
	}
	_putchar('\n');
}
