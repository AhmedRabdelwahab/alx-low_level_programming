#include "main.h"

/**
 * print_diagonal - function
 *
 * @n: variable
 */

void print_diagonal(int n)
{
	int s, c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 1; s <= n; s++)
		{
			for (c = 2; c <= s; c++)
				_putchar(' ');
			_putchar(92);/*is equal '\' caracter*/
			_putchar('\n');
		}
	}
}
