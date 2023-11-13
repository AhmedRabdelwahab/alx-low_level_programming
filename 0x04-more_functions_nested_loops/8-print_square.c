#include "main.h"

/**
 * print_square - function #
 *
 * @size: varible
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
		for (c = 1; c <= size; c++)
		_putchar('#');
		}
		_putchar('\n');
	}
}
