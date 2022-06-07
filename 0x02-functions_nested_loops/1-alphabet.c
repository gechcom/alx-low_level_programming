#include"main.h"

/**
 * main- Entry point
 *
 * print_alphabet - use putchar to print a to z alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);

	_putchar('\n');
}
