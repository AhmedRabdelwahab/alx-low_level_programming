#include "main.h"

/**
 * _abs - it computes the absolute value of an integer
 *
 * @a: an intger
 *
 * Return: always 0
 */

int _abs(int a)
{
	if (a < 0)
	a = (-1) * a;
	return (a);
}
