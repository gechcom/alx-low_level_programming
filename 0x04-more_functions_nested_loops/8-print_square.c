#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * @size: size of square
 *
 * Return: Alwyas 0
 */

void print_square(int size)
{
	int c, r;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (r = 2; r <= size; r++)
			{
				putchar('#');
			}
			_putchar('\n');
		}
	}
}
