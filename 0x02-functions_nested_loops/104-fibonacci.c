#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 97; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 96)
		{
			printf("\n");
		}
		else
			printf(", ");

	}
	return (0);
}
