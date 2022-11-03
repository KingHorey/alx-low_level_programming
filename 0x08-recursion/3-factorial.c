#include "main.h"
/**
 *factorial - find the factorial of any given number
 * @n: integer provided
 * Return: calculated integer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return(n * factorial(n - 1));
}
