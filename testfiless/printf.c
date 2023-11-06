#include "main.h"
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
	int count = 0;
	va_list args;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
