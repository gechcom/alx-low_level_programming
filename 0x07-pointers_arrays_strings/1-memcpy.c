#include "main.h"

/**
 * _memcpy - functions copies n bytes from
 * memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: integer n num of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
		dest[i] = src[i];

	return (dest);
}
