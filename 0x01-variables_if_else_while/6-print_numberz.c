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
int number = 0;

while (number <= 9)
{
putchar(number);
++number;
}

putchar('\n');

return (0);
}
