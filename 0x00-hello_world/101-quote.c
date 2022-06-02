#include <stdio.h>

/**
* main - Entry point
*
* Description: print a quote using a write function
*
* Return:return error 1
*/

int main(void)
{

char quo[] = "and that piece of art is usful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}
