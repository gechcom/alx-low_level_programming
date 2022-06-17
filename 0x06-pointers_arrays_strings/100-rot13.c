#include "main.h"

#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

/**
 * rot13 - function encode using rot 13
 * @s: string input
 * Return: @s
 */

char *rot13(char *s)
{
	char *ret = s, *rot13in = ROT13IN, *rot13out = ROT13OUT;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; rot13in[i]; i++)
			if (*s == rot13in[i])
			{
				*s = rot13out[i];
				break;
			}
	}
	return (ret);
}
