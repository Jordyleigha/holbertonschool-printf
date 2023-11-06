#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a provided string plus a list of variadic arguments
 * @format: the provided string with format specifiers
 *
 * Return: the number of characters in the string
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

int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = 0;
	int i;

	if (str != NULL)
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		str = "(null)";
		len = 6;
		for (i = 0; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	return (len);
}
