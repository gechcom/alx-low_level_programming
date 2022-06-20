#include "main.h"

/**
 * _strstr - a functin that locates a substring
 * @haystack: string input
 * @needle: substring
 * Return: a pointer to the begnning of the located  substring
 * or NULL if the substring i not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack++;
	}

	return ('\0');
}
