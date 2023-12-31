#include <unistd.h>
#include "main.h"

/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *      On error, 0 is returned, and errno is set appropriately.
 */
        int _islower(int c)
        {
                return (write(1, &c, 1));
        }

