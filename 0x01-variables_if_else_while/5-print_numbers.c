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
int numbers = 0;

while (numbers <= 9)
{
	printf("%i", numbers);
	++numbers;
}
putchar('\n');

return (0);
}
