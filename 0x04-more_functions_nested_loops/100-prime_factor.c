#include "main.h"

/**
 * _square - it is find the square root of a number
 *
 * @x: it is a variable
 *
 * Return: the square root of x
 */

double _square(double x)
{
	float square, tmp;

	square = x / 2;
	tmp = 0;

	while (square != tmp)
	{
		tmp = square;
		square = (x / tmp + tmp) / 2;
	}
	return (square);
}

/**
 * _maxnum - function
 *
 * @num: number find
 */

void _maxnum(long int num)
{
	int prnum, large;

	while (num % 2 == 0)
		num = num / 2;

	for (prnum = 3; prnum <= _square(num); prnum += 2)
	{
		while (num % prnum == 0)
		{
			num = num / prnum;
			large = prnum;
		}
	}
		if (num > 2)
			large = num;
		printf ("%d\n", large);
}

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	_maxnum(612852475143);

	return (0);
}
