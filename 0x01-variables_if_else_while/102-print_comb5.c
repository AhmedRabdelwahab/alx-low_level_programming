#include <stdio.h>

/**
* main - Prints a random number decides whether it is positive,negative,orzero.
*
* Return: Always 0.
*/

int main(void)
{
	int num1 = 0, num2, num3,num4;

	while (num1 <= 9)
	{
		num2 = 0;

		while (num2 <= 9)
		{
			num3 = 0;
			while (num3 <= 9)
			{
				num4 = 0;
				while (num4 <= 9)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				putchar(' ');
				putchar(num3 + 48);
				putchar(num4 + 48);
					if (num1 + num2 + num3 + num4 != 35)
					{
						putchar(',');
						putchar(' ');
					
			}
			num4++;
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
