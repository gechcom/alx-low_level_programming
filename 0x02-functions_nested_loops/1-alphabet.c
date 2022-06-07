#include"main.h"

/**
 * main- Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void) /*this will print alphabet a to z */
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);

	_putchar('\n');
}
