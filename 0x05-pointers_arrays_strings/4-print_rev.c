#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in a reverse direction
 * @s: string parameter
 * Return: nothhing
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i <= len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i -1];
		s[len - i - 1] = temp;
	}

	puts(s);

}
