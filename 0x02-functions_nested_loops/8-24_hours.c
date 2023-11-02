#include "main.h"

/**
 * jack_bauer - function
 *
 * @hr: it is a variable
 * @min: it is a variable
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	char hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}

	}
}
