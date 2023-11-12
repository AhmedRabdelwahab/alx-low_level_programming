#include "main.h"

/**
 * isupper - a function
 *
 * @c: variable
 *
 * Return: Returns 1 if c is uppercase
 *	Returns 0 otherwise
 */

int_ isupper(int c)
{
	if (c >= 56 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
