#include <stdio.h>

/**
* main - Prints a random number decides whether it is positive,negative,orzero.
*
* Return: Always 0.
*/

int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 9)
	{
		num2 = 1;

		while (num2 <= 9)
		{
			num3 = 2;
			while (num3 <= 9)
			{
			if (num1 != num2 && num2 != num3 && num1 < num2 && num2 < num3)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				putchar(num3 + 48);
					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
			}
			num3++;
		}
		num2++;
	}
	num1++;
}
putchar('\n');
return (0);
}
