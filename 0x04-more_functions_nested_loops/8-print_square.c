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
	int row, column;

	for (row = 1; row <= size; ++row)
	{
		for (column = 1; column <= size; ++column)
			_putchar('#');
		_putchar('\n');
	}
}
