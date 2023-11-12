#include <unistd.h>
#include "main.h"

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *	On error, 0 is returned, and errno is set appropriately.
 */
	int_isupper(int c)
	{
		return (write(1, &c, 1));
	}
