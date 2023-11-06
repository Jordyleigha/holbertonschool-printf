#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a character
 * @args: va_list containing the character to print
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);
    putchar(c);
    return 1;
}

/**
 * print_string - Print a string
 * @args: va_list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;
    while (*str != '\0')
    {
        putchar(*str);
        str++;
        count++;
    }
    return count;
}

/**
 * print_percent - Print a percent sign
 * @args: va_list (unused)
 *
 * Return: Number of characters printed (always 1)
 */
int print_percent(va_list args)
{
    (void)args; // Unused parameter
    putchar('%');
    return 1;
}

/**
 * _printf - Print a formatted string
 * @format: Format string with format specifiers
 *
 * Return: Number of characters printed
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
                count += print_char(args);
            else if (*format == 's')
                count += print_string(args);
            else if (*format == '%')
                count += print_percent(args);
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
