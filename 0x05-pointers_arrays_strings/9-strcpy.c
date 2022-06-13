#include "main.h"

/**
 * _strcpy - copy one ponted values to theother
 * @dest: parameter one
 * @src: parameter two
 * Return: the string copied
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);

}
