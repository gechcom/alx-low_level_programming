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

		for (c = 1; c <= size; ++c)
		{
			for (r = 1; r <= size; ++r)
				_putchar('#');
			_putchar('\n');
		}

}
