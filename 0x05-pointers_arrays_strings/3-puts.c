#include "_putchar.c"
/**
 * _puts- function prints the strings
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
