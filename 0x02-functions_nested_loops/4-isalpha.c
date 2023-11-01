#include "main.h"

/**
 * _isalpha - it is a programe that check
 * the c parameter or member character and if it alphabetic it return 1
 * and it otherwise it return 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
