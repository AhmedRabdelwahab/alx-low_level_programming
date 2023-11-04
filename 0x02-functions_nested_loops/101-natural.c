#include <stdio.h>

/**
 * main - a function
 *
 * @n: a variable
 * @a: a variable
 * @b: a variable
 */

int main()
{
	int n;

	for (n = 1024; n >= 0; n--)
	{
		int a = n % 5;
		int b = n % 3;

		if (a == 0 || b == 0)
		{
			printf("%d\n", n);
		}
	}
	return (0);
}
