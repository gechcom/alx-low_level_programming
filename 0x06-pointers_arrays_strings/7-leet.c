#include "main.h"

/**
 * leet - a function that encodes to 1337
 * @s: string input
 *
 * Return: @s
 */

char *leet(char *s)
{
	int i, j = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == s1[j] || s[i] == u1[j]
			s[i] = n[j];
			break;
		}
	}

	return (s);
}

