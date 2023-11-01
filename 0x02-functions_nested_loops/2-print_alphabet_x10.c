#include "main.h"

/**
 * AX10
 * print_alphabet - utilizes on the _putchar function to print
 *		the alphabet a - z X10
 */

void print_alphabet_x10(void)
{
	int h,ch;

	for (h = 0; h <= 9; h++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)

		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
