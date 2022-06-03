#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number = 0;

while (number <= 9)
{
	putchar(number + 48);
	if (number != 9)
	{
		putchar(',');
		putchar(' ');
	}
	++number;
}
putchar('\n');

return (0);
}
