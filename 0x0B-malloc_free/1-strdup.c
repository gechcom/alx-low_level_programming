#include "main.h"

/**
 * _strdup - a function returns a pointer to its newly alocated space
 * @str: pointer to a memory
 * Return: a char
 */


char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = str[len];

	return (dup);
}


/**
 * _strlen - stringlength
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen(s++));
	else
		return (0);
}
