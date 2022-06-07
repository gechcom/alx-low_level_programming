#include "main.h"

/**
 * print_lasy_digit - print th elast digit num
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = -1 * (n % 10);
	else
		ld = n % 10;
	return (ld);
}
