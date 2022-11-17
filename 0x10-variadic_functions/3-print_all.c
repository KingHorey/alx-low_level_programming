#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 *print_all - variadic function prints anything
 *@format: A list of types of argumemnt passed to the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list parameter;
	int value;

	va_start (parameter, format);
	value = vfprintf (stdout, format, parameter);
	va_end (parameter);	
}
