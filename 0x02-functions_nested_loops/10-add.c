#include "main.h"
#include <stdio.h>

/**
 * add - it is a function
 *
 * @x: it will be adding
 * @z: it will be adding
 * @n: it will be return
 *
 * Return: always 0
 */

int add(int x, int z)
{
	int n;

	n = x + z;

	putchar(n);
	putchar('\n');
	return (n);
}
