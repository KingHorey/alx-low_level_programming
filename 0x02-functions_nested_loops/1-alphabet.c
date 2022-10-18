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
}

/**
 * main - function execution for defined
 * print_alphabet function
 *
 * Return: 0 if successful
 */

int main(void)
{
	print_alphabet();
	return (0);
}

