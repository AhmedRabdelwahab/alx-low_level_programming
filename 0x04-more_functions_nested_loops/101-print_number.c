#include "main.h"

/**
 * print_number - function.
 *
 * @n: variable.
*/

void print_number(int n){
	unsigned int num = n;

	/*zero*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*one*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*two*/
	_putchar((num % 10) + 48)
}
