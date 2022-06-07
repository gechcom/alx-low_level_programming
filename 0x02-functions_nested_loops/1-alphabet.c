#include"main.h"

/**
 * 
 * print_alphabet - use putchar to print a to z alphabet
 *
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);

	_putchar('\n');
}
