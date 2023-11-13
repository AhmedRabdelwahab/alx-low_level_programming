#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - function
 *
 * Return: Always 0
 */

int main(int count)
{
	for (count = 1; count <= 100; count++)
	{
		if ((count % 3 == 0) && !(count % 5 == 0))
		{
			printf("Fizz");
		}
		if ((count % 5 == 0) && !(count % 3 == 0))
		{
			printf("Buzz");
		}
		if ((count % 3 == 0) && (count % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count != 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
