#include "main.h"
/**
 * swap_int - a function that takes a pointer to an int as parameter
 * and swap the value of each other
 * @a: input
 * @b: input
 * Return: a, b
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = **a;
}
