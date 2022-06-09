#include "main.h"

/**
 * print_square - print a square using Hash
 *
 * @size: is the size of the sqaure
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int col, row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; ++col)
		{
			_putchar('#');
			for (row = 2; row <= size; ++row)
			{
				putchar('#');
			}
			_putchar('\n');
		}
	}
}
