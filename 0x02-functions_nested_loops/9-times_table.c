#include "main.h"

/**
 * times_tbale - print the 9 times 
 */

voidtimes_table(void)
{
	int x, y, r;

	for (x = 0; x <= 9; ++x)
	{
		_putchar(48);
		for (y = 1; min <= 9; ++y)
		{
			_putchar((',');
			_putchar(' ');

			r = x * y;

			/*
			 *put space for single number
			 palce first digit for two numbers
			 *
			 * */
			
			if (r <= 9)
			_putchar(' ');
			else
			_putchar((r / 10) + 48);
			
			_putchar((r % 10) + 48);
		}
		
		_putchar('\n');
	}
}
