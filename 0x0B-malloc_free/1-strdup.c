#include "main.h"

/**
 * _strdup - a function returns a pointer to its newly alocated space
 * @str: pointer to a memory
 * Return: a char
 */


char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;


	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = str[len];

	return (dup);
}
