#include "main.h"
/**
 * print_square - prints a square
 * 
 * @size: input
 *
 * Return: value
 */
void print_square(int size)
{
	int c, r;

	/* if (size <= 0)*/
		/*_putchar('\n');*/
		for (c = 2; c <= size; ++c)
		{
			/*_putchar('#');*/

			for (r = 2; r <= size; ++r)
				_putchar('#');
			_putchar('\n');
		}

}
