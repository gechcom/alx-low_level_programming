#include "main.h"

/**
 * print_times_table - print the 9 times
 *
 * @n: takes number
 */

void print_times_table(int n)
{
	int x, y, r;
	if (n <= 15 && n >= 0)
	{
	for (x = 0; x <= n; ++x)
	{
		_putchar(48);
		for (y = 1; y <= n; ++y)
		{
			_putchar(',');
			_putchar(' ');

			r = x * y;

			/*
			 *put space for single number
			 palce first digit for two numbers
			 *
			 */
			if (r <= 9)
				_putchar(' ');
			if (r <= 99)
				_putchar(' ');
			if (r >= 100)
			{
				_putchar((r / 100) + 48);
				_putchar((r / 10) % 10 + 48);
			}
			else if (r <= 99 && r >= 10)
				_putchar((r / 10) + 48);

			_putchar((r % 10) + 48);
		}
			_putchar('\n');
		}
	}
}
