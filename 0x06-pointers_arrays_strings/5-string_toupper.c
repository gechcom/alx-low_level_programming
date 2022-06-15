#include "main.h"

/**
 * string_toupper(char *s)
 * @s: string needs to be changed to upperrcase
 * Return: uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
