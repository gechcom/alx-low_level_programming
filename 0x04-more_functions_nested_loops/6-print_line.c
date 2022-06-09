#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times under score character should be print
 */

void print_line(int n)

{
	int underScore;

	if (n <= 0)
		_putchar(\n');
	else
	{
		for (underScore = 1; underScore <= n; ++underScore)
			_putchar('_');
		_putchar('\n');
	}
}
