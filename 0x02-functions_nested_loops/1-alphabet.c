#include "main.h"
/**
 * print_alphabet - prints the alphabets
 * in small letters using _putchar()
 */

void print_alphabet(void)
{
int x = 'a';
while (x <= 'z')
{
	_putchar(x);
	x++;
}
_putchar(10);
}

