#include "main.h"

/**
 * print_line - function
 *
 * Return: Always 0
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
	}
	_putchar('\n');
}
