#include "main.h"

/**
 * _strpbrk - search string for any set of bytes
 * @s: pointer to string ipnut
 * @accept: pointer to search for @s
 * Return: pointer s found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
