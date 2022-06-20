#include "main.h"

/**
 * _memset - a unction that files memory with a constant
 * @s: array of s
 * @b: string b input
 * @n: integer input
 * Return: function files the first n bytes of the memory area pointed by s with the onstant byte b
 */

char *_memset(char *s, char b, unsigned int n)
{
  /* the unsigned int is always zero */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
