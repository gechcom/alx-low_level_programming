#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible dif combination of  3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit1 = 0, digit2, d3;

while (digit1 <= 9)
{
	digit2 = 0;

	while (digit2 <= 9)

	{
		d3 = 0;
		while (d3 <= 9)
		{

			if (digit1 != digit2 && digit1 < digit2 && digit2 != d3 && digit2 < d3)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
				putchar(d3 + 48);
				if (digit1 + digit2 + d3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++d3;
		}
	++digit2;

	}

++digit1;
}
putchar('\n');

return (0);
}
