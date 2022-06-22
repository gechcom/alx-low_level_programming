#include "main.h"

/**
 * _strlen - return length of string
 * @s: string input
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));

}

/**
 * _palindrome_check - check palindrome of a string
 * a palindrome is when orignal and reverse string is the same
 * @s: string
 * @l: left index
 * @r: rioght index
 * Return: 1 is a palindrom o if not
 */

int _palindrome_check(char *s, int l, int r)
{
	if (s == NULL || l < 0 || r < 0)
		return (1);
	if (l >= r)
		return (1);
	return (_palindrome_check(s, l + 1, r - 1));
}

/**
 * is_palindrome - status of a palindrome
 * @s: input string
 * Return: status
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_palindrome_check(s, 0, _strlen(s) - 1));
}
