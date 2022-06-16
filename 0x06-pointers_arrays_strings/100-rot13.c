#include "main.h"

/**
 * rot13 - function encode using rot 13
 * @s: string input
 * Return: @s
 */

char *rot13(char *s)
{
	if (*s != NULL)
	{
	char *ch = s;

	while (*ch != '\0')
	{
		if ((*ch >= 97 && *ch <= 122) || (*ch >= 65 && *ch <= 90))
		{
			if (*ch > 109 || (*ch > 77 && *ch < 91))
			{
				*ch -= 13;
			}
			else
			{
				*ch += 13;
			}
		}
		ch++;

	}
	}
	return (s);
}

