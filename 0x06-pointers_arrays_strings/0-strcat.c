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

	ptr = strcat(dest, src);

	return (ptr);
}
