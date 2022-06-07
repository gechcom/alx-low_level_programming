#include "main.h"
/**
 * main -Entry point
 *
 * Description: putchar
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
