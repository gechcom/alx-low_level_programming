#include "main.h"

/**
 * _strlen - return length of string
 * @s: string input
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (1);
	return (1 + _strlen(s + 1));

}

/**
 * _palindrome_check - check palindrome of a string
 * a palindrome is when orignal and reverse string is the same
 * @s: string
 * @l: length 
 * Return: 1 is a palindrom o if not
 */

int _palindrome_check(char *s, int l)
{
	if (*s == s[l] && l >= 1)
		return (_palindrome_check((s + 1), (l - 2)));
	else if (*s == s[l] && (l == 0 || l == 1))
		return (1);
	return (0);
}

/**
 * is_palindrome - status of a palindrome
 * @s: input string
 * Return: status
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_palindrome_check(s, len - 1));
}
