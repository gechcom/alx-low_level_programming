#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the the print numbers using put hcar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int number = 0;

while (number <= 9)
{
putchar(number + '0');
++number;
}

putchar('\n');

return (0);
}
