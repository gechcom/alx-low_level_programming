#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string pointer
 * @c: character from the string araay
 * Return: characer c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
