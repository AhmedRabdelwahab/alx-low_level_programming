#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: variable
 */

void print_diagonal(int n)
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
			_putchar(' ');
			_putchar('\');
		}
	}
	_putchar('\n');
}
