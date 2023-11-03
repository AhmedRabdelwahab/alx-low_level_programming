#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - is a function
 *
 * @n: is a paramter
 *
 * Return: always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d\n", n)
		}
	}
	if else (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d\n", n)
		}
	}
}
