#include "main.h"

/**
 * _isdigit - a function
 *
 * @c: variable
 *
 * Return: Returns 1 if c is digit, Returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
