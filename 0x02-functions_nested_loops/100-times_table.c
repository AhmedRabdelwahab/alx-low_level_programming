#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: a paramter
 *
 * Example Table
 * 0, 0, 0, 0, ...
 * 0, 1, 2, 3, ...
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 15 && n >= 0)
	{
	for (num = 0; num <= n; num++)
	{
		_putchar(48);

	for (mult = 1; mult <= n; mult++)
	{
		_putchar(',');
		_putchar(' ');

		prod = num * mult;

		/*
		 * put space if product is a single number
		 * place the first digit if its two numbers
		 */
		if (prod <= n * 10)
			_putchar(' ');
		else
			_putchar((prod / 10) + 48); /*get the first digit*/
	_putchar((prod % 10) + 48); /*get the second digit*/
	}
	_putchar('\n');
	}
	}
}
