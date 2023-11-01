#include "main.h"

/**
 * 
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *	
 */

void print_alphabet_x10(void)
{
	int h, ch;

	for (h = 0; h <= 9; h++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)

		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
