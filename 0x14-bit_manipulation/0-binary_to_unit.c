#include "main.h"

/**
 * binary_to_unit - cover binary numb to unsigned int
 * @b: a string of 1 and 0
 * Return: unsigned int
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int unit = 0, base = 1;
	int length, i;

	if (!b)
		return (0);

	length = _strlen(b);

	for (i = 0; i < length; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			unit += base;
		base *= 2;
	}

	return (unit);
}

/**
 * _strlen - Return length of a string'
 * @s: string
 * Return: length
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
