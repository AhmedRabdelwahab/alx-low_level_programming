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

	for (letter = 'a'; letter <= 'z' ; letter++)
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
