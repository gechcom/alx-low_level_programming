#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - same as strcat  exceptit will us at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: intiger number of bytes from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	i = 0;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
