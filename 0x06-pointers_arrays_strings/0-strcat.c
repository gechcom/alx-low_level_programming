#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - this function overwriting the terminating null byute (\0) at the end of the dest
 * @dest:string parameter
 * @src: another string parameter
 * Return:returning a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);
{
	char *ptr;
	int i, j = 0;

	while (dest[i] != '\0')
	{
		ptr[j] = src[i];
		i++;
		j++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		ptr[j] = src[i];
		i++;
		j++;
	}
	ptr[j] = '\0';

	return (ptr);
}
