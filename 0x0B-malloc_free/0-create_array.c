#include "main.h"

/**
 * create_array - a functin taht creates an array of chars
 * @size: size of the array
 * @c: char to be intialazes
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
