#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar(ch);
++ch;
}
while (CH <= 'Z')
{
	putchar(CH);
	++ch;  
}
putchar('\n');

return (0);
}
