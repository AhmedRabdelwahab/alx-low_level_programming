#include <stdio.h>

/**
 * main - a function
 *
 * Return: 0
 */

int main(void)
{
	int n, sum;

	for (n = 1024; n >= 0; n--)
	{

		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
