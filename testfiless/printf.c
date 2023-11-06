#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a string with format specifiers
 * @format: the format string with format specifiers
 *
 * Return: number of characters in the final string
 */
int _printf(const char *format, ...)
{
	// Variable to keep track of the number of characters printed
	int count = 0;
	// Declare a variable to hold the list of arguments
	va_list args;
	// Initializing the variable with the last names parameter before '...'
