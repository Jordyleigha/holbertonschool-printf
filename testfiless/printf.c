#include <stdio.h>
#include <stdarg.h>

/**
 * print_char: prints a single character
 * @format: list of type of arguments passed to the function
 */

int print_char(va_list args)
{
	return putchar(va_args(args, int));
}
