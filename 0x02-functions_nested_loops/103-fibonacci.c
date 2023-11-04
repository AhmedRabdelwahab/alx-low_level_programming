#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long int fib1 = 0, fib2 = 1, sum, s;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;

		fib1 = fib2;
		fib2 = sum;

	}
		s += sum;
		printf("%lu\n", s);
	return (0);
}
