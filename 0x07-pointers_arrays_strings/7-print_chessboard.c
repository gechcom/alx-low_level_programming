#include "main.h"

/**
 * print_chessboard - print chess bored
 * @a: input char
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = ; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
	}

	_putchar('\n');

}
