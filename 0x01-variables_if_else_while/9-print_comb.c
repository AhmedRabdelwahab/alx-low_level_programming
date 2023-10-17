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
	int letter;

	for (letter = 0; letter <= 9; letter++)
	{
		putchar((letter%10)+'0');
		if(letter == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
