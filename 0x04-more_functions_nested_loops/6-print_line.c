#include "main.h"

/**
 * print_line - function
 * 
 * @n: is a variable
 * @co: is a variable
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
