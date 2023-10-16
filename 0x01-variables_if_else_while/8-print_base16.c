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

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
        {
                putchar(letter);
        }
		putchar('\n');
	return (0);
}
