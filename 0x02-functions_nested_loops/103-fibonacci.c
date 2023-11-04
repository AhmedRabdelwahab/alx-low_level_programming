#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	float s;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			s += sum;

		fib1 = fib2;
		fib2 = sum;

	}
	printf("%.0f\n", s);

	return (0);
}
