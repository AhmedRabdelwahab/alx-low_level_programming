#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints a random number decides whether it is positive,negative,orzero.
*
* Return: Always 0.
*/

int main(void)
{
	char letter;

	for (letter = '0'; letter <= '8'; letter++)
	{
		putchar(letter);
		putchar(',');
		putchar(' ');
	}
		putchar('9');
		putchar('\n');
	return (0);
}