#include "main.h"

/**
 * rot13 - function encode using rot 13
 * @s: string input
 * Return: @s
 */

char *rot13(char *s)
{
	char half1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char half2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];
		for (j = 0; j < 52; j++)
		{
			if (c == half1[j])
				s[i] = half2[j];
		}

		i++;
	}

	return (s);
}
