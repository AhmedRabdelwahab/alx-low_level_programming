#include "main.h"

/**
 * _isalpha - it is a programe that check the character and if it alphabetic it return 1
 * and it otherwise it returns 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
