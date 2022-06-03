#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible dif combination 2digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number = 0, number2;

while (number <= 9)
	{
	number2 = 0;
	while (number2 <= 9)
		{
		if (number != number2 && number < number2)
			{
				putchar(number + 48);
				putchar(number2 + 48);

				if (number + number2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		++number2;
		}
	++number;
	}
putchar('\n');

return (0);
}
