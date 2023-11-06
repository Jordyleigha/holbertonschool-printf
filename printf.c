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
                char c = va_arg(args, int); // Correct usage of va_arg for %c
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(args, char*); // Correct usage of va_arg for %s
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
