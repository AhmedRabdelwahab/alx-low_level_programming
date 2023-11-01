#include "main.h"

/**
 * 24_hours - function
 *
 * @n: it is a variable
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	char n , x;
	for (n = 0; n <= 23; n++)
	{
		if (n <= 9)
		{
			_putchar('0');
		}
		else
		{
		_putchar(n);
		_putchar(':');
		}
		for (x = 0; x <= 59; x++)
		{
			if (x <= 9)
		{
			_putchar('0');
		}
		else
		{
		_putchar(x);
		}
		}
		_putchar('\n');
		
	}
}
