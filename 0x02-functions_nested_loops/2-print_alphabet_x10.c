#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *		the alphabet a - z
 */

void print_alphabet_x10(void)
{
	int h;
	
	for (h = 1; h <= 10; h++);
	{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		_putchar(ch);
	}
	_putchar('\n');
	}
}
