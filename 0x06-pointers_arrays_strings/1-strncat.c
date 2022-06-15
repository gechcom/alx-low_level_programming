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
	char *ptr;
	
	ptr = strncat(dest, src, n);

	return (ptr);
}
