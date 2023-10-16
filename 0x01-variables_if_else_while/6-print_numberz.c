#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (success)
 */

int main(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		putchar(number);
	}
		putchar('\n');
	return (0);
}
